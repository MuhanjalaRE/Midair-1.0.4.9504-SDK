// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_RabbitFlag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RabbitFlag.RabbitFlag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARabbitFlag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RabbitFlag.RabbitFlag_C.UserConstructionScript");

	ARabbitFlag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
