﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102131

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hero_1021_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102131.PyAbility_102131.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_102131_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyAbility_102131.NativeOnMontageCompleted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102131_NativeOnMontageCompleted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyAbility_102131.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102131_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyAbility_102131.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102131_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyAbility_102131.NativeOnMontageEvent
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102131_NativeOnMontageEvent final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyAbility_102131.OnApplyDamage
// 0x0028 (0x0028 - 0x0000)
struct PyAbility_102131_OnApplyDamage final
{
public:
	class AActor*                                 Instigator;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamterHandle;                                    // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyCue_Projectile_Loop_10213101.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10213101_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyCue_Projectile_Loop_10213101.UpdateArrowMesh
// 0x0178 (0x0178 - 0x0000)
struct PyCue_Projectile_Loop_10213101_UpdateArrowMesh final
{
public:
	bool                                          NeedHidden;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             ImpactResult;                                      // 0x0008(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyCue_Projectile_Loop_10213101.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10213101_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyCue_Projectile_Loop_10213101.AdjustArrowTransform
// 0x0170 (0x0170 - 0x0000)
struct PyCue_Projectile_Loop_10213101_AdjustArrowTransform final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyProjectile_10213101.K2_OnProcessHit
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_10213101_K2_OnProcessHit final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyUIController_102131.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_102131_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyAbility_102131.PyCue_Ability_Loop_10213101.WhileActiveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10213101_WhileActiveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// PythonFunction PyAbility_102131.PyCue_Ability_Loop_10213101.OnRemoveAudio
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10213101_OnRemoveAudio final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};

}

