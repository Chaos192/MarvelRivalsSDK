﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101751

#include "Basic.hpp"

#include "PyAbility_101751_classes.hpp"
#include "PyAbility_101751_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101751.PyAbility_101751.HintLackOfFlameDomain
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_101751::HintLackOfFlameDomain(int32 CurNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101751", "HintLackOfFlameDomain");

	Params::PyAbility_101751_HintLackOfFlameDomain Parms{};

	Parms.CurNum = CurNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101751.PyAbility_101751.HintHeightNotSatisfied
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbility_101751::HintHeightNotSatisfied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101751", "HintHeightNotSatisfied");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101751.PyUIController_101751.SetAbility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*                 InAbility                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyUIController_101751::SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_101751", "SetAbility");

	Params::PyUIController_101751_SetAbility Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101751.PyUIController_101751.OnDestruct
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyUIController_101751::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_101751", "OnDestruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

