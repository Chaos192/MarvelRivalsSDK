﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104551

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1045_structs.hpp"
#include "Hero_1045_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104551.PySummoned_10455101
// 0x0030 (0x1050 - 0x1020)
class APySummoned_10455101 : public ASummoned_10455101
{
public:
	TMulticastInlineDelegate<void(EOctopusState CurrentOctopusState, EOctopusState LastOctopusState)> OnOctopusStateChangedDelegate; // 0x1020(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnOctopusTargetChangedDelegate;                    // 0x1030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnSummonedBeginAgentTaskDelegate;                  // 0x1040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnRep_OnOctopusStateChanged();
	void OnRep_OnCurrentTargetChanged();
	void K2_OnSummonedBeginAgentTask();
	void K2_OnEndAgentTask();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummoned_10455101">();
	}
	static class APySummoned_10455101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySummoned_10455101>();
	}
};

// PythonClass PyAbility_104551.PyProjectile_10455101
// 0x0000 (0x3110 - 0x3110)
class APyProjectile_10455101 : public AMarvelAbilityTargetActor_Projectile
{
public:
	void K2_OnBeginAgentTask();
	void K2_OnEndAgentTask();
	void K2_OnProcessHit(const struct FHitResult& ImpactResult);
	bool IsOnlyUseServerHitInfo(const struct FHitResult& Remote, const struct FHitResult& Local);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10455101">();
	}
	static class APyProjectile_10455101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10455101>();
	}
};

// PythonClass PyAbility_104551.PyProjectile_10455102
// 0x0000 (0x3110 - 0x3110)
class APyProjectile_10455102 final : public APyProjectile_10455101
{
public:
	void K2_OnEndAgentTask();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10455102">();
	}
	static class APyProjectile_10455102* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10455102>();
	}
};

// PythonClass PyAbility_104551.PyConfig_104551
// 0x0FB8 (0x1050 - 0x0098)
class UPyConfig_104551 final : public UMarvelAbilityConfig
{
public:
	float                                         MaxEnergyBeforeMatch;                              // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxEnergyAfterMatch;                               // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SummonID;                                          // 0x00A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0xC];                                       // 0x00A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTraceContext             SceneTraceContext;                                 // 0x00B0(0x0F90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class ASummoned_10455101>         SummonedClass;                                     // 0x1040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104551">();
	}
	static class UPyConfig_104551* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104551>();
	}
};

// PythonClass PyAbility_104551.PyAbility_104551
// 0x0000 (0x2590 - 0x2590)
class UPyAbility_104551 : public UAbility_104551
{
public:
	void BeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104551">();
	}
	static class UPyAbility_104551* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104551>();
	}
};

// PythonClass PyAbility_104551.PyCue_Summoner_Loop_10455101
// 0x0010 (0x0EA0 - 0x0E90)
class APyCue_Summoner_Loop_10455101 final : public AMarvelCueNotify_Summoned
{
public:
	float                                         TimeToHideChildActor;                              // 0x0E90(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NormalAttackPromptAudioID;                         // 0x0E94(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnhancedAttackPromptAudioID;                       // 0x0E98(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOctopusStateChanged(EOctopusState CurrentOctopusState, EOctopusState LastOctopusState);
	void OnOctopusTargetChanged();
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void HideChildActor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Summoner_Loop_10455101">();
	}
	static class APyCue_Summoner_Loop_10455101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Summoner_Loop_10455101>();
	}
};

}

