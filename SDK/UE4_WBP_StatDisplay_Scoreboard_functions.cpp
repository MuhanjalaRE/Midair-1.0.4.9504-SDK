// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StatDisplay_Scoreboard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.Get_ScoreDisplay_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_StatDisplay_Scoreboard_C::Get_ScoreDisplay_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.Get_ScoreDisplay_Text_1");

	UWBP_StatDisplay_Scoreboard_C_Get_ScoreDisplay_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StatDisplay_Scoreboard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.PreConstruct");

	UWBP_StatDisplay_Scoreboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.ExecuteUbergraph_WBP_StatDisplay_Scoreboard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StatDisplay_Scoreboard_C::ExecuteUbergraph_WBP_StatDisplay_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.ExecuteUbergraph_WBP_StatDisplay_Scoreboard");

	UWBP_StatDisplay_Scoreboard_C_ExecuteUbergraph_WBP_StatDisplay_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
