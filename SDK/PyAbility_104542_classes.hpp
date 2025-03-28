﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104542

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104542.PyConfig_104542
// 0x0010 (0x00E0 - 0x00D0)
class UPyConfig_104542 final : public UMarvelAbilityConfig_LongPressTrigger
{
public:
	int32                                         ManagerAbilityID;                                  // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           FlyTag;                                            // 0x00D4(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104542">();
	}
	static class UPyConfig_104542* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104542>();
	}
};

// PythonClass PyAbility_104542.PyAbility_104542
// 0x0000 (0x25A0 - 0x25A0)
class UPyAbility_104542 : public UMarvelAbility_LongPressTrigger
{
public:
	void K2_ActivateAbility();
	bool CanActivate();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104542">();
	}
	static class UPyAbility_104542* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104542>();
	}
};

// PythonClass PyAbility_104542.PyCue_Ability_Loop_10454201
// 0x0008 (0x0E58 - 0x0E50)
class APyCue_Ability_Loop_10454201 final : public AMarvelCueNotify_Ability
{
public:
	int32                                         GlideAudioID;                                      // 0x0E50(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10454201">();
	}
	static class APyCue_Ability_Loop_10454201* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10454201>();
	}
};

// PythonClass PyAbility_104542.PyUIController_104542
// 0x0000 (0x0C50 - 0x0C50)
class UPyUIController_104542 final : public UUIC_Ability
{
public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_104542">();
	}
	static class UPyUIController_104542* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_104542>();
	}
};

}

