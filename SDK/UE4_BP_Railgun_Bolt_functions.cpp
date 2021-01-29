// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Railgun_Bolt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Railgun_Bolt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.UserConstructionScript");

	ABP_Railgun_Bolt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Railgun_Bolt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ReceiveBeginPlay");

	ABP_Railgun_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ExecuteUbergraph_BP_Railgun_Bolt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Railgun_Bolt_C::ExecuteUbergraph_BP_Railgun_Bolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ExecuteUbergraph_BP_Railgun_Bolt");

	ABP_Railgun_Bolt_C_ExecuteUbergraph_BP_Railgun_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
