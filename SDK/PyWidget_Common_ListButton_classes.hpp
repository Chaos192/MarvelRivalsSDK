﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_ListButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_ListButton.PyWidget_CommonVXButton
// 0x0090 (0x0980 - 0x08F0)
class UPyWidget_CommonVXButton : public UPyWidget_BaseCommonButton
{
public:
	struct FVector2D                              Size;                                              // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            NormalFontColor;                                   // 0x08F8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            HoverFontColor;                                    // 0x090C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SelectedFontColor;                                 // 0x0920(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            UnSelectedIconColor;                               // 0x0934(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SelectedIconColor;                                 // 0x0948(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_95C[0x4];                                      // 0x095C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnHoveredEvenSelected;                             // 0x0960(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnUnhoveredEvenSelected;                           // 0x0970(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonVXButton">();
	}
	static class UPyWidget_CommonVXButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonVXButton>();
	}
};

// PythonClass PyWidget_Common_ListButton.PyWidget_CommonVXButtonLVX
// 0x0000 (0x0980 - 0x0980)
class UPyWidget_CommonVXButtonLVX : public UPyWidget_CommonVXButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonVXButtonLVX">();
	}
	static class UPyWidget_CommonVXButtonLVX* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonVXButtonLVX>();
	}
};

// PythonClass PyWidget_Common_ListButton.PyWidget_CommonVXButtonV3
// 0x0000 (0x0980 - 0x0980)
class UPyWidget_CommonVXButtonV3 : public UPyWidget_CommonVXButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonVXButtonV3">();
	}
	static class UPyWidget_CommonVXButtonV3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonVXButtonV3>();
	}
};

}

