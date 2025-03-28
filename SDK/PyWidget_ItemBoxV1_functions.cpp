﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ItemBoxV1

#include "Basic.hpp"

#include "PyWidget_ItemBoxV1_classes.hpp"
#include "PyWidget_ItemBoxV1_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ItemBoxV1::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ItemBoxV1::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_ItemBoxV1::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetItemID
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ItemId_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemType_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetItemID(int32 ItemId_0, int32 ItemType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetItemID");

	Params::PyWidget_ItemBoxV1_SetItemID Parms{};

	Parms.ItemId_0 = ItemId_0;
	Parms.ItemType_0 = ItemType_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetItemNum
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ItemNum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetItemNum(int32 ItemNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetItemNum");

	Params::PyWidget_ItemBoxV1_SetItemNum Parms{};

	Parms.ItemNum = ItemNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ItemId_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemType_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Cnt_0                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetItem(int32 ItemId_0, int32 ItemType_0, int32 Cnt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetItem");

	Params::PyWidget_ItemBoxV1_SetItem Parms{};

	Parms.ItemId_0 = ItemId_0;
	Parms.ItemType_0 = ItemType_0;
	Parms.Cnt_0 = Cnt_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.Refresh
// (Native, Public, BlueprintCallable)

void UPyWidget_ItemBoxV1::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "Refresh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetCntLowerBound
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   LowerBound_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetCntLowerBound(int32 LowerBound_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetCntLowerBound");

	Params::PyWidget_ItemBoxV1_SetCntLowerBound Parms{};

	Parms.LowerBound_0 = LowerBound_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetIsNumVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsNumVisible_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetIsNumVisible(bool IsNumVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetIsNumVisible");

	Params::PyWidget_ItemBoxV1_SetIsNumVisible Parms{};

	Parms.IsNumVisible_0 = IsNumVisible_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ItemBoxV1.PyWidget_ItemBoxV1.SetItemSelected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsSelected_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ItemBoxV1::SetItemSelected(bool IsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ItemBoxV1", "SetItemSelected");

	Params::PyWidget_ItemBoxV1_SetItemSelected Parms{};

	Parms.IsSelected_0 = IsSelected_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

