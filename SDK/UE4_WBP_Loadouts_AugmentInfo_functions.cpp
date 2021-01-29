// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_AugmentInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.SetErrorOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   New_Error                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Loadouts_AugmentInfo_C::SetErrorOnly(const struct FText& New_Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.SetErrorOnly");

	UWBP_Loadouts_AugmentInfo_C_SetErrorOnly_Params params;
	params.New_Error = New_Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AugmentInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Loadouts_AugmentInfo_C::Set(class UClass* AugmentInfo, const struct FText& Error_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_AugmentInfo.WBP_Loadouts_AugmentInfo_C.Set");

	UWBP_Loadouts_AugmentInfo_C_Set_Params params;
	params.AugmentInfo = AugmentInfo;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
