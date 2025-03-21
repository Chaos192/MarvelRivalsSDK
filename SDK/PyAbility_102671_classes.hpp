﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102671

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "Hero_1026_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102671.PyConfig_102671
// 0x0008 (0x00A0 - 0x0098)
class UPyConfig_102671 final : public UMarvelAbilityConfig
{
public:
	int32                                         TraceScopeID;                                      // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BuffID;                                            // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102671">();
	}
	static class UPyConfig_102671* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102671>();
	}
};

// PythonClass PyAbility_102671.PyCue_Ability_Loop_10267101
// 0x0018 (0x0E90 - 0x0E78)
class APyCue_Ability_Loop_10267101 final : public ACue_Ability_Loop_10267101
{
public:
	class UAnimationAsset*                        AnimToPlay;                                        // 0x0E78(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToDetachMesh;                                  // 0x0E80(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeMeshExists;                                    // 0x0E84(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeSmokeAppear;                                   // 0x0E88(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeSmokeExists;                                   // 0x0E8C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void SetMeshInVisible();
	void DetachMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10267101">();
	}
	static class APyCue_Ability_Loop_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10267101>();
	}
};

// PythonClass PyAbility_102671.PyAbility_102671
// 0x0000 (0x2588 - 0x2588)
class UPyAbility_102671 : public UAbility_102671
{
public:
	void BeginPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void NativeOnMontageEvent(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102671">();
	}
	static class UPyAbility_102671* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102671>();
	}
};

// PythonClass PyAbility_102671.PySummonedComp_10267101
// 0x0000 (0x0CA0 - 0x0CA0)
class UPySummonedComp_10267101 final : public USummonedComp_10267101
{
public:
	void ClearShiftCD();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_10267101">();
	}
	static class UPySummonedComp_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_10267101>();
	}
};

// PythonClass PyAbility_102671.PyCue_Ability_Loop_10267103
// 0x0008 (0x0E58 - 0x0E50)
class APyCue_Ability_Loop_10267103 final : public AMarvelCueNotify_Ability
{
public:
	float                                         TimeToDetach;                                      // 0x0E50(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Detach();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10267103">();
	}
	static class APyCue_Ability_Loop_10267103* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10267103>();
	}
};

// PythonClass PyAbility_102671.PyProjectile_10267101
// 0x0000 (0x3110 - 0x3110)
class APyProjectile_10267101 final : public AMarvelAbilityTargetActor_Projectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10267101">();
	}
	static class APyProjectile_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10267101>();
	}
};

}

