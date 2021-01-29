// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MatchType_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchType.WBP_MatchType_C.Get_TextLobbyStatus_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_MatchType_C::Get_TextLobbyStatus_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchType.WBP_MatchType_C.Get_TextLobbyStatus_ToolTipWidget_1");

	UWBP_MatchType_C_Get_TextLobbyStatus_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchType.WBP_MatchType_C.Get_TextLobbyStatus_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MatchType_C::Get_TextLobbyStatus_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchType.WBP_MatchType_C.Get_TextLobbyStatus_Text_1");

	UWBP_MatchType_C_Get_TextLobbyStatus_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchType.WBP_MatchType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchType.WBP_MatchType_C.Construct");

	UWBP_MatchType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchType.WBP_MatchType_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchType_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchType.WBP_MatchType_C.Tick");

	UWBP_MatchType_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchType.WBP_MatchType_C.ExecuteUbergraph_WBP_MatchType
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchType_C::ExecuteUbergraph_WBP_MatchType(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchType.WBP_MatchType_C.ExecuteUbergraph_WBP_MatchType");

	UWBP_MatchType_C_ExecuteUbergraph_WBP_MatchType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
