#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WSkin_DefaultSetup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WSkin_DefaultSetup.WSkin_DefaultSetup_C
// 0x0008 (0x0400 - 0x03F8)
class AWSkin_DefaultSetup_C : public AWeaponSkinConfiguration
{
public:
	class UCameraComponent*                            Camera;                                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WSkin_DefaultSetup.WSkin_DefaultSetup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
