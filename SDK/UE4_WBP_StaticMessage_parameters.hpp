#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StaticMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_StaticMessage.WBP_StaticMessage_C.PreConstruct
struct UWBP_StaticMessage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StaticMessage.WBP_StaticMessage_C.Remove
struct UWBP_StaticMessage_C_Remove_Params
{
};

// Function WBP_StaticMessage.WBP_StaticMessage_C.ExecuteUbergraph_WBP_StaticMessage
struct UWBP_StaticMessage_C_ExecuteUbergraph_WBP_StaticMessage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StaticMessage.WBP_StaticMessage_C.OnRemoved__DelegateSignature
struct UWBP_StaticMessage_C_OnRemoved__DelegateSignature_Params
{
};

// Function WBP_StaticMessage.WBP_StaticMessage_C.OnActionAccepted__DelegateSignature
struct UWBP_StaticMessage_C_OnActionAccepted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
