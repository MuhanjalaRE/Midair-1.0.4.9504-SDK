// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ReplayControl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ReplayControl.WBP_ReplayControl_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ReplayControl_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.OnMouseButtonDown_1");

	UWBP_ReplayControl_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_ReplayControl_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.GetText_2");

	UWBP_ReplayControl_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_ReplayControl_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.GetText_1");

	UWBP_ReplayControl_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.Get_ReplaySpeedSlider_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_ReplayControl_C::Get_ReplaySpeedSlider_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.Get_ReplaySpeedSlider_Value_1");

	UWBP_ReplayControl_C_Get_ReplaySpeedSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.Get_ReplayPositionSlider_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_ReplayControl_C::Get_ReplayPositionSlider_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.Get_ReplayPositionSlider_Value_1");

	UWBP_ReplayControl_C_Get_ReplayPositionSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ReplayControl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.Construct");

	UWBP_ReplayControl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_194_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ReplayControl_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_194_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_194_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_ReplayControl_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_194_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_123_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ReplayControl_C::BndEvt__Slider_1_K2Node_ComponentBoundEvent_123_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_123_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_ReplayControl_C_BndEvt__Slider_1_K2Node_ComponentBoundEvent_123_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ReplayControl_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature");

	UWBP_ReplayControl_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ReplayControl.WBP_ReplayControl_C.ExecuteUbergraph_WBP_ReplayControl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ReplayControl_C::ExecuteUbergraph_WBP_ReplayControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReplayControl.WBP_ReplayControl_C.ExecuteUbergraph_WBP_ReplayControl");

	UWBP_ReplayControl_C_ExecuteUbergraph_WBP_ReplayControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
