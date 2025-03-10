﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosVehicles

#include "Basic.hpp"

#include "ChaosVehicles_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ChaosVehicles.ChaosVehicleMovementComponent
// 0x07D8 (0x09B0 - 0x01D8)
class alignas(0x10) UChaosVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                         bReverseAsBrake : 1;                               // 0x01D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bThrottleAsBrake : 1;                              // 0x01D8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1D9[0x3];                                      // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mass;                                              // 0x01DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCenterOfMassOverride;                       // 0x01E0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CenterOfMassOverride;                              // 0x01E8(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChassisWidth;                                      // 0x0200(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChassisHeight;                                     // 0x0204(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DragCoefficient;                                   // 0x0208(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownforceCoefficient;                              // 0x020C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DragArea;                                          // 0x0210(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugDragMagnitude;                                // 0x0214(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InertiaTensorScale;                                // 0x0218(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepThreshold;                                    // 0x0230(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepSlopeLimit;                                   // 0x0234(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehicleAerofoilConfig>         Aerofoils;                                         // 0x0238(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVehicleThrustConfig>           Thrusters;                                         // 0x0248(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVehicleTorqueControlConfig            TorqueControl;                                     // 0x0258(0x0040)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTargetRotationControlConfig    TargetRotationControl;                             // 0x0298(0x0058)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleStabilizeControlConfig         StabilizeControl;                                  // 0x02F0(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_308[0x4];                                      // 0x0308(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bRawHandbrakeInput : 1;                            // 0x030C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRawGearUpInput : 1;                               // 0x030C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRawGearDownInput : 1;                             // 0x030C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_30C_3 : 5;                                  // 0x030C(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_30D[0x3];                                      // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bWasAvoidanceUpdated : 1;                          // 0x0310(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_310_1 : 7;                                  // 0x0310(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bParkEnabled : 1;                                  // 0x0314(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetworkPhysicsComponent*               NetworkPhysicsComponent;                           // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_320[0x38];                                     // 0x0320(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVehicleReplicatedState                ReplicatedState;                                   // 0x0358(0x0028)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_380[0x4];                                      // 0x0380(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RawSteeringInput;                                  // 0x0384(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawThrottleInput;                                  // 0x0388(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawBrakeInput;                                     // 0x038C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawPitchInput;                                     // 0x0390(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawRollInput;                                      // 0x0394(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawYawInput;                                       // 0x0398(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         SteeringInput;                                     // 0x039C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ThrottleInput;                                     // 0x03A0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BrakeInput;                                        // 0x03A4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PitchInput;                                        // 0x03A8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RollInput;                                         // 0x03AC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         YawInput;                                          // 0x03B0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HandbrakeInput;                                    // 0x03B4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRequiresControllerForInputs;                      // 0x03B8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3B9[0x3];                                      // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IdleBrakeInput;                                    // 0x03BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         StopThreshold;                                     // 0x03C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         WrongDirectionThreshold;                           // 0x03C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig                ThrottleInputRate;                                 // 0x03C8(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                BrakeInputRate;                                    // 0x0460(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                SteeringInputRate;                                 // 0x04F8(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                HandbrakeInputRate;                                // 0x0590(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                PitchInputRate;                                    // 0x0628(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                RollInputRate;                                     // 0x06C0(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig                YawInputRate;                                      // 0x0758(0x0098)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_7F0[0x198];                                    // 0x07F0(0x0198)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            OverrideController;                                // 0x0988(0x0008)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_990[0x20];                                     // 0x0990(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DecreaseThrottleInput(float ThrottleDelta);
	void EnableSelfRighting(bool InState);
	float GetBrakeInput();
	float GetSteeringInput();
	float GetThrottleInput();
	void IncreaseThrottleInput(float ThrottleDelta);
	void ResetVehicle();
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput);
	void SetBrakeInput(float Brake);
	void SetChangeDownInput(bool bNewGearDown);
	void SetChangeUpInput(bool bNewGearUp);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetParked(bool bParked);
	void SetPitchInput(float Pitch);
	void SetRequiresControllerForInputs(bool bRequiresController);
	void SetRollInput(float Roll);
	void SetSleeping(bool bEnableSleep);
	void SetSteeringInput(float Steering);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetThrottleInput(float Throttle);
	void SetUseAutomaticGears(bool bUseAuto);
	void SetYawInput(float Yaw);

	int32 GetCurrentGear() const;
	float GetForwardSpeed() const;
	float GetForwardSpeedMPH() const;
	bool GetHandbrakeInput() const;
	int32 GetTargetGear() const;
	bool GetUseAutoGears() const;
	bool IsParked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosVehicleMovementComponent">();
	}
	static class UChaosVehicleMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosVehicleMovementComponent>();
	}
};

// Class ChaosVehicles.ChaosVehicleWheel
// 0x02B8 (0x02E8 - 0x0030)
class UChaosVehicleWheel final : public UObject
{
public:
	class UStaticMesh*                            CollisionMesh;                                     // 0x0030(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAxleType                                     AxleType;                                          // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Offset;                                            // 0x0040(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WheelRadius;                                       // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WheelWidth;                                        // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WheelMass;                                         // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CorneringStiffness;                                // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrictionForceMultiplier;                           // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SideSlipModifier;                                  // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SlipThreshold;                                     // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SkidThreshold;                                     // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxSteerAngle;                                     // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedBySteering;                               // 0x007C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedByBrake;                                  // 0x007D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedByHandbrake;                              // 0x007E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedByEngine;                                 // 0x007F(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bABSEnabled;                                       // 0x0080(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTractionControlEnabled;                           // 0x0081(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxWheelspinRotation;                              // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETorqueCombineMethod                          ExternalTorqueCombineMethod;                       // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     LateralSlipGraph;                                  // 0x0090(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FVector                                SuspensionAxis;                                    // 0x0118(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SuspensionForceOffset;                             // 0x0130(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionMaxRaise;                                // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionMaxDrop;                                 // 0x014C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionDampingRatio;                            // 0x0150(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WheelLoadRatio;                                    // 0x0154(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpringRate;                                        // 0x0158(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpringPreload;                                     // 0x015C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SuspensionSmoothing;                               // 0x0160(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RollbarScaling;                                    // 0x0164(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESweepShape                                   SweepShape;                                        // 0x0168(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESweepType                                    SweepType;                                         // 0x0169(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A[0x2];                                      // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxBrakeTorque;                                    // 0x016C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxHandBrakeTorque;                                // 0x0170(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosWheeledVehicleMovementComponent*  VehicleComponent;                                  // 0x0178(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WheelIndex;                                        // 0x0180(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLongSlip;                                     // 0x0184(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLatSlip;                                      // 0x0188(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugNormalizedTireLoad;                           // 0x018C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_190[0x4];                                      // 0x0190(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DebugWheelTorque;                                  // 0x0194(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLongForce;                                    // 0x0198(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLatForce;                                     // 0x019C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x01A0(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OldLocation;                                       // 0x01B8(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x01D0(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E8[0x100];                                    // 0x01E8(0x0100)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	EAxleType GetAxleType();

	float GetRotationAngle() const;
	float GetRotationAngularVelocity() const;
	float GetSteerAngle() const;
	struct FVector GetSuspensionAxis() const;
	float GetSuspensionOffset() const;
	float GetWheelAngularVelocity() const;
	float GetWheelRadius() const;
	bool IsInAir() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosVehicleWheel">();
	}
	static class UChaosVehicleWheel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosVehicleWheel>();
	}
};

// Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
// 0x0320 (0x0CD0 - 0x09B0)
class UChaosWheeledVehicleMovementComponent final : public UChaosVehicleMovementComponent
{
public:
	bool                                          bSuspensionEnabled;                                // 0x09B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWheelFrictionEnabled;                             // 0x09B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLegacyWheelFrictionPosition;                      // 0x09B2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9B3[0x5];                                      // 0x09B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FChaosWheelSetup>               WheelSetups;                                       // 0x09B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCollisionResponseContainer            WheelTraceCollisionResponses;                      // 0x09C8(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bMechanicalSimEnabled;                             // 0x09E8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9E9[0x7];                                      // 0x09E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVehicleEngineConfig                   EngineSetup;                                       // 0x09F0(0x00C8)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferentialConfig             DifferentialSetup;                                 // 0x0AB8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionConfig             TransmissionSetup;                                 // 0x0AC8(0x0070)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleSteeringConfig                 SteeringSetup;                                     // 0x0B38(0x00D8)(Edit, NativeAccessSpecifierPublic)
	TArray<class UChaosVehicleWheel*>             Wheels;                                            // 0x0C10(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_C20[0xB0];                                     // 0x0C20(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void BreakWheeledSnapshot(const struct FWheeledSnaphotData& Snapshot, struct FTransform* Transform, struct FVector* LinearVelocity, struct FVector* AngularVelocity, int32* SelectedGear, float* EngineRPM, TArray<struct FWheelSnapshot>* WheelSnapshots);
	static void BreakWheelSnapshot(const struct FWheelSnapshot& Snapshot, float* SuspensionOffset, float* WheelRotationAngle, float* SteeringAngle, float* WheelRadius, float* WheelAngularVelocity);
	static void BreakWheelStatus(const struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, float* SlipAngle, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal, float* DriveTorque, float* BrakeTorque, bool* bABSActivated);
	static struct FWheeledSnaphotData MakeWheeledSnapshot(const struct FTransform& Transform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, int32 SelectedGear, float EngineRPM, const TArray<struct FWheelSnapshot>& WheelSnapshots);
	static struct FWheelSnapshot MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity);
	static struct FWheelStatus MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated);

	void EnableMechanicalSim(bool InState);
	void EnableSuspension(bool InState);
	void EnableWheelFriction(bool InState);
	void SetABSEnabled(int32 WheelIndex, bool Enabled);
	void SetAffectedByBrake(int32 WheelIndex, bool Enabled);
	void SetAffectedByEngine(int32 WheelIndex, bool Enabled);
	void SetAffectedByHandbrake(int32 WheelIndex, bool Enabled);
	void SetAffectedBySteering(int32 WheelIndex, bool Enabled);
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
	void SetDifferentialFrontRearSplit(float FrontRearSlpit);
	void SetDownforceCoefficient(float DownforceCoeff);
	void SetDragCoefficient(float DragCoeff);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetMaxEngineTorque(float Torque);
	void SetSnapshot(const struct FWheeledSnaphotData& SnapshotIn);
	void SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32 WheelIndex);
	void SetTorqueCombineMethod(ETorqueCombineMethod InCombineMethod, int32 WheelIndex);
	void SetTractionControlEnabled(int32 WheelIndex, bool Enabled);
	void SetWheelClass(int32 WheelIndex, TSubclassOf<class UChaosVehicleWheel> InWheelClass);
	void SetWheelFrictionMultiplier(int32 WheelIndex, float Friction);
	void SetWheelHandbrakeTorque(int32 WheelIndex, float Torque);
	void SetWheelMaxBrakeTorque(int32 WheelIndex, float Torque);
	void SetWheelMaxSteerAngle(int32 WheelIndex, float AngleDegrees);
	void SetWheelRadius(int32 WheelIndex, float Radius);
	void SetWheelSlipGraphMultiplier(int32 WheelIndex, float Multiplier);

	float GetEngineMaxRotationSpeed() const;
	float GetEngineRotationSpeed() const;
	int32 GetNumWheels() const;
	struct FWheeledSnaphotData GetSnapshot() const;
	const struct FWheelStatus GetWheelState(int32 WheelIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosWheeledVehicleMovementComponent">();
	}
	static class UChaosWheeledVehicleMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosWheeledVehicleMovementComponent>();
	}
};

// Class ChaosVehicles.VehicleAnimationInstance
// 0x0810 (0x0C40 - 0x0430)
class UVehicleAnimationInstance final : public UAnimInstance
{
public:
	uint8                                         Pad_428[0x808];                                    // 0x0428(0x0808)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosWheeledVehicleMovementComponent*  WheeledVehicleComponent;                           // 0x0C30(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C38[0x8];                                      // 0x0C38(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class AWheeledVehiclePawn* GetVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleAnimationInstance">();
	}
	static class UVehicleAnimationInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleAnimationInstance>();
	}
};

// Class ChaosVehicles.WheeledVehiclePawn
// 0x0010 (0x0540 - 0x0530)
class AWheeledVehiclePawn final : public APawn
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0530(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChaosVehicleMovementComponent*         VehicleMovementComponent;                          // 0x0538(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehiclePawn">();
	}
	static class AWheeledVehiclePawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWheeledVehiclePawn>();
	}
};

}

