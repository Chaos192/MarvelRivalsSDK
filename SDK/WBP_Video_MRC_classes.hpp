﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Video_MRC

#include "Basic.hpp"

#include "PyWidget_VideoMRCEntry_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Video_MRC.WBP_Video_MRC_C
// 0x0018 (0x0630 - 0x0618)
class UWBP_Video_MRC_C final : public UPyWidget_VideoMRCEntry
{
public:
	class UWidgetAnimation*                       Anime_FadeIn;                                      // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           LeagueVideo;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LeagueVideoSizeBox;                                // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Video_MRC_C">();
	}
	static class UWBP_Video_MRC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Video_MRC_C>();
	}
};

}

