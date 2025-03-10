﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingOptionEntryUtils

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// PythonClass SettingOptionEntryUtils.PySettingOptionEntryUtilsBluePrintLib
// 0x0000 (0x0030 - 0x0030)
class UPySettingOptionEntryUtilsBluePrintLib final : public UObject
{
public:
	static void request_tag_refresh(class UObject* Obj, const TArray<class FString>& refresh_tags);
	static void request_parent_setting_page_refresh(class UObject* Obj);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySettingOptionEntryUtilsBluePrintLib">();
	}
	static class UPySettingOptionEntryUtilsBluePrintLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySettingOptionEntryUtilsBluePrintLib>();
	}
};

}

