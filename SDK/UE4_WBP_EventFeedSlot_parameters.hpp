#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_EventFeedSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.GetBrushColor_1
struct UWBP_EventFeedSlot_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text Color
struct UWBP_EventFeedSlot_C_Set_Text_Color_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              VTPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Update View Target Player State
struct UWBP_EventFeedSlot_C_Update_View_Target_Player_State_Params
{
	class AMAPlayerState*                              VTPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Get_DamageTypeIcon_Brush_1
struct UWBP_EventFeedSlot_C_Get_DamageTypeIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text
struct UWBP_EventFeedSlot_C_Set_Text_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Fill
struct UWBP_EventFeedSlot_C_Fill_Params
{
	class AMAPlayerState*                              Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Assist;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMADamageType*                               DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              VTPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Construct
struct UWBP_EventFeedSlot_C_Construct_Params
{
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Tick
struct UWBP_EventFeedSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.ExecuteUbergraph_WBP_EventFeedSlot
struct UWBP_EventFeedSlot_C_ExecuteUbergraph_WBP_EventFeedSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
