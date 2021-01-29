// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HeavyCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HeavyCharacter.BP_HeavyCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HeavyCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeavyCharacter.BP_HeavyCharacter_C.UserConstructionScript");

	ABP_HeavyCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeavyCharacter.BP_HeavyCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeavyCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeavyCharacter.BP_HeavyCharacter_C.ReceiveTick");

	ABP_HeavyCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeavyCharacter.BP_HeavyCharacter_C.BP_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bFirstPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeavyCharacter_C::BP_UpdateForClientPerspective(bool* bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeavyCharacter.BP_HeavyCharacter_C.BP_UpdateForClientPerspective");

	ABP_HeavyCharacter_C_BP_UpdateForClientPerspective_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeavyCharacter.BP_HeavyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HeavyCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeavyCharacter.BP_HeavyCharacter_C.ReceiveBeginPlay");

	ABP_HeavyCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeavyCharacter.BP_HeavyCharacter_C.ExecuteUbergraph_BP_HeavyCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeavyCharacter_C::ExecuteUbergraph_BP_HeavyCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeavyCharacter.BP_HeavyCharacter_C.ExecuteUbergraph_BP_HeavyCharacter");

	ABP_HeavyCharacter_C_ExecuteUbergraph_BP_HeavyCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
