﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList_ClanReportLeagueSelector

#include "Basic.hpp"

#include "PyWidget_DropDownList_ListView_Item_classes.hpp"
#include "PyWidget_DropDownList_ListView_classes.hpp"
#include "PyWidget_DropDownList_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_DropDownList_ClanReportLeagueSelector.PyWidget_ClanReportLeagueSelector_ItemData
// 0x0018 (0x00C0 - 0x00A8)
class UPyWidget_ClanReportLeagueSelector_ItemData final : public UPyWidget_DropDownList_ItemData
{
public:
	class FText                                   LeagueTime;                                        // 0x00A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ClanReportLeagueSelector_ItemData">();
	}
	static class UPyWidget_ClanReportLeagueSelector_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ClanReportLeagueSelector_ItemData>();
	}
};

// PythonClass PyWidget_DropDownList_ClanReportLeagueSelector.Pywidget_ClanReportLeagueSelector_Item
// 0x0000 (0x0790 - 0x0790)
class UPywidget_ClanReportLeagueSelector_Item : public UPyWidget_DropDownList_ListView_Item
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Pywidget_ClanReportLeagueSelector_Item">();
	}
	static class UPywidget_ClanReportLeagueSelector_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPywidget_ClanReportLeagueSelector_Item>();
	}
};

// PythonClass PyWidget_DropDownList_ClanReportLeagueSelector.PyWidget_ClanReportLeagueSelector_ListView
// 0x0000 (0x0628 - 0x0628)
class UPyWidget_ClanReportLeagueSelector_ListView : public UPyWidget_DropDownList_ListView
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ClanReportLeagueSelector_ListView">();
	}
	static class UPyWidget_ClanReportLeagueSelector_ListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ClanReportLeagueSelector_ListView>();
	}
};

// PythonClass PyWidget_DropDownList_ClanReportLeagueSelector.PyWidget_DropDownList_ClanReportLeagueSelector
// 0x0000 (0x1570 - 0x1570)
class UPyWidget_DropDownList_ClanReportLeagueSelector final : public UPyWidget_DropDownList
{
public:
	void SetItemID(int32 ItemId_0);
	void SetLeagueTimeList(const TArray<class FString>& LeagueTimeList);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DropDownList_ClanReportLeagueSelector">();
	}
	static class UPyWidget_DropDownList_ClanReportLeagueSelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DropDownList_ClanReportLeagueSelector>();
	}
};

}

