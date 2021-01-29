#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponSlotInfo.WeaponSlotInfo_C
// 0x0008 (0x01B8 - 0x01B0)
class UWeaponSlotInfo_C : public ULoadoutUpgradeInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponSlotInfo.WeaponSlotInfo_C");
		return ptr;
	}


	void OnUnlock();
	void ExecuteUbergraph_WeaponSlotInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
