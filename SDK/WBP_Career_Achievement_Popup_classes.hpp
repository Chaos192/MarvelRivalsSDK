﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Career_Achievement_Popup

#include "Basic.hpp"

#include "PyWidget_Career_AchievementPopup_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Career_Achievement_Popup.WBP_Career_Achievement_Popup_C
// 0x0010 (0x0620 - 0x0610)
class UWBP_Career_Achievement_Popup_C final : public UPyWidget_Career_AchievementPopup
{
public:
	class UMarvelImage*                           Img_Complete;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Complete;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Career_Achievement_Popup_C">();
	}
	static class UWBP_Career_Achievement_Popup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Career_Achievement_Popup_C>();
	}
};

}

