// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LoadoutPreview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutPreview.LoadoutPreview_C.ExecuteUbergraph_LoadoutPreview
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoadoutPreview_C::ExecuteUbergraph_LoadoutPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadoutPreview.LoadoutPreview_C.ExecuteUbergraph_LoadoutPreview");

	ALoadoutPreview_C_ExecuteUbergraph_LoadoutPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
