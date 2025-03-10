﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_RandomShootFront

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_RandomShootFront.PyAISelectTarget_RandomShootFront
// 0x0010 (0x0080 - 0x0070)
class UPyAISelectTarget_RandomShootFront : public UPyAISelectTargetLogicBase
{
public:
	float                                         Offset;                                            // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedThreshold;                                    // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugDisplayDuration;                              // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_RandomShootFront">();
	}
	static class UPyAISelectTarget_RandomShootFront* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_RandomShootFront>();
	}
};

}

