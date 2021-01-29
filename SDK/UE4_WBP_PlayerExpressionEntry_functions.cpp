// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressionEntry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_ChatTextBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerExpressionEntry_C::Get_ChatTextBox_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_ChatTextBox_Text_1");

	UWBP_PlayerExpressionEntry_C_Get_ChatTextBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_KeyBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerExpressionEntry_C::Get_KeyBox_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_KeyBox_Text_1");

	UWBP_PlayerExpressionEntry_C_Get_KeyBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
