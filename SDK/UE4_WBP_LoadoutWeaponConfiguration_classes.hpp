#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutWeaponConfiguration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C
// 0x0094 (0x02C4 - 0x0230)
class UWBP_LoadoutWeaponConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UNamedSlot*                                  AppearanceMenu;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                WeaponSlots;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_Loadouts_ItemSlot_C*                    LastSelectedButton;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    UpdateWeaponInfo;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Active_Index;                                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    InvalidWeaponToast;                                       // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DismissToast;                                             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ConfiguratorApplied;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Jump_To_Object;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsPracticeMode;                                           // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              WeaponsList;                                              // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Weapon_Index;                                     // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C");
		return ptr;
	}


	void GetLockedClass(class UClass** Locked);
	void AddNoneWeapon();
	void CheckWeaponSlot(class UWBP_Loadouts_ItemSlot_C* InputPin);
	void GetMostRelevantError(struct FText* Error_Text);
	void HackyGetAllWeapons(TArray<class UClass*>* Array);
	void Weapon_Selected(class UWBP_SelectableButton_C* Clicked_Button);
	void OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void Update_Weapon_List(int Weapon_Index);
	void Jump_to_Weapon(class UClass* Object_Info);
	void Confirm_Selection();
	void CosmeticSelected(class UClass* Cosmetic);
	void ExecuteUbergraph_WBP_LoadoutWeaponConfiguration(int EntryPoint);
	void Jump_to_Object__DelegateSignature(class UClass* Object_Info);
	void ConfiguratorApplied__DelegateSignature();
	void DismissToast__DelegateSignature();
	void InvalidWeaponToast__DelegateSignature(const struct FText& Error_Message);
	void UpdateWeaponInfo__DelegateSignature(class UClass* Object_Info_Class, class UClass* Skin_Configuration, const struct FText& Name_Suffix);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
