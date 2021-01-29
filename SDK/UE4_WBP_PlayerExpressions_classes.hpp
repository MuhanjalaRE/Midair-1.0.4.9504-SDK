#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerExpressions.WBP_PlayerExpressions_C
// 0x0028 (0x0258 - 0x0230)
class UWBP_PlayerExpressions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               FirstKey;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class USoundBase*                                  Key_Press_Success;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Key_Press_Abort;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerExpressions.WBP_PlayerExpressions_C");
		return ptr;
	}


	void ProcessInput(const struct FKey& Key, bool IsAbortKey, bool* Handled);
	void FindCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value);
	void SwitchToCategory(const struct FText& Category);
	void EndKeyHandling();
	void FocusAndBegin();
	void FindOrCreateCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value);
	void PopulateSelf();
	void Clear();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void Construct();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void ExecuteUbergraph_WBP_PlayerExpressions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
