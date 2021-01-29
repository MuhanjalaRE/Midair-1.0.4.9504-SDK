#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Passivist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Passivist.BP_Passivist_C
// 0x0004 (0x02B4 - 0x02B0)
class UBP_Passivist_C : public UAugment
{
public:
	float                                              Energy_Returned;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Passivist.BP_Passivist_C");
		return ptr;
	}


	float GetCurrentEnergyChangeRate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
