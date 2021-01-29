// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ConfirmWithMatchTimer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C.GetDynamicText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   PromptText                     (Parm, OutParm)

void UWBP_ConfirmWithMatchTimer_C::GetDynamicText(struct FText* PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C.GetDynamicText");

	UWBP_ConfirmWithMatchTimer_C_GetDynamicText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PromptText != nullptr)
		*PromptText = params.PromptText;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
