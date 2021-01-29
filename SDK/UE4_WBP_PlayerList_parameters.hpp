#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerList.WBP_PlayerList_C.OnMouseButtonDown_1
struct UWBP_PlayerList_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerList.WBP_PlayerList_C.UpdateStats
struct UWBP_PlayerList_C_UpdateStats_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.Construct
struct UWBP_PlayerList_C_Construct_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.Refresh Player List
struct UWBP_PlayerList_C_Refresh_Player_List_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.ExecuteUbergraph_WBP_PlayerList
struct UWBP_PlayerList_C_ExecuteUbergraph_WBP_PlayerList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerList.WBP_PlayerList_C.On Player Selected__DelegateSignature
struct UWBP_PlayerList_C_On_Player_Selected__DelegateSignature_Params
{
	class APlayerState*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
