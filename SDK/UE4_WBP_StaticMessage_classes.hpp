#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StaticMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_StaticMessage.WBP_StaticMessage_C
// 0x004F (0x0280 - 0x0231)
class UWBP_StaticMessage_C : public UWBP_ModalMenu_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  MainTextBlock;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       PromptText;                                               // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnActionAccepted;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StaticMessage.WBP_StaticMessage_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Remove();
	void ExecuteUbergraph_WBP_StaticMessage(int EntryPoint);
	void OnRemoved__DelegateSignature();
	void OnActionAccepted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
