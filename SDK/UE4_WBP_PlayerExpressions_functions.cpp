// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ProcessInput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsAbortKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerExpressions_C::ProcessInput(const struct FKey& Key, bool IsAbortKey, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ProcessInput");

	UWBP_PlayerExpressions_C_ProcessInput_Params params;
	params.Key = Key;
	params.IsAbortKey = IsAbortKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerExpressionPanel_C* Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerExpressions_C::FindCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindCategory");

	UWBP_PlayerExpressions_C_FindCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.SwitchToCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerExpressions_C::SwitchToCategory(const struct FText& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.SwitchToCategory");

	UWBP_PlayerExpressions_C_SwitchToCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.EndKeyHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerExpressions_C::EndKeyHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.EndKeyHandling");

	UWBP_PlayerExpressions_C_EndKeyHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FocusAndBegin
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerExpressions_C::FocusAndBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FocusAndBegin");

	UWBP_PlayerExpressions_C_FocusAndBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindOrCreateCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerExpressionPanel_C* Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerExpressions_C::FindOrCreateCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindOrCreateCategory");

	UWBP_PlayerExpressions_C_FindOrCreateCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.PopulateSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerExpressions_C::PopulateSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.PopulateSelf");

	UWBP_PlayerExpressions_C_PopulateSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerExpressions_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Clear");

	UWBP_PlayerExpressions_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PlayerExpressions_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnKeyDown");

	UWBP_PlayerExpressions_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerExpressions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Construct");

	UWBP_PlayerExpressions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerExpressions_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnFocusLost");

	UWBP_PlayerExpressions_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ExecuteUbergraph_WBP_PlayerExpressions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerExpressions_C::ExecuteUbergraph_WBP_PlayerExpressions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ExecuteUbergraph_WBP_PlayerExpressions");

	UWBP_PlayerExpressions_C_ExecuteUbergraph_WBP_PlayerExpressions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
