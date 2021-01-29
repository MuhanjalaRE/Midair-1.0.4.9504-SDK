// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WSkin_DefaultSetup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWSkin_DefaultSetup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.UserConstructionScript");

	AWSkin_DefaultSetup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
