// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_PackButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetAugmentFromAugInfoClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  InObjectClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAugment*                AsAugment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_PackButton_C::GetAugmentFromAugInfoClass(class UClass* InObjectClass, class UAugment** AsAugment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetAugmentFromAugInfoClass");

	UWBP_Loadouts_PackButton_C_GetAugmentFromAugInfoClass_Params params;
	params.InObjectClass = InObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsAugment != nullptr)
		*AsAugment = params.AsAugment;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.SetPackInfoFromLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMALoadout              Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Loadouts_PackButton_C::SetPackInfoFromLoadout(const struct FMALoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.SetPackInfoFromLoadout");

	UWBP_Loadouts_PackButton_C_SetPackInfoFromLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_Loadouts_PackButton_C::GetForegroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetForegroundColor_1");

	UWBP_Loadouts_PackButton_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetBackgroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_Loadouts_PackButton_C::GetBackgroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetBackgroundColor_1");

	UWBP_Loadouts_PackButton_C_GetBackgroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature");

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature");

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnSelected
// (BlueprintCallable, BlueprintEvent)

void UWBP_Loadouts_PackButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnSelected");

	UWBP_Loadouts_PackButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.ExecuteUbergraph_WBP_Loadouts_PackButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_PackButton_C::ExecuteUbergraph_WBP_Loadouts_PackButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.ExecuteUbergraph_WBP_Loadouts_PackButton");

	UWBP_Loadouts_PackButton_C_ExecuteUbergraph_WBP_Loadouts_PackButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Loadouts_PackButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnClicked__DelegateSignature");

	UWBP_Loadouts_PackButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
