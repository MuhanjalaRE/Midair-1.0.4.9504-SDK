// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MainMenu.WBP_MainMenu_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MainMenu_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.HandleDirectNamedHotkey");

	UWBP_MainMenu_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MainMenu_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.HandleNamedHotkeyWithInt");

	UWBP_MainMenu_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.CleanupConfirmations
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::CleanupConfirmations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.CleanupConfirmations");

	UWBP_MainMenu_C_CleanupConfirmations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.PopulateSprays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::PopulateSprays()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.PopulateSprays");

	UWBP_MainMenu_C_PopulateSprays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_DefaultBackground_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_DefaultBackground_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_DefaultBackground_Visibility_1");

	UWBP_MainMenu_C_Get_DefaultBackground_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Setup Gamemode Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Gamemode_Prefix                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Default                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Setup_Gamemode_Button(class UWBP_SelectableButton_C* Button, const struct FString& Gamemode_Prefix, bool Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Setup Gamemode Button");

	UWBP_MainMenu_C_Setup_Gamemode_Button_Params params;
	params.Button = Button;
	params.Gamemode_Prefix = Gamemode_Prefix;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.SetOpacityOnBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::SetOpacityOnBorder(class UBorder* InputPin, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SetOpacityOnBorder");

	UWBP_MainMenu_C_SetOpacityOnBorder_Params params;
	params.InputPin = InputPin;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.AddHangToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_C::AddHangToast(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.AddHangToast");

	UWBP_MainMenu_C_AddHangToast_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_MainMenu_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnPreviewMouseButtonDown");

	UWBP_MainMenu_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.AddConfirmationDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PromptText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_MainMenu_C::AddConfirmationDialog(const struct FText& PromptText, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.AddConfirmationDialog");

	UWBP_MainMenu_C_AddConfirmationDialog_Params params;
	params.PromptText = PromptText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function WBP_MainMenu.WBP_MainMenu_C.AddExitOptionAndBindDelegate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Button_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_MainMenu_C::AddExitOptionAndBindDelegate(const struct FText& Button_Text, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.AddExitOptionAndBindDelegate");

	UWBP_MainMenu_C_AddExitOptionAndBindDelegate_Params params;
	params.Button_Text = Button_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function WBP_MainMenu.WBP_MainMenu_C.GetExitOptionsBorderVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::GetExitOptionsBorderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetExitOptionsBorderVisibility");

	UWBP_MainMenu_C_GetExitOptionsBorderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_TextBlock_13_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MainMenu_C::Get_TextBlock_13_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_TextBlock_13_Text_1");

	UWBP_MainMenu_C_Get_TextBlock_13_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_MainPanelMenuSwitcher_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_MainPanelMenuSwitcher_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_MainPanelMenuSwitcher_Visibility_1");

	UWBP_MainMenu_C_Get_MainPanelMenuSwitcher_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_NonPRMatchMenu_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_NonPRMatchMenu_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_NonPRMatchMenu_Visibility_1");

	UWBP_MainMenu_C_Get_NonPRMatchMenu_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.OnGetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_MainMenu_C::OnGetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnGetMenuContent_1");

	UWBP_MainMenu_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.OnGenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UWBP_MainMenu_C::OnGenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnGenerateWidget_1");

	UWBP_MainMenu_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedRetrying_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_ServiceFailedRetrying_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedRetrying_Visibility_1");

	UWBP_MainMenu_C_Get_ServiceFailedRetrying_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedOSS_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_ServiceFailedOSS_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_ServiceFailedOSS_Visibility_1");

	UWBP_MainMenu_C_Get_ServiceFailedOSS_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_UpdateAvailable_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::Get_UpdateAvailable_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_UpdateAvailable_Visibility_1");

	UWBP_MainMenu_C_Get_UpdateAvailable_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MainMenu_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetVisibility_1");

	UWBP_MainMenu_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MainMenu_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetText_2");

	UWBP_MainMenu_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get_VoteEndmatch_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MainMenu_C::Get_VoteEndmatch_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get_VoteEndmatch_bIsEnabled_1");

	UWBP_MainMenu_C_Get_VoteEndmatch_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MainMenu_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetText_1");

	UWBP_MainMenu_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MainMenu.WBP_MainMenu_C.SwitchToCustomizeTab
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::SwitchToCustomizeTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.SwitchToCustomizeTab");

	UWBP_MainMenu_C_SwitchToCustomizeTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Construct");

	UWBP_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Fade to Background Level
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Fade_to_Background_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Fade to Background Level");

	UWBP_MainMenu_C_Fade_to_Background_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Tick");

	UWBP_MainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.MidmatchVoteSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_MainMenu_C::MidmatchVoteSelectionMade(int Selection, const struct FString& DisplayString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.MidmatchVoteSelectionMade");

	UWBP_MainMenu_C_MidmatchVoteSelectionMade_Params params;
	params.Selection = Selection;
	params.DisplayString = DisplayString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.JoinFromPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Password                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_C::JoinFromPassword(const struct FText& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.JoinFromPassword");

	UWBP_MainMenu_C_JoinFromPassword_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.OnInputJoinPassword_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RichPresence                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_MainMenu_C::OnInputJoinPassword_Event_1(const struct FString& RichPresence)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnInputJoinPassword_Event_1");

	UWBP_MainMenu_C_OnInputJoinPassword_Event_1_Params params;
	params.RichPresence = RichPresence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Destruct");

	UWBP_MainMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch To Stats
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_To_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch To Stats");

	UWBP_MainMenu_C_Switch_To_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Loadouts
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Loadouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Loadouts");

	UWBP_MainMenu_C_Switch_to_Loadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch To Play
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_To_Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch To Play");

	UWBP_MainMenu_C_Switch_To_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.ToggleMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ToggleMenu");

	UWBP_MainMenu_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.ExitGame
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::ExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ExitGame");

	UWBP_MainMenu_C_ExitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.ReturnToMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::ReturnToMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ReturnToMenu");

	UWBP_MainMenu_C_ReturnToMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Desktop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Get_Confirmation_Exit_Desktop(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Desktop");

	UWBP_MainMenu_C_Get_Confirmation_Exit_Desktop_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Return To Match
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Return_To_Match(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Return To Match");

	UWBP_MainMenu_C_Return_To_Match_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Match
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Get_Confirmation_Exit_Match(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Get Confirmation Exit Match");

	UWBP_MainMenu_C_Get_Confirmation_Exit_Match_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.CleanupExitOptions
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::CleanupExitOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.CleanupExitOptions");

	UWBP_MainMenu_C_CleanupExitOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Main Menu Button Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Main_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Main Menu Button Selected");

	UWBP_MainMenu_C_Main_Menu_Button_Selected_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Tutorials
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Tutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Tutorials");

	UWBP_MainMenu_C_Switch_to_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Servers
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Servers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Servers");

	UWBP_MainMenu_C_Switch_to_Servers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Match History
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Match_History()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Match History");

	UWBP_MainMenu_C_Switch_to_Match_History_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Play Menu Button Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Play_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Play Menu Button Selected");

	UWBP_MainMenu_C_Play_Menu_Button_Selected_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Stats Menu Button Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Stats_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Stats Menu Button Selected");

	UWBP_MainMenu_C_Stats_Menu_Button_Selected_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__ProgressionButton_K2Node_ComponentBoundEvent_95_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToProgressionObject__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Armor_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature(class UClass* Armor_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_LoadoutsPanel_K2Node_ComponentBoundEvent_0_JumpToWeaponSlotForArmor__DelegateSignature_Params params;
	params.Armor_Type = Armor_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Customize
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Customize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Customize");

	UWBP_MainMenu_C_Switch_to_Customize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Customize Menu Button Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::Customize_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Customize Menu Button Selected");

	UWBP_MainMenu_C_Customize_Menu_Button_Selected_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Progression
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Progression()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Progression");

	UWBP_MainMenu_C_Switch_to_Progression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_C::BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Construct 2: Holy Sequences
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Construct_2__Holy_Sequences()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Construct 2: Holy Sequences");

	UWBP_MainMenu_C_Construct_2__Holy_Sequences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__OpenLootButton_K2Node_ComponentBoundEvent_411_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__LootButton_K2Node_ComponentBoundEvent_492_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.Switch to Open Loot
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::Switch_to_Open_Loot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Switch to Open Loot");

	UWBP_MainMenu_C_Switch_to_Open_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature");

	UWBP_MainMenu_C_BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.In Game Music Loop
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_C::In_Game_Music_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.In Game Music Loop");

	UWBP_MainMenu_C_In_Game_Music_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenu_C::ExecuteUbergraph_WBP_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu");

	UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
