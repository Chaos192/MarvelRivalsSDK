﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Battle_KeyTips

#include "Basic.hpp"

#include "PyWidget_Novice_BattleTips_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Battle_KeyTips.WBP_Battle_KeyTips_C
// 0x0028 (0x0668 - 0x0640)
class UWBP_Battle_KeyTips_C final : public UPyWidget_Novice_BattleTips
{
public:
	class UWidgetAnimation*                       Anim_State;                                        // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TipsBg1_ExclamationMark;                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TipsBg3_ExclamationMark;                       // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   RText_TipsContent;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_TipsTitle;                                    // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Battle_KeyTips_C">();
	}
	static class UWBP_Battle_KeyTips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Battle_KeyTips_C>();
	}
};

}

