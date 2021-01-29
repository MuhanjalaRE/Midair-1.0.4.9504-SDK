#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ProgressionLine.ProgressionLine
// 0x0028
struct FProgressionLine
{
	struct FVector2D                                   Start_2_6046C587442EAB101C8D26985320D27F;                 // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   End_4_A984B152442237EA73979EAA27D326CC;                   // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UObjectInfo*                                 StartNodeInfo_13_73D0BA854B2264C6E1D07AB1E802767E;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 EndNodeInfo_7_25A48FDA44841A3CE23211926F30CFC2;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWBP_ProgressionNodeBase_C*                  EndNodeWidget_10_0606FE944264CB4CB76E3482E9422AF4;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
