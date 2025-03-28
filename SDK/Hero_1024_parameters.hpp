﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1024

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Hero_1024.Ability_102411.OnActorDeath
// 0x0030 (0x0030 - 0x0000)
struct Ability_102411_OnActorDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1024.Ability_102411.OnAssistKill
// 0x0150 (0x0150 - 0x0000)
struct Ability_102411_OnAssistKill final
{
public:
	struct FUIKillInfo                            KillInfo;                                          // 0x0000(0x0150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Projectile_10244101.ListenHitComponentCollisionChanged
// 0x0010 (0x0010 - 0x0000)
struct Projectile_10244101_ListenHitComponentCollisionChanged final
{
public:
	class UPrimitiveComponent*                    InComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bListen;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1024.Projectile_10244101.OnHitComponentCollisionChanged
// 0x0008 (0x0008 - 0x0000)
struct Projectile_10244101_OnHitComponentCollisionChanged final
{
public:
	class UPrimitiveComponent*                    InPrimitiveComponent;                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Cue_Ability_Loop_10244101.GetFXRotation
// 0x0028 (0x0028 - 0x0000)
struct Cue_Ability_Loop_10244101_GetFXRotation final
{
public:
	class UNiagaraComponent*                      FXComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaTime;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Ability_102451.InBirthRoom
// 0x0001 (0x0001 - 0x0000)
struct Ability_102451_InBirthRoom final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Cue_Projectile_Loop_10245101.InitializeSummonedSceneIndicator
// 0x0004 (0x0004 - 0x0000)
struct Cue_Projectile_Loop_10245101_InitializeSummonedSceneIndicator final
{
public:
	float                                         TotalTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Cue_Projectile_Loop_10245101.OnViewingCharacterChanged
// 0x0008 (0x0008 - 0x0000)
struct Cue_Projectile_Loop_10245101_OnViewingCharacterChanged final
{
public:
	class AMarvelBaseCharacter*                   InCharacter;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.ForceMoveToAbility_102461.OnDashFinish
// 0x0001 (0x0001 - 0x0000)
struct ForceMoveToAbility_102461_OnDashFinish final
{
public:
	EDashStopReason                               InReason;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Ability_102471.ChangeGravityScale
// 0x0004 (0x0004 - 0x0000)
struct Ability_102471_ChangeGravityScale final
{
public:
	float                                         NewGravityScale;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Ability_102471.CheckHeightAboveGround
// 0x0001 (0x0001 - 0x0000)
struct Ability_102471_CheckHeightAboveGround final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Ability_102471.GetOriginGravityScale
// 0x0004 (0x0004 - 0x0000)
struct Ability_102471_GetOriginGravityScale final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Ability_102471.OnAbilityActiveFailed
// 0x0070 (0x0070 - 0x0000)
struct Ability_102471_OnAbilityActiveFailed final
{
public:
	const class UGameplayAbility*                 InAbility;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  Tags;                                              // 0x0008(0x0068)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Hero_1024.Cue_Ability_Loop_102491.GetWeaponSummoner
// 0x0008 (0x0008 - 0x0000)
struct Cue_Ability_Loop_102491_GetWeaponSummoner final
{
public:
	class APhysicsSummoner*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.HelaAnimInstance.OnFlyTagUpdated
// 0x0010 (0x0010 - 0x0000)
struct HelaAnimInstance_OnFlyTagUpdated final
{
public:
	struct FGameplayTag                           TagUpdated;                                        // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TagExists;                                         // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1024.HelaAnimInstance.SetAutoDescend
// 0x0001 (0x0001 - 0x0000)
struct HelaAnimInstance_SetAutoDescend final
{
public:
	bool                                          bInOpenAutoDescend;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.HelaCharacter.DelaySpawnPassiveAbilityDamageScope
// 0x00C0 (0x00C0 - 0x0000)
struct HelaCharacter_DelaySpawnPassiveAbilityDamageScope final
{
public:
	class UGameplayAbility*                       InAbility;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DelayTime;                                         // 0x00B0(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScopeId;                                           // 0x00B4(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Hero_1024.HelaCharacter.OnDeathDeal
// 0x0028 (0x0028 - 0x0000)
struct HelaCharacter_OnDeathDeal final
{
public:
	class AActor*                                 DamageCauser;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Hero_1024.HelaCharacter.OnRebornDeal
// 0x0740 (0x0740 - 0x0000)
struct HelaCharacter_OnRebornDeal final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterRebornParam                  Param;                                             // 0x0010(0x0730)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Hero_1024.TabData_1024.OnPostApplyDamage
// 0x0028 (0x0028 - 0x0000)
struct TabData_1024_OnPostApplyDamage final
{
public:
	class AActor*                                 InSource;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTarget;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

