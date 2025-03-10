﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMVPDisplayRuleComponent

#include "Basic.hpp"

#include "MarvelLevel_classes.hpp"
#include "PyRuleComponent_classes.hpp"


namespace SDK
{

// PythonClass PyMVPDisplayRuleComponent.PyMVPDisplayConfig
// 0x0010 (0x0040 - 0x0030)
class UPyMVPDisplayConfig final : public UMarvelRuleConfig
{
public:
	TArray<class UTexture2D*>                     MVPIconOverrideList;                               // 0x0030(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMVPDisplayConfig">();
	}
	static class UPyMVPDisplayConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMVPDisplayConfig>();
	}
};

// PythonClass PyMVPDisplayRuleComponent.PyMVPDisplayRuleComponent
// 0x0010 (0x0100 - 0x00F0)
class UPyMVPDisplayRuleComponent final : public UPyRuleComponent
{
public:
	TArray<class UTexture2D*>                     MVPIconOverrideList;                               // 0x00F0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMVPDisplayRuleComponent">();
	}
	static class UPyMVPDisplayRuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMVPDisplayRuleComponent>();
	}
};

}

