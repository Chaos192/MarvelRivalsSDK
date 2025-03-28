﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104013

#include "Basic.hpp"

#include "PyAbility_104013_classes.hpp"
#include "PyAbility_104013_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_104013.PyAbility_104013.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104013::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.CanActivate
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_104013::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "CanActivate");

	Params::PyAbility_104013_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104013.PyAbility_104013.K2_ActivateAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104013::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.OnAbilityHit
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 Ability                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const TArray<struct FHitResult>&        Result                                                 (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104013::OnAbilityHit(class UGameplayAbility* Ability, const TArray<struct FHitResult>& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "OnAbilityHit");

	Params::PyAbility_104013_OnAbilityHit Parms{};

	Parms.Ability = Ability;
	Parms.Result = std::move(Result);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.MissileEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104013::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.OnNoActorScopeInited
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMarvelAgentTraceComponent*       TraceComp                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMarvelAgentEffectiveComponent*   EffectComp                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104013::OnNoActorScopeInited(class UMarvelAgentTraceComponent* TraceComp, class UMarvelAgentEffectiveComponent* EffectComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "OnNoActorScopeInited");

	Params::PyAbility_104013_OnNoActorScopeInited Parms{};

	Parms.TraceComp = TraceComp;
	Parms.EffectComp = EffectComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.BreakEventNotify
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104013::BreakEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "BreakEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104013::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "K2_OnEndAbility");

	Params::PyAbility_104013_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.NativeOnMontageCompleted
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104013::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "NativeOnMontageCompleted");

	Params::PyAbility_104013_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.NativeOnMontageInterrupted
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104013::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "NativeOnMontageInterrupted");

	Params::PyAbility_104013_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.NativeOnMontageCancelled
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104013::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "NativeOnMontageCancelled");

	Params::PyAbility_104013_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.NativeOnMontageEvent
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104013::NativeOnMontageEvent(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "NativeOnMontageEvent");

	Params::PyAbility_104013_NativeOnMontageEvent Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyAbility_104013.EndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104013::EndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104013", "EndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyEffectiveComponent_10401301.K2_OnInitialized
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyEffectiveComponent_10401301::K2_OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10401301", "K2_OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104013.PyEffectiveComponent_10401301.K2_OnPreApplyContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>               ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FHitResult> UPyEffectiveComponent_10401301::K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10401301", "K2_OnPreApplyContainer");

	Params::PyEffectiveComponent_10401301_K2_OnPreApplyContainer Parms{};

	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104013.PyCue_Ability_Instant_10401301.OnExecute
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyCue_Ability_Instant_10401301::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Instant_10401301", "OnExecute");

	Params::PyCue_Ability_Instant_10401301_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

