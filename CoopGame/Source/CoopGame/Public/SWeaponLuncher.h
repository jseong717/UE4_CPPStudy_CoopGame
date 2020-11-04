// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SWeaponLuncher.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASWeaponLuncher : public ASWeapon
{
	GENERATED_BODY()
public:
	ASWeaponLuncher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Bulllet")
	TSubclassOf<class AActor> Bullet;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
