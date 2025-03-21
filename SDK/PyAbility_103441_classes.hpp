﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103441

#include "Basic.hpp"

#include "Hero_1034_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103441.PyAbility_103441
// 0x0000 (0x2598 - 0x2598)
class UPyAbility_103441 : public UAbility_103441
{
public:
	void BeginPlay();
	void MissileEventNotify();
	struct FMarvelAbilitySocketInfo GetSpawnSocketInfo();
	bool CanSpawnProjectile();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103441">();
	}
	static class UPyAbility_103441* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103441>();
	}
};

}

