#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MatchEndStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MatchEndStage.MatchEndStage_C.GetTop5Players
struct AMatchEndStage_C_GetTop5Players_Params
{
};

// Function MatchEndStage.MatchEndStage_C.LookAtCamera
struct AMatchEndStage_C_LookAtCamera_Params
{
	struct FVector                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MatchEndStage.MatchEndStage_C.SetUpPlayer
struct AMatchEndStage_C_SetUpPlayer_Params
{
	struct FTransform                                  A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MatchEndStage.MatchEndStage_C.Showtime
struct AMatchEndStage_C_Showtime_Params
{
};

// Function MatchEndStage.MatchEndStage_C.UserConstructionScript
struct AMatchEndStage_C_UserConstructionScript_Params
{
};

// Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay
struct AMatchEndStage_C_ReceiveBeginPlay_Params
{
};

// Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage
struct AMatchEndStage_C_ExecuteUbergraph_MatchEndStage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
