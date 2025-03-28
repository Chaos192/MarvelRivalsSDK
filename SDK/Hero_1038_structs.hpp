﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1038

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// Enum Hero_1038.EScopeState_103811
// NumValues: 0x0005
enum class EScopeState_103811 : uint8
{
	Default                                  = 0,
	Damaging                                 = 1,
	LoseTarget                               = 2,
	Release                                  = 3,
	EScopeState_MAX                          = 4,
};

// Enum Hero_1038.EFXState_103871
// NumValues: 0x0005
enum class EFXState_103871 : uint8
{
	None                                     = 0,
	Left                                     = 1,
	Right                                    = 2,
	Double                                   = 3,
	EFXState_MAX                             = 4,
};

// ScriptStruct Hero_1038.FXConfig_103871
// 0x0028 (0x0028 - 0x0000)
struct FFXConfig_103871 final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           AbilityTag;                                        // 0x0004(0x000C)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsedCombo;                                        // 0x0010(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFXState_103871>                       FXState;                                           // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1038.MaterialFadeInfo_103871
// 0x0028 (0x0028 - 0x0000)
struct FMaterialFadeInfo_103871 final
{
public:
	struct FGameplayTag                           AbilityTag;                                        // 0x0000(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeInTime;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeoutTime;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            FadeInCurve;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            FadeOutCurve;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

