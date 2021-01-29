#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Reload_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Reload.BP_Reload_C
// 0x0008 (0x02B8 - 0x02B0)
class UBP_Reload_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Reload.BP_Reload_C");
		return ptr;
	}


	void OnActiveChanged(class AMACharacter** ReceivingCharacter);
	void OnGivenTo();
	void OnRemoved();
	void ExecuteUbergraph_BP_Reload(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
