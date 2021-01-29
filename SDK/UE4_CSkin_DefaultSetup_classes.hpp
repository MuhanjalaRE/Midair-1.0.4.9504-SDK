#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CSkin_DefaultSetup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CSkin_DefaultSetup.CSkin_DefaultSetup_C
// 0x0008 (0x03E0 - 0x03D8)
class ACSkin_DefaultSetup_C : public ASkinConfiguration
{
public:
	class UCameraComponent*                            Camera;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CSkin_DefaultSetup.CSkin_DefaultSetup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
