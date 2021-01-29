#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyChatWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearChatLog
struct UW_PartyChatWindow_C_ClearChatLog_Params
{
	struct FUniqueNetIdRepl                            InPlayerId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearAllChatLogs
struct UW_PartyChatWindow_C_ClearAllChatLogs_Params
{
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToGlobal
struct UW_PartyChatWindow_C_SetChatLogToGlobal_Params
{
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToWhisper
struct UW_PartyChatWindow_C_SetChatLogToWhisper_Params
{
	struct FUniqueNetIdRepl                            InPlayerId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.GetText_1
struct UW_PartyChatWindow_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatTarget
struct UW_PartyChatWindow_C_SetChatTarget_Params
{
	struct FUniqueNetIdRepl                            InTargetPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.MessageReceived
struct UW_PartyChatWindow_C_MessageReceived_Params
{
	struct FPartyMessage                               InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
struct UW_PartyChatWindow_C_BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_PartyChatWindow_C_BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyChatWindow.W_PartyChatWindow_C.ExecuteUbergraph_W_PartyChatWindow
struct UW_PartyChatWindow_C_ExecuteUbergraph_W_PartyChatWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
