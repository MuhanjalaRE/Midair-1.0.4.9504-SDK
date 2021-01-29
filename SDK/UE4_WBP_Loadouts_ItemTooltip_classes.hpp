#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_ItemTooltip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C
// 0x0008 (0x0238 - 0x0230)
class UWBP_Loadouts_ItemTooltip_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_219;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C");
		return ptr;
	}


	struct FText Get_TextBlock_218_Text_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
