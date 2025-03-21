﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Btn_WYG

#include "Basic.hpp"

#include "WBP_Common_Btn_WYG_classes.hpp"
#include "WBP_Common_Btn_WYG_parameters.hpp"


namespace SDK
{

// Function WBP_Common_Btn_WYG.WBP_Common_Btn_WYG_C.Construct
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Common_Btn_WYG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Btn_WYG_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Btn_WYG.WBP_Common_Btn_WYG_C.ExecuteUbergraph_WBP_Common_Btn_WYG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Btn_WYG_C::ExecuteUbergraph_WBP_Common_Btn_WYG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Btn_WYG_C", "ExecuteUbergraph_WBP_Common_Btn_WYG");

	Params::WBP_Common_Btn_WYG_C_ExecuteUbergraph_WBP_Common_Btn_WYG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Btn_WYG.WBP_Common_Btn_WYG_C.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Btn_WYG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Btn_WYG_C", "PreConstruct");

	Params::WBP_Common_Btn_WYG_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Btn_WYG.WBP_Common_Btn_WYG_C.SetBtnName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Btn_Name                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Common_Btn_WYG_C::SetBtnName(const class FText& Btn_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Btn_WYG_C", "SetBtnName");

	Params::WBP_Common_Btn_WYG_C_SetBtnName Parms{};

	Parms.Btn_Name = std::move(Btn_Name);

	UObject::ProcessEvent(Func, &Parms);
}

}

