#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_MainMenu.WBP_MainMenu_C.HandleDirectNamedHotkey
struct UWBP_MainMenu_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.HandleNamedHotkeyWithInt
struct UWBP_MainMenu_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.CleanupConfirmations
struct UWBP_MainMenu_C_CleanupConfirmations_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.PopulateSprays
struct UWBP_MainMenu_C_PopulateSprays_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_DefaultBackground_Visibility_1
struct UWBP_MainMenu_C_Get_DefaultBackground_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Setup Gamemode Button
struct UWBP_MainMenu_C_Setup_Gamemode_Button_Params
{
	class UWBP_SelectableButton_C*                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Gamemode_Prefix;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Default;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.SetOpacityOnBorder
struct UWBP_MainMenu_C_SetOpacityOnBorder_Params
{
	class UBorder*                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.AddHangToast
struct UWBP_MainMenu_C_AddHangToast_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnPreviewMouseButtonDown
struct UWBP_MainMenu_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.AddConfirmationDialog
struct UWBP_MainMenu_C_AddConfirmationDialog_Params
{
	struct FText                                       PromptText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.AddExitOptionAndBindDelegate
struct UWBP_MainMenu_C_AddExitOptionAndBindDelegate_Params
{
	struct FText                                       Button_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.GetExitOptionsBorderVisibility
struct UWBP_MainMenu_C_GetExitOptionsBorderVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_TextBlock_13_Text_1
struct UWBP_MainMenu_C_Get_TextBlock_13_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_MainPanelMenuSwitcher_Visibility_1
struct UWBP_MainMenu_C_Get_MainPanelMenuSwitcher_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_NonPRMatchMenu_Visibility_1
struct UWBP_MainMenu_C_Get_NonPRMatchMenu_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnGetMenuContent_1
struct UWBP_MainMenu_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnGenerateWidget_1
struct UWBP_MainMenu_C_OnGenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedRetrying_Visibility_1
struct UWBP_MainMenu_C_Get_ServiceFailedRetrying_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedOSS_Visibility_1
struct UWBP_MainMenu_C_Get_ServiceFailedOSS_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_UpdateAvailable_Visibility_1
struct UWBP_MainMenu_C_Get_UpdateAvailable_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.GetVisibility_1
struct UWBP_MainMenu_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.GetText_2
struct UWBP_MainMenu_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get_VoteEndmatch_bIsEnabled_1
struct UWBP_MainMenu_C_Get_VoteEndmatch_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.GetText_1
struct UWBP_MainMenu_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.SwitchToCustomizeTab
struct UWBP_MainMenu_C_SwitchToCustomizeTab_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Construct
struct UWBP_MainMenu_C_Construct_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Fade to Background Level
struct UWBP_MainMenu_C_Fade_to_Background_Level_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Tick
struct UWBP_MainMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.MidmatchVoteSelectionMade
struct UWBP_MainMenu_C_MidmatchVoteSelectionMade_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu.WBP_MainMenu_C.JoinFromPassword
struct UWBP_MainMenu_C_JoinFromPassword_Params
{
	struct FText                                       Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnInputJoinPassword_Event_1
struct UWBP_MainMenu_C_OnInputJoinPassword_Event_1_Params
{
	struct FString                                     RichPresence;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Destruct
struct UWBP_MainMenu_C_Destruct_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch To Stats
struct UWBP_MainMenu_C_Switch_To_Stats_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Loadouts
struct UWBP_MainMenu_C_Switch_to_Loadouts_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch To Play
struct UWBP_MainMenu_C_Switch_To_Play_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ToggleMenu
struct UWBP_MainMenu_C_ToggleMenu_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ExitGame
struct UWBP_MainMenu_C_ExitGame_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ReturnToMenu
struct UWBP_MainMenu_C_ReturnToMenu_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Desktop
struct UWBP_MainMenu_C_Get_Confirmation_Exit_Desktop_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Return To Match
struct UWBP_MainMenu_C_Return_To_Match_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Match
struct UWBP_MainMenu_C_Get_Confirmation_Exit_Match_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.CleanupExitOptions
struct UWBP_MainMenu_C_CleanupExitOptions_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Main Menu Button Selected
struct UWBP_MainMenu_C_Main_Menu_Button_Selected_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Tutorials
struct UWBP_MainMenu_C_Switch_to_Tutorials_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Servers
struct UWBP_MainMenu_C_Switch_to_Servers_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Match History
struct UWBP_MainMenu_C_Switch_to_Match_History_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Play Menu Button Selected
struct UWBP_MainMenu_C_Play_Menu_Button_Selected_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Stats Menu Button Selected
struct UWBP_MainMenu_C_Stats_Menu_Button_Selected_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature_Params
{
	class UClass*                                      Armor_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Customize
struct UWBP_MainMenu_C_Switch_to_Customize_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Customize Menu Button Selected
struct UWBP_MainMenu_C_Customize_Menu_Button_Selected_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Progression
struct UWBP_MainMenu_C_Switch_to_Progression_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Construct 2: Holy Sequences
struct UWBP_MainMenu_C_Construct_2__Holy_Sequences_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Open Loot
struct UWBP_MainMenu_C_Switch_to_Open_Loot_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature
struct UWBP_MainMenu_C_BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu.WBP_MainMenu_C.In Game Music Loop
struct UWBP_MainMenu_C_In_Game_Music_Loop_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
struct UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
