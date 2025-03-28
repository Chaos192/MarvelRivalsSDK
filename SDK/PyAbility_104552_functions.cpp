﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104552

#include "Basic.hpp"

#include "PyAbility_104552_classes.hpp"
#include "PyAbility_104552_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_104552.PyAbility_104552.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104552::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.EndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104552::EndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "EndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.CanActivate
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_104552::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "CanActivate");

	Params::PyAbility_104552_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104552.PyAbility_104552.K2_ActivateAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_104552::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.OnAbilityHit
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 Ability                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FMarvelAbilityHitParams&   HitParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104552::OnAbilityHit(class UGameplayAbility* Ability, const struct FMarvelAbilityHitParams& HitParams, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "OnAbilityHit");

	Params::PyAbility_104552_OnAbilityHit Parms{};

	Parms.Ability = Ability;
	Parms.HitParams = std::move(HitParams);
	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.OnOwnerSummonedBeginAgentTask
// (Native, Public, BlueprintCallable)

void UPyAbility_104552::OnOwnerSummonedBeginAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "OnOwnerSummonedBeginAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.OnCommandOctopusEnhancedAttack
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              TargetActorComponent                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104552::OnCommandOctopusEnhancedAttack(class UPrimitiveComponent* TargetActorComponent, const struct FVector& HitPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "OnCommandOctopusEnhancedAttack");

	Params::PyAbility_104552_OnCommandOctopusEnhancedAttack Parms{};

	Parms.TargetActorComponent = TargetActorComponent;
	Parms.HitPosition = std::move(HitPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104552.PyAbility_104552.K2_OnEndAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104552::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104552", "K2_OnEndAbility");

	Params::PyAbility_104552_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

