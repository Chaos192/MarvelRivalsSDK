﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Squad_RestrictedTips

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Squad_RestrictedTips.PyWidget_Squad_RestrictedTips
// 0x0008 (0x05F8 - 0x05F0)
class UPyWidget_Squad_RestrictedTips : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                TipItemClass;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_RestrictedTips">();
	}
	static class UPyWidget_Squad_RestrictedTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_RestrictedTips>();
	}
};

// PythonClass PyWidget_Squad_RestrictedTips.PyWidget_Squad_RestrictedTipsItem
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Squad_RestrictedTipsItem : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Squad_RestrictedTipsItem">();
	}
	static class UPyWidget_Squad_RestrictedTipsItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Squad_RestrictedTipsItem>();
	}
};

}

