// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyChatLogButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyChatLogButton.W_PartyChatLogButton_C.Get_TextBlock_3_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_PartyChatLogButton_C::Get_TextBlock_3_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatLogButton.W_PartyChatLogButton_C.Get_TextBlock_3_Text_1");

	UW_PartyChatLogButton_C_Get_TextBlock_3_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartyChatLogButton.W_PartyChatLogButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PartyChatLogButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatLogButton.W_PartyChatLogButton_C.Construct");

	UW_PartyChatLogButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatLogButton.W_PartyChatLogButton_C.BndEvt__Button_Log_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyChatLogButton_C::BndEvt__Button_Log_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatLogButton.W_PartyChatLogButton_C.BndEvt__Button_Log_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UW_PartyChatLogButton_C_BndEvt__Button_Log_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyChatLogButton.W_PartyChatLogButton_C.ExecuteUbergraph_W_PartyChatLogButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyChatLogButton_C::ExecuteUbergraph_W_PartyChatLogButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyChatLogButton.W_PartyChatLogButton_C.ExecuteUbergraph_W_PartyChatLogButton");

	UW_PartyChatLogButton_C_ExecuteUbergraph_W_PartyChatLogButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
