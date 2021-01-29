#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionGraph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.Select Widget For Object
struct UWBP_ProgressionGraph_C_Select_Widget_For_Object_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_ProgressionNodeBase_C*                  Object_Widget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.NodeSelected
struct UWBP_ProgressionGraph_C_NodeSelected_Params
{
	class UObjectInfo*                                 Node_Object_Info;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ModifyDirection
struct UWBP_ProgressionGraph_C_ModifyDirection_Params
{
	struct FVector2D                                   Previous_Offset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Offset_to_Change;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   New_Offset;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.CreateProgressNode
struct UWBP_ProgressionGraph_C_CreateProgressNode_Params
{
	class UObjectInfo*                                 ObjectInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GridScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_ProgressionNodeBase_C*                  Parent_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_ProgressionNodeBase_C*                  Node_Widget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.PreConstruct
struct UWBP_ProgressionGraph_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ExecuteUbergraph_WBP_ProgressionGraph
struct UWBP_ProgressionGraph_C_ExecuteUbergraph_WBP_ProgressionGraph_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.On Node Selected__DelegateSignature
struct UWBP_ProgressionGraph_C_On_Node_Selected__DelegateSignature_Params
{
	class UObjectInfo*                                 Node_Object_Info;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
