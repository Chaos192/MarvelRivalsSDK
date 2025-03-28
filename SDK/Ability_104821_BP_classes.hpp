﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104821_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104821_BP.Ability_104821_BP_C
// 0x03A8 (0x2A48 - 0x26A0)
class UAbility_104821_BP_C final : public UAbility_106
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x26A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          HasValidHit;                                       // 0x26A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26A9[0x7];                                     // 0x26A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelTraceRule                       Trace_Rule;                                        // 0x26B0(0x0390)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         HitCount;                                          // 0x2A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffCount;                                         // 0x2A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Ability_104821_BP(int32 EntryPoint);
	void OnGameplayAbilityHit(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104821_BP_C">();
	}
	static class UAbility_104821_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104821_BP_C>();
	}
};

}

