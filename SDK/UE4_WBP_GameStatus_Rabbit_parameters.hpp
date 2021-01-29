#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_Rabbit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetText_1
struct UWBP_GameStatus_Rabbit_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Update Slot
struct UWBP_GameStatus_Rabbit_C_Update_Slot_Params
{
	class UWBP_GameStatus_Slot_C*                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Get_TimeLeftText_Text_1
struct UWBP_GameStatus_Rabbit_C_Get_TimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetPlayerScorePercent
struct UWBP_GameStatus_Rabbit_C_GetPlayerScorePercent_Params
{
	class APlayerState*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Construct
struct UWBP_GameStatus_Rabbit_C_Construct_Params
{
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.CustomEvent_1
struct UWBP_GameStatus_Rabbit_C_CustomEvent_1_Params
{
};

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.ExecuteUbergraph_WBP_GameStatus_Rabbit
struct UWBP_GameStatus_Rabbit_C_ExecuteUbergraph_WBP_GameStatus_Rabbit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
