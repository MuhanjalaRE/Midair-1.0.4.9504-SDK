#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionGraph_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ProgressionGraph.WBP_ProgressionGraph_C
// 0x0088 (0x02B8 - 0x0230)
class UWBP_ProgressionGraph_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UWBP_ProgressionLines_C*                     LinesWidget;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                NodeCanvas;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              BaseGridSize;                                             // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Mouse_Down;                                               // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	class UWBP_ProgressionNodeBase_C*                  Root_Node;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_Node_Selected;                                         // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<class UObjectInfo*, class UWBP_ProgressionNodeBase_C*> ObjectInfoNodeMap;                                        // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionGraph.WBP_ProgressionGraph_C");
		return ptr;
	}


	void Select_Widget_For_Object(class UClass* Object_Info, class UWBP_ProgressionNodeBase_C** Object_Widget);
	void NodeSelected(class UObjectInfo* Node_Object_Info);
	void ModifyDirection(const struct FVector2D& Previous_Offset, const struct FVector2D& Offset_to_Change, struct FVector2D* New_Offset);
	void CreateProgressNode(class UObjectInfo* ObjectInfo, float GridScale, class UWBP_ProgressionNodeBase_C* Parent_Widget, class UWBP_ProgressionNodeBase_C** Node_Widget);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_WBP_ProgressionGraph(int EntryPoint);
	void On_Node_Selected__DelegateSignature(class UObjectInfo* Node_Object_Info);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
