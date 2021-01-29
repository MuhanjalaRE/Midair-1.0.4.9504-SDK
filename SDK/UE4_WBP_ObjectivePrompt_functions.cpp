// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ObjectivePrompt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ObjectivePrompt_C::UpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay");

	UWBP_ObjectivePrompt_C_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMidairObjectiveInfo    MidairObjectiveInfo            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ObjectivePrompt_C::ObjectiveNotEmpty(const struct FMidairObjectiveInfo& MidairObjectiveInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty");

	UWBP_ObjectivePrompt_C_ObjectiveNotEmpty_Params params;
	params.MidairObjectiveInfo = MidairObjectiveInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged
// (Event, Public, BlueprintEvent)

void UWBP_ObjectivePrompt_C::OnPromptChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged");

	UWBP_ObjectivePrompt_C_OnPromptChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)

void UWBP_ObjectivePrompt_C::OnObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted");

	UWBP_ObjectivePrompt_C_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ObjectivePrompt_C::ExecuteUbergraph_WBP_ObjectivePrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt");

	UWBP_ObjectivePrompt_C_ExecuteUbergraph_WBP_ObjectivePrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
