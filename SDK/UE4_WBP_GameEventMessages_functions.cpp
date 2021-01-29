// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameEventMessages_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.PlayPracticeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Message_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessages_C::PlayPracticeSound(unsigned char Message_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.PlayPracticeSound");

	UWBP_GameEventMessages_C_PlayPracticeSound_Params params;
	params.Message_Index = Message_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Rabbit Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Message_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessages_C::Play_Rabbit_Sound(unsigned char Message_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Rabbit Sound");

	UWBP_GameEventMessages_C_Play_Rabbit_Sound_Params params;
	params.Message_Index = Message_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.SetIsFriendly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FriendlyOnSameTeam             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessages_C::SetIsFriendly(bool FriendlyOnSameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.SetIsFriendly");

	UWBP_GameEventMessages_C_SetIsFriendly_Params params;
	params.FriendlyOnSameTeam = FriendlyOnSameTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Event Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameMessage>      Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessages_C::Play_Event_Sound(TEnumAsByte<EGameMessage> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Event Sound");

	UWBP_GameEventMessages_C_Play_Event_Sound_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.AddMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass**                 MessageClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLocalMessageData*      MessageData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GameEventMessages_C::AddMessage(class UClass** MessageClass, struct FLocalMessageData* MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.AddMessage");

	UWBP_GameEventMessages_C_AddMessage_Params params;
	params.MessageClass = MessageClass;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameEventMessages_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.Construct");

	UWBP_GameEventMessages_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameEventMessages_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.CustomEvent_1");

	UWBP_GameEventMessages_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessages.WBP_GameEventMessages_C.ExecuteUbergraph_WBP_GameEventMessages
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessages_C::ExecuteUbergraph_WBP_GameEventMessages(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessages.WBP_GameEventMessages_C.ExecuteUbergraph_WBP_GameEventMessages");

	UWBP_GameEventMessages_C_ExecuteUbergraph_WBP_GameEventMessages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
