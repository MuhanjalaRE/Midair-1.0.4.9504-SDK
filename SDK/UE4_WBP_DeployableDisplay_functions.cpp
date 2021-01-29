// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployableDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_DeployableDisplay_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.GetColorAndOpacity_1");

	UWBP_DeployableDisplay_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Get_DisplayImage_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_DeployableDisplay_C::Get_DisplayImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Get_DisplayImage_ColorAndOpacity_1");

	UWBP_DeployableDisplay_C_Get_DisplayImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DeployableDisplay_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonDown");

	UWBP_DeployableDisplay_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DeployableDisplay_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonUp");

	UWBP_DeployableDisplay_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DeployableDisplay_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseLeave");

	UWBP_DeployableDisplay_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBGColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_DeployableDisplay_C::SetBGColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBGColor");

	UWBP_DeployableDisplay_C_SetBGColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DeployableDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Construct");

	UWBP_DeployableDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetFromDeployable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AEngineerPack*           Pack                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::SetFromDeployable(class UClass* Deployable, class AEngineerPack* Pack)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetFromDeployable");

	UWBP_DeployableDisplay_C_SetFromDeployable_Params params;
	params.Deployable = Deployable;
	params.Pack = Pack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetNameAndImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::SetNameAndImage(const struct FText& Name, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetNameAndImage");

	UWBP_DeployableDisplay_C_SetNameAndImage_Params params;
	params.Name = Name;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Set Amount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::Set_Amount(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Set Amount");

	UWBP_DeployableDisplay_C_Set_Amount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DeployableDisplay_C::SetDescription(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetDescription");

	UWBP_DeployableDisplay_C_SetDescription_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DeployableDisplay_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseEnter");

	UWBP_DeployableDisplay_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Tick");

	UWBP_DeployableDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBindName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bind_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::SetBindName(const struct FName& Bind_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBindName");

	UWBP_DeployableDisplay_C_SetBindName_Params params;
	params.Bind_Name = Bind_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.ExecuteUbergraph_WBP_DeployableDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::ExecuteUbergraph_WBP_DeployableDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.ExecuteUbergraph_WBP_DeployableDisplay");

	UWBP_DeployableDisplay_C_ExecuteUbergraph_WBP_DeployableDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.MouseUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::MouseUp__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.MouseUp__DelegateSignature");

	UWBP_DeployableDisplay_C_MouseUp__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableDisplay_C::Hovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Hovered__DelegateSignature");

	UWBP_DeployableDisplay_C_Hovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
