﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Friends_StateBtn

#include "Basic.hpp"

#include "PyWidget_FriendsPanel_V3_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Friends_StateBtn.WBP_Friends_StateBtn_C
// 0x0070 (0x0818 - 0x07A8)
class UWBP_Friends_StateBtn_C final : public UPyWidget_Friends_SelectBoxBtn_V3
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Line_C*                            img_line;                                          // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Select;                                        // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Select;                                   // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Name;                                         // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Color_Normal;                                      // 0x07D0(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            Color_Hover;                                       // 0x07E4(0x0014)(Edit, BlueprintVisible)
	struct FLinearColor                           ImgColor_Normal;                                   // 0x07F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ImgColor_Hover;                                    // 0x0808(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Friends_StateBtn_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Friends_StateBtn(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Friends_StateBtn_C">();
	}
	static class UWBP_Friends_StateBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Friends_StateBtn_C>();
	}
};

}

