#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MediumCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumCharacter.BP_MediumCharacter_C
// 0x0020 (0x0CE0 - 0x0CC0)
class ABP_MediumCharacter_C : public ABP_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    LeftJet;                                                  // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RightJet;                                                 // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JetStrength;                                              // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnRate_2;                                              // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MediumCharacter.BP_MediumCharacter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void BP_UpdateForClientPerspective(bool* bFirstPerson);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MediumCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
