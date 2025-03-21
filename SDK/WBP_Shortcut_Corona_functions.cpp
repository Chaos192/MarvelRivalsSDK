﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Shortcut_Corona

#include "Basic.hpp"

#include "WBP_Shortcut_Corona_classes.hpp"
#include "WBP_Shortcut_Corona_parameters.hpp"


namespace SDK
{

// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.ExecuteUbergraph_WBP_Shortcut_Corona
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shortcut_Corona_C::ExecuteUbergraph_WBP_Shortcut_Corona(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "ExecuteUbergraph_WBP_Shortcut_Corona");

	Params::WBP_Shortcut_Corona_C_ExecuteUbergraph_WBP_Shortcut_Corona Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Shortcut_Corona_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_Shortcut_Corona_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.SetCoronas
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<int32>&                    InCoronas                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Shortcut_Corona_C::SetCoronas(const TArray<int32>& InCoronas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "SetCoronas");

	Params::WBP_Shortcut_Corona_C_SetCoronas Parms{};

	Parms.InCoronas = std::move(InCoronas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.SetCoronaVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Invisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shortcut_Corona_C::SetCoronaVisible(int32 InPos, bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "SetCoronaVisible");

	Params::WBP_Shortcut_Corona_C_SetCoronaVisible Parms{};

	Parms.InPos = InPos;
	Parms.Invisible = Invisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Shortcut_Corona.WBP_Shortcut_Corona_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shortcut_Corona_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Shortcut_Corona_C", "Tick");

	Params::WBP_Shortcut_Corona_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

