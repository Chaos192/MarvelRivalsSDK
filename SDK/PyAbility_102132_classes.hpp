﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102132

#include "Basic.hpp"

#include "PyAbility_102131_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102132.PyEffectiveComponent_10213201
// 0x0000 (0x1C00 - 0x1C00)
class UPyEffectiveComponent_10213201 final : public UMarvelAgentEffectiveComponent
{
public:
	TArray<struct FHitResult> K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEffectiveComponent_10213201">();
	}
	static class UPyEffectiveComponent_10213201* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEffectiveComponent_10213201>();
	}
};

// PythonClass PyAbility_102132.PyProjectile_10213201
// 0x0000 (0x3130 - 0x3130)
class APyProjectile_10213201 final : public APyProjectile_10213101
{
public:
	void K2_OnProcessHit(const struct FHitResult& ImpactResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10213201">();
	}
	static class APyProjectile_10213201* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10213201>();
	}
};

// PythonClass PyAbility_102132.PyAbility_102132
// 0x0008 (0x25C8 - 0x25C0)
class UPyAbility_102132 : public UPyAbility_102131
{
public:
	bool                                          NeedRedrawSingleWhenLowAmmo;                       // 0x25C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool CanActivate();
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102132">();
	}
	static class UPyAbility_102132* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102132>();
	}
};

// PythonClass PyAbility_102132.PyUIController_102132
// 0x0000 (0x0C50 - 0x0C50)
class UPyUIController_102132 final : public UUIC_Ability
{
public:
	void OnInit();
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_102132">();
	}
	static class UPyUIController_102132* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_102132>();
	}
};

// PythonClass PyAbility_102132.PyCue_Projectile_HitImpact_10213201
// 0x0008 (0x04D8 - 0x04D0)
class UPyCue_Projectile_HitImpact_10213201 final : public UMarvelCueNotify_HitImpact
{
public:
	int32                                         BlowAudioID;                                       // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_HitImpact_10213201">();
	}
	static class UPyCue_Projectile_HitImpact_10213201* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_Projectile_HitImpact_10213201>();
	}
};

// PythonClass PyAbility_102132.PyCue_Projectile_Loop_10213201
// 0x0018 (0x0DC8 - 0x0DB0)
class APyCue_Projectile_Loop_10213201 final : public AMarvelCueNotify_Projectile
{
public:
	bool                                          bIsAttach;                                         // 0x0DB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DB1[0x3];                                      // 0x0DB1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ReleaseFxPoint;                                    // 0x0DB4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         ReleaseFX;                                         // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_Loop_10213201">();
	}
	static class APyCue_Projectile_Loop_10213201* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Projectile_Loop_10213201>();
	}
};

}

