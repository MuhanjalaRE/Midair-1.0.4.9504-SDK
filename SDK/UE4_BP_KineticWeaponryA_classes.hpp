#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_KineticWeaponryA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KineticWeaponryA.BP_KineticWeaponryA_C
// 0x000C (0x02BC - 0x02B0)
class UBP_KineticWeaponryA_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	float                                              EnergyCostReductionPct;                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KineticWeaponryA.BP_KineticWeaponryA_C");
		return ptr;
	}


	void OnGivenTo();
	void OnRemoved();
	void ExecuteUbergraph_BP_KineticWeaponryA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
