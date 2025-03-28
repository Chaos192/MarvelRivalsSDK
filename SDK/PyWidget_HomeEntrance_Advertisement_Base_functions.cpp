﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HomeEntrance_Advertisement_Base

#include "Basic.hpp"

#include "PyWidget_HomeEntrance_Advertisement_Base_classes.hpp"
#include "PyWidget_HomeEntrance_Advertisement_Base_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_HomeEntrance_Advertisement_Base.PyWidget_HomeEntrance_Advertisement_Image_Widget.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HomeEntrance_Advertisement_Image_Widget::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HomeEntrance_Advertisement_Image_Widget", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HomeEntrance_Advertisement_Base.PyWidget_HomeEntrance_Advertisement_Image_Widget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HomeEntrance_Advertisement_Image_Widget::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HomeEntrance_Advertisement_Image_Widget", "OnAnimationFinished");

	Params::PyWidget_HomeEntrance_Advertisement_Image_Widget_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HomeEntrance_Advertisement_Base.PyWidget_HomeEntrance_Advertisement_Container_Widget.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HomeEntrance_Advertisement_Container_Widget::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HomeEntrance_Advertisement_Container_Widget", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HomeEntrance_Advertisement_Base.PyWidget_HomeEntrance_Advertisement_Container_Widget.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HomeEntrance_Advertisement_Container_Widget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HomeEntrance_Advertisement_Container_Widget", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

