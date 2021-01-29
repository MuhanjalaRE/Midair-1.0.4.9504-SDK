// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_TR_FlagHolder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_TR_FlagHolder_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.GetText_1");

	UWBP_TR_FlagHolder_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TR_FlagHolder_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.Tick");

	UWBP_TR_FlagHolder_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.ExecuteUbergraph_WBP_TR_FlagHolder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TR_FlagHolder_C::ExecuteUbergraph_WBP_TR_FlagHolder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.ExecuteUbergraph_WBP_TR_FlagHolder");

	UWBP_TR_FlagHolder_C_ExecuteUbergraph_WBP_TR_FlagHolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
