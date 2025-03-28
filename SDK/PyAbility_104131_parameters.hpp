﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104131

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104131.PyProjectile_10413101.K2_OnProcessHit
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_10413101_K2_OnProcessHit final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104131.PyEffectiveComponent_10413101.K2_OnPreApplyContainer
// 0x0020 (0x0020 - 0x0000)
struct PyEffectiveComponent_10413101_K2_OnPreApplyContainer final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                     ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm)
};

// PythonFunction PyAbility_104131.PyAbility_104131.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104131_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.OnPressCancle
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_104131_OnPressCancle final
{
public:
	float                                         Useless;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.K2_TriggerGameplay
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_104131_K2_TriggerGameplay final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.K2_MaxHoldTimeGameplay
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_104131_K2_MaxHoldTimeGameplay final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.HandleAnimSocketInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PyAbility_104131_HandleAnimSocketInfo final
{
public:
	int32                                         SocketId;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};

// PythonFunction PyAbility_104131.PyAbility_104131.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104131_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.OnNetSync
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_104131_OnNetSync final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104131.PyAbility_104131.OnProjectileTaskSuccess
// 0x0170 (0x0170 - 0x0000)
struct PyAbility_104131_OnProjectileTaskSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0008(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104131.PyAbility_104131.BackwardProjectileSuccess
// 0x0170 (0x0170 - 0x0000)
struct PyAbility_104131_BackwardProjectileSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0008(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104131.PyAbility_104131.OnBackProjectileEndTask
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_104131_OnBackProjectileEndTask final
{
public:
	class AActor*                                 Projectile;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104131_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104131_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104131_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyAbility_104131.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104131_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyCue_Projectile_Loop_10413102.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Projectile_Loop_10413102_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104131.PyUIController_104131.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_104131_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

