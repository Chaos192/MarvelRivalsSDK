﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1050

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum Hero_1050.EScopeEnableType_105071
// NumValues: 0x0004
enum class EScopeEnableType_105071 : uint8
{
	Type_Default                             = 0,
	Type_Forbidden                           = 1,
	Type_GlobalOne                           = 2,
	Type_MAX                                 = 3,
};

// ScriptStruct Hero_1050.OverlayMaterialSets
// 0x0068 (0x0068 - 0x0000)
struct FOverlayMaterialSets final
{
public:
	class UMaterialInterface*                     GlobalOverlayMaterial;                             // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UMaterialInterface*>  SpecialOverlayMaterials;                           // 0x0008(0x0050)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x10];                                      // 0x0058(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Hero_1050.MaterialParamCopyInfo
// 0x0030 (0x0030 - 0x0000)
struct FMaterialParamCopyInfo final
{
public:
	TArray<class FName>                           SyncScalarParams;                                  // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                           SyncTextureParams;                                 // 0x0010(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                           SyncColorParams;                                   // 0x0020(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct Hero_1050.UpdateSummonedTickFunction_105071
// 0x0008 (0x0038 - 0x0030)
struct FUpdateSummonedTickFunction_105071 final : public FTickFunction
{
public:
	class AScope_10507101*                        Scope;                                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

