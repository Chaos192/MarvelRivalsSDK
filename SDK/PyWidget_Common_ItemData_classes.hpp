﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_ItemData

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "python_enums_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "PyWidget_CommonTipsBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_ItemData.PyWidget_Common_ItemData
// 0x0118 (0x0708 - 0x05F0)
class UPyWidget_Common_ItemData : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            InDataTime;                                        // 0x05EC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            OutDataTime;                                       // 0x0600(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           InDataTimeImg;                                     // 0x0614(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           OutDataTimeImg;                                    // 0x0624(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_634[0x4];                                      // 0x0634(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   QualityColor;                                      // 0x0638(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           TitleDarkColor;                                    // 0x0648(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            DescDarkColor;                                     // 0x0658(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                            AccessDarkColor;                                   // 0x066C(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                            SourceDarkColor;                                   // 0x0680(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                           ShadowDarkColor;                                   // 0x0694(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           TitleLightColor;                                   // 0x06A4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            DescLightColor;                                    // 0x06B4(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                            AccessLightColor;                                  // 0x06C8(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                            SourceLightColor;                                  // 0x06DC(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                           ShadowLightColor;                                  // 0x06F0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDarkStyle;                                       // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsShowTheme;                                       // 0x0701(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPanelPositionType                            PanelPosition;                                     // 0x0702(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_ItemData">();
	}
	static class UPyWidget_Common_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_ItemData>();
	}
};

// PythonClass PyWidget_Common_ItemData.PyWidget_ItemDesc_Tips
// 0x0000 (0x0608 - 0x0608)
class UPyWidget_ItemDesc_Tips : public UPyWidget_CommonTipsBase
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ItemDesc_Tips">();
	}
	static class UPyWidget_ItemDesc_Tips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ItemDesc_Tips>();
	}
};

}

