// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Get_AcceptButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_CosmeticPanel_C::Get_AcceptButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Get_AcceptButton_Visibility_1");

	UWBP_CosmeticPanel_C_Get_AcceptButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Update Grid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Cosmetics                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticPanel_C::Update_Grid(const struct FName& Tag, TArray<class UClass*>* Cosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Update Grid");

	UWBP_CosmeticPanel_C_Update_Grid_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cosmetics != nullptr)
		*Cosmetics = params.Cosmetics;
}


// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked Item Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticPanel_C::BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked Item Selected__DelegateSignature");

	UWBP_CosmeticPanel_C_BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked_Item_Selected__DelegateSignature_Params params;
	params.Class = Class;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked Item Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticPanel_C::BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked Item Selected__DelegateSignature");

	UWBP_CosmeticPanel_C_BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked_Item_Selected__DelegateSignature_Params params;
	params.Class = Class;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticPanel_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature");

	UWBP_CosmeticPanel_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.ExecuteUbergraph_WBP_CosmeticPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticPanel_C::ExecuteUbergraph_WBP_CosmeticPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.ExecuteUbergraph_WBP_CosmeticPanel");

	UWBP_CosmeticPanel_C_ExecuteUbergraph_WBP_CosmeticPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
