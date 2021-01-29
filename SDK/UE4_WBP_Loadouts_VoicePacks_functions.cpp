// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_VoicePacks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Loadouts_VoicePacks_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Update");

	UWBP_Loadouts_VoicePacks_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Loadouts_VoicePacks_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Construct");

	UWBP_Loadouts_VoicePacks_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.JumpToObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_VoicePacks_C::JumpToObject(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.JumpToObject");

	UWBP_Loadouts_VoicePacks_C_JumpToObject_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_VoicePacks_C::Button_Clicked(class UWBP_SelectableButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Button Clicked");

	UWBP_Loadouts_VoicePacks_C_Button_Clicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Equip Voice
// (BlueprintCallable, BlueprintEvent)

void UWBP_Loadouts_VoicePacks_C::Equip_Voice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Equip Voice");

	UWBP_Loadouts_VoicePacks_C_Equip_Voice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_VoicePacks_C::BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature");

	UWBP_Loadouts_VoicePacks_C_BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.ExecuteUbergraph_WBP_Loadouts_VoicePacks
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadouts_VoicePacks_C::ExecuteUbergraph_WBP_Loadouts_VoicePacks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.ExecuteUbergraph_WBP_Loadouts_VoicePacks");

	UWBP_Loadouts_VoicePacks_C_ExecuteUbergraph_WBP_Loadouts_VoicePacks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
