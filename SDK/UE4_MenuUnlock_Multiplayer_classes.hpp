#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MenuUnlock_Multiplayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MenuUnlock_Multiplayer.MenuUnlock_Multiplayer_C
// 0x0000 (0x01B0 - 0x01B0)
class UMenuUnlock_Multiplayer_C : public UMenuUnlockableInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuUnlock_Multiplayer.MenuUnlock_Multiplayer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
