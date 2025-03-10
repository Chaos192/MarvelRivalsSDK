﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyRichTextTimeDecorator

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyRichTextTimeDecorator.PyRichTextTimeDecorator
// 0x0000 (0x0030 - 0x0030)
class UPyRichTextTimeDecorator : public URichTextBlockTimeDecorator
{
public:
	class FString FormatTimeFromPython(const class FString& TimeString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyRichTextTimeDecorator">();
	}
	static class UPyRichTextTimeDecorator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyRichTextTimeDecorator>();
	}
};

}

