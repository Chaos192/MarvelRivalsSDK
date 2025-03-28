﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104121

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1041_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104121.PyEffectiveComponent_10412101
// 0x0000 (0x1C00 - 0x1C00)
class UPyEffectiveComponent_10412101 final : public UMarvelAgentEffectiveComponent
{
public:
	TArray<struct FHitResult> K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEffectiveComponent_10412101">();
	}
	static class UPyEffectiveComponent_10412101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEffectiveComponent_10412101>();
	}
};

// PythonClass PyAbility_104121.PyConfig_104121
// 0x1078 (0x1140 - 0x00C8)
class UPyConfig_104121 final : public UConfig_106
{
public:
	bool                                          UsingWhiteList;                                    // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RequiredTags;                                      // 0x00D0(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  IgnoredTags;                                       // 0x0138(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         MaxHeight;                                         // 0x01A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A4[0xC];                                      // 0x01A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTraceContext             GroundTraceContext;                                // 0x01B0(0x0F90)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104121">();
	}
	static class UPyConfig_104121* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104121>();
	}
};

// PythonClass PyAbility_104121.PyAbility_104121
// 0x0000 (0x26A0 - 0x26A0)
class UPyAbility_104121 : public UAbility_106
{
public:
	void BeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104121">();
	}
	static class UPyAbility_104121* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104121>();
	}
};

// PythonClass PyAbility_104121.PyProjectile_10412101
// 0x0000 (0x3110 - 0x3110)
class APyProjectile_10412101 final : public AMarvelAbilityTargetActor_Projectile
{
public:
	void K2_OnInitializeData();
	void K2_OnBeginAgentTask();
	void K2_OnEndAgentTask();
	void K2_OnProcessHit(const struct FHitResult& ImpactResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10412101">();
	}
	static class APyProjectile_10412101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10412101>();
	}
};

// PythonClass PyAbility_104121.PyCue_Projectile_HitImpact_10412101
// 0x0098 (0x0568 - 0x04D0)
class UPyCue_Projectile_HitImpact_10412101 final : public UMarvelCueNotify_HitImpact
{
public:
	struct FGameplayTagContainer                  EndFXRequiredTags;                                 // 0x04D0(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         EndFX01;                                           // 0x0538(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         EndFX02;                                           // 0x0540(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndFX02LoacationOffset;                            // 0x0548(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HitAudio_PawnAndSummoned;                          // 0x0560(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Projectile_HitImpact_10412101">();
	}
	static class UPyCue_Projectile_HitImpact_10412101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_Projectile_HitImpact_10412101>();
	}
};

// PythonClass PyAbility_104121.PyCue_ScopeStart_104121
// 0x0000 (0x0368 - 0x0368)
class UPyCue_ScopeStart_104121 final : public UMarvelCueNotify_Base
{
public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_ScopeStart_104121">();
	}
	static class UPyCue_ScopeStart_104121* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_ScopeStart_104121>();
	}
};

// PythonClass PyAbility_104121.PyCue_Weapon_Loop_104121
// 0x0000 (0x10B8 - 0x10B8)
class APyCue_Weapon_Loop_104121 final : public ACue_Weapon_Loop_104121
{
public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Weapon_Loop_104121">();
	}
	static class APyCue_Weapon_Loop_104121* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Weapon_Loop_104121>();
	}
};

// PythonClass PyAbility_104121.PyCue_ProjectileLoop_104121
// 0x0070 (0x0E20 - 0x0DB0)
class APyCue_ProjectileLoop_104121 final : public AMarvelCueNotify_Projectile
{
public:
	struct FGameplayTagContainer                  EndFXRequiredTags;                                 // 0x0DB0(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         ScopeFX;                                           // 0x0E18(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_ProjectileLoop_104121">();
	}
	static class APyCue_ProjectileLoop_104121* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_ProjectileLoop_104121>();
	}
};

}

