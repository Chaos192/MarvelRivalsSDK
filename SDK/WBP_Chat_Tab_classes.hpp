﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chat_Tab

#include "Basic.hpp"

#include "ChatTabSwitcher_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Chat_Tab.WBP_Chat_Tab_C
// 0x00B0 (0x0468 - 0x03B8)
class UWBP_Chat_Tab_C final : public UPyWidget_ChatChannelTab
{
public:
	class UMarvelImage*                           Img_ChatTab_Bg;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_ChatTab_Select;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            私聊颜色;                                          // 0x03C8(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            比赛颜色;                                          // 0x03DC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            队伍颜色;                                          // 0x03F0(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           Color_World;                                       // 0x0404(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_Team;                                        // 0x0414(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_Game;                                        // 0x0424(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_Private;                                     // 0x0434(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_Clan;                                        // 0x0444(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_League_Room;                                 // 0x0454(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Chat_Tab_C">();
	}
	static class UWBP_Chat_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Chat_Tab_C>();
	}
};

}

