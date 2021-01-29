#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Chat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Chat.WBP_Chat_C.SetChatOpacity
struct UWBP_Chat_C_SetChatOpacity_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.Get_ChatEntry_HintText_1
struct UWBP_Chat_C_Get_ChatEntry_HintText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Chat.WBP_Chat_C.GetVisibility_1
struct UWBP_Chat_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.Get_ToggleChatModeButton_Visibility_1
struct UWBP_Chat_C_Get_ToggleChatModeButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.Get_Message Type_Text_1
struct UWBP_Chat_C_Get_Message_Type_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Chat.WBP_Chat_C.Tick
struct UWBP_Chat_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.ReceiveMessage
struct UWBP_Chat_C_ReceiveMessage_Params
{
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor*                               NameColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString*                                    Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor*                               MessageColor;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.OnFocusPrompt
struct UWBP_Chat_C_OnFocusPrompt_Params
{
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_Chat.WBP_Chat_C.Construct
struct UWBP_Chat_C_Construct_Params
{
};

// Function WBP_Chat.WBP_Chat_C.ShowVoteWidget
struct UWBP_Chat_C_ShowVoteWidget_Params
{
	unsigned char                                      VoteIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.DestroyVoteWidget
struct UWBP_Chat_C_DestroyVoteWidget_Params
{
};

// Function WBP_Chat.WBP_Chat_C.SetBorderOpacity
struct UWBP_Chat_C_SetBorderOpacity_Params
{
	class UBorder*                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputAlpha;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Chat.WBP_Chat_C.StartPunVote
struct UWBP_Chat_C_StartPunVote_Params
{
};

// Function WBP_Chat.WBP_Chat_C.EndPunVote
struct UWBP_Chat_C_EndPunVote_Params
{
};

// Function WBP_Chat.WBP_Chat_C.WasKicked
struct UWBP_Chat_C_WasKicked_Params
{
};

// Function WBP_Chat.WBP_Chat_C.ExecuteUbergraph_WBP_Chat
struct UWBP_Chat_C_ExecuteUbergraph_WBP_Chat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
