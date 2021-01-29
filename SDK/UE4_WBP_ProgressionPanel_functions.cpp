// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.DoesHaveNewItemBadge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasNewItemBadge                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::DoesHaveNewItemBadge(bool* HasNewItemBadge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.DoesHaveNewItemBadge");

	UWBP_ProgressionPanel_C_DoesHaveNewItemBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNewItemBadge != nullptr)
		*HasNewItemBadge = params.HasNewItemBadge;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_ToolTipText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_ProgressionPanel_C::Get_UseProgressionPass_ToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_ToolTipText_1");

	UWBP_ProgressionPanel_C_Get_UseProgressionPass_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ProgressionPanel_C::Get_UseProgressionPass_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_bIsEnabled_1");

	UWBP_ProgressionPanel_C_Get_UseProgressionPass_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ProgressionPanel_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.GetVisibility_1");

	UWBP_ProgressionPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_BuyProgressionPass_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ProgressionPanel_C::Get_BuyProgressionPass_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_BuyProgressionPass_Visibility_1");

	UWBP_ProgressionPanel_C_Get_BuyProgressionPass_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ProgressionPanel_C::Get_UseProgressionPass_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_Visibility_1");

	UWBP_ProgressionPanel_C_Get_UseProgressionPass_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToWeaponSlotForArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Armor_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::JumpToWeaponSlotForArmor(class UClass* Armor_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToWeaponSlotForArmor");

	UWBP_ProgressionPanel_C_JumpToWeaponSlotForArmor_Params params;
	params.Armor_Type = Armor_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::JumpToObject(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToObject");

	UWBP_ProgressionPanel_C_JumpToObject_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionPanel_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseWheel");

	UWBP_ProgressionPanel_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionPanel_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDoubleClick");

	UWBP_ProgressionPanel_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionPanel_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonUp");

	UWBP_ProgressionPanel_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionPanel_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDown");

	UWBP_ProgressionPanel_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ProgressionPanel_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseMove");

	UWBP_ProgressionPanel_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProgressionPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Construct");

	UWBP_ProgressionPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProgressionPanel_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseLeave");

	UWBP_ProgressionPanel_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On Node Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObjectInfo*             Node_Object_Info               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On_Node_Selected__DelegateSignature(class UObjectInfo* Node_Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On Node Selected__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On_Node_Selected__DelegateSignature_Params params;
	params.Node_Object_Info = Node_Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Clear Selection
// (BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionPanel_C::Clear_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Clear Selection");

	UWBP_ProgressionPanel_C_Clear_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Data Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMALocalPlayer*          LocalPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::Progression_Data_Updated(class UMALocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Data Updated");

	UWBP_ProgressionPanel_C_Progression_Data_Updated_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Tick");

	UWBP_ProgressionPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Reset Progression
// (BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionPanel_C::Reset_Progression()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Reset Progression");

	UWBP_ProgressionPanel_C_Reset_Progression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Show Back To Loadouts
// (BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionPanel_C::Show_Back_To_Loadouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Show Back To Loadouts");

	UWBP_ProgressionPanel_C_Show_Back_To_Loadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature");

	UWBP_ProgressionPanel_C_BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnOk
// (BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionPanel_C::OnOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnOk");

	UWBP_ProgressionPanel_C_OnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMALocalPlayer*          LocalPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::Progression_Updated(class UMALocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Updated");

	UWBP_ProgressionPanel_C_Progression_Updated_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.ExecuteUbergraph_WBP_ProgressionPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionPanel_C::ExecuteUbergraph_WBP_ProgressionPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.ExecuteUbergraph_WBP_ProgressionPanel");

	UWBP_ProgressionPanel_C_ExecuteUbergraph_WBP_ProgressionPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BackToLoadouts__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionPanel_C::BackToLoadouts__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BackToLoadouts__DelegateSignature");

	UWBP_ProgressionPanel_C_BackToLoadouts__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
