﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginPanel_VX_CN

#include "Basic.hpp"

#include "PyWidget_Marvel_Logo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoginPanel_VX_CN.WBP_LoginPanel_VX_CN_C
// 0x0020 (0x0610 - 0x05F0)
class UWBP_LoginPanel_VX_CN_C final : public UPyWidget_Marvel_Logo
{
public:
	class UMarvelImage*                           Img_Logo;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_FadeIn;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_FadeOut;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     Panel_Loop;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoginPanel_VX_CN_C">();
	}
	static class UWBP_LoginPanel_VX_CN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoginPanel_VX_CN_C>();
	}
};

}

