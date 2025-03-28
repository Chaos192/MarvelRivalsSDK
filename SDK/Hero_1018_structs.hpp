﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1018

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Hero_1018.EPlaceEvent_101861
// NumValues: 0x0005
enum class EPlaceEvent_101861 : uint8
{
	Place_TryPlace                           = 0,
	Place_Generate                           = 1,
	Place_Remove                             = 2,
	Place_None                               = 3,
	Place_MAX                                = 4,
};

// Enum Hero_1018.EAbilityState101841
// NumValues: 0x0005
enum class EAbilityState101841 : uint8
{
	Inactive                                 = 0,
	ForeSwing                                = 1,
	BarrierActive                            = 2,
	BackSwing                                = 3,
	EAbilityState101841_MAX                  = 4,
};

// Enum Hero_1018.EAbilityEvent_101861
// NumValues: 0x0003
enum class EAbilityEvent_101861 : uint8
{
	View_Char2CameraActor                    = 0,
	View_CameraActor2Char                    = 1,
	View_MAX                                 = 2,
};

// Enum Hero_1018.EInputEvent_101861
// NumValues: 0x0008
enum class EInputEvent_101861 : uint8
{
	SpeedUp                                  = 0,
	SpeedDown                                = 1,
	Rise                                     = 2,
	RiseOver                                 = 3,
	Drop                                     = 4,
	DropOver                                 = 5,
	None                                     = 6,
	EInputEvent_MAX                          = 7,
};

// Enum Hero_1018.EAbilityState_101881
// NumValues: 0x0006
enum class EAbilityState_101881 : uint8
{
	NoEnergy                                 = 0,
	Common                                   = 1,
	SlowDecreasing                           = 2,
	WaitDecreasing                           = 3,
	FastDecreasing                           = 4,
	EAbilityState_MAX                        = 5,
};

// Enum Hero_1018.EAbilityIncreaseType_101881
// NumValues: 0x0006
enum class EAbilityIncreaseType_101881 : uint8
{
	OnActivated                              = 0,
	OnCommited                               = 1,
	OnMissile                                = 2,
	OnHit                                    = 3,
	OnApplyDamage                            = 4,
	EAbilityIncreaseType_MAX                 = 5,
};

// Enum Hero_1018.ECueAbilityState_101881
// NumValues: 0x0005
enum class ECueAbilityState_101881 : uint8
{
	Close                                    = 0,
	Opening                                  = 1,
	Open                                     = 2,
	Closing                                  = 3,
	ECueAbilityState_MAX                     = 4,
};

// ScriptStruct Hero_1018.ProjectileSpreadRotateInfo
// 0x0010 (0x0010 - 0x0000)
struct FProjectileSpreadRotateInfo final
{
public:
	class UCurveFloat*                            SpreadCurve;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateSpeed;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitRotateAngle;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1018.CustomMaterialCurveMap
// 0x0050 (0x0050 - 0x0000)
struct FCustomMaterialCurveMap final
{
public:
	TMap<class FName, class FName>                MaterialCurveMap;                                  // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1018.CustomMeshMaterialMap
// 0x0050 (0x0050 - 0x0000)
struct FCustomMeshMaterialMap final
{
public:
	TMap<uint8, class UMaterialInstanceDynamic*>  MeshMaterialMap;                                   // 0x0000(0x0050)(NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1018.AbilityPlaceMsg_101861
// 0x0130 (0x0130 - 0x0000)
struct FAbilityPlaceMsg_101861 final
{
public:
	uint8                                         Pad_0[0x2];                                        // 0x0000(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bNeedCreatePortal;                                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0xD];                                        // 0x0003(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             AutonomousTrans;                                   // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform_StartPortal;                             // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform_EndPortal;                               // 0x00D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1018.AbilityManaConfig_101881
// 0x00E0 (0x00E0 - 0x0000)
struct FAbilityManaConfig_101881 final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Increasement;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAbilityIncreaseType_101881                   IncreaseMoment;                                    // 0x0008(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelGameplayTagRequirements         EnemyTagRequirements;                              // 0x0010(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1018.AbilityEffectConfig_101881
// 0x0070 (0x0070 - 0x0000)
struct FAbilityEffectConfig_101881 final
{
public:
	float                                         Threshold;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Effect;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         NiagaraEffect;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocket;                                      // 0x0018(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationOffset;                                    // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0040(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                EffectScale;                                       // 0x0058(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

