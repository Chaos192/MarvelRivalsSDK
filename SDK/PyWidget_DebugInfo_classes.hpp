﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DebugInfo

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_DebugInfo.PyWC_DebugInfo
// 0x0010 (0x0AC0 - 0x0AB0)
class UPyWC_DebugInfo : public UWidgetComponent
{
public:
	int32                                         Offset_Z;                                          // 0x0AB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Summoned_Offset_Z;                                 // 0x0AB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWC_DebugInfo">();
	}
	static class UPyWC_DebugInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWC_DebugInfo>();
	}
};

// PythonClass PyWidget_DebugInfo.PyWidget_DebugInfo
// 0x0008 (0x03C0 - 0x03B8)
class UPyWidget_DebugInfo : public UUserWidget
{
public:
	TSubclassOf<class UUserWidget>                Class_TextBlock;                                   // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DebugInfo">();
	}
	static class UPyWidget_DebugInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DebugInfo>();
	}
};

// PythonClass PyWidget_DebugInfo.PyWidget_DebugInfoText
// 0x0000 (0x03B8 - 0x03B8)
class UPyWidget_DebugInfoText : public UUserWidget
{
public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DebugInfoText">();
	}
	static class UPyWidget_DebugInfoText* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DebugInfoText>();
	}
};

}

