// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WSkin_Chaingun_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWSkin_Chaingun_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.UserConstructionScript");

	AWSkin_Chaingun_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWSkin_Chaingun_Default_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.ReceiveBeginPlay");

	AWSkin_Chaingun_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.ExecuteUbergraph_WSkin_Chaingun_Default
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWSkin_Chaingun_Default_C::ExecuteUbergraph_WSkin_Chaingun_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WSkin_Chaingun_Default.WSkin_Chaingun_Default_C.ExecuteUbergraph_WSkin_Chaingun_Default");

	AWSkin_Chaingun_Default_C_ExecuteUbergraph_WSkin_Chaingun_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
