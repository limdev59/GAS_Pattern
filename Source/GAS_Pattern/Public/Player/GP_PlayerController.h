#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GP_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
UCLASS()
class GAS_PATTERN_API AGP_PlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void SetupInputComponent() override;

private:
	// Move Action input
	UPROPERTY(EditDefaultsOnly, Category = "GAS|input|Movement")
	TArray<TObjectPtr<UInputMappingContext>> InputMappingContexts;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|input|Movement")
	TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|input|Movement")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|input|Movement")
	TObjectPtr<UInputAction> LookAction;

	// Ability Action input
	UPROPERTY(EditDefaultsOnly, Category = "GAS|input|Abilities")
	TObjectPtr<UInputAction> PrimaryAction;



	void Jump();
	void StopJumping();
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	void Primary();
};
