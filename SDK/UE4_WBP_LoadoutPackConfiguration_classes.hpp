#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutPackConfiguration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C
// 0x00C8 (0x02F8 - 0x0230)
class UWBP_LoadoutPackConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                PackSlots;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                PrimaryAugmentSlots;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                SecondaryAugmentSlots;                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_LoadoutsPackSlot_C*                     LastSelectedPackButton;                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_Loadouts_SimpleListItem_C*              LastSelectedPrimaryButton;                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_Loadouts_SimpleListItem_C*              LastSelectedSecondaryButton;                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    UpdatePrimaryAugment;                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdatePack;                                               // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      Current_Pack;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    InvalidPackToast;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DismissToast;                                             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdateSecondaryAugment;                                   // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidAugmentToast;                                      // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JumpToObject;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsPracticeMode;                                           // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    PackEquipped;                                             // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C");
		return ptr;
	}


	void GetLockedClass(class UClass** MostRelevantLockedClass);
	void PostGeneratePrimaries();
	void PostGenerateSecondaries();
	void NotifyPrimaryChange();
	void NotifySecondaryChange();
	void CheckPackSlot(class UWBP_LoadoutsPackSlot_C* PackSlot);
	void CheckAugmentSlot(class UWBP_Loadouts_SimpleListItem_C* Target, int IndexAt);
	void GetMostRelevantError(struct FText* Error_Text);
	void Hacky_Get_Packs(TArray<class UClass*>* Array);
	void CosmeticSelected(class UClass* Cosmetic);
	void Update();
	void Pack_Clicked(class UWBP_SelectableButton_C* Clicked_Button);
	void Primary_Augment_Clicked(class UWBP_SelectableButton_C* Clicked_Button);
	void Secondary_Augment_Clicked(class UWBP_SelectableButton_C* Clicked_Button);
	void Regenerate_Augs();
	void Check_Secondaries_for_error();
	void Jump_To_Object(class UClass* Object_Info);
	void Confirm_Selection();
	void ExecuteUbergraph_WBP_LoadoutPackConfiguration(int EntryPoint);
	void PackEquipped__DelegateSignature();
	void JumpToObject__DelegateSignature(class UClass* Object_Info);
	void InvalidAugmentToast__DelegateSignature(const struct FText& Error_Text);
	void UpdateSecondaryAugment__DelegateSignature(class UClass* Augment, const struct FText& Suffix_Text, const struct FText& Error_Text);
	void DismissToast__DelegateSignature();
	void InvalidPackToast__DelegateSignature(const struct FText& Error_Text);
	void UpdatePack__DelegateSignature(class UClass* New_Pack, const struct FText& Suffix_);
	void UpdatePrimaryAugment__DelegateSignature(class UClass* Augment, const struct FText& Suffix_Text, const struct FText& Error_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
