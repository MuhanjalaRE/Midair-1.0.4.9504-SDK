// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticGridPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update Equipped Class
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic_Class                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Update_Equipped_Class(class UClass* Cosmetic_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update Equipped Class");

	UWBP_CosmeticGridPanel_C_Update_Equipped_Class_Params params;
	params.Cosmetic_Class = Cosmetic_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.DispatchSelectionAttempt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_CosmeticGridPanelItem_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::DispatchSelectionAttempt(class UClass* Class, class UWBP_CosmeticGridPanelItem_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.DispatchSelectionAttempt");

	UWBP_CosmeticGridPanel_C_DispatchSelectionAttempt_Params params;
	params.Class = Class;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Cosmetics                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Update(const struct FName& Tag, TArray<class UClass*>* Cosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update");

	UWBP_CosmeticGridPanel_C_Update_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cosmetics != nullptr)
		*Cosmetics = params.Cosmetics;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Set Num Slots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Desired_Num                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Set_Num_Slots(int Desired_Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Set Num Slots");

	UWBP_CosmeticGridPanel_C_Set_Num_Slots_Params params;
	params.Desired_Num = Desired_Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Remove Item Slot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CosmeticGridPanel_C::Remove_Item_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Remove Item Slot");

	UWBP_CosmeticGridPanel_C_Remove_Item_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Add Item Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CosmeticGridPanelItem_C* Item_Widget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Add_Item_Slot(class UWBP_CosmeticGridPanelItem_C** Item_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Add Item Slot");

	UWBP_CosmeticGridPanel_C_Add_Item_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Widget != nullptr)
		*Item_Widget = params.Item_Widget;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Locked Item Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Locked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Locked Item Selected__DelegateSignature");

	UWBP_CosmeticGridPanel_C_Locked_Item_Selected__DelegateSignature_Params params;
	params.Class = Class;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Unlocked Item Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticGridPanel_C::Unlocked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Unlocked Item Selected__DelegateSignature");

	UWBP_CosmeticGridPanel_C_Unlocked_Item_Selected__DelegateSignature_Params params;
	params.Class = Class;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
