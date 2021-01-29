// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CSkin_DefaultSetup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSkin_DefaultSetup.CSkin_DefaultSetup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACSkin_DefaultSetup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSkin_DefaultSetup.CSkin_DefaultSetup_C.UserConstructionScript");

	ACSkin_DefaultSetup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
