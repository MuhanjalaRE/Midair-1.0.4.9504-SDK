// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_SettingsMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_SettingsMenu_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMouseButtonDown_1");

	UWBP_SettingsMenu_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.UpdateTabButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::UpdateTabButtons(class UButton* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.UpdateTabButtons");

	UWBP_SettingsMenu_C_UpdateTabButtons_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_1706_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsMenu_C::BndEvt__Button_1706_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_1706_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsMenu_C_BndEvt__Button_1706_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_398_K2Node_ComponentBoundEvent_785_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsMenu_C::BndEvt__Button_398_K2Node_ComponentBoundEvent_785_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_398_K2Node_ComponentBoundEvent_785_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsMenu_C_BndEvt__Button_398_K2Node_ComponentBoundEvent_785_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_399_K2Node_ComponentBoundEvent_796_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsMenu_C::BndEvt__Button_399_K2Node_ComponentBoundEvent_796_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_399_K2Node_ComponentBoundEvent_796_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsMenu_C_BndEvt__Button_399_K2Node_ComponentBoundEvent_796_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_400_K2Node_ComponentBoundEvent_808_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsMenu_C::BndEvt__Button_400_K2Node_ComponentBoundEvent_808_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_400_K2Node_ComponentBoundEvent_808_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsMenu_C_BndEvt__Button_400_K2Node_ComponentBoundEvent_808_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SettingsMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Construct");

	UWBP_SettingsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsMenu_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnFocusLost");

	UWBP_SettingsMenu_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Remove");

	UWBP_SettingsMenu_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu");

	UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
