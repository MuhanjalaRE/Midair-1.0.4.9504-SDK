#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_TRFlagGoalR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TRFlagGoalR.BP_TRFlagGoalR_C
// 0x0010 (0x03A8 - 0x0398)
class ABP_TRFlagGoalR_C : public AMAFlagGoal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TRFlagGoalR.BP_TRFlagGoalR_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TRFlagGoalR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
