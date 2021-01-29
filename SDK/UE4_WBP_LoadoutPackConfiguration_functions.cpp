// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutPackConfiguration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetLockedClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  MostRelevantLockedClass        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::GetLockedClass(class UClass** MostRelevantLockedClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetLockedClass");

	UWBP_LoadoutPackConfiguration_C_GetLockedClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MostRelevantLockedClass != nullptr)
		*MostRelevantLockedClass = params.MostRelevantLockedClass;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGeneratePrimaries
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::PostGeneratePrimaries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGeneratePrimaries");

	UWBP_LoadoutPackConfiguration_C_PostGeneratePrimaries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGenerateSecondaries
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::PostGenerateSecondaries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGenerateSecondaries");

	UWBP_LoadoutPackConfiguration_C_PostGenerateSecondaries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifyPrimaryChange
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::NotifyPrimaryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifyPrimaryChange");

	UWBP_LoadoutPackConfiguration_C_NotifyPrimaryChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifySecondaryChange
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::NotifySecondaryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifySecondaryChange");

	UWBP_LoadoutPackConfiguration_C_NotifySecondaryChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckPackSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutsPackSlot_C* PackSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::CheckPackSlot(class UWBP_LoadoutsPackSlot_C* PackSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckPackSlot");

	UWBP_LoadoutPackConfiguration_C_CheckPackSlot_Params params;
	params.PackSlot = PackSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckAugmentSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_SimpleListItem_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IndexAt                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::CheckAugmentSlot(class UWBP_Loadouts_SimpleListItem_C* Target, int IndexAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckAugmentSlot");

	UWBP_LoadoutPackConfiguration_C_CheckAugmentSlot_Params params;
	params.Target = Target;
	params.IndexAt = IndexAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetMostRelevantError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (Parm, OutParm)

void UWBP_LoadoutPackConfiguration_C::GetMostRelevantError(struct FText* Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetMostRelevantError");

	UWBP_LoadoutPackConfiguration_C_GetMostRelevantError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error_Text != nullptr)
		*Error_Text = params.Error_Text;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Array                          (Parm, OutParm, ZeroConstructor)

void UWBP_LoadoutPackConfiguration_C::Hacky_Get_Packs(TArray<class UClass*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs");

	UWBP_LoadoutPackConfiguration_C_Hacky_Get_Packs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::CosmeticSelected(class UClass* Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected");

	UWBP_LoadoutPackConfiguration_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update");

	UWBP_LoadoutPackConfiguration_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::Pack_Clicked(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked");

	UWBP_LoadoutPackConfiguration_C_Pack_Clicked_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Primary Augment Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::Primary_Augment_Clicked(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Primary Augment Clicked");

	UWBP_LoadoutPackConfiguration_C_Primary_Augment_Clicked_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Secondary Augment Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::Secondary_Augment_Clicked(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Secondary Augment Clicked");

	UWBP_LoadoutPackConfiguration_C_Secondary_Augment_Clicked_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Regenerate Augs
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::Regenerate_Augs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Regenerate Augs");

	UWBP_LoadoutPackConfiguration_C_Regenerate_Augs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Check Secondaries for error
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::Check_Secondaries_for_error()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Check Secondaries for error");

	UWBP_LoadoutPackConfiguration_C_Check_Secondaries_for_error_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::Jump_To_Object(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object");

	UWBP_LoadoutPackConfiguration_C_Jump_To_Object_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::Confirm_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection");

	UWBP_LoadoutPackConfiguration_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::ExecuteUbergraph_WBP_LoadoutPackConfiguration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration");

	UWBP_LoadoutPackConfiguration_C_ExecuteUbergraph_WBP_LoadoutPackConfiguration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::PackEquipped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_PackEquipped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutPackConfiguration_C::JumpToObject__DelegateSignature(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_JumpToObject__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidAugmentToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutPackConfiguration_C::InvalidAugmentToast__DelegateSignature(const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidAugmentToast__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_InvalidAugmentToast__DelegateSignature_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdateSecondaryAugment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Augment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Suffix_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutPackConfiguration_C::UpdateSecondaryAugment__DelegateSignature(class UClass* Augment, const struct FText& Suffix_Text, const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdateSecondaryAugment__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_UpdateSecondaryAugment__DelegateSignature_Params params;
	params.Augment = Augment;
	params.Suffix_Text = Suffix_Text;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_LoadoutPackConfiguration_C::DismissToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_DismissToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidPackToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutPackConfiguration_C::InvalidPackToast__DelegateSignature(const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidPackToast__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_InvalidPackToast__DelegateSignature_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Pack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Suffix_                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutPackConfiguration_C::UpdatePack__DelegateSignature(class UClass* New_Pack, const struct FText& Suffix_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_UpdatePack__DelegateSignature_Params params;
	params.New_Pack = New_Pack;
	params.Suffix_ = Suffix_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePrimaryAugment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Augment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Suffix_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutPackConfiguration_C::UpdatePrimaryAugment__DelegateSignature(class UClass* Augment, const struct FText& Suffix_Text, const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePrimaryAugment__DelegateSignature");

	UWBP_LoadoutPackConfiguration_C_UpdatePrimaryAugment__DelegateSignature_Params params;
	params.Augment = Augment;
	params.Suffix_Text = Suffix_Text;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
