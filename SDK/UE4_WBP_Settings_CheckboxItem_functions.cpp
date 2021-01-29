// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Settings_CheckboxItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetIsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsChecked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_CheckboxItem_C::GetIsChecked(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetIsChecked");

	UWBP_Settings_CheckboxItem_C_GetIsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChecked != nullptr)
		*IsChecked = params.IsChecked;
}


// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.SetValueFromBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_CheckboxItem_C::SetValueFromBool(bool InChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.SetValueFromBool");

	UWBP_Settings_CheckboxItem_C_SetValueFromBool_Params params;
	params.InChecked = InChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Settings_CheckboxItem_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetText_1");

	UWBP_Settings_CheckboxItem_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_CheckboxItem_C::BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_Settings_CheckboxItem_C_BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_CheckboxItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.PreConstruct");

	UWBP_Settings_CheckboxItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.ExecuteUbergraph_WBP_Settings_CheckboxItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_CheckboxItem_C::ExecuteUbergraph_WBP_Settings_CheckboxItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.ExecuteUbergraph_WBP_Settings_CheckboxItem");

	UWBP_Settings_CheckboxItem_C_ExecuteUbergraph_WBP_Settings_CheckboxItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
