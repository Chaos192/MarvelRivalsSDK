﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonTipsBase

#include "Basic.hpp"

#include "PyWidget_CommonTipsBase_classes.hpp"
#include "PyWidget_CommonTipsBase_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_CommonTipsBase.PyWidget_CommonTipsBase.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonTipsBase::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonTipsBase", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CommonTipsBase.PyWidget_CommonTipsBase.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonTipsBase::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonTipsBase", "MarvelSetVisible");

	Params::PyWidget_CommonTipsBase_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

