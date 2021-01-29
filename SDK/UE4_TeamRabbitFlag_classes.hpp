#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_TeamRabbitFlag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TeamRabbitFlag.TeamRabbitFlag_C
// 0x0008 (0x0638 - 0x0630)
class ATeamRabbitFlag_C : public AMATRFlag
{
public:
	class UAudioComponent*                             IdleLoopSound;                                            // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeamRabbitFlag.TeamRabbitFlag_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
