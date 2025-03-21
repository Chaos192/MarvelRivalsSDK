﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1018

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Hero_1018_structs.hpp"
#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Hero_1018.Projectile_101811.GetAimDirection
// 0x0018 (0x0018 - 0x0000)
struct Projectile_101811_GetAimDirection final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Projectile_101811.GetAimStart
// 0x0018 (0x0018 - 0x0000)
struct Projectile_101811_GetAimStart final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Projectile_101811.SetAimLine
// 0x0030 (0x0030 - 0x0000)
struct Projectile_101811_SetAimLine final
{
public:
	struct FVector                                InAimStart;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InAimDirection;                                    // 0x0018(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Projectile_101811.SetProjectileSpreadRotateInfo
// 0x0010 (0x0010 - 0x0000)
struct Projectile_101811_SetProjectileSpreadRotateInfo final
{
public:
	struct FProjectileSpreadRotateInfo            InProjectileSpreadRotateInfo;                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Ability_Loop_10181901.CreateCustomMaterial
// 0x0008 (0x0008 - 0x0000)
struct Cue_Ability_Loop_10181901_CreateCustomMaterial final
{
public:
	class USkeletalMeshComponent*                 InHandShadowComponent;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.BarrierTraceGround
// 0x0001 (0x0001 - 0x0000)
struct Summoned_10184101_BarrierTraceGround final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.GetOwnerCharacter
// 0x0008 (0x0008 - 0x0000)
struct Summoned_10184101_GetOwnerCharacter final
{
public:
	class AMarvelBaseCharacter*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.GetOwningAbility
// 0x0008 (0x0008 - 0x0000)
struct Summoned_10184101_GetOwningAbility final
{
public:
	class UMarvelBaseGameplayAbility*             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.GetOwningAbilityConfig
// 0x0008 (0x0008 - 0x0000)
struct Summoned_10184101_GetOwningAbilityConfig final
{
public:
	class UMarvelAbilityConfig*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.HasFreeCamBuff
// 0x0001 (0x0001 - 0x0000)
struct Summoned_10184101_HasFreeCamBuff final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.K2_SetAlive
// 0x0001 (0x0001 - 0x0000)
struct Summoned_10184101_K2_SetAlive final
{
public:
	bool                                          bInAlive;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Summoned_10184101.SetPitchLimit
// 0x0004 (0x0004 - 0x0000)
struct Summoned_10184101_SetPitchLimit final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101851.GetCurrentDarkManaValue
// 0x0004 (0x0004 - 0x0000)
struct Ability_101851_GetCurrentDarkManaValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101851.GetDarkManaValue
// 0x0004 (0x0004 - 0x0000)
struct Ability_101851_GetDarkManaValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.EmptyEventOnPressOrReleaseInput
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_EmptyEventOnPressOrReleaseInput final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnPressCameraDrop
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnPressCameraDrop final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnPressCameraRise
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnPressCameraRise final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnPressCameraSpeedDown
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnPressCameraSpeedDown final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnPressCameraSpeedUp
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnPressCameraSpeedUp final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnPressEndAbility
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnPressEndAbility final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnReleaseCameraDrop
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnReleaseCameraDrop final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnReleaseCameraRise
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnReleaseCameraRise final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnReleaseEndAbility
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnReleaseEndAbility final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnReleasePlaceOrRemovePortal
// 0x0004 (0x0004 - 0x0000)
struct Ability_101861_OnReleasePlaceOrRemovePortal final
{
public:
	float                                         TimeWaited;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnServerSpawnPortalSuccess
// 0x0008 (0x0008 - 0x0000)
struct Ability_101861_OnServerSpawnPortalSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.OnViewingCharacterChanged
// 0x0008 (0x0008 - 0x0000)
struct Ability_101861_OnViewingCharacterChanged final
{
public:
	class AMarvelBaseCharacter*                   ViewingTarget;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.ServerHandleEventAndMsg
// 0x0140 (0x0140 - 0x0000)
struct Ability_101861_ServerHandleEventAndMsg final
{
public:
	EPlaceEvent_101861                            NewPlaceEvent;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAbilityPlaceMsg_101861                NewPlaceMsg;                                       // 0x0010(0x0130)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.SimulatedHandleEventAndMsg
// 0x0140 (0x0140 - 0x0000)
struct Ability_101861_SimulatedHandleEventAndMsg final
{
public:
	EPlaceEvent_101861                            NewPlaceEvent;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAbilityPlaceMsg_101861                NewPlaceMsg;                                       // 0x0010(0x0130)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101861.GetPlaceEvent
// 0x0001 (0x0001 - 0x0000)
struct Ability_101861_GetPlaceEvent final
{
public:
	EPlaceEvent_101861                            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.TracePortalCameraActor_101861.NetMulticastInitTransform
// 0x0060 (0x0060 - 0x0000)
struct TracePortalCameraActor_101861_NetMulticastInitTransform final
{
public:
	struct FTransform                             InitTransform;                                     // 0x0000(0x0060)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.TracePortalCameraActor_101861.OnBirthBaseActiveDispatch
// 0x0008 (0x0008 - 0x0000)
struct TracePortalCameraActor_101861_OnBirthBaseActiveDispatch final
{
public:
	class AActor*                                 InBirthBase;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.SummonedComp_10187101.UpdateSoulOffset
// 0x0018 (0x0018 - 0x0000)
struct SummonedComp_10187101_UpdateSoulOffset final
{
public:
	struct FVector                                OutValue;                                          // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.EffectAbility_101871.OnCharacterPreDeath
// 0x0028 (0x0028 - 0x0000)
struct EffectAbility_101871_OnCharacterPreDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Summoner_Loop_10187101.BindMeshMaterialVisibleChanged
// 0x0008 (0x0008 - 0x0000)
struct Cue_Summoner_Loop_10187101_BindMeshMaterialVisibleChanged final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Summoner_Loop_10187101.GetHideBones
// 0x0018 (0x0018 - 0x0000)
struct Cue_Summoner_Loop_10187101_GetHideBones final
{
public:
	class USkeletalMeshComponent*                 TargetMesh;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Summoner_Loop_10187101.SetMaterialHidden
// 0x0008 (0x0008 - 0x0000)
struct Cue_Summoner_Loop_10187101_SetMaterialHidden final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.GetCurrentDarkMana
// 0x0004 (0x0004 - 0x0000)
struct Ability_101881_GetCurrentDarkMana final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.GetCurrentManaPercentage
// 0x0004 (0x0004 - 0x0000)
struct Ability_101881_GetCurrentManaPercentage final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnAbilityDamage
// 0x0020 (0x0020 - 0x0000)
struct Ability_101881_OnAbilityDamage final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnAbilityHit
// 0x0018 (0x0018 - 0x0000)
struct Ability_101881_OnAbilityHit final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnBondAbilityTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct Ability_101881_OnBondAbilityTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1018.Ability_101881.OnManaAttributeChanged
// 0x0020 (0x0020 - 0x0000)
struct Ability_101881_OnManaAttributeChanged final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnOwnerAbilityMissile
// 0x0008 (0x0008 - 0x0000)
struct Ability_101881_OnOwnerAbilityMissile final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnOwnerActivateAbility
// 0x0004 (0x0004 - 0x0000)
struct Ability_101881_OnOwnerActivateAbility final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnOwnerCharactorReborn
// 0x0740 (0x0740 - 0x0000)
struct Ability_101881_OnOwnerCharactorReborn final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterRebornParam                  Param;                                             // 0x0010(0x0730)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.OnOwnerDeath
// 0x0028 (0x0028 - 0x0000)
struct Ability_101881_OnOwnerDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.SetDarkManaValue
// 0x0004 (0x0004 - 0x0000)
struct Ability_101881_SetDarkManaValue final
{
public:
	float                                         InDarkManaValue;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Ability_101881.IsBondAbilityState
// 0x0001 (0x0001 - 0x0000)
struct Ability_101881_IsBondAbilityState final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Ability_Loop_10188101.OnBondAbilityTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct Cue_Ability_Loop_10188101_OnBondAbilityTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1018.Cue_Ability_Loop_10188101.OnCloakColorChanged
// 0x001C (0x001C - 0x0000)
struct Cue_Ability_Loop_10188101_OnCloakColorChanged final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Ability_Loop_10188101.OnDarkManaValueChanged
// 0x0004 (0x0004 - 0x0000)
struct Cue_Ability_Loop_10188101_OnDarkManaValueChanged final
{
public:
	float                                         ManaPercentage;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Ability_Loop_10188101.SetEndCenterEdgeMaterialValue
// 0x001C (0x001C - 0x0000)
struct Cue_Ability_Loop_10188101_SetEndCenterEdgeMaterialValue final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.Cue_Ability_Loop_10188101.SetStartCenterEdgeMaterialValue
// 0x001C (0x001C - 0x0000)
struct Cue_Ability_Loop_10188101_SetStartCenterEdgeMaterialValue final
{
public:
	class FName                                   TrackName;                                         // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutValue;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.DoctorStrangeCharacter.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct DoctorStrangeCharacter_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTagExists;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1018.DoctorStrangeCharacter.SetIsDefending
// 0x0001 (0x0001 - 0x0000)
struct DoctorStrangeCharacter_SetIsDefending final
{
public:
	bool                                          bInShield;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.DoctorStrangeCharacter.SetIsFloating
// 0x0001 (0x0001 - 0x0000)
struct DoctorStrangeCharacter_SetIsFloating final
{
public:
	bool                                          bIsFloating_0;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.DoctorStrangeCharacter.SetIsFlying
// 0x0001 (0x0001 - 0x0000)
struct DoctorStrangeCharacter_SetIsFlying final
{
public:
	bool                                          bFlying;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.EpicMomentAction_1018.OnActorTakeDamage
// 0x0030 (0x0030 - 0x0000)
struct EpicMomentAction_1018_OnActorTakeDamage final
{
public:
	class AActor*                                 Instigator;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1018.EpicMomentAction_1018.OnGameplayEffectAppliedToTarget
// 0x0018 (0x0018 - 0x0000)
struct EpicMomentAction_1018_OnGameplayEffectAppliedToTarget final
{
public:
	class UAbilitySystemComponent*                ASC;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecStackHandle         GameplayEffectSpecHandle;                          // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            ActiveGameplayEffectHandle;                        // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1018.TabData_1018.OnActorPreDeath
// 0x0030 (0x0030 - 0x0000)
struct TabData_1018_OnActorPreDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1018.TabData_1018.OnActorTakeDamage
// 0x0030 (0x0030 - 0x0000)
struct TabData_1018_OnActorTakeDamage final
{
public:
	class AActor*                                 Instigator;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

