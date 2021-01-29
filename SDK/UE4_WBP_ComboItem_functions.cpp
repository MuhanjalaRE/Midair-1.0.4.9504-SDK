// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ComboItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ComboItem.WBP_ComboItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ComboItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ComboItem.WBP_ComboItem_C.Construct");

	UWBP_ComboItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ComboItem.WBP_ComboItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ComboItem_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ComboItem.WBP_ComboItem_C.OnMouseEnter");

	UWBP_ComboItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ComboItem.WBP_ComboItem_C.ExecuteUbergraph_WBP_ComboItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ComboItem_C::ExecuteUbergraph_WBP_ComboItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ComboItem.WBP_ComboItem_C.ExecuteUbergraph_WBP_ComboItem");

	UWBP_ComboItem_C_ExecuteUbergraph_WBP_ComboItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
