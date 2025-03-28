﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101561

#include "Basic.hpp"

#include "PyAbility_101561_classes.hpp"
#include "PyAbility_101561_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101561.PyCue_Ability_Loop_10156102.WhileActiveFX
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10156102::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10156102", "WhileActiveFX");

	Params::PyCue_Ability_Loop_10156102_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101561.PyCue_Ability_Loop_10156102.OnRemove
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Ability_Loop_10156102::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10156102", "OnRemove");

	Params::PyCue_Ability_Loop_10156102_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101561.PyBondEnhanceSourceResolver_101561.GetEnhanceSource
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelBaseCharacter*             InOwnerCharacter                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnerAbilityID                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FBondInstance&             InBondInstance                                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AMarvelBaseCharacter*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AMarvelBaseCharacter* UPyBondEnhanceSourceResolver_101561::GetEnhanceSource(class AMarvelBaseCharacter* InOwnerCharacter, int32 InOwnerAbilityID, const struct FBondInstance& InBondInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBondEnhanceSourceResolver_101561", "GetEnhanceSource");

	Params::PyBondEnhanceSourceResolver_101561_GetEnhanceSource Parms{};

	Parms.InOwnerCharacter = InOwnerCharacter;
	Parms.InOwnerAbilityID = InOwnerAbilityID;
	Parms.InBondInstance = std::move(InBondInstance);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

