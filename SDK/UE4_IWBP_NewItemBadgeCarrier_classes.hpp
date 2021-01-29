#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IWBP_NewItemBadgeCarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C
// 0x0000 (0x0028 - 0x0028)
class UIWBP_NewItemBadgeCarrier_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C");
		return ptr;
	}


	void DoesHaveNewItemBadge(bool* HasNewItemBadge);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
