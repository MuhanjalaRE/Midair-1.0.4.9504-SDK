#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CharacterInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_TextBlock_5_Text_1
struct UWBP_CharacterInfo_C_Get_TextBlock_5_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_StatValue_Text_1
struct UWBP_CharacterInfo_C_Get_StatValue_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Set Stat
struct UWBP_CharacterInfo_C_Set_Stat_Params
{
	struct FCharacterStatDetails                       Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_CharacterInfo.WBP_CharacterInfo_C.ExecuteUbergraph_WBP_CharacterInfo
struct UWBP_CharacterInfo_C_ExecuteUbergraph_WBP_CharacterInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
