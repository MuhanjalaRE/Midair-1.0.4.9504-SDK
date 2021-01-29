#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_BindKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_BindKey.WBP_BindKey_C
// 0x0139 (0x0369 - 0x0230)
class UWBP_BindKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                 // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     ResetButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_76;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       BindName;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      BoundKey;                                                 // 0x0258(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WaitingForInput;                                          // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Loaded;                                                   // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	float                                              Axis_Scale;                                               // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        DefaultKey;                                               // 0x0288(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Scroll_Up;                                                // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        Scroll_Down;                                              // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        None_Key;                                                 // 0x02D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Axis_Key_Mapping;                                      // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShiftHeld;                                                // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CtrlHeld;                                                 // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AltHeld;                                                  // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TryClearKey;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TryBindKey;                                               // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TryResetKey;                                              // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIsDefault;                                               // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	struct FLinearColor                                ChangedColor;                                             // 0x0324(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // 0x0334(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0348(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Hovered_Sound;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasExistedForSomeTime;                                   // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BindKey.WBP_BindKey_C");
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	struct FLinearColor GetBrushColor_1();
	void BroadcastBindChanged();
	void ClearModifiersForAxis();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GetActionBindingInfo(struct FInputActionKeyMapping* Action_Key_Mapping);
	void OnMouse(const struct FGeometry& Geometry, const struct FPointerEvent& Mouse_Event, struct FEventReply* Result);
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void FinishLoading(bool* Loaded_Default);
	struct FSlateColor GetColorAndOpacity_1();
	struct FText GetText_1();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateDisplayText();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_WBP_BindKey(int EntryPoint);
	void TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind);
	void TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
