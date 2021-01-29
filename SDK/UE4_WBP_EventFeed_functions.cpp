// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_EventFeed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventFeed.WBP_EventFeed_C.SetVTPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EventFeed_C::SetVTPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.SetVTPlayerState");

	UWBP_EventFeed_C_SetVTPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventFeed.WBP_EventFeed_C.AddMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass**                 MessageClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLocalMessageData*      MessageData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EventFeed_C::AddMessage(class UClass** MessageClass, struct FLocalMessageData* MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.AddMessage");

	UWBP_EventFeed_C_AddMessage_Params params;
	params.MessageClass = MessageClass;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventFeed.WBP_EventFeed_C.BP_Clear
// (Event, Protected, BlueprintEvent)

void UWBP_EventFeed_C::BP_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.BP_Clear");

	UWBP_EventFeed_C_BP_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventFeed.WBP_EventFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EventFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.Construct");

	UWBP_EventFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventFeed.WBP_EventFeed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventFeed_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.Tick");

	UWBP_EventFeed_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_EventFeed.WBP_EventFeed_C.ExecuteUbergraph_WBP_EventFeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_EventFeed_C::ExecuteUbergraph_WBP_EventFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventFeed.WBP_EventFeed_C.ExecuteUbergraph_WBP_EventFeed");

	UWBP_EventFeed_C_ExecuteUbergraph_WBP_EventFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
