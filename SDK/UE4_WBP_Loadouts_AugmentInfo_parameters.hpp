#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_AugmentInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.SetErrorOnly
struct UWBP_Loadouts_AugmentInfo_C_SetErrorOnly_Params
{
	struct FText                                       New_Error;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.Set
struct UWBP_Loadouts_AugmentInfo_C_Set_Params
{
	class UClass*                                      AugmentInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Error_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
