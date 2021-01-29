#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MenuToast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_MenuToast.WBP_MenuToast_C.Quickly Hide
struct UWBP_MenuToast_C_Quickly_Hide_Params
{
	float                                              Time_Unitl_Hid;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuToast.WBP_MenuToast_C.GetBrush_1
struct UWBP_MenuToast_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MenuToast.WBP_MenuToast_C.Update
struct UWBP_MenuToast_C_Update_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuToast.WBP_MenuToast_C.Hide
struct UWBP_MenuToast_C_Hide_Params
{
};

// Function WBP_MenuToast.WBP_MenuToast_C.ExecuteUbergraph_WBP_MenuToast
struct UWBP_MenuToast_C_ExecuteUbergraph_WBP_MenuToast_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
