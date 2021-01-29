#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NodeVisualData.NodeVisualData
// 0x003C
struct FNodeVisualData
{
	float                                              Size_14_7B5981044769D0F17D6D27A39351330C;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTexture2D*                                  OuterTexture_4_73F27B8D417F32E3019F9B88379F79B9;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  InnerTexture_5_EE95AE93420FFD27F7712AB323992E13;          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     OuterPadding_15_CA0398774638E660B8DCD6880ABF6760;         // 0x0018(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     InnerPadding_16_250CFAD64DD1978EBA5C57A94FC10F3A;         // 0x0028(0x0010) (Edit, BlueprintVisible)
	int                                                FontSize_19_8FF509E74335A093962521B6C827EFEB;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
