// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacterController.generated.h"

class APlayerCharacter;

/**
 *
 */
UCLASS()
class OWAG_V3_API APlayerCharacterController : public APlayerController
{
	GENERATED_BODY()

public:
	/*Base functions*/
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	/*Base variables*/
	UPROPERTY()
	APlayerCharacter* ControlledCharacter;

	/*Movement functions*/
	void MoveForward(float Axis);
	void MoveRight(float Axis);
	void StartJump();
	void EndJump();
	void StartSprint();
	void EndSprint();

	/*Movement Variables*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsSprinting;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float ForwardAxis;
	UPROPERTY(EditAnywhere, Category = "Character Movement")
	float NormalWalkSpeed = 550.f;
	UPROPERTY(EditAnywhere, Category = "Character Movement")
	float BackwardWalkSpeed = 250.f;
	UPROPERTY(EditAnywhere, Category = "Character Movement")
	float SprintSpeed = 1200.f;

};
