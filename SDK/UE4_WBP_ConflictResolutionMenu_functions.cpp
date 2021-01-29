// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ConflictResolutionMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Get_KeepNew_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_ConflictResolutionMenu_C::Get_KeepNew_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Get_KeepNew_ToolTipWidget_1");

	UWBP_ConflictResolutionMenu_C_Get_KeepNew_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Get_KeepOld_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_ConflictResolutionMenu_C::Get_KeepOld_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Get_KeepOld_ToolTipWidget_1");

	UWBP_ConflictResolutionMenu_C_Get_KeepOld_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ConflictResolutionMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.Construct");

	UWBP_ConflictResolutionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.BndEvt__KeepOld_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ConflictResolutionMenu_C::BndEvt__KeepOld_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.BndEvt__KeepOld_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	UWBP_ConflictResolutionMenu_C_BndEvt__KeepOld_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.BndEvt__KeepNew_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ConflictResolutionMenu_C::BndEvt__KeepNew_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.BndEvt__KeepNew_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature");

	UWBP_ConflictResolutionMenu_C_BndEvt__KeepNew_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.ExecuteUbergraph_WBP_ConflictResolutionMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConflictResolutionMenu_C::ExecuteUbergraph_WBP_ConflictResolutionMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.ExecuteUbergraph_WBP_ConflictResolutionMenu");

	UWBP_ConflictResolutionMenu_C_ExecuteUbergraph_WBP_ConflictResolutionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.OnResolutionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMappingConflictResolution     Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConflictResolutionMenu_C::OnResolutionSelected__DelegateSignature(EMappingConflictResolution Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C.OnResolutionSelected__DelegateSignature");

	UWBP_ConflictResolutionMenu_C_OnResolutionSelected__DelegateSignature_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
