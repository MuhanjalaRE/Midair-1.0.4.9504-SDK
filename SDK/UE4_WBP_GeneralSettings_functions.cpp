// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GeneralSettings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_GeneralSettings_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetVisibility_1");

	UWBP_GeneralSettings_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_GeneralSettings_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetBrush_1");

	UWBP_GeneralSettings_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.On_CrosshairType_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_GeneralSettings_C::On_CrosshairType_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.On_CrosshairType_GenerateWidget_1");

	UWBP_GeneralSettings_C_On_CrosshairType_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Get_SpectatorStickOnePerson_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_GeneralSettings_C::Get_SpectatorStickOnePerson_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.Get_SpectatorStickOnePerson_ToolTipWidget");

	UWBP_GeneralSettings_C_Get_SpectatorStickOnePerson_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Apply Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GeneralSettings_C::Apply_Settings(bool Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.Apply Settings");

	UWBP_GeneralSettings_C_Apply_Settings_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GeneralSettings_C::BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	UWBP_GeneralSettings_C_BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GeneralSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.Construct");

	UWBP_GeneralSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GeneralSettings_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UWBP_GeneralSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GeneralSettings_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UWBP_GeneralSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_GeneralSettings_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.Reset");

	UWBP_GeneralSettings_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GeneralSettings_C::BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");

	UWBP_GeneralSettings_C_BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GeneralSettings.WBP_GeneralSettings_C.ExecuteUbergraph_WBP_GeneralSettings
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GeneralSettings_C::ExecuteUbergraph_WBP_GeneralSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GeneralSettings.WBP_GeneralSettings_C.ExecuteUbergraph_WBP_GeneralSettings");

	UWBP_GeneralSettings_C_ExecuteUbergraph_WBP_GeneralSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
