﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102552_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_102552_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_102552_BP.Ability_102552_BP_C
// 0x0008 (0x2848 - 0x2840)
class UAbility_102552_BP_C final : public UPyAbility_102552
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2840(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_102552_BP(int32 EntryPoint);
	void MissileEventNotify();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_102552_BP_C">();
	}
	static class UAbility_102552_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_102552_BP_C>();
	}
};

}

