// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticGridPanelItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_CosmeticGridPanelItem_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.GetVisibility_1");

	UWBP_CosmeticGridPanelItem_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetDisplayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowMain                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::SetDisplayMode(bool bShowMain)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetDisplayMode");

	UWBP_CosmeticGridPanelItem_C_SetDisplayMode_Params params;
	params.bShowMain = bShowMain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Setup For Cosmetic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In_Cosmetic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::Setup_For_Cosmetic(class UClass* In_Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Setup For Cosmetic");

	UWBP_CosmeticGridPanelItem_C_Setup_For_Cosmetic_Params params;
	params.In_Cosmetic = In_Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature");

	UWBP_CosmeticGridPanelItem_C_BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.PreConstruct");

	UWBP_CosmeticGridPanelItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetSelected");

	UWBP_CosmeticGridPanelItem_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Set Equipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equipped                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::Set_Equipped(bool Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Set Equipped");

	UWBP_CosmeticGridPanelItem_C_Set_Equipped_Params params;
	params.Equipped = Equipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.ExecuteUbergraph_WBP_CosmeticGridPanelItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::ExecuteUbergraph_WBP_CosmeticGridPanelItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.ExecuteUbergraph_WBP_CosmeticGridPanelItem");

	UWBP_CosmeticGridPanelItem_C_ExecuteUbergraph_WBP_CosmeticGridPanelItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_CosmeticGridPanelItem_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanelItem_C::Selected__DelegateSignature(class UClass* Selected, class UWBP_CosmeticGridPanelItem_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Selected__DelegateSignature");

	UWBP_CosmeticGridPanelItem_C_Selected__DelegateSignature_Params params;
	params.Selected = Selected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
