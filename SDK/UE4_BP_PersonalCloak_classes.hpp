#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PersonalCloak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PersonalCloak.BP_PersonalCloak_C
// 0x0010 (0x02C0 - 0x02B0)
class UBP_PersonalCloak_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	struct FSensorTargetModifiers                      Jamming_Properties;                                       // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PersonalCloak.BP_PersonalCloak_C");
		return ptr;
	}


	void OnEnergyDepleted();
	void OnActiveChanged(class AMACharacter** ReceivingCharacter);
	void ExecuteUbergraph_BP_PersonalCloak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
