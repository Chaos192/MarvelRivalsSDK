﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SignificanceManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SignificanceManager.SignificanceManager
// 0x0120 (0x0150 - 0x0030)
class USignificanceManager final : public UObject
{
public:
	uint8                                         Pad_30[0xF8];                                      // 0x0030(0x00F8)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         SignificanceManagerClassName;                      // 0x0128(0x0028)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SignificanceManager">();
	}
	static class USignificanceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USignificanceManager>();
	}
};

}

