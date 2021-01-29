// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FighterFlare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FighterFlare.BP_FighterFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FighterFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FighterFlare.BP_FighterFlare_C.UserConstructionScript");

	ABP_FighterFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FighterFlare.BP_FighterFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FighterFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FighterFlare.BP_FighterFlare_C.ReceiveBeginPlay");

	ABP_FighterFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FighterFlare.BP_FighterFlare_C.ExecuteUbergraph_BP_FighterFlare
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FighterFlare_C::ExecuteUbergraph_BP_FighterFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FighterFlare.BP_FighterFlare_C.ExecuteUbergraph_BP_FighterFlare");

	ABP_FighterFlare_C_ExecuteUbergraph_BP_FighterFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
