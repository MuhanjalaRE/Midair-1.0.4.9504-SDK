// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BomberFlare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BomberFlare.BP_BomberFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BomberFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BomberFlare.BP_BomberFlare_C.UserConstructionScript");

	ABP_BomberFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BomberFlare.BP_BomberFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BomberFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BomberFlare.BP_BomberFlare_C.ReceiveBeginPlay");

	ABP_BomberFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BomberFlare.BP_BomberFlare_C.ExecuteUbergraph_BP_BomberFlare
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BomberFlare_C::ExecuteUbergraph_BP_BomberFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BomberFlare.BP_BomberFlare_C.ExecuteUbergraph_BP_BomberFlare");

	ABP_BomberFlare_C_ExecuteUbergraph_BP_BomberFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
