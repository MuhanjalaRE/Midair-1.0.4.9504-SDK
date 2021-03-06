#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Resupply_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Resupply.BP_Resupply_C
// 0x000C (0x02BC - 0x02B0)
class UBP_Resupply_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	float                                              ResupplyPercentage;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Resupply.BP_Resupply_C");
		return ptr;
	}


	void OnActiveChanged(class AMACharacter** ReceivingCharacter);
	void ExecuteUbergraph_BP_Resupply(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
