﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingPageOther

#include "Basic.hpp"

#include "PyWidget_SettingPageBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SettingPageOther.PyWidget_SettingPageOther
// 0x0000 (0x0600 - 0x0600)
class UPyWidget_SettingPageOther : public UPyWidget_SettingPageBase
{
public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingPageOther">();
	}
	static class UPyWidget_SettingPageOther* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingPageOther>();
	}
};

}

