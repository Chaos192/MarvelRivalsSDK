﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103611

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103611.PyCue_Scope_HitImpact_10361101
// 0x0008 (0x06B8 - 0x06B0)
class UPyCue_Scope_HitImpact_10361101 final : public UMarvelCueNotify_MeleeHitImpact
{
public:
	int32                                         FirstAudioId;                                      // 0x06B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SecondAudioId;                                     // 0x06B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Scope_HitImpact_10361101">();
	}
	static class UPyCue_Scope_HitImpact_10361101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_Scope_HitImpact_10361101>();
	}
};

// PythonClass PyAbility_103611.PyAbility_103611
// 0x0000 (0x2590 - 0x2590)
class UPyAbility_103611 : public UAbility_108
{
public:
	bool CanActivate();
	void ModifyDeathImpulseInfo(int32& ImpulseLevel, struct FVector& DeathDir, const struct FAttributeModifierParameter& ModifierParameter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103611">();
	}
	static class UPyAbility_103611* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103611>();
	}
};

}

