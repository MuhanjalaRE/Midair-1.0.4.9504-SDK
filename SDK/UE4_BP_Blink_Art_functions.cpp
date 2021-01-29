// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Blink_Art_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Blink_Art.BP_Blink_Art_C.StartBlink
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_Blink_Art_C::StartBlink(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.StartBlink");

	UBP_Blink_Art_C_StartBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Blink_Art.BP_Blink_Art_C.StopBlink
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_Blink_Art_C::StopBlink(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.StopBlink");

	UBP_Blink_Art_C_StopBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Blink_Art.BP_Blink_Art_C.ExecuteUbergraph_BP_Blink_Art
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Blink_Art_C::ExecuteUbergraph_BP_Blink_Art(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.ExecuteUbergraph_BP_Blink_Art");

	UBP_Blink_Art_C_ExecuteUbergraph_BP_Blink_Art_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
