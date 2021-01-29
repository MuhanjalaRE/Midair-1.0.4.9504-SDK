// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionLines_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionLines.WBP_ProgressionLines_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProgressionLines_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionLines.WBP_ProgressionLines_C.OnPaint");

	UWBP_ProgressionLines_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WBP_ProgressionLines.WBP_ProgressionLines_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProgressionLines_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionLines.WBP_ProgressionLines_C.Construct");

	UWBP_ProgressionLines_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionLines.WBP_ProgressionLines_C.ExecuteUbergraph_WBP_ProgressionLines
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionLines_C::ExecuteUbergraph_WBP_ProgressionLines(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionLines.WBP_ProgressionLines_C.ExecuteUbergraph_WBP_ProgressionLines");

	UWBP_ProgressionLines_C_ExecuteUbergraph_WBP_ProgressionLines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
