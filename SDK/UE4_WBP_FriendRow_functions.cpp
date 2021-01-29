// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_FriendRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FriendRow.WBP_FriendRow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamFriendInfo        InFriendInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              InAvatar                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FriendRow_C::SetData(const struct FSteamFriendInfo& InFriendInfo, class UTexture2D* InAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FriendRow.WBP_FriendRow_C.SetData");

	UWBP_FriendRow_C_SetData_Params params;
	params.InFriendInfo = InFriendInfo;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FriendRow.WBP_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FriendRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FriendRow.WBP_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_FriendRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FriendRow.WBP_FriendRow_C.ExecuteUbergraph_WBP_FriendRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FriendRow_C::ExecuteUbergraph_WBP_FriendRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FriendRow.WBP_FriendRow_C.ExecuteUbergraph_WBP_FriendRow");

	UWBP_FriendRow_C_ExecuteUbergraph_WBP_FriendRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
