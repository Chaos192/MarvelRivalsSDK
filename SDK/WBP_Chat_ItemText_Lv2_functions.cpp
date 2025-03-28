﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chat_ItemText_Lv2

#include "Basic.hpp"

#include "WBP_Chat_ItemText_Lv2_classes.hpp"
#include "WBP_Chat_ItemText_Lv2_parameters.hpp"


namespace SDK
{

// Function WBP_Chat_ItemText_Lv2.WBP_Chat_ItemText_Lv2_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Chat_ItemText_Lv2_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chat_ItemText_Lv2_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Chat_ItemText_Lv2.WBP_Chat_ItemText_Lv2_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chat_ItemText_Lv2_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chat_ItemText_Lv2_C", "BP_OnItemExpansionChanged");

	Params::WBP_Chat_ItemText_Lv2_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Chat_ItemText_Lv2.WBP_Chat_ItemText_Lv2_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chat_ItemText_Lv2_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chat_ItemText_Lv2_C", "BP_OnItemSelectionChanged");

	Params::WBP_Chat_ItemText_Lv2_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Chat_ItemText_Lv2.WBP_Chat_ItemText_Lv2_C.ExecuteUbergraph_WBP_Chat_ItemText_Lv2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chat_ItemText_Lv2_C::ExecuteUbergraph_WBP_Chat_ItemText_Lv2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Chat_ItemText_Lv2_C", "ExecuteUbergraph_WBP_Chat_ItemText_Lv2");

	Params::WBP_Chat_ItemText_Lv2_C_ExecuteUbergraph_WBP_Chat_ItemText_Lv2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

