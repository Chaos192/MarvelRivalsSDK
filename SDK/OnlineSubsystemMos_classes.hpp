﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemMos

#include "Basic.hpp"

#include "OnlineSubsystemMos_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemMos.MosUEClient
// 0x0130 (0x0160 - 0x0030)
class alignas(0x10) UMosUEClient : public UObject
{
public:
	uint8                                         Pad_30[0x40];                                      // 0x0030(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          GameInstance;                                      // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EClientState                                  State;                                             // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_79[0xE7];                                      // 0x0079(0x00E7)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool Connect(const class FString& IP, int32 Port);
	void DirectDisconnect();
	bool Disconnect();
	void Initialize(class UGameInstance* InGameInstance);
	void SendData(const TArray<uint8>& Data);
	void Uninitialize();

	int32 GetConnectionID() const;
	bool IsConnected() const;
	bool IsDestroyed() const;
	bool IsPending() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MosUEClient">();
	}
	static class UMosUEClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMosUEClient>();
	}
};

}

