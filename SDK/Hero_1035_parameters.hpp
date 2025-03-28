﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1035

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Hero_1035_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Hero_1035.Ability_103521.OnPressLeft
// 0x0004 (0x0004 - 0x0000)
struct Ability_103521_OnPressLeft final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103521.OnReleaseLeft
// 0x0004 (0x0004 - 0x0000)
struct Ability_103521_OnReleaseLeft final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103521.OnSpawnSuccess
// 0x0170 (0x0170 - 0x0000)
struct Ability_103521_OnSpawnSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0008(0x0168)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Scope_10352101.OnDeactivateTentacle
// 0x0004 (0x0004 - 0x0000)
struct Scope_10352101_OnDeactivateTentacle final
{
public:
	int32                                         TentacleID;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Scope_10352101.ServerSetTraceResult
// 0x0170 (0x0170 - 0x0000)
struct Scope_10352101_ServerSetTraceResult final
{
public:
	struct FHitResult                             InTraceResult;                                     // 0x0000(0x0170)(ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103531.Explode
// 0x0170 (0x0170 - 0x0000)
struct Ability_103531_Explode final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103531.OnDashFinish
// 0x0001 (0x0001 - 0x0000)
struct Ability_103531_OnDashFinish final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103531.PlayMontage
// 0x0004 (0x0004 - 0x0000)
struct Ability_103531_PlayMontage final
{
public:
	int32                                         MontageIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Ability_103531.TraceGround
// 0x0001 (0x0001 - 0x0000)
struct Ability_103531_TraceGround final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Ability_Loop_10353102.OnAbilityCanActivateChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_10353102_OnAbilityCanActivateChanged final
{
public:
	bool                                          bCanActivate;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Ability_Loop_10353102.OnDashStateChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_10353102_OnDashStateChanged final
{
public:
	bool                                          bIsDashing;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Ability_Loop_10353102.OnPlayerViewSideChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_10353102_OnPlayerViewSideChanged final
{
public:
	EClientPlayerViewSide                         InViewSide;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Buff_10354101.OnSymbioteStateChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Buff_10354101_OnSymbioteStateChanged final
{
public:
	bool                                          InSymbioteState;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_AbilityLoop_103551.AddArmFXComponent
// 0x0008 (0x0008 - 0x0000)
struct Cue_AbilityLoop_103551_AddArmFXComponent final
{
public:
	class UNiagaraComponent*                      StartComp;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_AbilityLoop_103551.GetTargetLocationEXT
// 0x0018 (0x0018 - 0x0000)
struct Cue_AbilityLoop_103551_GetTargetLocationEXT final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_AbilityLoop_103551.SetTargetLocation
// 0x0018 (0x0018 - 0x0000)
struct Cue_AbilityLoop_103551_SetTargetLocation final
{
public:
	struct FVector                                InTargetLocation;                                  // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_AbilityLoop_103551.SetTentacleMaterialParamValue
// 0x0010 (0x0010 - 0x0000)
struct Cue_AbilityLoop_103551_SetTentacleMaterialParamValue final
{
public:
	class FName                                   InName;                                            // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_AbilityLoop_103551.SetTransientFXLerpValue
// 0x0028 (0x0028 - 0x0000)
struct Cue_AbilityLoop_103551_SetTransientFXLerpValue final
{
public:
	class UNiagaraComponent*                      StartComp;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InTargetLocation;                                  // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InLerpValue;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1035.Ability_103571.ChangeGravity
// 0x0004 (0x0004 - 0x0000)
struct Ability_103571_ChangeGravity final
{
public:
	float                                         InGravityScale;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Scope_10357101.SetScopeRadius
// 0x0004 (0x0004 - 0x0000)
struct Scope_10357101_SetScopeRadius final
{
public:
	float                                         InRadius;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Scope_10357101.SetScopeState
// 0x0001 (0x0001 - 0x0000)
struct Scope_10357101_SetScopeState final
{
public:
	ESymbiontScopeState                           InScopeState;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Scope_Loop_10357101.OnGenericGameplayTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct Cue_Scope_Loop_10357101_OnGenericGameplayTagUpdate final
{
public:
	struct FGameplayTag                           InTag;                                             // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.Cue_Scope_Loop_10357101.OnMontageEnded
// 0x0010 (0x0010 - 0x0000)
struct Cue_Scope_Loop_10357101_OnMontageEnded final
{
public:
	class UAnimMontage*                           InMontage;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInterrupted;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1035.EpicMomentAction_1035.OnGameplayEffectAppliedToTarget
// 0x0018 (0x0018 - 0x0000)
struct EpicMomentAction_1035_OnGameplayEffectAppliedToTarget final
{
public:
	class UAbilitySystemComponent*                ASC;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecStackHandle         GameplayEffectSpecHandle;                          // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            ActiveGameplayEffectHandle;                        // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.VenomCharacter.EnableSymbioteCollision
// 0x0001 (0x0001 - 0x0000)
struct VenomCharacter_EnableSymbioteCollision final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.VenomChildActor.HideTentacle
// 0x0010 (0x0010 - 0x0000)
struct VenomChildActor_HideTentacle final
{
public:
	class UAnimMontage*                           AnimMontage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1035.VenomChildActor.OnComponentMaterialChanged
// 0x0008 (0x0008 - 0x0000)
struct VenomChildActor_OnComponentMaterialChanged final
{
public:
	class UActorComponent*                        InActorComponent;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1035.VenomChildActor.OnPlayerViewSideChanged
// 0x0001 (0x0001 - 0x0000)
struct VenomChildActor_OnPlayerViewSideChanged final
{
public:
	EClientPlayerViewSide                         InViewSide;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

