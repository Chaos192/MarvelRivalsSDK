﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SecondaryPopupPanel

#include "Basic.hpp"

#include "PyWidget_SecondaryPopupPanel_classes.hpp"
#include "PyWidget_SecondaryPopupPanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "PreConstruct");

	Params::PyWidget_SecondaryPopupPanel_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupPanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.ShouldEnableInput
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_SecondaryPopupPanel::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "ShouldEnableInput");

	Params::PyWidget_SecondaryPopupPanel_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.CloseRecommendRecharge
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsVisible_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::CloseRecommendRecharge(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "CloseRecommendRecharge");

	Params::PyWidget_SecondaryPopupPanel_CloseRecommendRecharge Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.OnActiveStateChange
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::OnActiveStateChange(bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "OnActiveStateChange");

	Params::PyWidget_SecondaryPopupPanel_OnActiveStateChange Parms{};

	Parms.bInActive = bInActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetCommonBGType
// (Native, Public, BlueprintCallable)
// Parameters:
// ECommonBGType                           CommonBGType_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetCommonBGType(ECommonBGType CommonBGType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetCommonBGType");

	Params::PyWidget_SecondaryPopupPanel_SetCommonBGType Parms{};

	Parms.CommonBGType_0 = CommonBGType_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetTitleText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      TitleText_0                                            (Parm)

void UPyWidget_SecondaryPopupPanel::SetTitleText(const class FText& TitleText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetTitleText");

	Params::PyWidget_SecondaryPopupPanel_SetTitleText Parms{};

	Parms.TitleText_0 = std::move(TitleText_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetTitleTimeCountDown
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   TimeCountDown                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WaitTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetTitleTimeCountDown(int32 TimeCountDown, int32 WaitTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetTitleTimeCountDown");

	Params::PyWidget_SecondaryPopupPanel_SetTitleTimeCountDown Parms{};

	Parms.TimeCountDown = TimeCountDown;
	Parms.WaitTime = WaitTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetBtnsText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      LeftBtnText_0                                          (Parm)
// const class FText&                      RightBtnText_0                                         (Parm)
// const class FText&                      close_btn_text                                         (Parm)

void UPyWidget_SecondaryPopupPanel::SetBtnsText(const class FText& LeftBtnText_0, const class FText& RightBtnText_0, const class FText& close_btn_text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetBtnsText");

	Params::PyWidget_SecondaryPopupPanel_SetBtnsText Parms{};

	Parms.LeftBtnText_0 = std::move(LeftBtnText_0);
	Parms.RightBtnText_0 = std::move(RightBtnText_0);
	Parms.close_btn_text = std::move(close_btn_text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftBtnText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      LeftBtnText_0                                          (Parm)

void UPyWidget_SecondaryPopupPanel::SetLeftBtnText(const class FText& LeftBtnText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftBtnText");

	Params::PyWidget_SecondaryPopupPanel_SetLeftBtnText Parms{};

	Parms.LeftBtnText_0 = std::move(LeftBtnText_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtnText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      RightBtnText_0                                         (Parm)

void UPyWidget_SecondaryPopupPanel::SetRightBtnText(const class FText& RightBtnText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtnText");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtnText Parms{};

	Parms.RightBtnText_0 = std::move(RightBtnText_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetCloseBtnText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      BtnText                                                (Parm)

void UPyWidget_SecondaryPopupPanel::SetCloseBtnText(const class FText& BtnText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetCloseBtnText");

	Params::PyWidget_SecondaryPopupPanel_SetCloseBtnText Parms{};

	Parms.BtnText = std::move(BtnText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetBtnAboveTipsText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      LeftTips                                               (Parm)
// const class FText&                      RightTips                                              (Parm)

void UPyWidget_SecondaryPopupPanel::SetBtnAboveTipsText(const class FText& LeftTips, const class FText& RightTips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetBtnAboveTipsText");

	Params::PyWidget_SecondaryPopupPanel_SetBtnAboveTipsText Parms{};

	Parms.LeftTips = std::move(LeftTips);
	Parms.RightTips = std::move(RightTips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftBtnEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetLeftBtnEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftBtnEnabled");

	Params::PyWidget_SecondaryPopupPanel_SetLeftBtnEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtnEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetRightBtnEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtnEnabled");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtnEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetTitleVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetTitleVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetTitleVisible");

	Params::PyWidget_SecondaryPopupPanel_SetTitleVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetBtnsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetBtnsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetBtnsVisible");

	Params::PyWidget_SecondaryPopupPanel_SetBtnsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetLeftBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftBtnVisible");

	Params::PyWidget_SecondaryPopupPanel_SetLeftBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftWhiteBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetLeftWhiteBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftWhiteBtnVisible");

	Params::PyWidget_SecondaryPopupPanel_SetLeftWhiteBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftBtnTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetLeftBtnTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftBtnTipsVisible");

	Params::PyWidget_SecondaryPopupPanel_SetLeftBtnTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetRightBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtnVisible");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtnTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetRightBtnTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtnTipsVisible");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtnTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtn2Visible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetRightBtn2Visible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtn2Visible");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtn2Visible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetBtnAboveTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetBtnAboveTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetBtnAboveTipsVisible");

	Params::PyWidget_SecondaryPopupPanel_SetBtnAboveTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetRightBtnYellowVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetRightBtnYellowVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetRightBtnYellowVisible");

	Params::PyWidget_SecondaryPopupPanel_SetRightBtnYellowVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.SetLeftBtnTwoPrice
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    cost_id1                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   price1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    is_enough1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    cost_id2                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   price2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    is_enough2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::SetLeftBtnTwoPrice(const class FString& cost_id1, int32 price1, bool is_enough1, const class FString& cost_id2, int32 price2, bool is_enough2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "SetLeftBtnTwoPrice");

	Params::PyWidget_SecondaryPopupPanel_SetLeftBtnTwoPrice Parms{};

	Parms.cost_id1 = std::move(cost_id1);
	Parms.price1 = price1;
	Parms.is_enough1 = is_enough1;
	Parms.cost_id2 = std::move(cost_id2);
	Parms.price2 = price2;
	Parms.is_enough2 = is_enough2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupPanel.PyWidget_SecondaryPopupPanel.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupPanel", "MarvelSetVisible");

	Params::PyWidget_SecondaryPopupPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

