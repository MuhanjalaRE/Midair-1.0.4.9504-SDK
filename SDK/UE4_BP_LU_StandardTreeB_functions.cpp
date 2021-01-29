// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LU_StandardTreeB_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LU_StandardTreeB.BP_LU_StandardTreeB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LU_StandardTreeB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LU_StandardTreeB.BP_LU_StandardTreeB_C.UserConstructionScript");

	ABP_LU_StandardTreeB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
