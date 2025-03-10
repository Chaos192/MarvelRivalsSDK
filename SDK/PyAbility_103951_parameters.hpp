﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103951

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103951.PyCue_Ability_Loop_10395102.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10395102_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyCue_Ability_Loop_10395102.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10395102_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyCue_Ability_Loop_10395102.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10395102_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103951.PyCue_Ability_Loop_10395102.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Ability_Loop_10395102_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103951.PyCue_Ability_Loop_10395102.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyCue_Ability_Loop_10395102_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103951.PyAbility_103951.OnCharacterDeath
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_103951_OnCharacterDeath final
{
public:
	class AActor*                                 DamageCauser;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ModifierParameter;                                 // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103951.PyAbility_103951.OnAwakeBuffRemove
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_103951_OnAwakeBuffRemove final
{
public:
	struct FGameplayEffectRemovalInfo             InGameplayEffectRemovalInfo;                       // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyAbility_103951.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103951_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_103951.PyCue_Buff_10395104.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10395104_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyCue_Buff_10395104.MyActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10395104_MyActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyCue_Buff_10395104.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10395104_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_103951.PyCue_Scope_HitImpact_10395101.AdjustHitNiagaraLocation
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_Scope_HitImpact_10395101_AdjustHitNiagaraLocation final
{
public:
	class UNiagaraComponent*                      InNiagaraComponent;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 MyTarget;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

