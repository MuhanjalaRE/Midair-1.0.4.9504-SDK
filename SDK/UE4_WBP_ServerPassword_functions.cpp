// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ServerPassword_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ServerPassword.WBP_ServerPassword_C.Get_OkButton_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ServerPassword_C::Get_OkButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.Get_OkButton_bIsEnabled_1");

	UWBP_ServerPassword_C_Get_OkButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ServerPassword_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.Construct");

	UWBP_ServerPassword_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerPassword_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerPassword_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerPassword_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerPassword_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerPassword_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_ServerPassword_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.ExecuteUbergraph_WBP_ServerPassword
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerPassword_C::ExecuteUbergraph_WBP_ServerPassword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.ExecuteUbergraph_WBP_ServerPassword");

	UWBP_ServerPassword_C_ExecuteUbergraph_WBP_ServerPassword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerPassword.WBP_ServerPassword_C.OnConnect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Password                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ServerPassword_C::OnConnect__DelegateSignature(const struct FText& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerPassword.WBP_ServerPassword_C.OnConnect__DelegateSignature");

	UWBP_ServerPassword_C_OnConnect__DelegateSignature_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
