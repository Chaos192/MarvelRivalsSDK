﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Toggle

#include "Basic.hpp"

#include "PyWidget_PageList_SegmentedScrollbar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Toggle.WBP_Mall_Toggle_C
// 0x0010 (0x0638 - 0x0628)
class UWBP_Mall_Toggle_C final : public UPyWidget_PageList_SegmentedScrollbar
{
public:
	class UMarvelOverlay*                         MarvelOverlay;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_TabList;                                      // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Toggle_C">();
	}
	static class UWBP_Mall_Toggle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Toggle_C>();
	}
};

}

