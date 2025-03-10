﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_Synergy

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Hero_Synergy_structs.hpp"


namespace SDK::Params
{

// Function Hero_Synergy.MarvelBackTrackAbility.DelayStartRecord
// 0x0001 (0x0001 - 0x0000)
struct MarvelBackTrackAbility_DelayStartRecord final
{
public:
	bool                                          bSetDelay;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.IsHoldMode
// 0x0001 (0x0001 - 0x0000)
struct MarvelBackTrackAbility_IsHoldMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnCharacterMovementPreUpdated
// 0x0004 (0x0004 - 0x0000)
struct MarvelBackTrackAbility_OnCharacterMovementPreUpdated final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnCharTranslatedByLevelPortal
// 0x0060 (0x0060 - 0x0000)
struct MarvelBackTrackAbility_OnCharTranslatedByLevelPortal final
{
public:
	struct FTransform                             TargetTransform;                                   // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnCharTranslatedByPortal
// 0x0008 (0x0008 - 0x0000)
struct MarvelBackTrackAbility_OnCharTranslatedByPortal final
{
public:
	class APortalViewActor*                       InPortalActor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnClientAckMoveWithStamp
// 0x0020 (0x0020 - 0x0000)
struct MarvelBackTrackAbility_OnClientAckMoveWithStamp final
{
public:
	float                                         Timestamp;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnLivingStateChanged
// 0x0001 (0x0001 - 0x0000)
struct MarvelBackTrackAbility_OnLivingStateChanged final
{
public:
	EPlayerLivingState                            LivingState;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnLongPressRelease
// 0x0004 (0x0004 - 0x0000)
struct MarvelBackTrackAbility_OnLongPressRelease final
{
public:
	float                                         TimeHeld;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnLongPressTimeOverMaxHoldTime
// 0x0004 (0x0004 - 0x0000)
struct MarvelBackTrackAbility_OnLongPressTimeOverMaxHoldTime final
{
public:
	float                                         TimeHeld;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.OnServerHandleClientMoveWithStamp
// 0x0020 (0x0020 - 0x0000)
struct MarvelBackTrackAbility_OnServerHandleClientMoveWithStamp final
{
public:
	float                                         Timestamp;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.RecordState
// 0x0020 (0x0020 - 0x0000)
struct MarvelBackTrackAbility_RecordState final
{
public:
	float                                         Timestamp;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.ServerCheckClientLocValid
// 0x0020 (0x0020 - 0x0000)
struct MarvelBackTrackAbility_ServerCheckClientLocValid final
{
public:
	struct FVector                                InTargetLoc;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStrictCheck;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_Synergy.MarvelBackTrackAbility.ServerInterrupt
// 0x0018 (0x0018 - 0x0000)
struct MarvelBackTrackAbility_ServerInterrupt final
{
public:
	struct FVector                                InClientLocation;                                  // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.StopRecordState
// 0x0001 (0x0001 - 0x0000)
struct MarvelBackTrackAbility_StopRecordState final
{
public:
	bool                                          bClearData;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.MarvelBackTrackAbility.SafeMoveTo
// 0x0190 (0x0190 - 0x0000)
struct MarvelBackTrackAbility_SafeMoveTo final
{
public:
	struct FVector                                TargetLoc;                                         // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             OutHit;                                            // 0x0018(0x0170)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bSweep;                                            // 0x0188(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0189(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_Synergy.TraceComponent_100009.OnPreOutTraceResults
// 0x0178 (0x0178 - 0x0000)
struct TraceComponent_100009_OnPreOutTraceResults final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0170(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnAbilityActivate
// 0x0004 (0x0004 - 0x0000)
struct BuffManagerAbility_100009_OnAbilityActivate final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnAbilityEnded
// 0x0004 (0x0004 - 0x0000)
struct BuffManagerAbility_100009_OnAbilityEnded final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnBuffExecuted
// 0x0018 (0x0018 - 0x0000)
struct BuffManagerAbility_100009_OnBuffExecuted final
{
public:
	class UAbilitySystemComponent*                AbilitySystemComponent;                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecStackHandle         EffectSpecHandle;                                  // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            EffectHandle;                                      // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnBuffRemoved
// 0x0768 (0x0768 - 0x0000)
struct BuffManagerAbility_100009_OnBuffRemoved final
{
public:
	struct FGameplayEffectSpec                    RemovedSpec;                                       // 0x0000(0x0760)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bPrematureRemoval;                                 // 0x0760(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_761[0x7];                                      // 0x0761(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnOwnerCollide
// 0x01A0 (0x01A0 - 0x0000)
struct BuffManagerAbility_100009_OnOwnerCollide final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0030(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.BuffManagerAbility_100009.OnOwnerTakeDamage
// 0x0028 (0x0028 - 0x0000)
struct BuffManagerAbility_100009_OnOwnerTakeDamage final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.AddWavingData
// 0x0170 (0x0170 - 0x0000)
struct Ability_100015_AddWavingData final
{
public:
	struct FHitResult                             InHitResult;                                       // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.CancelRelevantSynergyAbility
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_CancelRelevantSynergyAbility final
{
public:
	bool                                          bNormalEnd;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.ClientCheckWavingState
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_ClientCheckWavingState final
{
public:
	ESynergyWavingState                           AuthorityRoleState;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.CustomCommitSynergyCoolDown
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_CustomCommitSynergyCoolDown final
{
public:
	bool                                          bNormalEnd;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.GetDashPortalSegments
// 0x0050 (0x0050 - 0x0000)
struct Ability_100015_GetDashPortalSegments final
{
public:
	struct FPortalSegments                        ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.GetRelevantSynergyAbility
// 0x0010 (0x0010 - 0x0000)
struct Ability_100015_GetRelevantSynergyAbility final
{
public:
	class AMarvelBaseCharacter*                   InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbility_100015*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.HasActiveBond
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_HasActiveBond final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.IsAbilityNormalEnd
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_IsAbilityNormalEnd final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.OnCoopAbilityTickStateChanged
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_OnCoopAbilityTickStateChanged final
{
public:
	bool                                          bShouldAbilityTick;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.OnOwnerGameplayTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct Ability_100015_OnOwnerGameplayTagUpdate final
{
public:
	struct FGameplayTag                           InTag;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTagExists;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_Synergy.Ability_100015.OnRideCancel
// 0x0004 (0x0004 - 0x0000)
struct Ability_100015_OnRideCancel final
{
public:
	float                                         StateIntervalTime;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.SetCurrentWavingCharacter
// 0x0008 (0x0008 - 0x0000)
struct Ability_100015_SetCurrentWavingCharacter final
{
public:
	const class AActor*                           TargetActor;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.SetWavingConfirmedByCharacter
// 0x0008 (0x0008 - 0x0000)
struct Ability_100015_SetWavingConfirmedByCharacter final
{
public:
	class AMarvelBaseCharacter*                   InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.SetWavingState
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_SetWavingState final
{
public:
	ESynergyWavingState                           InNewState;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100015.GetWavingState
// 0x0001 (0x0001 - 0x0000)
struct Ability_100015_GetWavingState final
{
public:
	ESynergyWavingState                           ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100016.BroadcastThrowSplineHudEnabled
// 0x0001 (0x0001 - 0x0000)
struct Ability_100016_BroadcastThrowSplineHudEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100016.OnThrowCharacterCoopRideStateChanged
// 0x0010 (0x0010 - 0x0000)
struct Ability_100016_OnThrowCharacterCoopRideStateChanged final
{
public:
	bool                                          bIsRiding;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarvelBaseCharacter*                   RideCharacter;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100016.PredictThrowDataWhenPressed
// 0x0030 (0x0030 - 0x0000)
struct Ability_100016_PredictThrowDataWhenPressed final
{
public:
	struct FVector                                PredictVelocity;                                   // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        PredictionPath;                                    // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         MaxFallSeconds;                                    // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxJumpHeightDown;                                 // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Ability_100016.PredictThrowVelocity
// 0x0038 (0x0038 - 0x0000)
struct Ability_100016_PredictThrowVelocity final
{
public:
	float                                         PredictSpeed;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRemoteRole;                                       // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               InRotator;                                         // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Cue_Ability_Loop_100016.OnOwnerAbilityThrowSplineHudEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct Cue_Ability_Loop_100016_OnOwnerAbilityThrowSplineHudEnabledChanged final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Cue_Ability_Loop_100016.OnPressRelease
// 0x0004 (0x0004 - 0x0000)
struct Cue_Ability_Loop_100016_OnPressRelease final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_Synergy.Cue_Ability_Loop_100016.OnPressTimeMin
// 0x0004 (0x0004 - 0x0000)
struct Cue_Ability_Loop_100016_OnPressTimeMin final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

