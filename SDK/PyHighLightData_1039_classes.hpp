﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyHighLightData_1039

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyHighLightData_1039.PyHighLightData_1039
// 0x0008 (0x0050 - 0x0048)
class UPyHighLightData_1039 : public UHeroHighLightData
{
public:
	float                                         RecoverEnergyCount;                                // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HighLightID_103931;                                // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void K2_Initialize();
	void K2_Shutdown();
	void OnAbilityConsumeCost(class UMarvelGameplayAbility* Ability, float CostValue, const struct FGameplayTag& CostTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyHighLightData_1039">();
	}
	static class UPyHighLightData_1039* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyHighLightData_1039>();
	}
};

}

