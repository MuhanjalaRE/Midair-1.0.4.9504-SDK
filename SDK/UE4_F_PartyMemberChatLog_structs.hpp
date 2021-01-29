#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct F_PartyMemberChatLog.F_PartyMemberChatLog
// 0x0020
struct FF_PartyMemberChatLog
{
	struct FString                                     PlayerId_7_138E7C344AA1C3DFEBDFCB92C3866461;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UWidget*>                             MessagesHistory_6_8829121C4B1361B8FC7A92831CCCDB81;       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
