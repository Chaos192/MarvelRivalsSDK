﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103702

#include "Basic.hpp"

#include "Hero_1037_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103702.PyConfig_103702
// 0x0010 (0x1130 - 0x1120)
class UPyConfig_103702 final : public UConfig_103702
{
public:
	float                                         HoldTime;                                          // 0x1120(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103702">();
	}
	static class UPyConfig_103702* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103702>();
	}
};

// PythonClass PyAbility_103702.PyAbility_103702
// 0x0000 (0x25A0 - 0x25A0)
class UPyAbility_103702 : public UMarvelAbility_LongPressTrigger
{
public:
	void BeginPlay();
	bool CanActivate();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103702">();
	}
	static class UPyAbility_103702* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103702>();
	}
};

}

