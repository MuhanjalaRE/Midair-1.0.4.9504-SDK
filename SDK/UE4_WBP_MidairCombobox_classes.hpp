#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MidairCombobox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_MidairCombobox.WBP_MidairCombobox_C
// 0x0030 (0x0260 - 0x0230)
class UWBP_MidairCombobox_C : public UUserWidget
{
public:
	class UVerticalBox*                                MainBox;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             PotentialOptions;                                         // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bOpen;                                                    // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OptionSelected;                                           // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MidairCombobox.WBP_MidairCombobox_C");
		return ptr;
	}


	void ChildSelected(int Ident, const struct FString& Option);
	bool RemoveChildAt(int Index);
	void Open();
	void CloseAndClear();
	void SetOptions(TArray<struct FString>* Options);
	bool RemoveChild(class UWidget* Content);
	class UVerticalBoxSlot* AddChild(class UWidget* Content);
	void OptionSelected__DelegateSignature(int Ident, const struct FString& Option);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
