﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyActionLogController

#include "Basic.hpp"

#include "PyActionLogController_classes.hpp"
#include "PyActionLogController_parameters.hpp"


namespace SDK
{

// PythonFunction PyActionLogController.PyActionLogController.OnInitialize
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyActionLogController::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnShutdown
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyActionLogController::OnShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnShutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnPointActive
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   player_uid                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   point_id                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyActionLogController::OnPointActive(int32 player_uid, int32 point_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnPointActive");

	Params::PyActionLogController_OnPointActive Parms{};

	Parms.player_uid = player_uid;
	Parms.point_id = point_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.CreateLevelStatisticsController
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyActionLogController::CreateLevelStatisticsController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "CreateLevelStatisticsController");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.DestroyLevelStatisticsController
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyActionLogController::DestroyLevelStatisticsController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "DestroyLevelStatisticsController");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnPartNameChange
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    current_part_name                                      (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyActionLogController::OnPartNameChange(const class FString& current_part_name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnPartNameChange");

	Params::PyActionLogController_OnPartNameChange Parms{};

	Parms.current_part_name = std::move(current_part_name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnMatchStateChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// EMatchState                             MatchState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyActionLogController::OnMatchStateChanged(EMatchState MatchState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnMatchStateChanged");

	Params::PyActionLogController_OnMatchStateChanged Parms{};

	Parms.MatchState = MatchState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnTransitionEnd
// (Native, Public, BlueprintCallable)

void UPyActionLogController::OnTransitionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnTransitionEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnOverTimeStart
// (Native, Public, BlueprintCallable)

void UPyActionLogController::OnOverTimeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnOverTimeStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnOverTimeEnd
// (Native, Public, BlueprintCallable)

void UPyActionLogController::OnOverTimeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnOverTimeEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnEscortRebirth
// (Native, Public, BlueprintCallable)

void UPyActionLogController::OnEscortRebirth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnEscortRebirth");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyActionLogController.PyActionLogController.OnFightEnd
// (Native, Public, BlueprintCallable)

void UPyActionLogController::OnFightEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyActionLogController", "OnFightEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

