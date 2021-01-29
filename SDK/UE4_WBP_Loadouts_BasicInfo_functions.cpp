// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_BasicInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadouts_BasicInfo.WBP_Loadouts_BasicInfo_C.SetObjectInfoClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ObjectInfoClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name_Suffix                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Loadouts_BasicInfo_C::SetObjectInfoClass(class UClass* ObjectInfoClass, const struct FText& Name_Suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_BasicInfo.WBP_Loadouts_BasicInfo_C.SetObjectInfoClass");

	UWBP_Loadouts_BasicInfo_C_SetObjectInfoClass_Params params;
	params.ObjectInfoClass = ObjectInfoClass;
	params.Name_Suffix = Name_Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
