﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104011_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_104011_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104011_BP.Ability_104011_BP_C
// 0x0008 (0x2618 - 0x2610)
class UAbility_104011_BP_C final : public UPyAbility_104011
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_104011_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104011_BP_C">();
	}
	static class UAbility_104011_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104011_BP_C>();
	}
};

}

