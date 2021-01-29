// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Get_UnlockButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ProgressionSelection_C::Get_UnlockButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Get_UnlockButton_bIsEnabled_1");

	UWBP_ProgressionSelection_C_Get_UnlockButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.UnlockTextColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_ProgressionSelection_C::UnlockTextColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.UnlockTextColorAndOpacity");

	UWBP_ProgressionSelection_C_UnlockTextColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionSelection_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseWheel");

	UWBP_ProgressionSelection_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionSelection_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDoubleClick");

	UWBP_ProgressionSelection_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionSelection_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDown");

	UWBP_ProgressionSelection_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Updated Selection Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectInfo*             Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionSelection_C::Updated_Selection_Info(class UObjectInfo* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Updated Selection Info");

	UWBP_ProgressionSelection_C_Updated_Selection_Info_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ProgressionSelection_C::BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UWBP_ProgressionSelection_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.ExecuteUbergraph_WBP_ProgressionSelection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionSelection_C::ExecuteUbergraph_WBP_ProgressionSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.ExecuteUbergraph_WBP_ProgressionSelection");

	UWBP_ProgressionSelection_C_ExecuteUbergraph_WBP_ProgressionSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Unlock Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionSelection_C::Unlock_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Unlock Clicked__DelegateSignature");

	UWBP_ProgressionSelection_C_Unlock_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
