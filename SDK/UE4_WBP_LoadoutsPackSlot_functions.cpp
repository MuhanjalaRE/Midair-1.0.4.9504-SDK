// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutsPackSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Get_ItemName_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_LoadoutsPackSlot_C::Get_ItemName_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Get_ItemName_ColorAndOpacity_1");

	UWBP_LoadoutsPackSlot_C_Get_ItemName_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_LoadoutsPackSlot_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.GetBrushColor_1");

	UWBP_LoadoutsPackSlot_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseMove_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LoadoutsPackSlot_C::OnMouseMove_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseMove_1");

	UWBP_LoadoutsPackSlot_C_OnMouseMove_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LoadoutsPackSlot_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonUp_1");

	UWBP_LoadoutsPackSlot_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LoadoutsPackSlot_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonDown_1");

	UWBP_LoadoutsPackSlot_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadoutsPackSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Construct");

	UWBP_LoadoutsPackSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Update From Class
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutsPackSlot_C::Update_From_Class(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Update From Class");

	UWBP_LoadoutsPackSlot_C_Update_From_Class_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutsPackSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Tick");

	UWBP_LoadoutsPackSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LoadoutsPackSlot_C::BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UWBP_LoadoutsPackSlot_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LoadoutsPackSlot_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseEnter");

	UWBP_LoadoutsPackSlot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.ExecuteUbergraph_WBP_LoadoutsPackSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutsPackSlot_C::ExecuteUbergraph_WBP_LoadoutsPackSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.ExecuteUbergraph_WBP_LoadoutsPackSlot");

	UWBP_LoadoutsPackSlot_C_ExecuteUbergraph_WBP_LoadoutsPackSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Jump To Pack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadoutsPackSlot_C::Jump_To_Pack__DelegateSignature(class UClass* Object_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Jump To Pack__DelegateSignature");

	UWBP_LoadoutsPackSlot_C_Jump_To_Pack__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
