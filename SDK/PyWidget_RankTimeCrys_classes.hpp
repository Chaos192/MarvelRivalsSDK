﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RankTimeCrys

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_RankTimeCrys.PyWidget_RankTimeCrys
// 0x0020 (0x0610 - 0x05F0)
class UPyWidget_RankTimeCrys : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnCrystalCharge;                           // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnCrystalChargeFinished;                   // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnCrystalDisappear;                        // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnCrystalDisappearFinished;                // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RankTimeCrys">();
	}
	static class UPyWidget_RankTimeCrys* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RankTimeCrys>();
	}
};

// PythonClass PyWidget_RankTimeCrys.PyWidget_RankTimeCrys_ProgressBar
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_RankTimeCrys_ProgressBar final : public UPyMarvelUserWidget
{
public:
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RankTimeCrys_ProgressBar">();
	}
	static class UPyWidget_RankTimeCrys_ProgressBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RankTimeCrys_ProgressBar>();
	}
};

}

