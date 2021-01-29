// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreFeedItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.GetColorForValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             SlateColor                     (Parm, OutParm)

void UWBP_ScoreFeedItem_C::GetColorForValue(struct FSlateColor* SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.GetColorForValue");

	UWBP_ScoreFeedItem_C_GetColorForValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScoreFeedItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Construct");

	UWBP_ScoreFeedItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreFeedItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.PreConstruct");

	UWBP_ScoreFeedItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Wrap It Up
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScoreFeedItem_C::Wrap_It_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Wrap It Up");

	UWBP_ScoreFeedItem_C_Wrap_It_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.ExecuteUbergraph_WBP_ScoreFeedItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreFeedItem_C::ExecuteUbergraph_WBP_ScoreFeedItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.ExecuteUbergraph_WBP_ScoreFeedItem");

	UWBP_ScoreFeedItem_C_ExecuteUbergraph_WBP_ScoreFeedItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
