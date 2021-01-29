// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_AugmentSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_AugmentSlot_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetVisibility_1");

	UWBP_AugmentSlot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_AugmentSlot_C::GetForegroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetForegroundColor_1");

	UWBP_AugmentSlot_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetBrushColor_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_AugmentSlot_C::GetBrushColor_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetBrushColor_2");

	UWBP_AugmentSlot_C_GetBrushColor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_AugmentSlot_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetBrushColor_1");

	UWBP_AugmentSlot_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_AugmentSlot_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.GetPercent_1");

	UWBP_AugmentSlot_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AugmentSlot.WBP_AugmentSlot_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Augment_Class                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAugment*                Augment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumBuddies                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AugmentSlot_C::UpdateInfo(class UClass* Augment_Class, class UAugment* Augment, int NumBuddies)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentSlot.WBP_AugmentSlot_C.UpdateInfo");

	UWBP_AugmentSlot_C_UpdateInfo_Params params;
	params.Augment_Class = Augment_Class;
	params.Augment = Augment;
	params.NumBuddies = NumBuddies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
