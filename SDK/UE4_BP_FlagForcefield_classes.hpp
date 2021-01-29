#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FlagForcefield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FlagForcefield.BP_FlagForcefield_C
// 0x002C (0x03B4 - 0x0388)
class ABP_FlagForcefield_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BoxPivot;                                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_FlagForceFieldPlane;                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WrangleForce;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlagForcefield.BP_FlagForcefield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_FlagForcefield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
