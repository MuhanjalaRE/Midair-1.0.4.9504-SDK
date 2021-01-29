// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_TestCTFFlagBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TestCTFFlagBase.TestCTFFlagBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATestCTFFlagBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.UserConstructionScript");

	ATestCTFFlagBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestCTFFlagBase.TestCTFFlagBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATestCTFFlagBase_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ATestCTFFlagBase_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestCTFFlagBase.TestCTFFlagBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATestCTFFlagBase_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ATestCTFFlagBase_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestCTFFlagBase.TestCTFFlagBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATestCTFFlagBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.ReceiveBeginPlay");

	ATestCTFFlagBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestCTFFlagBase.TestCTFFlagBase_C.DamageOverlappingVehicles
// (BlueprintCallable, BlueprintEvent)

void ATestCTFFlagBase_C::DamageOverlappingVehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.DamageOverlappingVehicles");

	ATestCTFFlagBase_C_DamageOverlappingVehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestCTFFlagBase.TestCTFFlagBase_C.ExecuteUbergraph_TestCTFFlagBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATestCTFFlagBase_C::ExecuteUbergraph_TestCTFFlagBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.ExecuteUbergraph_TestCTFFlagBase");

	ATestCTFFlagBase_C_ExecuteUbergraph_TestCTFFlagBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
