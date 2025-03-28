﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Video_BackGroud

#include "Basic.hpp"

#include "PyWidgetVideoBackground_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Video_BackGroud.WBP_Video_BackGroud_C
// 0x0030 (0x0670 - 0x0640)
class UWBP_Video_BackGroud_C final : public UPyWidgetVideoBackground
{
public:
	class UWidgetAnimation*                       Anime_FadeIn;                                      // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           AllVideo;                                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           LobbyVideo;                                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LobbyVideoSizeBox;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LogoVXSlot;                                        // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               VideoSizeBox;                                      // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Video_BackGroud_C">();
	}
	static class UWBP_Video_BackGroud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Video_BackGroud_C>();
	}
};

}

