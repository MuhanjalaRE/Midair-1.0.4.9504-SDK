#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_DmgType_HoverTank_MainShell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_HoverTank_MainShell.DmgType_HoverTank_MainShell_C
// 0x0000 (0x0090 - 0x0090)
class UDmgType_HoverTank_MainShell_C : public UMADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_HoverTank_MainShell.DmgType_HoverTank_MainShell_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
