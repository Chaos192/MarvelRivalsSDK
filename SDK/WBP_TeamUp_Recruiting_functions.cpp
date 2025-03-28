﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamUp_Recruiting

#include "Basic.hpp"

#include "WBP_TeamUp_Recruiting_classes.hpp"
#include "WBP_TeamUp_Recruiting_parameters.hpp"


namespace SDK
{

// Function WBP_TeamUp_Recruiting.WBP_TeamUp_Recruiting_C.ExecuteUbergraph_WBP_TeamUp_Recruiting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamUp_Recruiting_C::ExecuteUbergraph_WBP_TeamUp_Recruiting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_Recruiting_C", "ExecuteUbergraph_WBP_TeamUp_Recruiting");

	Params::WBP_TeamUp_Recruiting_C_ExecuteUbergraph_WBP_TeamUp_Recruiting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamUp_Recruiting.WBP_TeamUp_Recruiting_C.SetIsRecruit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRecruit_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCaptain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamUp_Recruiting_C::SetIsRecruit(bool IsRecruit_0, bool IsCaptain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_Recruiting_C", "SetIsRecruit");

	Params::WBP_TeamUp_Recruiting_C_SetIsRecruit Parms{};

	Parms.IsRecruit_0 = IsRecruit_0;
	Parms.IsCaptain = IsCaptain;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamUp_Recruiting.WBP_TeamUp_Recruiting_C.SetRoles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Image_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Role                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamUp_Recruiting_C::SetRoles(class UImage* Image_0, int32 Role, bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamUp_Recruiting_C", "SetRoles");

	Params::WBP_TeamUp_Recruiting_C_SetRoles Parms{};

	Parms.Image_0 = Image_0;
	Parms.Role = Role;
	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}

