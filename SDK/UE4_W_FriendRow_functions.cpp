// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_FriendRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FriendRow.W_FriendRow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamFriendInfo        InFriendInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              InAvatar                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_FriendRow_C::SetData(const struct FSteamFriendInfo& InFriendInfo, class UTexture2D* InAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FriendRow.W_FriendRow_C.SetData");

	UW_FriendRow_C_SetData_Params params;
	params.InFriendInfo = InFriendInfo;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FriendRow.W_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_FriendRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FriendRow.W_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_FriendRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_FriendRow.W_FriendRow_C.ExecuteUbergraph_W_FriendRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_FriendRow_C::ExecuteUbergraph_W_FriendRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_FriendRow.W_FriendRow_C.ExecuteUbergraph_W_FriendRow");

	UW_FriendRow_C_ExecuteUbergraph_W_FriendRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
