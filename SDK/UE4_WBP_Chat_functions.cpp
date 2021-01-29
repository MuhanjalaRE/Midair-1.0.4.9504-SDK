// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Chat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Chat.WBP_Chat_C.SetChatOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::SetChatOpacity(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.SetChatOpacity");

	UWBP_Chat_C_SetChatOpacity_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.Get_ChatEntry_HintText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Chat_C::Get_ChatEntry_HintText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.Get_ChatEntry_HintText_1");

	UWBP_Chat_C_Get_ChatEntry_HintText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Chat.WBP_Chat_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Chat_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.GetVisibility_1");

	UWBP_Chat_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Chat.WBP_Chat_C.Get_ToggleChatModeButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Chat_C::Get_ToggleChatModeButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.Get_ToggleChatModeButton_Visibility_1");

	UWBP_Chat_C_Get_ToggleChatModeButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Chat.WBP_Chat_C.Get_Message Type_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Chat_C::Get_Message_Type_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.Get_Message Type_Text_1");

	UWBP_Chat_C_Get_Message_Type_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Chat_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.Tick");

	UWBP_Chat_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.ReceiveMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor*           NameColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString*                Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor*           MessageColor                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWBP_Chat_C::ReceiveMessage(struct FString* PlayerName, struct FLinearColor* NameColor, struct FString* Message, struct FLinearColor* MessageColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.ReceiveMessage");

	UWBP_Chat_C_ReceiveMessage_Params params;
	params.PlayerName = PlayerName;
	params.NameColor = NameColor;
	params.Message = Message;
	params.MessageColor = MessageColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.OnFocusPrompt
// (Event, Protected, BlueprintEvent)

void UWBP_Chat_C::OnFocusPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.OnFocusPrompt");

	UWBP_Chat_C_OnFocusPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Chat_C::BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature");

	UWBP_Chat_C_BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Chat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.Construct");

	UWBP_Chat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.ShowVoteWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  VoteIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::ShowVoteWidget(unsigned char VoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.ShowVoteWidget");

	UWBP_Chat_C_ShowVoteWidget_Params params;
	params.VoteIndex = VoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.DestroyVoteWidget
// (BlueprintCallable, BlueprintEvent)

void UWBP_Chat_C::DestroyVoteWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.DestroyVoteWidget");

	UWBP_Chat_C_DestroyVoteWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.SetBorderOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputAlpha                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::SetBorderOpacity(class UBorder* InputPin, float InputAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.SetBorderOpacity");

	UWBP_Chat_C_SetBorderOpacity_Params params;
	params.InputPin = InputPin;
	params.InputAlpha = InputAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.StartPunVote
// (BlueprintCallable, BlueprintEvent)

void UWBP_Chat_C::StartPunVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.StartPunVote");

	UWBP_Chat_C_StartPunVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.EndPunVote
// (BlueprintCallable, BlueprintEvent)

void UWBP_Chat_C::EndPunVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.EndPunVote");

	UWBP_Chat_C_EndPunVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.WasKicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Chat_C::WasKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.WasKicked");

	UWBP_Chat_C_WasKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Chat.WBP_Chat_C.ExecuteUbergraph_WBP_Chat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Chat_C::ExecuteUbergraph_WBP_Chat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Chat.WBP_Chat_C.ExecuteUbergraph_WBP_Chat");

	UWBP_Chat_C_ExecuteUbergraph_WBP_Chat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
