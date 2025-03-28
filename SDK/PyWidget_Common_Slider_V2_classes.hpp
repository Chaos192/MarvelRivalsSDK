﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Slider_V2

#include "Basic.hpp"

#include "python_enums_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_Slider_V2.PyWidget_Common_Slider_V2
// 0x0030 (0x0620 - 0x05F0)
class UPyWidget_Common_Slider_V2 : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(float Value)>   OnValueChanged;                                    // 0x05F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Value)>   OnMouseCaptureEnd;                                 // 0x0600(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(ENumberType EType)> OnMetaDataSet;                                 // 0x0610(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void UpdateRangeNum(float MinNum, float MaxNum);
	void OnReceiveInputAxis(class FName AxisName, float AxisValue);
	bool ShouldEnableInput();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_Slider_V2">();
	}
	static class UPyWidget_Common_Slider_V2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_Slider_V2>();
	}
};

}

