// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveObject.h"
#include "SHealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "../CoopGame.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AExplosiveObject::AExplosiveObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = MeshComp;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(MeshComp);
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false;
	RadialForceComp->bIgnoreOwningActor = true;
	RadialForceComp->DestructibleDamage = 50.0f;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &AExplosiveObject::OnHealthChanged);

	if (BeforeExplodeMaterial)
	{
		MeshComp->SetMaterial(0, BeforeExplodeMaterial);
	}

	bExplode = false;

	RadialDamage = 50.f;
	ImpulseRadius = 500.0f;
	ForceStrength = 100.0f;

	RadialForceComp->Radius = ImpulseRadius;
	RadialForceComp->ForceStrength = ForceStrength;

	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void AExplosiveObject::BeginPlay()
{
	Super::BeginPlay();
}

void AExplosiveObject::PlayExplodeEffect()
{
	if (ExplodeEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplodeEffect, GetActorLocation(), GetActorRotation(), FVector(2.0f, 2.0f, 2.0f), true);
	}

	if (AfterExplodeMaterial)
	{
		MeshComp->SetMaterial(0, AfterExplodeMaterial);
	}
}

// Called every frame
void AExplosiveObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosiveObject::OnRep_Exploded()
{
	PlayExplodeEffect();
}

void AExplosiveObject::OnHealthChanged(USHealthComponent* _HealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.0f && !bExplode)
	{
		bExplode = true;
		OnRep_Exploded();

		FVector BoostIntensity = FVector::UpVector * 400.0f;
		MeshComp->AddImpulse(BoostIntensity, NAME_None, true);

		RadialForceComp->FireImpulse();

		SetLifeSpan(10.0f);

		UGameplayStatics::ApplyRadialDamage(GetWorld(), RadialDamage, GetActorLocation(), ImpulseRadius, BarrelDamageType, IgnoreActor, this, NULL, true, COLLISION_WEAPON);
	}
}

void AExplosiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Didnt Replicated Client
	DOREPLIFETIME(AExplosiveObject, bExplode);
}