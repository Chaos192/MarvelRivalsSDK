﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_MatchInfo_Card

#include "Basic.hpp"

#include "WBP_Squad_MatchInfo_Card_classes.hpp"
#include "WBP_Squad_MatchInfo_Card_parameters.hpp"


namespace SDK
{

// Function WBP_Squad_MatchInfo_Card.WBP_Squad_MatchInfo_Card_C.ExecuteUbergraph_WBP_Squad_MatchInfo_Card
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Squad_MatchInfo_Card_C::ExecuteUbergraph_WBP_Squad_MatchInfo_Card(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Squad_MatchInfo_Card_C", "ExecuteUbergraph_WBP_Squad_MatchInfo_Card");

	Params::WBP_Squad_MatchInfo_Card_C_ExecuteUbergraph_WBP_Squad_MatchInfo_Card Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Squad_MatchInfo_Card.WBP_Squad_MatchInfo_Card_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_Squad_MatchInfo_Card_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Squad_MatchInfo_Card_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Squad_MatchInfo_Card.WBP_Squad_MatchInfo_Card_C.SequenceEvent__ENTRYPOINTWBP_Squad_MatchInfo_Card
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Squad_MatchInfo_Card_C::SequenceEvent__ENTRYPOINTWBP_Squad_MatchInfo_Card()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Squad_MatchInfo_Card_C", "SequenceEvent__ENTRYPOINTWBP_Squad_MatchInfo_Card");

	UObject::ProcessEvent(Func, nullptr);
}

}

