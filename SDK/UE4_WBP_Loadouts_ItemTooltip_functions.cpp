// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_ItemTooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C.Get_TextBlock_218_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Loadouts_ItemTooltip_C::Get_TextBlock_218_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C.Get_TextBlock_218_Text_1");

	UWBP_Loadouts_ItemTooltip_C_Get_TextBlock_218_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
