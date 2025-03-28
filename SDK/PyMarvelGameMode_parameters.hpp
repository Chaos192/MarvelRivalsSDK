﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelGameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.GetDefaultPawnClassForController
// 0x0010 (0x0010 - 0x0000)
struct PyMarvelGameMode_GetDefaultPawnClassForController final
{
public:
	class AController*                            InController;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyMarvelGameMode_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.K2_PostLogin
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameMode_K2_PostLogin final
{
public:
	class APlayerController*                      NewPlayer;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.K2_OnLogout
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameMode_K2_OnLogout final
{
public:
	class AController*                            ExitingController;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.PreLoginCheck
// 0x0050 (0x0050 - 0x0000)
struct PyMarvelGameMode_PreLoginCheck final
{
public:
	class FString                                 OPTIONS;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 address;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 UniqueIdStr;                                       // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ErrorMessage;                                      // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0040(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.SpawnAIController
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameMode_SpawnAIController final
{
public:
	class AAIController*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction PyMarvelGameMode.PyMarvelGameMode.SpawnDelegateAIController
// 0x0008 (0x0008 - 0x0000)
struct PyMarvelGameMode_SpawnDelegateAIController final
{
public:
	class AAIController*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}

