﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AbilityHUDCom_BuffIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AbilityHUDCom_BuffIcon.WBP_AbilityHUDCom_BuffIcon_C
// 0x0008 (0x03C0 - 0x03B8)
class UWBP_AbilityHUDCom_BuffIcon_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_BuffIcon;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AbilityHUDCom_BuffIcon_C">();
	}
	static class UWBP_AbilityHUDCom_BuffIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AbilityHUDCom_BuffIcon_C>();
	}
};

}

