#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LootCrate_Gold_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootCrate_Gold.LootCrate_Gold_C
// 0x0008 (0x05F8 - 0x05F0)
class ALootCrate_Gold_C : public ALootCrate_DefaultSetup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootCrate_Gold.LootCrate_Gold_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LootCrate_Gold(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
