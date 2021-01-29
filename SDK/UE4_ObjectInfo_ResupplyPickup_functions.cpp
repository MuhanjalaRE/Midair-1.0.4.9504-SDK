// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ObjectInfo_ResupplyPickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectInfo_ResupplyPickup.ObjectInfo_ResupplyPickup_C.GetActionText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UObjectInfo_ResupplyPickup_C::GetActionText(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectInfo_ResupplyPickup.ObjectInfo_ResupplyPickup_C.GetActionText");

	UObjectInfo_ResupplyPickup_C_GetActionText_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
