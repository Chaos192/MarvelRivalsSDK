﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PySelectTarget_Enemy

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTS_PySelectTarget_Enemy.BTS_PySelectTarget_Enemy.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_PySelectTarget_Enemy_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction BTS_PySelectTarget_Enemy.BTS_PySelectTarget_Enemy.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_PySelectTarget_Enemy_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// PythonFunction BTS_PySelectTarget_Enemy.BTS_PySelectTarget_Enemy.ReceiveDeactivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_PySelectTarget_Enemy_ReceiveDeactivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

