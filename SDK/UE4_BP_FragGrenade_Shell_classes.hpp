#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FragGrenade_Shell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FragGrenade_Shell.BP_FragGrenade_Shell_C
// 0x0008 (0x0958 - 0x0950)
class ABP_FragGrenade_Shell_C : public AMAProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FragGrenade_Shell.BP_FragGrenade_Shell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_FragGrenade_Shell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
