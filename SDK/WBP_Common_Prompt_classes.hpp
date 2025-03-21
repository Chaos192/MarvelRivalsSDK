﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Prompt

#include "Basic.hpp"

#include "PyWidget_Common_Prompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_Prompt.WBP_Common_Prompt_C
// 0x0020 (0x0960 - 0x0940)
class UWBP_Common_Prompt_C final : public UPyWidget_Common_Prompt
{
public:
	class UMarvelImage*                           Img_Prompt_Arrow;                                  // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Prompt_bg;                                     // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Prompt;                                    // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_BG;                                        // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Prompt;                                       // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_Prompt_C">();
	}
	static class UWBP_Common_Prompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_Prompt_C>();
	}
};

}

