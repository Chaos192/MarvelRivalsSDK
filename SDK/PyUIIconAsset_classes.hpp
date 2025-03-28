﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUIIconAsset

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyUIIconAsset.PyUIIconAsset
// 0x0198 (0x01D0 - 0x0038)
class UPyUIIconAsset final : public UPrimaryDataAsset
{
public:
	TMap<EHeroRole, class UTexture2D*>            HeroRoleIcon;                                      // 0x0038(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<int32, class UTexture2D*>                PlayerStatusIcon;                                  // 0x0088(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<EItemQuality, class UTexture2D*>         ItemQualityIcon;                                   // 0x00D8(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<EItemQualityType, class UTexture2D*>     ItemQualityNewIcon;                                // 0x0128(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<EItemQualityType, struct FSlateColor>    ItemQualityIconColor;                              // 0x0178(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                             QuestionBondIcon;                                  // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIIconAsset">();
	}
	static class UPyUIIconAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIIconAsset>();
	}
};

}

