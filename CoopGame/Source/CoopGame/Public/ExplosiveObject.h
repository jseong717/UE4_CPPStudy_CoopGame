// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosiveObject.generated.h"

class USHealthComponent;
class UParticleSystem;
class URadialForceComponent;

UCLASS()
class COOPGAME_API AExplosiveObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayExplodeEffect();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Explode")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Explode")
	USHealthComponent* HealthComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Explode")
	URadialForceComponent* RadialForceComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explode")
	UMaterial* BeforeExplodeMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explode")
	UMaterial* AfterExplodeMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explode")
	UParticleSystem* ExplodeEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> BarrelDamageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TArray<AActor*> IgnoreActor;

	UPROPERTY(ReplicatedUsing=OnRep_Exploded)
	bool bExplode;

	UFUNCTION()
	void OnRep_Exploded();

	UPROPERTY(BlueprintReadOnly, Category = "Explode")
	float RadialDamage;

	UPROPERTY(BlueprintReadOnly, Category = "Explode")
	float ImpulseRadius;

	UPROPERTY(BlueprintReadOnly, Category = "Explode")
	float ForceStrength;

	UFUNCTION()
	void OnHealthChanged(USHealthComponent* _HealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
