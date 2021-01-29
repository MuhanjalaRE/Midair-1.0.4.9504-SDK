#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartySlotInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdatePosition
struct UW_PartySlotInfo_C_UpdatePosition_Params
{
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdateTalkingDisplay
struct UW_PartySlotInfo_C_UpdateTalkingDisplay_Params
{
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Txt_Level_Text_1
struct UW_PartySlotInfo_C_Get_Txt_Level_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Button_Slot_ToolTipWidget_1
struct UW_PartySlotInfo_C_Get_Button_Slot_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.Construct
struct UW_PartySlotInfo_C_Construct_Params
{
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_PartySlotInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.OnPlayerTalkingStateChanged_Event_1
struct UW_PartySlotInfo_C_OnPlayerTalkingStateChanged_Event_1_Params
{
	bool                                               IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartySlotInfo.W_PartySlotInfo_C.ExecuteUbergraph_W_PartySlotInfo
struct UW_PartySlotInfo_C_ExecuteUbergraph_W_PartySlotInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
