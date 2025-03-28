﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_133

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_133.PyProjectile_13301.K2_OnProcessHit
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_13301_K2_OnProcessHit final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_133.PyProjectile_13301.K2_OnFlyOverMaxDistance
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_13301_K2_OnFlyOverMaxDistance final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_133.PyAbility_133.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.TryMakeTriggerContext
// 0x0298 (0x0298 - 0x0000)
struct PyAbility_133_TryMakeTriggerContext final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0290(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.K2_ActivateAbilityFromEvent
// 0x0290 (0x0290 - 0x0000)
struct PyAbility_133_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x0290)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_133.PyAbility_133.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.OnTaskTick
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_133_OnTaskTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.OnJumpPress
// 0x0004 (0x0004 - 0x0000)
struct PyAbility_133_OnJumpPress final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_133_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.OnSwingingEnd
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_OnSwingingEnd final
{
public:
	ESwingEndReason                               InEndReason;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.K2_OnServerReceiveClientMissileData
// 0x0178 (0x0178 - 0x0000)
struct PyAbility_133_K2_OnServerReceiveClientMissileData final
{
public:
	struct FHitResult                             InHitResult;                                       // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          bNeedSpecialMove;                                  // 0x0170(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHitGround;                                      // 0x0171(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.K2_OnNetSyncOnEdgeOffCliff
// 0x0168 (0x0168 - 0x0000)
struct PyAbility_133_K2_OnNetSyncOnEdgeOffCliff final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0168)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_133.PyAbility_133.OnSpecialMoveFinish
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_OnSpecialMoveFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.OnSpecialMoveFinishSecond
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_OnSpecialMoveFinishSecond final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.NetMulticast_SetSwingParams
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_133_NetMulticast_SetSwingParams final
{
public:
	bool                                          IsLeftHandShoot;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_133.PyAbility_133.K2_ReadySimpleSwing
// 0x0190 (0x0190 - 0x0000)
struct PyAbility_133_K2_ReadySimpleSwing final
{
public:
	struct FSwingInfo                             InSwingInfo;                                       // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

