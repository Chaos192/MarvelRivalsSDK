﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_Skin

#include "Basic.hpp"

#include "PyWidget_HeroSystem_Skin_classes.hpp"
#include "PyWidget_HeroSystem_Skin_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_Skin.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skin::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skin", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_Skin.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skin::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skin", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_Skin.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skin::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skin", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_Skin.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroSystem_Skin::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skin", "MarvelSetVisible");

	Params::PyWidget_HeroSystem_Skin_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_SkinName.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_SkinName::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_SkinName", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skin.PyWidget_HeroSystem_SkinName.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroSystem_SkinName::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_SkinName", "PreConstruct");

	Params::PyWidget_HeroSystem_SkinName_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

