﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Secondary_OverwriteArchiveItem

#include "Basic.hpp"

#include "PyWidget_Secondary_OverwriteArchive_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Secondary_OverwriteArchiveItem.WBP_Secondary_OverwriteArchiveItem_C
// 0x0018 (0x03E0 - 0x03C8)
class UWBP_Secondary_OverwriteArchiveItem_C final : public UPyWidget_OverwriteArchiveItem
{
public:
	class UMarvelButton*                          Btn_Main;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Check_C*                    WBP_Check;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Secondary_OverwriteArchiveItem_C">();
	}
	static class UWBP_Secondary_OverwriteArchiveItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Secondary_OverwriteArchiveItem_C>();
	}
};

}

