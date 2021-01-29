// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Leaderboards_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Leaderboards.WBP_Leaderboards_C.Populate All
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Leaderboards_C::Populate_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboards.WBP_Leaderboards_C.Populate All");

	UWBP_Leaderboards_C_Populate_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboards.WBP_Leaderboards_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Leaderboards_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboards.WBP_Leaderboards_C.OnFocusReceived");

	UWBP_Leaderboards_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Leaderboards.WBP_Leaderboards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Leaderboards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboards.WBP_Leaderboards_C.Construct");

	UWBP_Leaderboards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboards.WBP_Leaderboards_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboards_C::BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboards.WBP_Leaderboards_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature");

	UWBP_Leaderboards_C_BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboards.WBP_Leaderboards_C.ExecuteUbergraph_WBP_Leaderboards
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboards_C::ExecuteUbergraph_WBP_Leaderboards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboards.WBP_Leaderboards_C.ExecuteUbergraph_WBP_Leaderboards");

	UWBP_Leaderboards_C_ExecuteUbergraph_WBP_Leaderboards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
