#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ObjectInfo_BackpackPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ObjectInfo_BackpackPickup.ObjectInfo_BackpackPickup_C
// 0x0000 (0x01B0 - 0x01B0)
class UObjectInfo_BackpackPickup_C : public UObjectInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ObjectInfo_BackpackPickup.ObjectInfo_BackpackPickup_C");
		return ptr;
	}


	struct FText GetActionText(class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
