#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PhysXVehicles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0160 (0x03C0 - 0x0260)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          // 0x0260(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x0268(0x0010) (Edit, ZeroConstructor)
	float                                              Mass;                                                     // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseAsBrake;                                          // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	float                                              DragArea;                                                 // 0x028C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x0290(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x0298(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x029C(0x000C) (Edit, IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x02C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02D8(0x0018) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x02F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              RVOAvoidanceRadius;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x031C(0x000C) (IsPlainOldData)
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x0328(0x0014) (Net, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	float                                              RawSteeringInput;                                         // 0x0340(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x0344(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawBrakeInput;                                            // 0x0348(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x034C(0x0001) (Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x034C(0x0001) (Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x034C(0x0001) (Transient)
	unsigned char                                      UnknownData06[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	float                                              SteeringInput;                                            // 0x0350(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0354(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0358(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x035C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopThreshold;                                            // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x036C(0x0008) (Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x0374(0x0008) (Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x037C(0x0008) (Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x0384(0x0008) (Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x038C(0x0001) (Transient)
	unsigned char                                      UnknownData07[0x33];                                      // 0x038D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x03C0 - 0x03C0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};


// Class PhysXVehicles.TireConfig
// 0x0020 (0x0050 - 0x0030)
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleAnimInstance
// 0x0508 (0x0880 - 0x0378)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0378(0x04F8) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x0870(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0878(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class PhysXVehicles.VehicleWheel
// 0x00C8 (0x00F0 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDontCreateShape;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAdjustCollisionSize;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0034(0x000C) (Edit, IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRate;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByHandbrake;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTireConfig*                                 TireConfig;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheelSweepType>                       SweepType;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              MaxBrakeTorque;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x0098(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                WheelIndex;                                               // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x00AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	float                                              DebugWheelTorque;                                         // 0x00B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x00B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x00C0(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x00CC(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x00D8(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x03F8 - 0x03E8)
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0520 - 0x03C0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x03C0(0x0088) MISSED OFFSET
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        // 0x0448(0x001C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FVehicleTransmissionData                    TransmissionSetup;                                        // 0x0468(0x0030) (Edit)
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x0498(0x0078) (Edit)
	float                                              AckermannAccuracy;                                        // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0514(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
