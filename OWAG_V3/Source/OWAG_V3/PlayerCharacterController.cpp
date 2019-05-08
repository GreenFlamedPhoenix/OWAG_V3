// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void APlayerCharacterController::BeginPlay()
{
	Super::BeginPlay();

	ControlledCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (ControlledCharacter == nullptr) {UE_LOG(LogTemp, Warning, TEXT("ControlledPlayer is null in player controller!")) return;}
}

void APlayerCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();

	/*Movement Bindings*/
	InputComponent->BindAxis("MoveForward", this, &APlayerCharacterController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerCharacterController::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacterController::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacterController::EndJump);
	InputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerCharacterController::StartSprint);
	InputComponent->BindAction("Sprint", IE_Released, this, &APlayerCharacterController::EndSprint);

	/*Camera Bindings*/
	InputComponent->BindAxis("LookHorizontal", this, &APlayerCharacterController::AddYawInput);
	InputComponent->BindAxis("LookVertical", this, &APlayerCharacterController::AddPitchInput);
}

void APlayerCharacterController::MoveForward(float Axis)
{
	if (Axis != 0.f)
	{
		float ClampedAxis = FMath::Clamp(Axis, -1.f, 1.f);
		FVector Direction = ControlledCharacter->GetActorForwardVector();
		ControlledCharacter->AddMovementInput(Direction, ClampedAxis);
	}
}

void APlayerCharacterController::MoveRight(float Axis)
{
	if (Axis != 0.f)
	{
		float ClampedAxis = FMath::Clamp(Axis, -1.f, 1.f);
		FVector Direction = ControlledCharacter->GetActorRightVector();
		ControlledCharacter->AddMovementInput(Direction, ClampedAxis);
	}
}

void APlayerCharacterController::StartJump()
{
	ControlledCharacter->bPressedJump = true;
}

void APlayerCharacterController::EndJump()
{
	ControlledCharacter->bPressedJump = false;
}

void APlayerCharacterController::StartSprint()
{
	ControlledCharacter->GetCharacterMovement()->MaxWalkSpeed = 1250.f;
}

void APlayerCharacterController::EndSprint()
{
	ControlledCharacter->GetCharacterMovement()->MaxWalkSpeed = 600.f;
}