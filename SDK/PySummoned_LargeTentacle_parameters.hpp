﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySummoned_LargeTentacle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PySummoned_LargeTentacle.PyKnockUp_LargeTentacle_Attack.CalcKnockUpDir
// 0x0018 (0x0018 - 0x0000)
struct PyKnockUp_LargeTentacle_Attack_CalcKnockUpDir final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PySummoned_LargeTentacleArea.SetTentacleAreaActive
// 0x0001 (0x0001 - 0x0000)
struct PySummoned_LargeTentacleArea_SetTentacleAreaActive final
{
public:
	bool                                          Inactive;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PySummoned_LargeTentacleArea.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PySummoned_LargeTentacleArea_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PySummoned_LargeTentacle.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PySummoned_LargeTentacle_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PySummoned_LargeTentacle.OnDeath
// 0x0028 (0x0028 - 0x0000)
struct PySummoned_LargeTentacle_OnDeath final
{
public:
	class AController*                            InSource;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InSourceAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParameterHandle;                                   // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PySummoned_LargeTentacle.MulticastAttack
// 0x0004 (0x0004 - 0x0000)
struct PySummoned_LargeTentacle_MulticastAttack final
{
public:
	int32                                         AttackType;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyTraceComponent_LargeTentacle_KnockUp.OnStateChanged
// 0x0004 (0x0004 - 0x0000)
struct PyTraceComponent_LargeTentacle_KnockUp_OnStateChanged final
{
public:
	int32                                         InState;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Summoner_Loop_LargeTentacle.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_LargeTentacle_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Summoner_Loop_LargeTentacle.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Summoner_Loop_LargeTentacle_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Summoner_Loop_LargeTentacle.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PyCue_Summoner_Loop_LargeTentacle_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Summoner_Loop_LargeTentacle.OnPreAttackStateChanged
// 0x0001 (0x0001 - 0x0000)
struct PyCue_Summoner_Loop_LargeTentacle_OnPreAttackStateChanged final
{
public:
	bool                                          IsPreAttack;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Summoner_Loop_LargeTentacle.OnStateChanged
// 0x0004 (0x0004 - 0x0000)
struct PyCue_Summoner_Loop_LargeTentacle_OnStateChanged final
{
public:
	int32                                         InState;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyTraceComponent_LargeTentacle_Attack.OnStateChanged
// 0x0004 (0x0004 - 0x0000)
struct PyTraceComponent_LargeTentacle_Attack_OnStateChanged final
{
public:
	int32                                         InState;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Scope_Loop_TentacleDeathAttack.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_TentacleDeathAttack_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PySummoned_LargeTentacle.PyCue_Scope_Loop_TentacleDeathAttack.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_Loop_TentacleDeathAttack_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

