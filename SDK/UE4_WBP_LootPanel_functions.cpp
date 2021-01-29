// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LootPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LootPanel.WBP_LootPanel_C.DoesHaveNewItemBadge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasNewItemBadge                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::DoesHaveNewItemBadge(bool* HasNewItemBadge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.DoesHaveNewItemBadge");

	UWBP_LootPanel_C_DoesHaveNewItemBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNewItemBadge != nullptr)
		*HasNewItemBadge = params.HasNewItemBadge;
}


// Function WBP_LootPanel.WBP_LootPanel_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LootPanel_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.GetText_2");

	UWBP_LootPanel_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LootPanel_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.GetText_1");

	UWBP_LootPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LootPanel_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.OnMouseButtonDown");

	UWBP_LootPanel_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LootPanel_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.OnMouseMove");

	UWBP_LootPanel_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Get_OpenButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_LootPanel_C::Get_OpenButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Get_OpenButton_bIsEnabled_1");

	UWBP_LootPanel_C_Get_OpenButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Get_NextLootButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_LootPanel_C::Get_NextLootButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Get_NextLootButton_bIsEnabled_1");

	UWBP_LootPanel_C_Get_NextLootButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Get_PreviousLootButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_LootPanel_C::Get_PreviousLootButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Get_PreviousLootButton_bIsEnabled_1");

	UWBP_LootPanel_C_Get_PreviousLootButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Show
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Show");

	UWBP_LootPanel_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature");

	UWBP_LootPanel_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature");

	UWBP_LootPanel_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Show Lootbox
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Show_Lootbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Show Lootbox");

	UWBP_LootPanel_C_Show_Lootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature");

	UWBP_LootPanel_C_BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature");

	UWBP_LootPanel_C_BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Show Loot
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Show_Loot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Show Loot");

	UWBP_LootPanel_C_Show_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Crate Materialized
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Crate_Materialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Crate Materialized");

	UWBP_LootPanel_C_Crate_Materialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Crate Opened
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Crate_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Crate Opened");

	UWBP_LootPanel_C_Crate_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Crate Vanished
// (BlueprintCallable, BlueprintEvent)

void UWBP_LootPanel_C::Crate_Vanished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Crate Vanished");

	UWBP_LootPanel_C_Crate_Vanished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.On Given New Items
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          NewItems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_LootPanel_C::On_Given_New_Items(TArray<class UClass*> NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.On Given New Items");

	UWBP_LootPanel_C_On_Given_New_Items_Params params;
	params.NewItems = NewItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LootPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.Construct");

	UWBP_LootPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LootPanel.WBP_LootPanel_C.ExecuteUbergraph_WBP_LootPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LootPanel_C::ExecuteUbergraph_WBP_LootPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LootPanel.WBP_LootPanel_C.ExecuteUbergraph_WBP_LootPanel");

	UWBP_LootPanel_C_ExecuteUbergraph_WBP_LootPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
