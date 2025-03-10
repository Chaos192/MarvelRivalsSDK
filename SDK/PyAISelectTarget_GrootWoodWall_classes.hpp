﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_GrootWoodWall

#include "Basic.hpp"

#include "PyAISelectTarget_SelectGroundPoint_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_GrootWoodWall.PyAISelectTarget_GrootSetWoodWall_Defend
// 0x0008 (0x0588 - 0x0580)
class UPyAISelectTarget_GrootSetWoodWall_Defend : public UPyAISelectTarget_SelectGroundPointInRange
{
public:
	float                                         LowHealthPercent;                                  // 0x0580(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeammateRange;                                     // 0x0584(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_GrootSetWoodWall_Defend">();
	}
	static class UPyAISelectTarget_GrootSetWoodWall_Defend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_GrootSetWoodWall_Defend>();
	}
};

// PythonClass PyAISelectTarget_GrootWoodWall.PyAISelectTarget_GrootSetWoodWall_Distrub
// 0x0000 (0x0580 - 0x0580)
class UPyAISelectTarget_GrootSetWoodWall_Distrub : public UPyAISelectTarget_SelectGroundPointInRange
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_GrootSetWoodWall_Distrub">();
	}
	static class UPyAISelectTarget_GrootSetWoodWall_Distrub* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_GrootSetWoodWall_Distrub>();
	}
};

// PythonClass PyAISelectTarget_GrootWoodWall.PyAISelectTarget_GrootWoodWall_Test
// 0x0008 (0x0578 - 0x0570)
class UPyAISelectTarget_GrootWoodWall_Test final : public UPyAISelectTarget_SelectGroundPointBase
{
public:
	float                                         OffsetDist;                                        // 0x0570(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_GrootWoodWall_Test">();
	}
	static class UPyAISelectTarget_GrootWoodWall_Test* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_GrootWoodWall_Test>();
	}
};

}

