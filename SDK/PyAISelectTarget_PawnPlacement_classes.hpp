﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_PawnPlacement

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"
#include "MarvelAI_structs.hpp"
#include "Marvel_structs.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_PawnPlacement.PyAISelectTarget_PawnPlacementBase
// 0x0000 (0x0070 - 0x0070)
class UPyAISelectTarget_PawnPlacementBase : public UPyAISelectTargetLogicBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_PawnPlacementBase">();
	}
	static class UPyAISelectTarget_PawnPlacementBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_PawnPlacementBase>();
	}
};

// PythonClass PyAISelectTarget_PawnPlacement.PyAISelectTarget_LokiRandomSetPhantom
// 0x0010 (0x0080 - 0x0070)
class UPyAISelectTarget_LokiRandomSetPhantom : public UPyAISelectTarget_PawnPlacementBase
{
public:
	int32                                         AbilityID;                                         // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_FloatValue                      Range;                                             // 0x0074(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_LokiRandomSetPhantom">();
	}
	static class UPyAISelectTarget_LokiRandomSetPhantom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_LokiRandomSetPhantom>();
	}
};

// PythonClass PyAISelectTarget_PawnPlacement.PyAISelectTarget_LokiSetPhantomNearShelter
// 0x0010 (0x0080 - 0x0070)
class UPyAISelectTarget_LokiSetPhantomNearShelter final : public UPyAISelectTarget_PawnPlacementBase
{
public:
	int32                                         AbilityID;                                         // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_FloatValue                      Range;                                             // 0x0074(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_LokiSetPhantomNearShelter">();
	}
	static class UPyAISelectTarget_LokiSetPhantomNearShelter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_LokiSetPhantomNearShelter>();
	}
};

// PythonClass PyAISelectTarget_PawnPlacement.PyAISelectTarget_1030_Ultimate
// 0x0508 (0x0578 - 0x0070)
class UPyAISelectTarget_1030_Ultimate final : public UPyAISelectTarget_PawnPlacementBase
{
public:
	int32                                         AbilityID;                                         // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RangeRadius;                                       // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarvelAbilityTargetFilter             TraceFilter;                                       // 0x0078(0x0500)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_1030_Ultimate">();
	}
	static class UPyAISelectTarget_1030_Ultimate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_1030_Ultimate>();
	}
};

}

