﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10173101_BP

#include "Basic.hpp"

#include "Hero_1017_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10173101_BP.Summoned_10173101_BP_C
// 0x0010 (0x08E0 - 0x08D0)
class ASummoned_10173101_BP_C final : public ASummoned_10173101
{
public:
	class USummonedMovementComponent*             SummonedMovement;                                  // 0x08D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10173101_BP_C">();
	}
	static class ASummoned_10173101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10173101_BP_C>();
	}
};

}

