#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Boost_Art_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Boost_Art.BP_Boost_Art_C
// 0x0008 (0x00D8 - 0x00D0)
class UBP_Boost_Art_C : public UAugment_Art
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boost_Art.BP_Boost_Art_C");
		return ptr;
	}


	void SetActive_Visuals(bool* bActive);
	void ExecuteUbergraph_BP_Boost_Art(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
