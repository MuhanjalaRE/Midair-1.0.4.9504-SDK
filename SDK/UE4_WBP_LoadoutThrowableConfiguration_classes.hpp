#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutThrowableConfiguration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C
// 0x0071 (0x02A1 - 0x0230)
class UWBP_LoadoutThrowableConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                WeaponSlots;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_Loadouts_ItemSlot_C*                    LastSelectedButton;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    UpdateThrowableInfo;                                      // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Index_For;                                                // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    InvalidThrowableToast;                                    // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DismissToast;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ConfiguratorApplied;                                      // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Jump_to_Throwable;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsPracticeMode;                                           // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C");
		return ptr;
	}


	void GetLockedClass(class UClass** Locked);
	void CheckThrowableSlot(class UWBP_Loadouts_ItemSlot_C* InputPin);
	void GetMostRelevantError(struct FText* Error_Text);
	void HackyGetAllThrowables(TArray<class UClass*>* Array);
	void CosmeticSelected(class UClass* Cosmetic);
	void Update_Throwables_List(int Throwable_Index);
	void OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void ThrowableSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void Jump_To_Object(class UClass* Object_Info);
	void Confirm_Selection();
	void ExecuteUbergraph_WBP_LoadoutThrowableConfiguration(int EntryPoint);
	void Jump_to_Throwable__DelegateSignature(class UClass* Object_Info);
	void ConfiguratorApplied__DelegateSignature();
	void DismissToast__DelegateSignature();
	void InvalidThrowableToast__DelegateSignature(const struct FText& Error_Message);
	void UpdateThrowableInfo__DelegateSignature(class UClass* Object_Info_Class, const struct FText& Name_Suffix);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
