// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionGraph_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.Select Widget For Object
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_ProgressionNodeBase_C* Object_Widget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::Select_Widget_For_Object(class UClass* Object_Info, class UWBP_ProgressionNodeBase_C** Object_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.Select Widget For Object");

	UWBP_ProgressionGraph_C_Select_Widget_For_Object_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Widget != nullptr)
		*Object_Widget = params.Object_Widget;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.NodeSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectInfo*             Node_Object_Info               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::NodeSelected(class UObjectInfo* Node_Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.NodeSelected");

	UWBP_ProgressionGraph_C_NodeSelected_Params params;
	params.Node_Object_Info = Node_Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ModifyDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Previous_Offset                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Offset_to_Change               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               New_Offset                     (Parm, OutParm, IsPlainOldData)

void UWBP_ProgressionGraph_C::ModifyDirection(const struct FVector2D& Previous_Offset, const struct FVector2D& Offset_to_Change, struct FVector2D* New_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ModifyDirection");

	UWBP_ProgressionGraph_C_ModifyDirection_Params params;
	params.Previous_Offset = Previous_Offset;
	params.Offset_to_Change = Offset_to_Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Offset != nullptr)
		*New_Offset = params.New_Offset;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.CreateProgressNode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectInfo*             ObjectInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GridScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_ProgressionNodeBase_C* Parent_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_ProgressionNodeBase_C* Node_Widget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::CreateProgressNode(class UObjectInfo* ObjectInfo, float GridScale, class UWBP_ProgressionNodeBase_C* Parent_Widget, class UWBP_ProgressionNodeBase_C** Node_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.CreateProgressNode");

	UWBP_ProgressionGraph_C_CreateProgressNode_Params params;
	params.ObjectInfo = ObjectInfo;
	params.GridScale = GridScale;
	params.Parent_Widget = Parent_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Node_Widget != nullptr)
		*Node_Widget = params.Node_Widget;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.PreConstruct");

	UWBP_ProgressionGraph_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ExecuteUbergraph_WBP_ProgressionGraph
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::ExecuteUbergraph_WBP_ProgressionGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.ExecuteUbergraph_WBP_ProgressionGraph");

	UWBP_ProgressionGraph_C_ExecuteUbergraph_WBP_ProgressionGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.On Node Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectInfo*             Node_Object_Info               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionGraph_C::On_Node_Selected__DelegateSignature(class UObjectInfo* Node_Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionGraph.WBP_ProgressionGraph_C.On Node Selected__DelegateSignature");

	UWBP_ProgressionGraph_C_On_Node_Selected__DelegateSignature_Params params;
	params.Node_Object_Info = Node_Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
