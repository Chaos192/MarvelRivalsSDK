﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingPageAudio

#include "Basic.hpp"

#include "PyWidget_SettingPageBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SettingPageAudio.PyWidget_SettingyPageAudio
// 0x0008 (0x0608 - 0x0600)
class UPyWidget_SettingyPageAudio : public UPyWidget_SettingPageBase
{
public:
	class UPrimaryDataAsset*                      SubtitleSettings;                                  // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingyPageAudio">();
	}
	static class UPyWidget_SettingyPageAudio* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingyPageAudio>();
	}
};

}

