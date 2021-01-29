// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Blaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Blaster.ABP_Blaster_C.ExecuteUbergraph_ABP_Blaster
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Blaster_C::ExecuteUbergraph_ABP_Blaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Blaster.ABP_Blaster_C.ExecuteUbergraph_ABP_Blaster");

	UABP_Blaster_C_ExecuteUbergraph_ABP_Blaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
