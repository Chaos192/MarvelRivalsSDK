﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_GalleryBook_Card

#include "Basic.hpp"

#include "PyWidget_GalleryBook_Card_classes.hpp"
#include "PyWidget_GalleryBook_Card_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_GalleryBook_Card::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_GalleryBook_Card::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GalleryBook_Card::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "MarvelSetVisible");

	Params::PyWidget_GalleryBook_Card_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GalleryBook_Card::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "OnAnimationStarted");

	Params::PyWidget_GalleryBook_Card_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GalleryBook_Card::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "OnAnimationFinished");

	Params::PyWidget_GalleryBook_Card_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.SetIsHover
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GalleryBook_Card::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "SetIsHover");

	Params::PyWidget_GalleryBook_Card_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GalleryBook_Card.PyWidget_GalleryBook_Card.SetBtnIsPressed
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    IsBtnPressed_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GalleryBook_Card::SetBtnIsPressed(bool IsBtnPressed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GalleryBook_Card", "SetBtnIsPressed");

	Params::PyWidget_GalleryBook_Card_SetBtnIsPressed Parms{};

	Parms.IsBtnPressed_0 = IsBtnPressed_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

