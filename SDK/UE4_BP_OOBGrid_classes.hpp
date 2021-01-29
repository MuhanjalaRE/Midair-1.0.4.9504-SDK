#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_OOBGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OOBGrid.BP_OOBGrid_C
// 0x0014 (0x044C - 0x0438)
class ABP_OOBGrid_C : public AConfigurableOOBVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	float                                              InnerBoundsFadeDistance;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterBoundsFadeDistance;                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UV_Scale;                                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OOBGrid.BP_OOBGrid_C");
		return ptr;
	}


	void ApplyFadeSetting(class UPrimitiveComponent* Component, float FadeDistance, class UMaterialInstanceDynamic** Material);
	void UserConstructionScript();
	void BP_PlayOOBEffects(class AActor** ActorExiting, struct FVector* Location, struct FVector* WallNormal);
	void ExecuteUbergraph_BP_OOBGrid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
