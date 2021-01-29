#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticGridPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C
// 0x0048 (0x0278 - 0x0230)
class UWBP_CosmeticGridPanel_C : public UUserWidget
{
public:
	class UGridPanel*                                  Grid;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentlyUsedWidgets;                                     // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumElementsPerRow;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    Unlocked_Item_Selected;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Locked_Item_Selected;                                     // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWBP_CosmeticGridPanelItem_C*                LastSelectedButton;                                       // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cosmetic_Tag;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_CosmeticGridPanelItem_C*                LastEquippedButton;                                       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C");
		return ptr;
	}


	void Update_Equipped_Class(class UClass* Cosmetic_Class);
	void DispatchSelectionAttempt(class UClass* Class, class UWBP_CosmeticGridPanelItem_C* Button);
	void Update(const struct FName& Tag, TArray<class UClass*>* Cosmetics);
	void Set_Num_Slots(int Desired_Num);
	void Remove_Item_Slot();
	void Add_Item_Slot(class UWBP_CosmeticGridPanelItem_C** Item_Widget);
	void Locked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
	void Unlocked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
