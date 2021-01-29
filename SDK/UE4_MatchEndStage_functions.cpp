// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MatchEndStage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchEndStage.MatchEndStage_C.GetTop5Players
// (Public, BlueprintCallable, BlueprintEvent)

void AMatchEndStage_C::GetTop5Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.GetTop5Players");

	AMatchEndStage_C_GetTop5Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchEndStage.MatchEndStage_C.LookAtCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AMatchEndStage_C::LookAtCamera(struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.LookAtCamera");

	AMatchEndStage_C_LookAtCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function MatchEndStage.MatchEndStage_C.SetUpPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMatchEndStage_C::SetUpPlayer(const struct FString& PlayerName, struct FTransform* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.SetUpPlayer");

	AMatchEndStage_C_SetUpPlayer_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
}


// Function MatchEndStage.MatchEndStage_C.Showtime
// (Public, BlueprintCallable, BlueprintEvent)

void AMatchEndStage_C::Showtime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.Showtime");

	AMatchEndStage_C_Showtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchEndStage.MatchEndStage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMatchEndStage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.UserConstructionScript");

	AMatchEndStage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMatchEndStage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay");

	AMatchEndStage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMatchEndStage_C::ExecuteUbergraph_MatchEndStage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage");

	AMatchEndStage_C_ExecuteUbergraph_MatchEndStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
