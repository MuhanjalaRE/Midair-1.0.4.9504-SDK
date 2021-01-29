#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressionPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C
// 0x0028 (0x0258 - 0x0230)
class UWBP_PlayerExpressionPanel_C : public UUserWidget
{
public:
	class UVerticalBox*                                Box;                                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Category;                                                 // 0x0238(0x0018) (Edit, BlueprintVisible)
	class UWBP_PlayerExpressions_C*                    ParentWidget;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C");
		return ptr;
	}


	void AddCategoryBinding(const struct FText& Category, const struct FText& Key, const struct FText& Display_Text);
	void HandleEntry(class UWBP_PlayerExpressionEntry_C** Expression);
	void HandleFirstKeyPress(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool IsAbortKey, struct FEventReply* Return_Value, bool* Handled);
	void AddChatBinding(const struct FText& DisplayText, const struct FText& Key, int ExpressionIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
