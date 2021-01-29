#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_TR-Elite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TR-Elite.TR-Elite_C.ReceiveBeginPlay
struct ATR_Elite_C_ReceiveBeginPlay_Params
{
};

// Function TR-Elite.TR-Elite_C.ReceiveTick
struct ATR_Elite_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TR-Elite.TR-Elite_C.ExecuteUbergraph_TR-Elite
struct ATR_Elite_C_ExecuteUbergraph_TR_Elite_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
