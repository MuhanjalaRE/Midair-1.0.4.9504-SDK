// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_Rabbit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Rabbit_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetText_1");

	UWBP_GameStatus_Rabbit_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Update Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_GameStatus_Slot_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameStatus_Rabbit_C::Update_Slot(class UWBP_GameStatus_Slot_C* Slot, class APlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Update Slot");

	UWBP_GameStatus_Rabbit_C_Update_Slot_Params params;
	params.Slot = Slot;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Get_TimeLeftText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Rabbit_C::Get_TimeLeftText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Get_TimeLeftText_Text_1");

	UWBP_GameStatus_Rabbit_C_Get_TimeLeftText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetPlayerScorePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_GameStatus_Rabbit_C::GetPlayerScorePercent(class APlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.GetPlayerScorePercent");

	UWBP_GameStatus_Rabbit_C_GetPlayerScorePercent_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameStatus_Rabbit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.Construct");

	UWBP_GameStatus_Rabbit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameStatus_Rabbit_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.CustomEvent_1");

	UWBP_GameStatus_Rabbit_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.ExecuteUbergraph_WBP_GameStatus_Rabbit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameStatus_Rabbit_C::ExecuteUbergraph_WBP_GameStatus_Rabbit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C.ExecuteUbergraph_WBP_GameStatus_Rabbit");

	UWBP_GameStatus_Rabbit_C_ExecuteUbergraph_WBP_GameStatus_Rabbit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
