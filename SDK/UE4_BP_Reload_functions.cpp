// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Reload_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Reload.BP_Reload_C.OnActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter**           ReceivingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Reload_C::OnActiveChanged(class AMACharacter** ReceivingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnActiveChanged");

	UBP_Reload_C_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Reload.BP_Reload_C.OnGivenTo
// (Event, Protected, BlueprintEvent)

void UBP_Reload_C::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnGivenTo");

	UBP_Reload_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Reload.BP_Reload_C.OnRemoved
// (Event, Protected, BlueprintEvent)

void UBP_Reload_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnRemoved");

	UBP_Reload_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Reload.BP_Reload_C.ExecuteUbergraph_BP_Reload
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Reload_C::ExecuteUbergraph_BP_Reload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.ExecuteUbergraph_BP_Reload");

	UBP_Reload_C_ExecuteUbergraph_BP_Reload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
