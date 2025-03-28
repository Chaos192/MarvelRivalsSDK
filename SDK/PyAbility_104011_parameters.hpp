﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104011

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_104011.PyCue_Scope_HitImpact_10401101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Scope_HitImpact_10401101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104011.PyCue_Ability_Loop_10401102.OnActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10401102_OnActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104011.PyCue_Ability_Loop_10401102.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10401102_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104011.PyAbility_104011.OnApplyDamage
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_104011_OnApplyDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               Parameter;                                         // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104011_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.OnAbilityHit
// 0x0018 (0x0018 - 0x0000)
struct PyAbility_104011_OnAbilityHit final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     Result;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104011.PyAbility_104011.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_104011_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104011_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.NativeOnMontageBlendOut
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104011_NativeOnMontageBlendOut final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104011_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyAbility_104011.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_104011_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_104011.PyCue_Ability_Loop_10401101.WhileActiveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10401101_WhileActiveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_104011.PyCue_Ability_Loop_10401101.OnRemoveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10401101_OnRemoveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

