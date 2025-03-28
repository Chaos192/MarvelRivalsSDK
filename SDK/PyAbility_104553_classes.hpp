﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104553

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1045_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104553.PyConfig_104553
// 0x0060 (0x00F8 - 0x0098)
class UPyConfig_104553 final : public UMarvelAbilityConfig
{
public:
	float                                         MaxShootAngle;                                     // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinShootInterval;                                  // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>              IntervalReplaceMap;                                // 0x00A0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         SpawnScopeID;                                      // 0x00F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104553">();
	}
	static class UPyConfig_104553* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104553>();
	}
};

// PythonClass PyAbility_104553.PyAbility_104553
// 0x0008 (0x2598 - 0x2590)
class UPyAbility_104553 : public UAbility_104553
{
public:
	float                                         LastShootTime;                                     // 0x2590(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void EndPlay();
	void OnTagUpdate(const struct FGameplayTag& TagUpdated, bool TagExists);
	bool CanActivate();
	void NativeOnMontageEvent(const class FString& Tag);

	bool IsOnCooldown() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104553">();
	}
	static class UPyAbility_104553* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104553>();
	}
};

}

