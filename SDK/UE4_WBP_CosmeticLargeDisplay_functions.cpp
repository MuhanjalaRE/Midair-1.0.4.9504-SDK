// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticLargeDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.Set From Cosmetic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In_Cosmetic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticLargeDisplay_C::Set_From_Cosmetic(class UClass* In_Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.Set From Cosmetic");

	UWBP_CosmeticLargeDisplay_C_Set_From_Cosmetic_Params params;
	params.In_Cosmetic = In_Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticLargeDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.PreConstruct");

	UWBP_CosmeticLargeDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.ExecuteUbergraph_WBP_CosmeticLargeDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticLargeDisplay_C::ExecuteUbergraph_WBP_CosmeticLargeDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C.ExecuteUbergraph_WBP_CosmeticLargeDisplay");

	UWBP_CosmeticLargeDisplay_C_ExecuteUbergraph_WBP_CosmeticLargeDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
