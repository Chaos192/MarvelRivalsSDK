﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_Tips

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_Tips.PyWidget_League_Tips
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_League_Tips : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Show_Time;                                         // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_Tips">();
	}
	static class UPyWidget_League_Tips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_Tips>();
	}
};

}

