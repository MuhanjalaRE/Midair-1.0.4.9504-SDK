#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyFriends_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PartyFriends.W_PartyFriends_C.RefreshFriendsList
struct UW_PartyFriends_C_RefreshFriendsList_Params
{
	TArray<struct FSteamFriendInfo>                    InFriendsList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function W_PartyFriends.W_PartyFriends_C.OnFailure_4BF5A74B4418D3E2A98387811A6DAD51
struct UW_PartyFriends_C_OnFailure_4BF5A74B4418D3E2A98387811A6DAD51_Params
{
	TArray<struct FSteamFriendInfo>                    Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function W_PartyFriends.W_PartyFriends_C.OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51
struct UW_PartyFriends_C_OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51_Params
{
	TArray<struct FSteamFriendInfo>                    Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function W_PartyFriends.W_PartyFriends_C.Tick
struct UW_PartyFriends_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyFriends.W_PartyFriends_C.UpdateFriendsList
struct UW_PartyFriends_C_UpdateFriendsList_Params
{
};

// Function W_PartyFriends.W_PartyFriends_C.Construct
struct UW_PartyFriends_C_Construct_Params
{
};

// Function W_PartyFriends.W_PartyFriends_C.ExecuteUbergraph_W_PartyFriends
struct UW_PartyFriends_C_ExecuteUbergraph_W_PartyFriends_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
