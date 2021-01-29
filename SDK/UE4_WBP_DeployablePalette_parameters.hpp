#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployablePalette_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleDirectNamedHotkey
struct UWBP_DeployablePalette_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleNamedHotkeyWithInt
struct UWBP_DeployablePalette_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRepairTool
struct UWBP_DeployablePalette_C_CheckRepairTool_Params
{
	bool                                               NotRepairTool;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnKeyDown
struct UWBP_DeployablePalette_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnPreviewMouseButtonDown
struct UWBP_DeployablePalette_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetNameAndDescriptionOfDeployable
struct UWBP_DeployablePalette_C_GetNameAndDescriptionOfDeployable_Params
{
	class UClass*                                      Deployable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
	struct FText                                       Description;                                              // (Parm, OutParm)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetImageAndNameOfDeployable
struct UWBP_DeployablePalette_C_GetImageAndNameOfDeployable_Params
{
	class UClass*                                      Deployable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconSmall;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Construct
struct UWBP_DeployablePalette_C_Construct_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckSingleClick
struct UWBP_DeployablePalette_C_CheckSingleClick_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRelease
struct UWBP_DeployablePalette_C_CheckRelease_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Tick
struct UWBP_DeployablePalette_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CycleCategories
struct UWBP_DeployablePalette_C_CycleCategories_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Hovered
struct UWBP_DeployablePalette_C_Hovered_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Cleanup
struct UWBP_DeployablePalette_C_Cleanup_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ProcessMouse
struct UWBP_DeployablePalette_C_ProcessMouse_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnFocusLost
struct UWBP_DeployablePalette_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Emulate Click at index
struct UWBP_DeployablePalette_C_Emulate_Click_at_index_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExitButton
struct UWBP_DeployablePalette_C_ExitButton_Params
{
};

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExecuteUbergraph_WBP_DeployablePalette
struct UWBP_DeployablePalette_C_ExecuteUbergraph_WBP_DeployablePalette_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
