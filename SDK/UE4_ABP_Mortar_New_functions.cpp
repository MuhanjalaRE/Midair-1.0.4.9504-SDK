// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Mortar_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Mortar_New.ABP_Mortar_New_C.ExecuteUbergraph_ABP_Mortar_New
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Mortar_New_C::ExecuteUbergraph_ABP_Mortar_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Mortar_New.ABP_Mortar_New_C.ExecuteUbergraph_ABP_Mortar_New");

	UABP_Mortar_New_C_ExecuteUbergraph_ABP_Mortar_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
