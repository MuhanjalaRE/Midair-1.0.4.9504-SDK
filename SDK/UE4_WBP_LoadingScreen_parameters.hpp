#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
struct UWBP_LoadingScreen_C_Construct_Params
{
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Destruct
struct UWBP_LoadingScreen_C_Destruct_Params
{
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick
struct UWBP_LoadingScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
struct UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
