// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CSkin_Medium_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSkin_Medium_Default.CSkin_Medium_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACSkin_Medium_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSkin_Medium_Default.CSkin_Medium_Default_C.UserConstructionScript");

	ACSkin_Medium_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSkin_Medium_Default.CSkin_Medium_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACSkin_Medium_Default_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSkin_Medium_Default.CSkin_Medium_Default_C.ReceiveBeginPlay");

	ACSkin_Medium_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSkin_Medium_Default.CSkin_Medium_Default_C.ExecuteUbergraph_CSkin_Medium_Default
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACSkin_Medium_Default_C::ExecuteUbergraph_CSkin_Medium_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSkin_Medium_Default.CSkin_Medium_Default_C.ExecuteUbergraph_CSkin_Medium_Default");

	ACSkin_Medium_Default_C_ExecuteUbergraph_CSkin_Medium_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
