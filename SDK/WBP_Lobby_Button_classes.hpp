﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lobby_Button

#include "Basic.hpp"

#include "PyWidget_Button_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Lobby_Button.WBP_Lobby_Button_C
// 0x0018 (0x0768 - 0x0750)
class UWBP_Lobby_Button_C final : public UPyWidget_Button
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SizeBox_156;                                       // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Width;                                             // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Lobby_Button(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetButtonName(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Lobby_Button_C">();
	}
	static class UWBP_Lobby_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Lobby_Button_C>();
	}
};

}

