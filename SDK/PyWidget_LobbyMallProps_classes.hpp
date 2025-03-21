﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LobbyMallProps

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "PyWidget_MallPanel_classes.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_LobbyMallProps.PyMallPropsDataItem
// 0x0000 (0x0030 - 0x0030)
class UPyMallPropsDataItem final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMallPropsDataItem">();
	}
	static class UPyMallPropsDataItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyMallPropsDataItem>();
	}
};

// PythonClass PyWidget_LobbyMallProps.PyWidgetMallItemTagV2
// 0x0000 (0x03B8 - 0x03B8)
class UPyWidgetMallItemTagV2 : public UUserWidget
{
public:
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidgetMallItemTagV2">();
	}
	static class UPyWidgetMallItemTagV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidgetMallItemTagV2>();
	}
};

// PythonClass PyWidget_LobbyMallProps.PyWidget_MallPropsV2
// 0x0008 (0x0660 - 0x0658)
class UPyWidget_MallPropsV2 final : public UPyWidget_PageList
{
public:
	TSubclassOf<class UUserWidget>                PropList_CardUnit;                                 // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallPropsV2">();
	}
	static class UPyWidget_MallPropsV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallPropsV2>();
	}
};

// PythonClass PyWidget_LobbyMallProps.PyWidget_MallPropsUnitV2
// 0x0820 (0x0FC0 - 0x07A0)
class UPyWidget_MallPropsUnitV2 final : public UPyWidget_MallItemEntryV2
{
public:
	struct FSlateBrush                            ItemQualityWhite;                                  // 0x07A0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ItemQualityBlue;                                   // 0x0870(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ItemQualityPurple;                                 // 0x0940(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ItemQualityOrange;                                 // 0x0A10(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ItemQualityRed;                                    // 0x0AE0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BtnBuyQualityColorWhite;                           // 0x0BB0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BtnBuyQualityColorBlue;                            // 0x0C80(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BtnBuyQualityColorPurple;                          // 0x0D50(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BtnBuyQualityColorOrange;                          // 0x0E20(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BtnBuyQualityColorRed;                             // 0x0EF0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void SetBtnIsPressed(bool IsBtnPressed_0);
	void SetIsHover(bool IsHover_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MallPropsUnitV2">();
	}
	static class UPyWidget_MallPropsUnitV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MallPropsUnitV2>();
	}
};

}

