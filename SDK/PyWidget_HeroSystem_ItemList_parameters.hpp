﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_ItemList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_HeroSystem_ItemList.PyWidget_HeroSystem_ItemList.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_HeroSystem_ItemList_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_HeroSystem_ItemList.PyWidget_HeroSystem_ItemList.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_HeroSystem_ItemList_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyWidget_HeroSystem_ItemList.PyWidget_HeroSystem_ItemList.OnTileViewNav
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_HeroSystem_ItemList_OnTileViewNav final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}

