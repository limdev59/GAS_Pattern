#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"

#include "GP_BaseCharacter.generated.h"

UCLASS(abstract)
class GAS_PATTERN_API AGP_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGP_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
