// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ConfirmAction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.GetDynamicText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   PromptText                     (Parm, OutParm)

void UWBP_ConfirmAction_C::GetDynamicText(struct FText* PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.GetDynamicText");

	UWBP_ConfirmAction_C_GetDynamicText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PromptText != nullptr)
		*PromptText = params.PromptText;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConfirmAction_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.PreConstruct");

	UWBP_ConfirmAction_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ConfirmAction_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.Remove");

	UWBP_ConfirmAction_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ConfirmAction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.Construct");

	UWBP_ConfirmAction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_ConfirmAction_C::Slow_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.Slow Tick");

	UWBP_ConfirmAction_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConfirmAction_C::BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature");

	UWBP_ConfirmAction_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConfirmAction_C::BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature");

	UWBP_ConfirmAction_C_BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.ExecuteUbergraph_WBP_ConfirmAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConfirmAction_C::ExecuteUbergraph_WBP_ConfirmAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.ExecuteUbergraph_WBP_ConfirmAction");

	UWBP_ConfirmAction_C_ExecuteUbergraph_WBP_ConfirmAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ConfirmAction_C::OnRemoved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnRemoved__DelegateSignature");

	UWBP_ConfirmAction_C_OnRemoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnActionAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ConfirmAction_C::OnActionAccepted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnActionAccepted__DelegateSignature");

	UWBP_ConfirmAction_C_OnActionAccepted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
