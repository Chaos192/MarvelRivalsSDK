﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbilityExtraStatistics_104531

#include "Basic.hpp"

#include "PyAbilityExtraStatistics_104531_classes.hpp"


namespace SDK
{

// PythonFunction PyAbilityExtraStatistics_104531.PyAbilityExtraStatistics_104531.K2_OnInitialize
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyAbilityExtraStatistics_104531::K2_OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104531", "K2_OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbilityExtraStatistics_104531.PyAbilityExtraStatistics_104531.OnAbilityActivate
// (Native, Public, BlueprintCallable)

void UPyAbilityExtraStatistics_104531::OnAbilityActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbilityExtraStatistics_104531", "OnAbilityActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

