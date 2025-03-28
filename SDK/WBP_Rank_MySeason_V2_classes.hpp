﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Rank_MySeason_V2

#include "Basic.hpp"

#include "PyWidget_Rank_MySeason_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Rank_MySeason_V2.WBP_Rank_MySeason_V2_C
// 0x0030 (0x0738 - 0x0708)
class UWBP_Rank_MySeason_V2_C final : public UPyWidget_Rank_MySeason
{
public:
	class UMarvelHorizontalBox*                   HBox_ResidualTime;                                 // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RewardListBg;                                  // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TitleBg;                                       // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelListView*                        ListView_RewardList;                               // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RemainTime;                                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_RankInfo_C*                   WBP_RankInfo;                                      // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Rank_MySeason_V2_C">();
	}
	static class UWBP_Rank_MySeason_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Rank_MySeason_V2_C>();
	}
};

}

