#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_ChaingunAttachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChaingunAttachment.BP_ChaingunAttachment_C
// 0x0000 (0x0718 - 0x0718)
class ABP_ChaingunAttachment_C : public AMAWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChaingunAttachment.BP_ChaingunAttachment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
