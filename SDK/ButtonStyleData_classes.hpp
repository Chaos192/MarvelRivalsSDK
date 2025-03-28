﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleData

#include "Basic.hpp"

#include "CommonButtonStyle_structs.hpp"
#include "Marvel_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyleData.ButtonStyleData_C
// 0x0050 (0x0088 - 0x0038)
class UButtonStyleData_C final : public UPrimaryDataAsset
{
public:
	TMap<EButtonTemplate, struct FCommonButtonStyle> ButtonStyles;                                   // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyleData_C">();
	}
	static class UButtonStyleData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleData_C>();
	}
};

}

