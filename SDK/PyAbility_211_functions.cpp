﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_211

#include "Basic.hpp"

#include "PyAbility_211_classes.hpp"
#include "PyAbility_211_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_211.PyAbility_211.TryMakeTriggerContext
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData&              EventData                                              (Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_211::TryMakeTriggerContext(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_211", "TryMakeTriggerContext");

	Params::PyAbility_211_TryMakeTriggerContext Parms{};

	Parms.EventData = std::move(EventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	EventData = std::move(Parms.EventData);

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_211.PyAbility_211.K2_ActivateAbilityFromEvent
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_211::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_211", "K2_ActivateAbilityFromEvent");

	Params::PyAbility_211_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyAbility_211.MissileEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_211::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_211", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyAbility_211.EndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_211::EndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_211", "EndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyCue_Ability_Instant_21101.OnExecute
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyCue_Ability_Instant_21101::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Instant_21101", "OnExecute");

	Params::PyCue_Ability_Instant_21101_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_211.PyAbilityExtraStatistics_211.K2_OnInitialize
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbilityExtraStatistics_211::K2_OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_211", "K2_OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyAbilityExtraStatistics_211.K2_OnShutdown
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbilityExtraStatistics_211::K2_OnShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_211", "K2_OnShutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyAbilityExtraStatistics_211.OnAbilitySpraySuccess
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 InAbility                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASprayPaintActor*                 InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbilityExtraStatistics_211::OnAbilitySpraySuccess(class UGameplayAbility* InAbility, class ASprayPaintActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_211", "OnAbilitySpraySuccess");

	Params::PyAbilityExtraStatistics_211_OnAbilitySpraySuccess Parms{};

	Parms.InAbility = InAbility;
	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyAbilityExtraStatistics_211.OnAbilityDeActivate
// (Native, Public, BlueprintCallable)

void UPyAbilityExtraStatistics_211::OnAbilityDeActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_211", "OnAbilityDeActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyUIController_211.OnInit
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_211::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_211", "OnInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyUIController_211.SetAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*                 InAbility                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyUIController_211::SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_211", "SetAbility");

	Params::PyUIController_211_SetAbility Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyUIController_211.Destruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_211::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_211", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_211.PyUIController_211.OnTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGameplayTag&              Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUIController_211::OnTagUpdate(const struct FGameplayTag& Tag, bool Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_211", "OnTagUpdate");

	Params::PyUIController_211_OnTagUpdate Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Exist = Exist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

