#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_SelectableButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SelectableButton.WBP_SelectableButton_C
// 0x0180 (0x03B0 - 0x0230)
class UWBP_SelectableButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	bool                                               Active;                                                   // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Selected;                                                 // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pressed;                                                  // 0x023A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x023B(0x0001) MISSED OFFSET
	struct FLinearColor                                HoverForeground;                                          // 0x023C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SelectedForeground;                                       // 0x024C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HoverBackground;                                          // 0x025C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SelectedBackground;                                       // 0x026C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NormalBackground;                                         // 0x027C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NormalForeground;                                         // 0x028C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ButtonSelected;                                           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonClicked;                                            // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       Error;                                                    // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                ActiveBackground;                                         // 0x02D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ActiveForeground;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ForceHover;                                               // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ButtonHovered;                                            // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FLinearColor                                DisabledForeground;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DisabledBackground;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               WaitingToConfirmSelected;                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedsToConfirmSelection;                                  // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0332(0x0006) MISSED OFFSET
	class UClass*                                      UnlockRequirement;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 UnlockRequirementDefault;                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Locked_Foreground;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Locked_Background;                                        // 0x0358(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<TScriptInterface<class UIWBP_NewItemBadgeCarrier_C>> SubmenusForNotificationStack;                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  Pressed_Sound;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Hovered_Sound;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Cached_Pressed_Sound;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cached_Hovered_Sound;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasExistedForSomeTime;                                   // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ButtonUnselected;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SelectableButton.WBP_SelectableButton_C");
		return ptr;
	}


	void DoesHaveNewItemBadge(bool* HasNewItemBadge);
	void Do_Rollover_Sound();
	void Do_Press_Sound();
	void Override_Sounds(class USoundBase* __New_Pressed_Sound, class USoundBase* __New_Hovered_Sound);
	void Override_Hovered_Sound(class USoundBase* New_Hovered_Sound);
	void Override_Pressed_Sound(class USoundBase* New_Pressed_Sound);
	void Reset_Hovered_Sound();
	void Reset_Pressed_Sound();
	void Reset_Sounds();
	class UWidget* MakeLockedTooltipWidget();
	void GetRequirementsToUnlock(TArray<struct FText>* Errors);
	void GetIsLocked(bool* Locked);
	void UpdateSelected();
	void Set_Error(const struct FText& Error);
	bool Invalid();
	void SetActive(bool bNewActive);
	void SetSelected(bool Selected);
	void GetBackgroundColor(struct FLinearColor* Color);
	void GetForegroundColor(struct FLinearColor* Color);
	void OnSelected();
	void OnActive();
	void OnPressed();
	void OnUpdateDisabled();
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnUnselected();
	void ExecuteUbergraph_WBP_SelectableButton(int EntryPoint);
	void ButtonUnselected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void ButtonHovered__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ButtonSelected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
