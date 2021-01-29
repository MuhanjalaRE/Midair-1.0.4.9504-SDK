// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FlareGrenade_Shell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlareGrenade_Shell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.UserConstructionScript");

	ABP_FlareGrenade_Shell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FlareGrenade_Shell_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.ReceiveBeginPlay");

	ABP_FlareGrenade_Shell_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.ExecuteUbergraph_BP_FlareGrenade_Shell
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareGrenade_Shell_C::ExecuteUbergraph_BP_FlareGrenade_Shell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGrenade_Shell.BP_FlareGrenade_Shell_C.ExecuteUbergraph_BP_FlareGrenade_Shell");

	ABP_FlareGrenade_Shell_C_ExecuteUbergraph_BP_FlareGrenade_Shell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
