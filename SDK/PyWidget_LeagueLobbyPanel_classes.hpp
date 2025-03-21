﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeagueLobbyPanel

#include "Basic.hpp"

#include "PyWidget_LobbyChildPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LeagueLobbyPanel.PyWidget_LeagueLobbyPanel
// 0x0008 (0x0620 - 0x0618)
class UPyWidget_LeagueLobbyPanel : public UPyWidget_LobbyChildPanel
{
public:
	TSubclassOf<class UPyWidget_VideoMRCEntry>    WidgetClassEntryVideo;                             // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueLobbyPanel">();
	}
	static class UPyWidget_LeagueLobbyPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueLobbyPanel>();
	}
};

}

