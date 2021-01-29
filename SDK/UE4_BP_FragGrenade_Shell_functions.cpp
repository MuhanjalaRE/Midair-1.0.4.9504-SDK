// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FragGrenade_Shell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FragGrenade_Shell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.UserConstructionScript");

	ABP_FragGrenade_Shell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FragGrenade_Shell_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ReceiveEndPlay");

	ABP_FragGrenade_Shell_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ExecuteUbergraph_BP_FragGrenade_Shell
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FragGrenade_Shell_C::ExecuteUbergraph_BP_FragGrenade_Shell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ExecuteUbergraph_BP_FragGrenade_Shell");

	ABP_FragGrenade_Shell_C_ExecuteUbergraph_BP_FragGrenade_Shell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
