// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Fighter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Fighter.BP_Fighter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fighter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fighter.BP_Fighter_C.UserConstructionScript");

	ABP_Fighter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fighter.BP_Fighter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fighter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fighter.BP_Fighter_C.ReceiveTick");

	ABP_Fighter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fighter.BP_Fighter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fighter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fighter.BP_Fighter_C.ReceiveBeginPlay");

	ABP_Fighter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fighter.BP_Fighter_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Fighter_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fighter.BP_Fighter_C.CustomEvent_1");

	ABP_Fighter_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fighter.BP_Fighter_C.ExecuteUbergraph_BP_Fighter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fighter_C::ExecuteUbergraph_BP_Fighter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fighter.BP_Fighter_C.ExecuteUbergraph_BP_Fighter");

	ABP_Fighter_C_ExecuteUbergraph_BP_Fighter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
