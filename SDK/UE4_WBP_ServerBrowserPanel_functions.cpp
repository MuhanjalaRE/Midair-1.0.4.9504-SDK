// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ServerBrowserPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PingSortIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ServerBrowserPanel_C::Get_PingSortIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PingSortIcon_Visibility_1");

	UWBP_ServerBrowserPanel_C_Get_PingSortIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PlayerCountSortIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ServerBrowserPanel_C::Get_PlayerCountSortIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_PlayerCountSortIcon_Visibility_1");

	UWBP_ServerBrowserPanel_C_Get_PlayerCountSortIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.GetSortMethodVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFindSessionsSortMethod        Sort_Method                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::GetSortMethodVisibility(EFindSessionsSortMethod Sort_Method, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.GetSortMethodVisibility");

	UWBP_ServerBrowserPanel_C_GetSortMethodVisibility_Params params;
	params.Sort_Method = Sort_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_ServerNameSortIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_ServerBrowserPanel_C::Get_ServerNameSortIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Get_ServerNameSortIcon_Visibility_1");

	UWBP_ServerBrowserPanel_C_Get_ServerNameSortIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ServerBrowserPanel_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFocusReceived");

	UWBP_ServerBrowserPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Not Refreshing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ServerBrowserPanel_C::Not_Refreshing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Not Refreshing");

	UWBP_ServerBrowserPanel_C_Not_Refreshing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Can Join
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ServerBrowserPanel_C::Can_Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Can Join");

	UWBP_ServerBrowserPanel_C_Can_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Set Selected Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ServerBrowserRow_C* Server_Row                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::Set_Selected_Server(class UWBP_ServerBrowserRow_C* Server_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Set Selected Server");

	UWBP_ServerBrowserPanel_C_Set_Selected_Server_Params params;
	params.Server_Row = Server_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.AddServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_ServerBrowserRow_C* NewServerRow                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::AddServer(const struct FBlueprintSessionResult& Session, class UWBP_ServerBrowserRow_C** NewServerRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.AddServer");

	UWBP_ServerBrowserPanel_C_AddServer_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewServerRow != nullptr)
		*NewServerRow = params.NewServerRow;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFailure_829842194593ADCCA3AEE9A1E904AD7C
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::OnFailure_829842194593ADCCA3AEE9A1E904AD7C()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnFailure_829842194593ADCCA3AEE9A1E904AD7C");

	UWBP_ServerBrowserPanel_C_OnFailure_829842194593ADCCA3AEE9A1E904AD7C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnSuccess_829842194593ADCCA3AEE9A1E904AD7C
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::OnSuccess_829842194593ADCCA3AEE9A1E904AD7C()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.OnSuccess_829842194593ADCCA3AEE9A1E904AD7C");

	UWBP_ServerBrowserPanel_C_OnSuccess_829842194593ADCCA3AEE9A1E904AD7C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerBrowserPanel_C::BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Try Join
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::Try_Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Try Join");

	UWBP_ServerBrowserPanel_C_Try_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerBrowserPanel_C::BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.On Found Sessions
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_ServerBrowserPanel_C::On_Found_Sessions(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.On Found Sessions");

	UWBP_ServerBrowserPanel_C_On_Found_Sessions_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.TryRefresh
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::TryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.TryRefresh");

	UWBP_ServerBrowserPanel_C_TryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Tick");

	UWBP_ServerBrowserPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Join
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Join");

	UWBP_ServerBrowserPanel_C_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.JoinFromPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Password                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ServerBrowserPanel_C::JoinFromPassword(const struct FText& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.JoinFromPassword");

	UWBP_ServerBrowserPanel_C_JoinFromPassword_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.Construct");

	UWBP_ServerBrowserPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerBrowserPanel_C::BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerBrowserPanel_C::BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerBrowserPanel_C::BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_ServerBrowserPanel_C_BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.ExecuteUbergraph_WBP_ServerBrowserPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ServerBrowserPanel_C::ExecuteUbergraph_WBP_ServerBrowserPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.ExecuteUbergraph_WBP_ServerBrowserPanel");

	UWBP_ServerBrowserPanel_C_ExecuteUbergraph_WBP_ServerBrowserPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ServerBrowserPanel_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C.NewEventDispatcher_0__DelegateSignature");

	UWBP_ServerBrowserPanel_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
