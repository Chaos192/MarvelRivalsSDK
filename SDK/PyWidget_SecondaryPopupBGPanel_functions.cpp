﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SecondaryPopupBGPanel

#include "Basic.hpp"

#include "PyWidget_SecondaryPopupBGPanel_classes.hpp"
#include "PyWidget_SecondaryPopupBGPanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupBGPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "PreConstruct");

	Params::PyWidget_SecondaryPopupBGPanel_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetTitleText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      TitleText_0                                            (Parm)

void UPyWidget_SecondaryPopupBGPanel::SetTitleText(const class FText& TitleText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetTitleText");

	Params::PyWidget_SecondaryPopupBGPanel_SetTitleText Parms{};

	Parms.TitleText_0 = std::move(TitleText_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetTitleTimeCountDown
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   TimeCountDown                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WaitTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetTitleTimeCountDown(int32 TimeCountDown, int32 WaitTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetTitleTimeCountDown");

	Params::PyWidget_SecondaryPopupBGPanel_SetTitleTimeCountDown Parms{};

	Parms.TimeCountDown = TimeCountDown;
	Parms.WaitTime = WaitTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetBtnsText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      LeftBtnText_0                                          (Parm)
// const class FText&                      RightBtnText_0                                         (Parm)
// const class FText&                      close_text                                             (Parm)

void UPyWidget_SecondaryPopupBGPanel::SetBtnsText(const class FText& LeftBtnText_0, const class FText& RightBtnText_0, const class FText& close_text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetBtnsText");

	Params::PyWidget_SecondaryPopupBGPanel_SetBtnsText Parms{};

	Parms.LeftBtnText_0 = std::move(LeftBtnText_0);
	Parms.RightBtnText_0 = std::move(RightBtnText_0);
	Parms.close_text = std::move(close_text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetCloseBtnText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      BtnText                                                (Parm)

void UPyWidget_SecondaryPopupBGPanel::SetCloseBtnText(const class FText& BtnText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetCloseBtnText");

	Params::PyWidget_SecondaryPopupBGPanel_SetCloseBtnText Parms{};

	Parms.BtnText = std::move(BtnText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetBtnAboveTipsText
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      LeftTips                                               (Parm)
// const class FText&                      RightTips                                              (Parm)

void UPyWidget_SecondaryPopupBGPanel::SetBtnAboveTipsText(const class FText& LeftTips, const class FText& RightTips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetBtnAboveTipsText");

	Params::PyWidget_SecondaryPopupBGPanel_SetBtnAboveTipsText Parms{};

	Parms.LeftTips = std::move(LeftTips);
	Parms.RightTips = std::move(RightTips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetTitleVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetTitleVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetTitleVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetTitleVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetBtnsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetBtnsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetBtnsVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetBtnsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetLeftBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetLeftBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetLeftBtnVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetLeftBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetLeftWhiteBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetLeftWhiteBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetLeftWhiteBtnVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetLeftWhiteBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetLeftBtnTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetLeftBtnTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetLeftBtnTipsVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetLeftBtnTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetButtonEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetButtonEnabled");

	Params::PyWidget_SecondaryPopupBGPanel_SetButtonEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetRightButtonEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetRightButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetRightButtonEnabled");

	Params::PyWidget_SecondaryPopupBGPanel_SetRightButtonEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetRightBtnVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetRightBtnVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetRightBtnVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetRightBtnVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetRightBtnTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetRightBtnTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetRightBtnTipsVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetRightBtnTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetBtnAboveTipsVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetBtnAboveTipsVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetBtnAboveTipsVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetBtnAboveTipsVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetRightBtn2Visible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetRightBtn2Visible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetRightBtn2Visible");

	Params::PyWidget_SecondaryPopupBGPanel_SetRightBtn2Visible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetLeftBtnTwoPrice
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    cost_id1                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   price1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    is_enough1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    cost_id2                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   price2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    is_enough2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetLeftBtnTwoPrice(const class FString& cost_id1, int32 price1, bool is_enough1, const class FString& cost_id2, int32 price2, bool is_enough2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetLeftBtnTwoPrice");

	Params::PyWidget_SecondaryPopupBGPanel_SetLeftBtnTwoPrice Parms{};

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


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.SetRightBtnYellowVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::SetRightBtnYellowVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "SetRightBtnYellowVisible");

	Params::PyWidget_SecondaryPopupBGPanel_SetRightBtnYellowVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGPanel.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGPanel", "MarvelSetVisible");

	Params::PyWidget_SecondaryPopupBGPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupBGUnit::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupBGUnit::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupBGUnit::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsVisible_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGUnit::SetVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit", "SetVisible");

	Params::PyWidget_SecondaryPopupBGUnit_SetVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit.ShouldEnableInput
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_SecondaryPopupBGUnit::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit", "ShouldEnableInput");

	Params::PyWidget_SecondaryPopupBGUnit_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit_V2.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_SecondaryPopupBGUnit_V2::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit_V2", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit_V2.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGUnit_V2::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit_V2", "OnAnimationFinished");

	Params::PyWidget_SecondaryPopupBGUnit_V2_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SecondaryPopupBGPanel.PyWidget_SecondaryPopupBGUnit_V2.SetVisible
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    IsVisible_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SecondaryPopupBGUnit_V2::SetVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SecondaryPopupBGUnit_V2", "SetVisible");

	Params::PyWidget_SecondaryPopupBGUnit_V2_SetVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

