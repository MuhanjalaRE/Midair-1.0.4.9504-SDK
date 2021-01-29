// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Server List
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayPanel_C::Switch_To_Server_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Server List");

	UWBP_PlayPanel_C_Switch_To_Server_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Match Making
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayPanel_C::Switch_To_Match_Making()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Match Making");

	UWBP_PlayPanel_C_Switch_To_Match_Making_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch to Tutorials
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayPanel_C::Switch_to_Tutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch to Tutorials");

	UWBP_PlayPanel_C_Switch_to_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Construct");

	UWBP_PlayPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayPanel.WBP_PlayPanel_C.ExecuteUbergraph_WBP_PlayPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayPanel_C::ExecuteUbergraph_WBP_PlayPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.ExecuteUbergraph_WBP_PlayPanel");

	UWBP_PlayPanel_C_ExecuteUbergraph_WBP_PlayPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
