// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LocalPlayerDetails_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_NameBlock_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LocalPlayerDetails_C::Get_NameBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_NameBlock_Text_1");

	UWBP_LocalPlayerDetails_C_Get_NameBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_XPBlock_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LocalPlayerDetails_C::Get_XPBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_XPBlock_Text_1");

	UWBP_LocalPlayerDetails_C_Get_XPBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_LevelBlock_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LocalPlayerDetails_C::Get_LevelBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_LevelBlock_Text_1");

	UWBP_LocalPlayerDetails_C_Get_LevelBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LocalPlayerDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Construct");

	UWBP_LocalPlayerDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.ExecuteUbergraph_WBP_LocalPlayerDetails
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LocalPlayerDetails_C::ExecuteUbergraph_WBP_LocalPlayerDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.ExecuteUbergraph_WBP_LocalPlayerDetails");

	UWBP_LocalPlayerDetails_C_ExecuteUbergraph_WBP_LocalPlayerDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
