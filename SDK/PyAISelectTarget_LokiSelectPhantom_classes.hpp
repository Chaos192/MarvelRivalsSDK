﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_LokiSelectPhantom

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_LokiSelectPhantom.PyAISelectTarget_LokiSelectPhantom
// 0x0008 (0x0078 - 0x0070)
class UPyAISelectTarget_LokiSelectPhantom : public UPyAISelectTargetLogicBase
{
public:
	float                                         Range;                                             // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoTargetChance;                                    // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_LokiSelectPhantom">();
	}
	static class UPyAISelectTarget_LokiSelectPhantom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_LokiSelectPhantom>();
	}
};

}

