// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_TeamRabbitFlag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamRabbitFlag.TeamRabbitFlag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeamRabbitFlag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamRabbitFlag.TeamRabbitFlag_C.UserConstructionScript");

	ATeamRabbitFlag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
