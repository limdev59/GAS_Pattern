#include "Characters/GP_BaseCharacter.h"
#include "AbilitySystemComponent.h"


AGP_BaseCharacter::AGP_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// dedi 서버에서 애니메이션이 멈추지 않도록 설정
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;

}

UAbilitySystemComponent* AGP_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

void AGP_BaseCharacter::GiveStartupAbilities()
{
	if (!IsValid(GetAbilitySystemComponent())) return;
	for (const auto& Ability : StartupAbilities) {
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability);
		GetAbilitySystemComponent()->GiveAbility(AbilitySpec);
	}
}



