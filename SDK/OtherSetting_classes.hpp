﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OtherSetting

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass OtherSetting.UISettingEntryCMPHandler
// 0x0000 (0x0030 - 0x0030)
class UUISettingEntryCMPHandler final : public UUISettingEntrySettingHandler
{
public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingEntryCMPHandler">();
	}
	static class UUISettingEntryCMPHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingEntryCMPHandler>();
	}
};

// PythonClass OtherSetting.UISettingEntryAccountDeletionHandler
// 0x0000 (0x0030 - 0x0030)
class UUISettingEntryAccountDeletionHandler final : public UUISettingEntrySettingHandler
{
public:
	TMap<class FString, int32> BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UISettingEntryAccountDeletionHandler">();
	}
	static class UUISettingEntryAccountDeletionHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUISettingEntryAccountDeletionHandler>();
	}
};

}

