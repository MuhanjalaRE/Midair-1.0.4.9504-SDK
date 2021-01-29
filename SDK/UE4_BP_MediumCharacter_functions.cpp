// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MediumCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumCharacter.BP_MediumCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumCharacter.BP_MediumCharacter_C.UserConstructionScript");

	ABP_MediumCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveTick");

	ABP_MediumCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MediumCharacter.BP_MediumCharacter_C.BP_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bFirstPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumCharacter_C::BP_UpdateForClientPerspective(bool* bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumCharacter.BP_MediumCharacter_C.BP_UpdateForClientPerspective");

	ABP_MediumCharacter_C_BP_UpdateForClientPerspective_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MediumCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveBeginPlay");

	ABP_MediumCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MediumCharacter.BP_MediumCharacter_C.ExecuteUbergraph_BP_MediumCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumCharacter_C::ExecuteUbergraph_BP_MediumCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumCharacter.BP_MediumCharacter_C.ExecuteUbergraph_BP_MediumCharacter");

	ABP_MediumCharacter_C_ExecuteUbergraph_BP_MediumCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
