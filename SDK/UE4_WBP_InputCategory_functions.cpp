// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_InputCategory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputCategory.WBP_InputCategory_C.GetToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_InputCategory_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.GetToolTipWidget");

	UWBP_InputCategory_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InputCategory.WBP_InputCategory_C.ClearBinds
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputCategory_C::ClearBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.ClearBinds");

	UWBP_InputCategory_C_ClearBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.Add Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMidairInputMapping     Mapping                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputCategory_C::Add_Bind(const struct FMidairInputMapping& Mapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.Add Bind");

	UWBP_InputCategory_C_Add_Bind_Params params;
	params.Mapping = Mapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyBindAttempt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EMappingPriority               Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCategory_C::OnKeyBindAttempt(const struct FName& Name, const struct FInputActionKeyMapping& NewKey, EMappingPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.OnKeyBindAttempt");

	UWBP_InputCategory_C_OnKeyBindAttempt_Params params;
	params.Name = Name;
	params.NewKey = NewKey;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyClearAttempt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMappingPriority               Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCategory_C::OnKeyClearAttempt(const struct FName& Name, EMappingPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.OnKeyClearAttempt");

	UWBP_InputCategory_C_OnKeyClearAttempt_Params params;
	params.Name = Name;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyResetAttempt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMappingPriority               Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCategory_C::OnKeyResetAttempt(const struct FName& Name, EMappingPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.OnKeyResetAttempt");

	UWBP_InputCategory_C_OnKeyResetAttempt_Params params;
	params.Name = Name;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InputCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.Construct");

	UWBP_InputCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.Update Binding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMidairInputMapping     New_Mapping                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputCategory_C::Update_Binding(const struct FMidairInputMapping& New_Mapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.Update Binding");

	UWBP_InputCategory_C_Update_Binding_Params params;
	params.New_Mapping = New_Mapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*         Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCategory_C::BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");

	UWBP_InputCategory_C_BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params params;
	params.Area = Area;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_InputCategory_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.OnMouseEnter");

	UWBP_InputCategory_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCategory.WBP_InputCategory_C.ExecuteUbergraph_WBP_InputCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCategory_C::ExecuteUbergraph_WBP_InputCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCategory.WBP_InputCategory_C.ExecuteUbergraph_WBP_InputCategory");

	UWBP_InputCategory_C_ExecuteUbergraph_WBP_InputCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
