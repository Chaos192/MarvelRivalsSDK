﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_PyFindDynamicWayPoint

#include "Basic.hpp"

#include "BTT_PyFindDynamicWayPoint_classes.hpp"
#include "BTT_PyFindDynamicWayPoint_parameters.hpp"


namespace SDK
{

// PythonFunction BTT_PyFindDynamicWayPoint.BTT_PyFindDynamicWayPoint.ReceiveExecuteAI
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_PyFindDynamicWayPoint::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_PyFindDynamicWayPoint", "ReceiveExecuteAI");

	Params::BTT_PyFindDynamicWayPoint_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

