#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ModalMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ModalMenu.WBP_ModalMenu_C
// 0x0001 (0x0231 - 0x0230)
class UWBP_ModalMenu_C : public UUserWidget
{
public:
	bool                                               Destroy_On_Hide;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModalMenu.WBP_ModalMenu_C");
		return ptr;
	}


	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	void Remove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
