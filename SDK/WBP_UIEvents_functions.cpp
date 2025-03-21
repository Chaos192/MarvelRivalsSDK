﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UIEvents

#include "Basic.hpp"

#include "WBP_UIEvents_classes.hpp"
#include "WBP_UIEvents_parameters.hpp"


namespace SDK
{

// Function WBP_UIEvents.WBP_UIEvents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UIEvents_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIEvents_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UIEvents.WBP_UIEvents_C.ExecuteUbergraph_WBP_UIEvents
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIEvents_C::ExecuteUbergraph_WBP_UIEvents(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIEvents_C", "ExecuteUbergraph_WBP_UIEvents");

	Params::WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UIEvents.WBP_UIEvents_C.GetEventName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_UIEvents_C::GetEventName(class UAkAudioEvent* AkEvent, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIEvents_C", "GetEventName");

	Params::WBP_UIEvents_C_GetEventName Parms{};

	Parms.AkEvent = AkEvent;
	Parms.EventName = std::move(EventName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_UIEvents.WBP_UIEvents_C.OnPostAkEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     AkComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_UIEvents_C::OnPostAkEvent(class UAkComponent* AkComponent, class UAkAudioEvent* Event, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIEvents_C", "OnPostAkEvent");

	Params::WBP_UIEvents_C_OnPostAkEvent Parms{};

	Parms.AkComponent = AkComponent;
	Parms.Event = Event;
	Parms.EventName = std::move(EventName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UIEvents.WBP_UIEvents_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIEvents_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIEvents_C", "PreConstruct");

	Params::WBP_UIEvents_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

