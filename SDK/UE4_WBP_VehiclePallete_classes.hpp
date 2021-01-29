#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehiclePallete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_VehiclePallete.WBP_VehiclePallete_C
// 0x0050 (0x0280 - 0x0230)
class UWBP_VehiclePallete_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              MainBox;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AVehicleSpawnPad*                            SpawnPad;                                                 // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       PurchaseKeyName;                                          // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        None_Key;                                                 // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMACharacter*                                MACharacter;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VehiclePallete.WBP_VehiclePallete_C");
		return ptr;
	}


	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_VehiclePallete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
