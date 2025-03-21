﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroTeamFilter

#include "Basic.hpp"

#include "PyWidget_HeroTeamFilter_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroTeamFilter.WBP_HeroTeamFilter_C
// 0x0030 (0x0630 - 0x0600)
class UWBP_HeroTeamFilter_C final : public UPyWidget_HeroTeamFilter
{
public:
	class UWidgetAnimation*                       Anim_FadeIn_Right;                                 // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn_Left;                                  // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              DropDownList_Role;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              DropDownList_Team;                                 // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_DrawMenu;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Check_Text_C*               WBP_Common_Check_Text;                             // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroTeamFilter_C">();
	}
	static class UWBP_HeroTeamFilter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroTeamFilter_C>();
	}
};

}

