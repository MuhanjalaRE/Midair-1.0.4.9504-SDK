// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerAction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerAction.WBP_PlayerAction_C.Get_DisplayText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerAction_C::Get_DisplayText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.Get_DisplayText_Text_1");

	UWBP_PlayerAction_C_Get_DisplayText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerAction.WBP_PlayerAction_C.GetActionActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Action_Actor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAction_C::GetActionActor(class AActor** Action_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.GetActionActor");

	UWBP_PlayerAction_C_GetActionActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action_Actor != nullptr)
		*Action_Actor = params.Action_Actor;
}


// Function WBP_PlayerAction.WBP_PlayerAction_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_PlayerAction_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.GetVisibility_1");

	UWBP_PlayerAction_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerAction.WBP_PlayerAction_C.UpdatePickupTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAction_C::UpdatePickupTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.UpdatePickupTarget");

	UWBP_PlayerAction_C_UpdatePickupTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAction.WBP_PlayerAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerAction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.Construct");

	UWBP_PlayerAction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAction.WBP_PlayerAction_C.ExecuteUbergraph_WBP_PlayerAction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAction_C::ExecuteUbergraph_WBP_PlayerAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAction.WBP_PlayerAction_C.ExecuteUbergraph_WBP_PlayerAction");

	UWBP_PlayerAction_C_ExecuteUbergraph_WBP_PlayerAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
