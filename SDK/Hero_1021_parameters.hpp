﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1021

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Hero_1021_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function Hero_1021.Ability_102111.CheckEnergyStage
// 0x0004 (0x0004 - 0x0000)
struct Ability_102111_CheckEnergyStage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.OnActivateAbility
// 0x0004 (0x0004 - 0x0000)
struct Ability_102111_OnActivateAbility final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.OnAimTargetChanged
// 0x0001 (0x0001 - 0x0000)
struct Ability_102111_OnAimTargetChanged final
{
public:
	bool                                          bAimingTarget;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.OnBowStageChanged
// 0x0001 (0x0001 - 0x0000)
struct Ability_102111_OnBowStageChanged final
{
public:
	bool                                          bIsInBowState;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.OnEndAbility
// 0x0004 (0x0004 - 0x0000)
struct Ability_102111_OnEndAbility final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.OnEnergyAttrChangeThroughStageOne
// 0x0008 (0x0008 - 0x0000)
struct Ability_102111_OnEnergyAttrChangeThroughStageOne final
{
public:
	bool                                          bLessStageOne;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentValue;                                      // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Ability_102111.UpdateEnergyDamage
// 0x0004 (0x0004 - 0x0000)
struct Ability_102111_UpdateEnergyDamage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.UIController_102111.OnFullPercent
// 0x0001 (0x0001 - 0x0000)
struct UIController_102111_OnFullPercent final
{
public:
	bool                                          InIsFull;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.UIController_102111.SetUpdateEnable
// 0x0001 (0x0001 - 0x0000)
struct UIController_102111_SetUpdateEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Cue_Ability_Loop_10211102.OnEnergyStageChanged
// 0x0004 (0x0004 - 0x0000)
struct Cue_Ability_Loop_10211102_OnEnergyStageChanged final
{
public:
	int32                                         InStage;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Cue_Ability_Loop_10211102.OnEnergyStageIsUp
// 0x0008 (0x0008 - 0x0000)
struct Cue_Ability_Loop_10211102_OnEnergyStageIsUp final
{
public:
	int32                                         InStageIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsUp;                                             // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1021.DragAbility_102161.ApplyBuffToTarget
// 0x0001 (0x0001 - 0x0000)
struct DragAbility_102161_ApplyBuffToTarget final
{
public:
	EDashStopReason                               Reason;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.DragAbility_102161.OnCharacterHit
// 0x0198 (0x0198 - 0x0000)
struct DragAbility_102161_OnCharacterHit final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0010(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0028(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.GetAllAfterImageLocations
// 0x0010 (0x0010 - 0x0000)
struct Summoned_102181_GetAllAfterImageLocations final
{
public:
	TArray<struct FVector>                        OutLocations;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.GetCauser
// 0x0008 (0x0008 - 0x0000)
struct Summoned_102181_GetCauser final
{
public:
	class AMarvelBaseCharacter*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.GetIsRelevant
// 0x0001 (0x0001 - 0x0000)
struct Summoned_102181_GetIsRelevant final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.GetTargetCharacter
// 0x0008 (0x0008 - 0x0000)
struct Summoned_102181_GetTargetCharacter final
{
public:
	class AMarvelBaseCharacter*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.OnSummonerTakeDamage
// 0x0028 (0x0028 - 0x0000)
struct Summoned_102181_OnSummonerTakeDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.SetShouldCreate
// 0x0001 (0x0001 - 0x0000)
struct Summoned_102181_SetShouldCreate final
{
public:
	bool                                          bShould;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Summoned_102181.SetTargetCharacter
// 0x0008 (0x0008 - 0x0000)
struct Summoned_102181_SetTargetCharacter final
{
public:
	class AMarvelBaseCharacter*                   OutTarget;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Cue_Summoner_Loop_10218101.ApplyUsablePoseMesh
// 0x0004 (0x0004 - 0x0000)
struct Cue_Summoner_Loop_10218101_ApplyUsablePoseMesh final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Cue_Summoner_Loop_10218101.OnSetupAfterCom
// 0x0080 (0x0080 - 0x0000)
struct Cue_Summoner_Loop_10218101_OnSetupAfterCom final
{
public:
	class AMarvelBaseCharacter*                   OutTargetCharacter;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAfterImageSpec                        AfterImageSpec;                                    // 0x0008(0x0078)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1021.Cue_Summoner_Loop_10218101.UpdatePoseMesh
// 0x0004 (0x0004 - 0x0000)
struct Cue_Summoner_Loop_10218101_UpdatePoseMesh final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.EpicMomentAction_1021.OnSummonedBegin
// 0x0060 (0x0060 - 0x0000)
struct EpicMomentAction_1021_OnSummonedBegin final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelGameplayAbility*                 SourceAbility;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Summoned;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarvelTargetActorGenerateInfo         GenerateInfo;                                      // 0x0018(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Hero_1021.EpicMomentAction_1021.OnSummonedEnd
// 0x0008 (0x0008 - 0x0000)
struct EpicMomentAction_1021_OnSummonedEnd final
{
public:
	class AActor*                                 InSummoner;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.EpicMomentAction_1021.OnSummonerTakeDamage
// 0x0028 (0x0028 - 0x0000)
struct EpicMomentAction_1021_OnSummonerTakeDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetIsHiddenArrow
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_GetIsHiddenArrow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetIsInBowState
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_GetIsInBowState final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.OnArrowTypeTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct HawkeyeCharacter_OnArrowTypeTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExist;                                            // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1021.HawkeyeCharacter.SetCurrentArrowType
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_SetCurrentArrowType final
{
public:
	EHawkeyeArrowType                             ArrowType;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.SetEnergyDamage
// 0x0004 (0x0004 - 0x0000)
struct HawkeyeCharacter_SetEnergyDamage final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.SetEnergyStage
// 0x0004 (0x0004 - 0x0000)
struct HawkeyeCharacter_SetEnergyStage final
{
public:
	int32                                         InStageIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.SetIsHiddenArrow
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_SetIsHiddenArrow final
{
public:
	bool                                          bHiddenArrow;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.SetIsInBowState
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_SetIsInBowState final
{
public:
	bool                                          bCanInBowState;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetCurrentArrowType
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_GetCurrentArrowType final
{
public:
	EHawkeyeArrowType                             ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetEnergyDamage
// 0x0004 (0x0004 - 0x0000)
struct HawkeyeCharacter_GetEnergyDamage final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetEnergyStage
// 0x0004 (0x0004 - 0x0000)
struct HawkeyeCharacter_GetEnergyStage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeCharacter.GetIsInTripleArrowState
// 0x0001 (0x0001 - 0x0000)
struct HawkeyeCharacter_GetIsInTripleArrowState final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeChildActor.GetOwningChar
// 0x0008 (0x0008 - 0x0000)
struct HawkeyeChildActor_GetOwningChar final
{
public:
	class AHawkeyeCharacter*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.HawkeyeChildActor.HandleHiddenArrowMesh
// 0x0010 (0x0010 - 0x0000)
struct HawkeyeChildActor_HandleHiddenArrowMesh final
{
public:
	class ACharacter*                             InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHiddenArrow;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1021.HawkeyeChildActor.UpdateArrowMesh
// 0x0010 (0x0010 - 0x0000)
struct HawkeyeChildActor_UpdateArrowMesh final
{
public:
	class ACharacter*                             OutUselessChar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHawkeyeArrowType                             ArrowType;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1021.TabData_1021.OnActorPreDeath
// 0x0030 (0x0030 - 0x0000)
struct TabData_1021_OnActorPreDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1021.TabData_1021.OnBuffAddEvent
// 0x0020 (0x0020 - 0x0000)
struct TabData_1021_OnBuffAddEvent final
{
public:
	class UAbilitySystemComponent*                Source;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecStackHandle         EffectSpecHandle;                                  // 0x0010(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            EffectHandle;                                      // 0x0018(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1021.TabData_1021.OnPostApplyDamage
// 0x0028 (0x0028 - 0x0000)
struct TabData_1021_OnPostApplyDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

