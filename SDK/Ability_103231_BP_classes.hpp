﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103231_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_103231_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103231_BP.Ability_103231_BP_C
// 0x0008 (0x25A8 - 0x25A0)
class UAbility_103231_BP_C final : public UPyAbility_103231
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x25A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_103231_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103231_BP_C">();
	}
	static class UAbility_103231_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103231_BP_C>();
	}
};

}

