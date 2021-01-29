#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerAction.WBP_PlayerAction_C.Get_DisplayText_Text_1
struct UWBP_PlayerAction_C_Get_DisplayText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerAction.WBP_PlayerAction_C.GetActionActor
struct UWBP_PlayerAction_C_GetActionActor_Params
{
	class AActor*                                      Action_Actor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAction.WBP_PlayerAction_C.GetVisibility_1
struct UWBP_PlayerAction_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerAction.WBP_PlayerAction_C.UpdatePickupTarget
struct UWBP_PlayerAction_C_UpdatePickupTarget_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAction.WBP_PlayerAction_C.Construct
struct UWBP_PlayerAction_C_Construct_Params
{
};

// Function WBP_PlayerAction.WBP_PlayerAction_C.ExecuteUbergraph_WBP_PlayerAction
struct UWBP_PlayerAction_C_ExecuteUbergraph_WBP_PlayerAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
