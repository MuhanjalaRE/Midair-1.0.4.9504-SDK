#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_SensorJammer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SensorJammer.BP_SensorJammer_C
// 0x0014 (0x02C4 - 0x02B0)
class UBP_SensorJammer_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	struct FSensorTargetModifiers                      Jamming_Properties;                                       // 0x02B8(0x0008) (Edit, BlueprintVisible)
	float                                              EnergyRegenModifier;                                      // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorJammer.BP_SensorJammer_C");
		return ptr;
	}


	float GetCurrentEnergyChangeRate();
	void OnGivenTo();
	void OnRemoved();
	void OnAddBuddy(class AMACharacter** Buddy);
	void OnRemoveBuddy(class AMACharacter** Buddy);
	void ExecuteUbergraph_BP_SensorJammer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
