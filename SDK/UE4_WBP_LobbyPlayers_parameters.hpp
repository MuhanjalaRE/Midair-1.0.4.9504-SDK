#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LobbyPlayers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Construct
struct UWBP_LobbyPlayers_C_Construct_Params
{
};

// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Tick
struct UWBP_LobbyPlayers_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.ExecuteUbergraph_WBP_LobbyPlayers
struct UWBP_LobbyPlayers_C_ExecuteUbergraph_WBP_LobbyPlayers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
