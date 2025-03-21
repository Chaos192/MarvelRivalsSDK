﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_PropCancelBtn

#include "Basic.hpp"

#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePass_PropCancelBtn.WBP_BattlePass_PropCancelBtn_C
// 0x0050 (0x0940 - 0x08F0)
class UWBP_BattlePass_PropCancelBtn_C final : public UPyWidget_CommonButton_Lv1
{
public:
	class UWidgetAnimation*                       Anim_FadeIn_PropConfirm;                           // 0x08E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_Bg;                                        // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_HoverBg;                                   // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_HoverBg_Left;                              // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_HoverBg_Right;                             // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_PressBg;                                   // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_PressBg_Left;                              // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_PressBg_Right;                             // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         MarvelOverlay;                                     // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Hover;                                     // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Press;                                     // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattlePass_PropCancelBtn_C">();
	}
	static class UWBP_BattlePass_PropCancelBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattlePass_PropCancelBtn_C>();
	}
};

}

