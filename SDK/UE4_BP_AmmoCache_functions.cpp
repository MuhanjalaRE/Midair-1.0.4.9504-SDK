// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AmmoCache_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AmmoCache.BP_AmmoCache_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoCache_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoCache.BP_AmmoCache_C.UserConstructionScript");

	ABP_AmmoCache_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoCache.BP_AmmoCache_C.UpdateCachedCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMACharacter*            CachedCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoCache_C::UpdateCachedCharacter(class AMACharacter* CachedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoCache.BP_AmmoCache_C.UpdateCachedCharacter");

	ABP_AmmoCache_C_UpdateCachedCharacter_Params params;
	params.CachedCharacter = CachedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoCache.BP_AmmoCache_C.BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoCache_C::BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoCache.BP_AmmoCache_C.BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AmmoCache_C_BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoCache.BP_AmmoCache_C.CheckSpawnAmmo
// (BlueprintCallable, BlueprintEvent)

void ABP_AmmoCache_C::CheckSpawnAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoCache.BP_AmmoCache_C.CheckSpawnAmmo");

	ABP_AmmoCache_C_CheckSpawnAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoCache.BP_AmmoCache_C.ExecuteUbergraph_BP_AmmoCache
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoCache_C::ExecuteUbergraph_BP_AmmoCache(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoCache.BP_AmmoCache_C.ExecuteUbergraph_BP_AmmoCache");

	ABP_AmmoCache_C_ExecuteUbergraph_BP_AmmoCache_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
