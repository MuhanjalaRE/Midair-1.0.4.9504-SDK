#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LCTFGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LCTFGameMode.BP_LCTFGameMode_C
// 0x0008 (0x0BE8 - 0x0BE0)
class ABP_LCTFGameMode_C : public AMALCTFGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LCTFGameMode.BP_LCTFGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
