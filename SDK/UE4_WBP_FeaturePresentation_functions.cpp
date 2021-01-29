// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_FeaturePresentation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FeaturePresentation.WBP_FeaturePresentation_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FeaturePresentation_C::BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FeaturePresentation.WBP_FeaturePresentation_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature");

	UWBP_FeaturePresentation_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FeaturePresentation.WBP_FeaturePresentation_C.ExecuteUbergraph_WBP_FeaturePresentation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FeaturePresentation_C::ExecuteUbergraph_WBP_FeaturePresentation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FeaturePresentation.WBP_FeaturePresentation_C.ExecuteUbergraph_WBP_FeaturePresentation");

	UWBP_FeaturePresentation_C_ExecuteUbergraph_WBP_FeaturePresentation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
