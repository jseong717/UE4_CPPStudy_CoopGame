// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeaponLuncher.h"
#include "Kismet/GameplayStatics.h"

ASWeaponLuncher::ASWeaponLuncher()
{

}

void ASWeaponLuncher::BeginPlay()
{
	Super::BeginPlay();
}

void ASWeaponLuncher::Fire()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner && Bullet)
	{
			FVector EyeLocation;
			FRotator EyeRotation;
			MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			FVector ShotDirection = EyeRotation.Vector();

			if (MuzzleEffect)
			{
				UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
			}

			FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AActor* SpawnBullet = GetWorld()->SpawnActor<AActor>(Bullet, MuzzleLocation, EyeRotation, SpawnParams);
	}
}

void ASWeaponLuncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
