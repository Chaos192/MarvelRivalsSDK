﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUIController_SettingPage_Base

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// PythonClass PyUIController_SettingPage_Base.PyUIController_SettingPage_Base
// 0x0000 (0x0030 - 0x0030)
class UPyUIController_SettingPage_Base : public UObject
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_SettingPage_Base">();
	}
	static class UPyUIController_SettingPage_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_SettingPage_Base>();
	}
};

}

