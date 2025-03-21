﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103343_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_103343_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103343_BP.Ability_103343_BP_C
// 0x0010 (0x25A0 - 0x2590)
class UAbility_103343_BP_C final : public UPyAbility_103343
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         跳跃速度_0_0;                                      // 0x2598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void ExecuteUbergraph_Ability_103343_BP(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompletedDelegate_FF6DFD894CCB1B11BA83DEBF72FD941C(const struct FGameplayTag& TriggerNotifyTagEventDelegate__DelegateSignature_EventTag);
	void OnTriggerEvent_FF6DFD894CCB1B11BA83DEBF72FD941C(const struct FGameplayTag& TriggerNotifyTagEventDelegate__DelegateSignature_EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103343_BP_C">();
	}
	static class UAbility_103343_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103343_BP_C>();
	}
};

}

