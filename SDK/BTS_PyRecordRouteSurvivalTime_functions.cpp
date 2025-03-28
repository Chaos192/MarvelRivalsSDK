﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyRecordRouteSurvivalTime

#include "Basic.hpp"

#include "BTS_PyRecordRouteSurvivalTime_classes.hpp"
#include "BTS_PyRecordRouteSurvivalTime_parameters.hpp"


namespace SDK
{

// PythonFunction BTS_PyRecordRouteSurvivalTime.BTS_PyRecordRouteSurvivalTime.ReceiveActivationAI
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_PyRecordRouteSurvivalTime::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyRecordRouteSurvivalTime", "ReceiveActivationAI");

	Params::BTS_PyRecordRouteSurvivalTime_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction BTS_PyRecordRouteSurvivalTime.BTS_PyRecordRouteSurvivalTime.ReceiveDeactivationAI
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_PyRecordRouteSurvivalTime::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyRecordRouteSurvivalTime", "ReceiveDeactivationAI");

	Params::BTS_PyRecordRouteSurvivalTime_ReceiveDeactivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction BTS_PyRecordRouteSurvivalTime.BTS_PyRecordRouteSurvivalTime.ReceiveTickAI
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_PyRecordRouteSurvivalTime::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_PyRecordRouteSurvivalTime", "ReceiveTickAI");

	Params::BTS_PyRecordRouteSurvivalTime_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

