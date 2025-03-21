﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_LevelGrowthBar

#include "Basic.hpp"

#include "PyWidget_Common_LevelGrowthBar_classes.hpp"
#include "PyWidget_Common_LevelGrowthBar_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_Common_LevelGrowthBar.PyWidget_Common_LevelGrowthBar.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_LevelGrowthBar::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_LevelGrowthBar", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_LevelGrowthBar.PyWidget_Common_LevelGrowthBar.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_LevelGrowthBar::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_LevelGrowthBar", "OnAnimationFinished");

	Params::PyWidget_Common_LevelGrowthBar_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

