// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IWBP_NewItemBadgeCarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C.DoesHaveNewItemBadge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasNewItemBadge                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIWBP_NewItemBadgeCarrier_C::DoesHaveNewItemBadge(bool* HasNewItemBadge)
{
	static auto fn = UObject::FindObject<UFunction>("Function IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C.DoesHaveNewItemBadge");

	UIWBP_NewItemBadgeCarrier_C_DoesHaveNewItemBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNewItemBadge != nullptr)
		*HasNewItemBadge = params.HasNewItemBadge;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
