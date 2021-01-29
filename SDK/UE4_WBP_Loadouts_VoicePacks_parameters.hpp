#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_VoicePacks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Update
struct UWBP_Loadouts_VoicePacks_C_Update_Params
{
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Construct
struct UWBP_Loadouts_VoicePacks_C_Construct_Params
{
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.JumpToObject
struct UWBP_Loadouts_VoicePacks_C_JumpToObject_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Button Clicked
struct UWBP_Loadouts_VoicePacks_C_Button_Clicked_Params
{
	class UWBP_SelectableButton_C*                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.Equip Voice
struct UWBP_Loadouts_VoicePacks_C_Equip_Voice_Params
{
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
struct UWBP_Loadouts_VoicePacks_C_BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C.ExecuteUbergraph_WBP_Loadouts_VoicePacks
struct UWBP_Loadouts_VoicePacks_C_ExecuteUbergraph_WBP_Loadouts_VoicePacks_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
