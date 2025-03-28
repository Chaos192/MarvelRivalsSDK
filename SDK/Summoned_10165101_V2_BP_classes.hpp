﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10165101_V2_BP

#include "Basic.hpp"

#include "PyAbility_101651_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10165101_V2_BP.Summoned_10165101_V2_BP_C
// 0x0020 (0x1040 - 0x1020)
class ASummoned_10165101_V2_BP_C final : public APySummoned_10165101
{
public:
	class UPhysicalInteractionComponent*          PhysicalInteraction;                               // 0x1020(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x1028(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x1030(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10165101_V2_BP_C">();
	}
	static class ASummoned_10165101_V2_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10165101_V2_BP_C>();
	}
};

}

