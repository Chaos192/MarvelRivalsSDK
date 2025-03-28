﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_EntrySlot_Personal

#include "Basic.hpp"

#include "WBP_Settlement_EntrySlot_Personal_classes.hpp"
#include "WBP_Settlement_EntrySlot_Personal_parameters.hpp"


namespace SDK
{

// Function WBP_Settlement_EntrySlot_Personal.WBP_Settlement_EntrySlot_Personal_C.ExecuteUbergraph_WBP_Settlement_EntrySlot_Personal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settlement_EntrySlot_Personal_C::ExecuteUbergraph_WBP_Settlement_EntrySlot_Personal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settlement_EntrySlot_Personal_C", "ExecuteUbergraph_WBP_Settlement_EntrySlot_Personal");

	Params::WBP_Settlement_EntrySlot_Personal_C_ExecuteUbergraph_WBP_Settlement_EntrySlot_Personal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settlement_EntrySlot_Personal.WBP_Settlement_EntrySlot_Personal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settlement_EntrySlot_Personal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settlement_EntrySlot_Personal_C", "PreConstruct");

	Params::WBP_Settlement_EntrySlot_Personal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

