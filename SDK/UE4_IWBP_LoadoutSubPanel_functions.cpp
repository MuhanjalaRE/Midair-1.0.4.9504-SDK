// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IWBP_LoadoutSubPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIWBP_LoadoutSubPanel_C::CosmeticSelected(class UClass* Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.CosmeticSelected");

	UIWBP_LoadoutSubPanel_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)

void UIWBP_LoadoutSubPanel_C::Confirm_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.Confirm Selection");

	UIWBP_LoadoutSubPanel_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
