// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Settings_SliderItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Settings_SliderItem_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetVisibility_1");

	UWBP_Settings_SliderItem_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetLiteralSliderSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSliderSetting               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::SetLiteralSliderSetting(float NewSliderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetLiteralSliderSetting");

	UWBP_Settings_SliderItem_C_SetLiteralSliderSetting_Params params;
	params.NewSliderSetting = NewSliderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetSliderSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSliderSetting               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::SetSliderSetting(float NewSliderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetSliderSetting");

	UWBP_Settings_SliderItem_C_SetSliderSetting_Params params;
	params.NewSliderSetting = NewSliderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.InvertSettingFromRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Setting                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MappedValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::InvertSettingFromRange(float Setting, float* MappedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.InvertSettingFromRange");

	UWBP_Settings_SliderItem_C_InvertSettingFromRange_Params params;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedValue != nullptr)
		*MappedValue = params.MappedValue;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.MapSettingToRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Setting                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MappedValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::MapSettingToRange(float Setting, float* MappedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.MapSettingToRange");

	UWBP_Settings_SliderItem_C_MapSettingToRange_Params params;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedValue != nullptr)
		*MappedValue = params.MappedValue;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetupSliderRangeValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Settings_SliderItem_C::SetupSliderRangeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetupSliderRangeValues");

	UWBP_Settings_SliderItem_C_SetupSliderRangeValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Settings_SliderItem_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetText_1");

	UWBP_Settings_SliderItem_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Settings_SliderItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.Construct");

	UWBP_Settings_SliderItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_Settings_SliderItem_C_BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Settings_SliderItem_C::BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature");

	UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Settings_SliderItem_C::BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature");

	UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ExecuteUbergraph_WBP_Settings_SliderItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::ExecuteUbergraph_WBP_Settings_SliderItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ExecuteUbergraph_WBP_Settings_SliderItem");

	UWBP_Settings_SliderItem_C_ExecuteUbergraph_WBP_Settings_SliderItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::ValueApplied__DelegateSignature(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueApplied__DelegateSignature");

	UWBP_Settings_SliderItem_C_ValueApplied__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueAdjusted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Settings_SliderItem_C::ValueAdjusted__DelegateSignature(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueAdjusted__DelegateSignature");

	UWBP_Settings_SliderItem_C_ValueAdjusted__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
