﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Mall_PageListPanel_Base

#include "Basic.hpp"

#include "PyWidget_MallChildPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Mall_PageListPanel_Base.PyWidget_Mall_PageListPanel_Base
// 0x0000 (0x0618 - 0x0618)
#pragma pack(push, 0x1)
class alignas(0x08) UPyWidget_Mall_PageListPanel_Base : public UPyWidget_MallChildPanel
{
public:
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Mall_PageListPanel_Base">();
	}
	static class UPyWidget_Mall_PageListPanel_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Mall_PageListPanel_Base>();
	}
};
#pragma pack(pop)

}

