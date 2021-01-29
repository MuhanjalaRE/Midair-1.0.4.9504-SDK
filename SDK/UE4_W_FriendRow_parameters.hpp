#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_FriendRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_FriendRow.W_FriendRow_C.SetData
struct UW_FriendRow_C_SetData_Params
{
	struct FSteamFriendInfo                            InFriendInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  InAvatar;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_FriendRow.W_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_FriendRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_FriendRow.W_FriendRow_C.ExecuteUbergraph_W_FriendRow
struct UW_FriendRow_C_ExecuteUbergraph_W_FriendRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
