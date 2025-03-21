﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestionFeedbackLogic

#include "Basic.hpp"

#include "QuestionFeedbackLogic_classes.hpp"
#include "QuestionFeedbackLogic_parameters.hpp"


namespace SDK
{

// PythonFunction QuestionFeedbackLogic.UISettingOtherQuestionFeedbackHandler.BP_OnBtnClicked
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FString&                    setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// const TMap<class FString, class FString>&Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm)
// const TMap<int32, class FText>&         OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<class FString, int32>&       Tags                                                   (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<class FString, int32>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, int32> UUISettingOtherQuestionFeedbackHandler::BP_OnBtnClicked(class UObject* Obj, const class FString& setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingOtherQuestionFeedbackHandler", "BP_OnBtnClicked");

	Params::UISettingOtherQuestionFeedbackHandler_BP_OnBtnClicked Parms{};

	Parms.Obj = Obj;
	Parms.setting_key = std::move(setting_key);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;
	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

