﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_105071

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PyAbility_105071_structs.hpp"
#include "Hero_1050_structs.hpp"
#include "Hero_1050_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_105071.PyConfig_105071
// 0x0FE0 (0x10D0 - 0x00F0)
class UPyConfig_105071 final : public UConfig_105071
{
public:
	struct FFindGroundParam                       TraceParams;                                       // 0x00F0(0x0FD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                           PlacementCueTag;                                   // 0x10C0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAbilityEndStage_105071                       AbilityEndStage;                                   // 0x10CC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_105071">();
	}
	static class UPyConfig_105071* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_105071>();
	}
};

// PythonClass PyAbility_105071.PyAbility_105071
// 0x0000 (0x2630 - 0x2630)
class UPyAbility_105071 : public UAbility_105071
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_EndAbilityWithChecked();
	void OnConfirm(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnCancel(const struct FGameplayAbilityTargetDataHandle& Data);
	void MissileEventNotify();
	void OnScopeSpawned(class AActor* SpawnedActor, const struct FGameplayAbilityTargetDataHandle& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_105071">();
	}
	static class UPyAbility_105071* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_105071>();
	}
};

// PythonClass PyAbility_105071.PyCue_TraceActor_105071
// 0x0010 (0x0D10 - 0x0D00)
class APyCue_TraceActor_105071 final : public AMarvelCueNotify_TraceActor
{
public:
	class FName                                   ObjectHeightName;                                  // 0x0D00(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_TraceActor_105071">();
	}
	static class APyCue_TraceActor_105071* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_TraceActor_105071>();
	}
};

// PythonClass PyAbility_105071.PyCueNotify_Buff_10507101
// 0x0010 (0x1048 - 0x1038)
class APyCueNotify_Buff_10507101 final : public AMarvelCueNotify_Buff
{
public:
	int32                                         TeamateStartAudioID;                               // 0x1038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TeamateEndAudioID;                                 // 0x103C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnemyStartAudioID;                                 // 0x1040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnemyEndAudioID;                                   // 0x1044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCueNotify_Buff_10507101">();
	}
	static class APyCueNotify_Buff_10507101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCueNotify_Buff_10507101>();
	}
};

// PythonClass PyAbility_105071.PyUIController_105071
// 0x0050 (0x0CA0 - 0x0C50)
class UPyUIController_105071 final : public UUIC_Ability
{
public:
	TMap<EScopeEnableType_105071, struct FCueHintData> AbilityFailedTips;                            // 0x0C50(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	void OnInit();
	void OnDestruct();
	void OnAbilityActivateFailed(const struct FGameplayTagContainer& FailedTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_105071">();
	}
	static class UPyUIController_105071* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_105071>();
	}
};

}

