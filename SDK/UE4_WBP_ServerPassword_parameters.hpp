#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ServerPassword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ServerPassword.WBP_ServerPassword_C.Get_OkButton_bIsEnabled_1
struct UWBP_ServerPassword_C_Get_OkButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.Construct
struct UWBP_ServerPassword_C_Construct_Params
{
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerPassword_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
struct UWBP_ServerPassword_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_ServerPassword_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.ExecuteUbergraph_WBP_ServerPassword
struct UWBP_ServerPassword_C_ExecuteUbergraph_WBP_ServerPassword_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerPassword.WBP_ServerPassword_C.OnConnect__DelegateSignature
struct UWBP_ServerPassword_C_OnConnect__DelegateSignature_Params
{
	struct FText                                       Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
