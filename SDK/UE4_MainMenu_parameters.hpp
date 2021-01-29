#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainMenu.MainMenu_C.HorribleLoadoutsSaveHack
struct AMainMenu_C_HorribleLoadoutsSaveHack_Params
{
};

// Function MainMenu.MainMenu_C.ReceiveBeginPlay
struct AMainMenu_C_ReceiveBeginPlay_Params
{
};

// Function MainMenu.MainMenu_C.ReceiveEndPlay
struct AMainMenu_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Load Next Level
struct AMainMenu_C_Load_Next_Level_Params
{
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
