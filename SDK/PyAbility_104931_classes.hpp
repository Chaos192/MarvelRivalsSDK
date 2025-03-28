﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104931

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104931.PyConfig_104931
// 0x00D0 (0x0168 - 0x0098)
class UPyConfig_104931 final : public UMarvelAbilityConfig
{
public:
	struct FGameplayTagContainer                  RequiredTags;                                      // 0x0098(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  IgnoredTags;                                       // 0x0100(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104931">();
	}
	static class UPyConfig_104931* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104931>();
	}
};

// PythonClass PyAbility_104931.PyAbility_104931
// 0x0000 (0x2588 - 0x2588)
class UPyAbility_104931 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void DisplayTraceFX();
	bool IsActorMatchRequirement(class AActor* InActor);
	bool IsWolverineParticipateInKillEvent(const struct FAttributeModifierHandle& ParamHandle);
	void BindWolverineParticipateInKillEvent(bool ShouldBind);
	void OnGlobalActorDealth(class AActor* Killer, class AActor* Target, const struct FAttributeModifierHandle& ParamHandle, const struct FGlobalEventExtraData& ExtraData);
	void InternalOnActorDeath();
	void OnCharacterKillOther();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104931">();
	}
	static class UPyAbility_104931* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104931>();
	}
};

}

