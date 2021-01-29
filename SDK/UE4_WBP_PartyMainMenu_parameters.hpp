#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyMainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ShowLoadingScreen
struct UWBP_PartyMainMenu_C_ShowLoadingScreen_Params
{
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.UpdatePlayerMenuLocks
struct UWBP_PartyMainMenu_C_UpdatePlayerMenuLocks_Params
{
	EPartyStatus                                       OutPartyStatus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyMainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyMainMenu_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.CreateSessionCompleted
struct UWBP_PartyMainMenu_C_CreateSessionCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.Construct
struct UWBP_PartyMainMenu_C_Construct_Params
{
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyMainMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ExecuteUbergraph_WBP_PartyMainMenu
struct UWBP_PartyMainMenu_C_ExecuteUbergraph_WBP_PartyMainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
