#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_HeavyCharacter_3P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_HeavyCharacter_3P.ABP_HeavyCharacter_3P_C
// 0x000E (0x4EC8 - 0x4EBA)
class UABP_HeavyCharacter_3P_C : public UABP_Character_3P_New_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x4EBA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4EC0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HeavyCharacter_3P.ABP_HeavyCharacter_3P_C");
		return ptr;
	}


	void Get_Weapon_Scale(class AMAWeaponAttachment** Weapon, float* Weapon_Scale);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_HeavyCharacter_3P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
