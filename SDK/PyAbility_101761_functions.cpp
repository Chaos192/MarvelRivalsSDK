﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101761

#include "Basic.hpp"

#include "PyAbility_101761_classes.hpp"
#include "PyAbility_101761_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101761.PyAbility_101761.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_101761::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101761", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyAbility_101761.K2_ActivateAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_101761::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101761", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyAbility_101761.NativeOnMontageEvent
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101761::NativeOnMontageEvent(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101761", "NativeOnMontageEvent");

	Params::PyAbility_101761_NativeOnMontageEvent Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyAbility_101761.NativeOnMontageCancelled
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101761::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101761", "NativeOnMontageCancelled");

	Params::PyAbility_101761_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyAbility_101761.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_101761::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101761", "K2_OnEndAbility");

	Params::PyAbility_101761_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyCue_Scope_Loop_10176101.WhileActiveFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Scope_Loop_10176101::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Scope_Loop_10176101", "WhileActiveFX");

	Params::PyCue_Scope_Loop_10176101_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyCue_Scope_Loop_10176101.OnExecuteFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Scope_Loop_10176101::OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Scope_Loop_10176101", "OnExecuteFX");

	Params::PyCue_Scope_Loop_10176101_OnExecuteFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101761.PyCue_Scope_Loop_10176101.FadeOut
// (Native, Public, BlueprintCallable)

void APyCue_Scope_Loop_10176101::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Scope_Loop_10176101", "FadeOut");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

