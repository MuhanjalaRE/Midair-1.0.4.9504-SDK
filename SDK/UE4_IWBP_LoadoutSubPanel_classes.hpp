#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IWBP_LoadoutSubPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C
// 0x0000 (0x0028 - 0x0028)
class UIWBP_LoadoutSubPanel_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C");
		return ptr;
	}


	void CosmeticSelected(class UClass* Cosmetic);
	void Confirm_Selection();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
