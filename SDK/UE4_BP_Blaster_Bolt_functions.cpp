// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Blaster_Bolt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Blaster_Bolt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.UserConstructionScript");

	ABP_Blaster_Bolt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Blaster_Bolt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ReceiveBeginPlay");

	ABP_Blaster_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ExecuteUbergraph_BP_Blaster_Bolt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Blaster_Bolt_C::ExecuteUbergraph_BP_Blaster_Bolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ExecuteUbergraph_BP_Blaster_Bolt");

	ABP_Blaster_Bolt_C_ExecuteUbergraph_BP_Blaster_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
