#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_LightCharacter_3P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_LightCharacter_3P.ABP_LightCharacter_3P_C
// 0x0000 (0x4EBA - 0x4EBA)
class UABP_LightCharacter_3P_C : public UABP_Character_3P_New_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LightCharacter_3P.ABP_LightCharacter_3P_C");
		return ptr;
	}


	void Get_Weapon_Scale(class AMAWeaponAttachment** Weapon, float* Weapon_Scale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
