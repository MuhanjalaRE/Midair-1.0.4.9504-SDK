#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LobbyPlayerRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C.SetData
struct UWBP_LobbyPlayerRow_C_SetData_Params
{
	struct FString                                     DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  InAvatar;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
