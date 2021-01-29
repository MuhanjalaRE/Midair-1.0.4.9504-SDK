// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_TutorialButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TutorialButton.WBP_TutorialButton_C.Get_IconOnTheLeft_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_TutorialButton_C::Get_IconOnTheLeft_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Get_IconOnTheLeft_Brush_1");

	UWBP_TutorialButton_C_Get_IconOnTheLeft_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.Get State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TutorialButton_C::Get_State(unsigned char* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Get State");

	UWBP_TutorialButton_C_Get_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_TutorialButton_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.GetVisibility_1");

	UWBP_TutorialButton_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultTextBlock_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_TutorialButton_C::Get_DefaultTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultTextBlock_Text_1");

	UWBP_TutorialButton_C_Get_DefaultTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultTextBlock_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_TutorialButton_C::Get_DefaultTextBlock_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultTextBlock_ColorAndOpacity_1");

	UWBP_TutorialButton_C_Get_DefaultTextBlock_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultBorder_BrushColor_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_TutorialButton_C::Get_DefaultBorder_BrushColor_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Get_DefaultBorder_BrushColor_0_1");

	UWBP_TutorialButton_C_Get_DefaultBorder_BrushColor_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.OnSelected
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.OnSelected");

	UWBP_TutorialButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.OnActive
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialButton_C::OnActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.OnActive");

	UWBP_TutorialButton_C_OnActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.OnPressed
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialButton_C::OnPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.OnPressed");

	UWBP_TutorialButton_C_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.OnUpdateDisabled
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialButton_C::OnUpdateDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.OnUpdateDisabled");

	UWBP_TutorialButton_C_OnUpdateDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialButton_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UWBP_TutorialButton_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialButton_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature");

	UWBP_TutorialButton_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialButton_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature");

	UWBP_TutorialButton_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TutorialButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.PreConstruct");

	UWBP_TutorialButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TutorialButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.Construct");

	UWBP_TutorialButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialButton_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_TutorialButton_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TutorialButton.WBP_TutorialButton_C.ExecuteUbergraph_WBP_TutorialButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TutorialButton_C::ExecuteUbergraph_WBP_TutorialButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TutorialButton.WBP_TutorialButton_C.ExecuteUbergraph_WBP_TutorialButton");

	UWBP_TutorialButton_C_ExecuteUbergraph_WBP_TutorialButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
