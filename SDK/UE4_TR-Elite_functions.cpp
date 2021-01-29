// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_TR-Elite_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TR-Elite.TR-Elite_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATR_Elite_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TR-Elite.TR-Elite_C.ReceiveBeginPlay");

	ATR_Elite_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TR-Elite.TR-Elite_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATR_Elite_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TR-Elite.TR-Elite_C.ReceiveTick");

	ATR_Elite_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TR-Elite.TR-Elite_C.ExecuteUbergraph_TR-Elite
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATR_Elite_C::ExecuteUbergraph_TR_Elite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TR-Elite.TR-Elite_C.ExecuteUbergraph_TR-Elite");

	ATR_Elite_C_ExecuteUbergraph_TR_Elite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
