// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_SkinListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.GetHasValidColor
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::GetHasValidColor(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.GetHasValidColor");

	UWBP_Loadouts_SkinListItem_C_GetHasValidColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_CheckBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Loadouts_SkinListItem_C::Get_CheckBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_CheckBox_Visibility_1");

	UWBP_Loadouts_SkinListItem_C_Get_CheckBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_LockIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Loadouts_SkinListItem_C::Get_LockIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_LockIcon_Visibility_1");

	UWBP_Loadouts_SkinListItem_C_Get_LockIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_Loadouts_SkinListItem_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.GetBrushColor_1");

	UWBP_Loadouts_SkinListItem_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_ItemName_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_Loadouts_SkinListItem_C::Get_ItemName_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Get_ItemName_ColorAndOpacity_1");

	UWBP_Loadouts_SkinListItem_C_Get_ItemName_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Update Item Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Skin_Class                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::Update_Item_Info(class UClass* New_Skin_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Update Item Info");

	UWBP_Loadouts_SkinListItem_C_Update_Item_Info_Params params;
	params.New_Skin_Class = New_Skin_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Tick");

	UWBP_Loadouts_SkinListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Loadouts_SkinListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.Construct");

	UWBP_Loadouts_SkinListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.ExecuteUbergraph_WBP_Loadouts_SkinListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::ExecuteUbergraph_WBP_Loadouts_SkinListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.ExecuteUbergraph_WBP_Loadouts_SkinListItem");

	UWBP_Loadouts_SkinListItem_C_ExecuteUbergraph_WBP_Loadouts_SkinListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.QuickEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::QuickEquipped__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.QuickEquipped__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_QuickEquipped__DelegateSignature_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.JumpToSkinOnStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CosmeticConfiguration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_SkinListItem_C::JumpToSkinOnStore__DelegateSignature(class UClass* CosmeticConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C.JumpToSkinOnStore__DelegateSignature");

	UWBP_Loadouts_SkinListItem_C_JumpToSkinOnStore__DelegateSignature_Params params;
	params.CosmeticConfiguration = CosmeticConfiguration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
