﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Login_AgePrompt

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Login_AgePrompt.WBP_Login_AgePrompt_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_Login_AgePrompt_C final : public UUserWidget
{
public:
	class UMarvelImage*                           img_ageprompt;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Esrb;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Login_AgePrompt_C">();
	}
	static class UWBP_Login_AgePrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Login_AgePrompt_C>();
	}
};

}

