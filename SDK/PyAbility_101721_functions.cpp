﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101721

#include "Basic.hpp"

#include "PyAbility_101721_classes.hpp"
#include "PyAbility_101721_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101721.PyAbility_101721.BeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_101721::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101721", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101721.PyAbility_101721.K2_ActivateAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_101721::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101721", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101721.PyCue_Ability_Loop_10172101.WhileActiveFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10172101::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10172101", "WhileActiveFX");

	Params::PyCue_Ability_Loop_10172101_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101721.PyCue_Ability_Loop_10172101.OnRemoveFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10172101::OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10172101", "OnRemoveFX");

	Params::PyCue_Ability_Loop_10172101_OnRemoveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101721.PyCue_Ability_Loop_10172101.OnFlameStageChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// EFlameStage                             InFlameStage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Ability_Loop_10172101::OnFlameStageChanged(EFlameStage InFlameStage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10172101", "OnFlameStageChanged");

	Params::PyCue_Ability_Loop_10172101_OnFlameStageChanged Parms{};

	Parms.InFlameStage = InFlameStage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

