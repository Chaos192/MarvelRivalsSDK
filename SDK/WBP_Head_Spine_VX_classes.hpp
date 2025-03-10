﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Head_Spine_VX

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Head_Spine_VX.WBP_Head_Spine_VX_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_Head_Spine_VX_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpineWidget*                           SP_AnimSpine_vx;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Head_Spine_VX(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Head_Spine_VX_C">();
	}
	static class UWBP_Head_Spine_VX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Head_Spine_VX_C>();
	}
};

}

