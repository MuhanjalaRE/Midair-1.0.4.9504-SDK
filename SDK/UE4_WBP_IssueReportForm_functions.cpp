// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_IssueReportForm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_IssueReportForm.WBP_IssueReportForm_C.ResetForm
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IssueReportForm_C::ResetForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.ResetForm");

	UWBP_IssueReportForm_C_ResetForm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_IssueReportForm_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.GetVisibility_2");

	UWBP_IssueReportForm_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_IssueReportForm_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.GetVisibility_1");

	UWBP_IssueReportForm_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.Get_TextBlock_9_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_IssueReportForm_C::Get_TextBlock_9_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.Get_TextBlock_9_Visibility_1");

	UWBP_IssueReportForm_C_Get_TextBlock_9_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.Get_OkButton_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_IssueReportForm_C::Get_OkButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.Get_OkButton_bIsEnabled_1");

	UWBP_IssueReportForm_C_Get_OkButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnGenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_IssueReportForm_C::OnGenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnGenerateWidget_1");

	UWBP_IssueReportForm_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnFail_AF91C2684799695ADBF1D1BBC53F98F2
// (BlueprintCallable, BlueprintEvent)

void UWBP_IssueReportForm_C::OnFail_AF91C2684799695ADBF1D1BBC53F98F2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnFail_AF91C2684799695ADBF1D1BBC53F98F2");

	UWBP_IssueReportForm_C_OnFail_AF91C2684799695ADBF1D1BBC53F98F2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnSuccess_AF91C2684799695ADBF1D1BBC53F98F2
// (BlueprintCallable, BlueprintEvent)

void UWBP_IssueReportForm_C::OnSuccess_AF91C2684799695ADBF1D1BBC53F98F2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnSuccess_AF91C2684799695ADBF1D1BBC53F98F2");

	UWBP_IssueReportForm_C_OnSuccess_AF91C2684799695ADBF1D1BBC53F98F2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_IssueReportForm_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UWBP_IssueReportForm_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_IssueReportForm_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");

	UWBP_IssueReportForm_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__ReproduceTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IssueReportForm_C::BndEvt__ReproduceTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__ReproduceTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_IssueReportForm_C_BndEvt__ReproduceTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__DescriptionTextBox_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IssueReportForm_C::BndEvt__DescriptionTextBox_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__DescriptionTextBox_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_IssueReportForm_C_BndEvt__DescriptionTextBox_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__SummaryTextBox_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IssueReportForm_C::BndEvt__SummaryTextBox_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.BndEvt__SummaryTextBox_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_IssueReportForm_C_BndEvt__SummaryTextBox_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IssueReportForm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.Construct");

	UWBP_IssueReportForm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.ExecuteUbergraph_WBP_IssueReportForm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_IssueReportForm_C::ExecuteUbergraph_WBP_IssueReportForm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.ExecuteUbergraph_WBP_IssueReportForm");

	UWBP_IssueReportForm_C_ExecuteUbergraph_WBP_IssueReportForm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnConnect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Password                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IssueReportForm_C::OnConnect__DelegateSignature(const struct FText& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_IssueReportForm.WBP_IssueReportForm_C.OnConnect__DelegateSignature");

	UWBP_IssueReportForm_C_OnConnect__DelegateSignature_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
