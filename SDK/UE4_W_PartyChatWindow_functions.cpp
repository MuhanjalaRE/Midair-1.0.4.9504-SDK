// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyChatWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearChatLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerId                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PartyChatWindow_C::ClearChatLog(const struct FUniqueNetIdRepl& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.ClearChatLog");

	UW_PartyChatWindow_C_ClearChatLog_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearAllChatLogs
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyChatWindow_C::ClearAllChatLogs()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.ClearAllChatLogs");

	UW_PartyChatWindow_C_ClearAllChatLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToGlobal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_PartyChatWindow_C::SetChatLogToGlobal()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToGlobal");

	UW_PartyChatWindow_C_SetChatLogToGlobal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToWhisper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerId                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PartyChatWindow_C::SetChatLogToWhisper(const struct FUniqueNetIdRepl& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToWhisper");

	UW_PartyChatWindow_C_SetChatLogToWhisper_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_PartyChatWindow_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.GetText_1");

	UW_PartyChatWindow_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InTargetPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PartyChatWindow_C::SetChatTarget(const struct FUniqueNetIdRepl& InTargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatTarget");

	UW_PartyChatWindow_C_SetChatTarget_Params params;
	params.InTargetPlayer = InTargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.MessageReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyMessage           InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PartyChatWindow_C::MessageReceived(const struct FPartyMessage& InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.MessageReceived");

	UW_PartyChatWindow_C_MessageReceived_Params params;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyChatWindow_C::BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature");

	UW_PartyChatWindow_C_BndEvt__Button_Party_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyChatWindow_C::BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UW_PartyChatWindow_C_BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.ExecuteUbergraph_W_PartyChatWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyChatWindow_C::ExecuteUbergraph_W_PartyChatWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatWindow.W_PartyChatWindow_C.ExecuteUbergraph_W_PartyChatWindow");

	UW_PartyChatWindow_C_ExecuteUbergraph_W_PartyChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
