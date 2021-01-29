// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_ConcGrenadeShell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConcGrenadeShell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.UserConstructionScript");

	ABP_ConcGrenadeShell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConcGrenadeShell_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ReceiveEndPlay");

	ABP_ConcGrenadeShell_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ExecuteUbergraph_BP_ConcGrenadeShell
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConcGrenadeShell_C::ExecuteUbergraph_BP_ConcGrenadeShell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ExecuteUbergraph_BP_ConcGrenadeShell");

	ABP_ConcGrenadeShell_C_ExecuteUbergraph_BP_ConcGrenadeShell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
