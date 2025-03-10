﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Home_Ad_ItemPanel

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Advertisement_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Home_Ad_ItemPanel.WBP_Home_Ad_ItemPanel_C
// 0x0050 (0x0650 - 0x0600)
class UWBP_Home_Ad_ItemPanel_C final : public UPyWidget_HomeEntrance_Advertisement_Container_Widget
{
public:
	class UMarvelButton*                          Btn_Item;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Item_Hover;                                    // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_Content;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Slot_Main;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Activity_Toggle;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_Advertisement_C*     WBP_Home_Activity_Advertisement;                   // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_ToggleTab_C*         WBP_Home_Activity_ToggleTab_0;                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_ToggleTab_C*         WBP_Home_Activity_ToggleTab_1;                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_ToggleTab_C*         WBP_Home_Activity_ToggleTab_2;                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Home_Activity_ToggleTab_C*         WBP_Home_Activity_ToggleTab_3;                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Home_Ad_ItemPanel_C">();
	}
	static class UWBP_Home_Ad_ItemPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Home_Ad_ItemPanel_C>();
	}
};

}

