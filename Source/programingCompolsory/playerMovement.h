// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "playerMovement.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS(Abstract, NotBlueprintable)
class PROGRAMINGCOMPOLSORY_API AplayerMovement : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = TWA, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraArmComponent;

	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = TWA, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraComponent;
	
public:
	// Sets default values for this character's properties
	AplayerMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
