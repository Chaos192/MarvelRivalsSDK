﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Background_Container

#include "Basic.hpp"

#include "PyWidget_Mall_Background_Container_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Background_Container.WBP_Mall_Background_Container_C
// 0x0008 (0x0608 - 0x0600)
class UWBP_Mall_Background_Container_C final : public UPyWidget_Mall_Background_Container
{
public:
	class UMarvelOverlay*                         BackgroundContent_Overlay;                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Background_Container_C">();
	}
	static class UWBP_Mall_Background_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Background_Container_C>();
	}
};

}

