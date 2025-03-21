﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyBattlePanel

#include "Basic.hpp"

#include "PyBattlePanel_classes.hpp"
#include "PyBattlePanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyBattlePanel.PyWidget_ViewTargetPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ViewTargetPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ViewTargetPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyBattlePanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyBattlePanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyBattlePanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.ShouldEnableInput
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyBattlePanel::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "ShouldEnableInput");

	Params::PyBattlePanel_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBattlePanel.PyBattlePanel.OnBecomeTop
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyBattlePanel::OnBecomeTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "OnBecomeTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyBattlePanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "MarvelSetVisible");

	Params::PyBattlePanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.AddHPWidget_LeftBottom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          Content                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Priority_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyBattlePanel::AddHPWidget_LeftBottom(class UWidget* Content, int32 Priority_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "AddHPWidget_LeftBottom");

	Params::PyBattlePanel_AddHPWidget_LeftBottom Parms{};

	Parms.Content = Content;
	Parms.Priority_0 = Priority_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.AddNumWidget_LeftBottom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          Content                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Priority_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyBattlePanel::AddNumWidget_LeftBottom(class UWidget* Content, int32 Priority_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "AddNumWidget_LeftBottom");

	Params::PyBattlePanel_AddNumWidget_LeftBottom Parms{};

	Parms.Content = Content;
	Parms.Priority_0 = Priority_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyBattlePanel.GetAbilityStatusPanel
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget_AbilityStatusPanel*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget_AbilityStatusPanel* UPyBattlePanel::GetAbilityStatusPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyBattlePanel", "GetAbilityStatusPanel");

	Params::PyBattlePanel_GetAbilityStatusPanel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBattlePanel.PyUIGameFunctionLibraray.GetAbilityStatusPanel
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UPyUIGameFunctionLibraray::GetAbilityStatusPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIGameFunctionLibraray", "GetAbilityStatusPanel");

	Params::PyUIGameFunctionLibraray_GetAbilityStatusPanel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyBattlePanel.PyUIGameFunctionLibraray.AddHitIndicator
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UMarvelCueNotify_HitImpact* Cue                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameter                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UPyUIGameFunctionLibraray::AddHitIndicator(const class UMarvelCueNotify_HitImpact* Cue, class AActor* MyTarget, const struct FGameplayCueParameters& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIGameFunctionLibraray", "AddHitIndicator");

	Params::PyUIGameFunctionLibraray_AddHitIndicator Parms{};

	Parms.Cue = Cue;
	Parms.MyTarget = MyTarget;
	Parms.Parameter = std::move(Parameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyBattlePanel.PyUIGameFunctionLibraray.PlayShakeAnim
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarvelAbilityUIHudAnim                 anim_style                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUIGameFunctionLibraray::PlayShakeAnim(EMarvelAbilityUIHudAnim anim_style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIGameFunctionLibraray", "PlayShakeAnim");

	Params::PyUIGameFunctionLibraray_PlayShakeAnim Parms{};

	Parms.anim_style = anim_style;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

