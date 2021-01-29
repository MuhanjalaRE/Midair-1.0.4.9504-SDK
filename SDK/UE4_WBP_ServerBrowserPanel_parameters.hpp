#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ServerBrowserPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PingSortIcon_Visibility_1
struct UWBP_ServerBrowserPanel_C_Get_PingSortIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PlayerCountSortIcon_Visibility_1
struct UWBP_ServerBrowserPanel_C_Get_PlayerCountSortIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.GetSortMethodVisibility
struct UWBP_ServerBrowserPanel_C_GetSortMethodVisibility_Params
{
	EFindSessionsSortMethod                            Sort_Method;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_ServerNameSortIcon_Visibility_1
struct UWBP_ServerBrowserPanel_C_Get_ServerNameSortIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFocusReceived
struct UWBP_ServerBrowserPanel_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Not Refreshing
struct UWBP_ServerBrowserPanel_C_Not_Refreshing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Can Join
struct UWBP_ServerBrowserPanel_C_Can_Join_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Set Selected Server
struct UWBP_ServerBrowserPanel_C_Set_Selected_Server_Params
{
	class UWBP_ServerBrowserRow_C*                     Server_Row;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.AddServer
struct UWBP_ServerBrowserPanel_C_AddServer_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_ServerBrowserRow_C*                     NewServerRow;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFailure_829842194593ADCCA3AEE9A1E904AD7C
struct UWBP_ServerBrowserPanel_C_OnFailure_829842194593ADCCA3AEE9A1E904AD7C_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnSuccess_829842194593ADCCA3AEE9A1E904AD7C
struct UWBP_ServerBrowserPanel_C_OnSuccess_829842194593ADCCA3AEE9A1E904AD7C_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Try Join
struct UWBP_ServerBrowserPanel_C_Try_Join_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.On Found Sessions
struct UWBP_ServerBrowserPanel_C_On_Found_Sessions_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.TryRefresh
struct UWBP_ServerBrowserPanel_C_TryRefresh_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Tick
struct UWBP_ServerBrowserPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Join
struct UWBP_ServerBrowserPanel_C_Join_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.JoinFromPassword
struct UWBP_ServerBrowserPanel_C_JoinFromPassword_Params
{
	struct FText                                       Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Construct
struct UWBP_ServerBrowserPanel_C_Construct_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ServerBrowserPanel_C_BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.ExecuteUbergraph_WBP_ServerBrowserPanel
struct UWBP_ServerBrowserPanel_C_ExecuteUbergraph_WBP_ServerBrowserPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.NewEventDispatcher_0__DelegateSignature
struct UWBP_ServerBrowserPanel_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
