// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployablePalette_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_DeployablePalette_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleDirectNamedHotkey");

	UWBP_DeployablePalette_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_DeployablePalette_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.HandleNamedHotkeyWithInt");

	UWBP_DeployablePalette_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRepairTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotRepairTool                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::CheckRepairTool(bool* NotRepairTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRepairTool");

	UWBP_DeployablePalette_C_CheckRepairTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotRepairTool != nullptr)
		*NotRepairTool = params.NotRepairTool;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DeployablePalette_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnKeyDown");

	UWBP_DeployablePalette_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DeployablePalette_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnPreviewMouseButtonDown");

	UWBP_DeployablePalette_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetNameAndDescriptionOfDeployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)
// struct FText                   Description                    (Parm, OutParm)

void UWBP_DeployablePalette_C::GetNameAndDescriptionOfDeployable(class UClass* Deployable, struct FText* DisplayName, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetNameAndDescriptionOfDeployable");

	UWBP_DeployablePalette_C_GetNameAndDescriptionOfDeployable_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
	if (Description != nullptr)
		*Description = params.Description;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetImageAndNameOfDeployable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconSmall                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)

void UWBP_DeployablePalette_C::GetImageAndNameOfDeployable(class UClass* Deployable, class UTexture2D** IconSmall, struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.GetImageAndNameOfDeployable");

	UWBP_DeployablePalette_C_GetImageAndNameOfDeployable_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconSmall != nullptr)
		*IconSmall = params.IconSmall;
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DeployablePalette_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.Construct");

	UWBP_DeployablePalette_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckSingleClick
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployablePalette_C::CheckSingleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckSingleClick");

	UWBP_DeployablePalette_C_CheckSingleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRelease
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployablePalette_C::CheckRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.CheckRelease");

	UWBP_DeployablePalette_C_CheckRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.Tick");

	UWBP_DeployablePalette_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.CycleCategories
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployablePalette_C::CycleCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.CycleCategories");

	UWBP_DeployablePalette_C_CycleCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::Hovered(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.Hovered");

	UWBP_DeployablePalette_C_Hovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Cleanup
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployablePalette_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.Cleanup");

	UWBP_DeployablePalette_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ProcessMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::ProcessMouse(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.ProcessMouse");

	UWBP_DeployablePalette_C_ProcessMouse_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DeployablePalette_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.OnFocusLost");

	UWBP_DeployablePalette_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.Emulate Click at index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::Emulate_Click_at_index(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.Emulate Click at index");

	UWBP_DeployablePalette_C_Emulate_Click_at_index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExitButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployablePalette_C::ExitButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExitButton");

	UWBP_DeployablePalette_C_ExitButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExecuteUbergraph_WBP_DeployablePalette
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployablePalette_C::ExecuteUbergraph_WBP_DeployablePalette(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployablePalette.WBP_DeployablePalette_C.ExecuteUbergraph_WBP_DeployablePalette");

	UWBP_DeployablePalette_C_ExecuteUbergraph_WBP_DeployablePalette_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
