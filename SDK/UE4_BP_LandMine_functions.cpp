// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LandMine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LandMine.BP_LandMine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LandMine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.UserConstructionScript");

	ABP_LandMine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_LandMine_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");

	ABP_LandMine_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.BP_Activate
// (Event, Protected, BlueprintEvent)

void ABP_LandMine_C::BP_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.BP_Activate");

	ABP_LandMine_C_BP_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.BP_StartArm
// (Event, Protected, BlueprintEvent)

void ABP_LandMine_C::BP_StartArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.BP_StartArm");

	ABP_LandMine_C_BP_StartArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_LandMine_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	ABP_LandMine_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.BP_FinishedArm
// (Event, Protected, BlueprintEvent)

void ABP_LandMine_C::BP_FinishedArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.BP_FinishedArm");

	ABP_LandMine_C_BP_FinishedArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_LandMine_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.ReceiveDestroyed");

	ABP_LandMine_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.OnRep_TeamID
// (Event, Protected, BlueprintEvent)

void ABP_LandMine_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.OnRep_TeamID");

	ABP_LandMine_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandMine.BP_LandMine_C.ExecuteUbergraph_BP_LandMine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LandMine_C::ExecuteUbergraph_BP_LandMine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandMine.BP_LandMine_C.ExecuteUbergraph_BP_LandMine");

	ABP_LandMine_C_ExecuteUbergraph_BP_LandMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
