#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CTF-Flatland_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CTF-Flatland.CTF-Flatland_C
// 0x0008 (0x0398 - 0x0390)
class ACTF_Flatland_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CTF-Flatland.CTF-Flatland_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_CTF_Flatland(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
