﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SystemBulletin

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SystemBulletin.PyWidget_SystemBulletin
// 0x0010 (0x0600 - 0x05F0)
class UPyWidget_SystemBulletin : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ShowOnServerList;                                  // 0x05F0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SystemBulletin">();
	}
	static class UPyWidget_SystemBulletin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SystemBulletin>();
	}
};

}

