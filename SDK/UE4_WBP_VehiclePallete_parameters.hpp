#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehiclePallete_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleDirectNamedHotkey
struct UWBP_VehiclePallete_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleNamedHotkeyWithInt
struct UWBP_VehiclePallete_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.Construct
struct UWBP_VehiclePallete_C_Construct_Params
{
};

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.Destruct
struct UWBP_VehiclePallete_C_Destruct_Params
{
};

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.ExecuteUbergraph_WBP_VehiclePallete
struct UWBP_VehiclePallete_C_ExecuteUbergraph_WBP_VehiclePallete_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
