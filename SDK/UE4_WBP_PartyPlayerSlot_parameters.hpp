#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyPlayerSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Get_LeaderIcon_Visibility_1
struct UWBP_PartyPlayerSlot_C_Get_LeaderIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Update Slot
struct UWBP_PartyPlayerSlot_C_Update_Slot_Params
{
	class ASteamBeaconPlayerState*                     Steam_Player_State;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.PreConstruct
struct UWBP_PartyPlayerSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Construct
struct UWBP_PartyPlayerSlot_C_Construct_Params
{
};

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.ExecuteUbergraph_WBP_PartyPlayerSlot
struct UWBP_PartyPlayerSlot_C_ExecuteUbergraph_WBP_PartyPlayerSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
