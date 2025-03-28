﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102342

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102342.PyConfig_102342
// 0x0BB0 (0x0C48 - 0x0098)
class UPyConfig_102342 final : public UMarvelAbilityConfig
{
public:
	struct FDashAbilityInfo                       DashInfo;                                          // 0x0098(0x0BA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         RocketShoesSpeed_Vertical;                         // 0x0C40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RocketShoesSpeed_Forward;                          // 0x0C44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102342">();
	}
	static class UPyConfig_102342* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102342>();
	}
};

// PythonClass PyAbility_102342.PyAbility_102342
// 0x0000 (0x2588 - 0x2588)
class UPyAbility_102342 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	bool CanPreActivate();
	void EndPlay();
	bool CanActivate();
	bool TryMakeTriggerContext(struct FGameplayEventData& EventData);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnDashFinish(EDashStopReason Reason);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102342">();
	}
	static class UPyAbility_102342* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102342>();
	}
};

// PythonClass PyAbility_102342.PyExtraWidget_102342
// 0x0000 (0x0658 - 0x0658)
class UPyExtraWidget_102342 final : public UWidget_AbilityStatus_Base
{
public:
	void UpdateStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExtraWidget_102342">();
	}
	static class UPyExtraWidget_102342* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExtraWidget_102342>();
	}
};

}

