#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_Heavy2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C
// 0x0010 (0x01C8 - 0x01B8)
class UWeaponSlotInfo_Heavy2_C : public UWeaponSlotInfo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Character_to_Upgrade;                                     // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C");
		return ptr;
	}


	void OnUnlock();
	void ExecuteUbergraph_WeaponSlotInfo_Heavy2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
