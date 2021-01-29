// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_BindingIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BindingIcon.WBP_BindingIcon_C.SetFontSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BindingIcon_C::SetFontSize(int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.SetFontSize");

	UWBP_BindingIcon_C_SetFontSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.AdjustFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BindingIcon_C::AdjustFontSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.AdjustFontSize");

	UWBP_BindingIcon_C_AdjustFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.GetBackgroundColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_BindingIcon_C::GetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.GetBackgroundColor");

	UWBP_BindingIcon_C_GetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.GetForegroundColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_BindingIcon_C::GetForegroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.GetForegroundColor");

	UWBP_BindingIcon_C_GetForegroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.Get_Text_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_BindingIcon_C::Get_Text_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.Get_Text_Text_1");

	UWBP_BindingIcon_C_Get_Text_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.SetBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bind_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BindingIcon_C::SetBinding(const struct FName& Bind_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.SetBinding");

	UWBP_BindingIcon_C_SetBinding_Params params;
	params.Bind_Name = Bind_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BindingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.Construct");

	UWBP_BindingIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BindingIcon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.Tick");

	UWBP_BindingIcon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.OnAnyBindChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CategoryName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMidairInputMapping     NewMapping                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BindingIcon_C::OnAnyBindChanged(const struct FName& CategoryName, const struct FMidairInputMapping& NewMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.OnAnyBindChanged");

	UWBP_BindingIcon_C_OnAnyBindChanged_Params params;
	params.CategoryName = CategoryName;
	params.NewMapping = NewMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BindingIcon.WBP_BindingIcon_C.ExecuteUbergraph_WBP_BindingIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BindingIcon_C::ExecuteUbergraph_WBP_BindingIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BindingIcon.WBP_BindingIcon_C.ExecuteUbergraph_WBP_BindingIcon");

	UWBP_BindingIcon_C_ExecuteUbergraph_WBP_BindingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
