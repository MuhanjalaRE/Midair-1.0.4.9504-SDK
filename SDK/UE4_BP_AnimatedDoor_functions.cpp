// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AnimatedDoor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.Update Door Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AnimatedDoor_C::Update_Door_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.Update Door Position");

	ABP_AnimatedDoor_C_Update_Door_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimatedDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.UserConstructionScript");

	ABP_AnimatedDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AnimatedDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveBeginPlay");

	ABP_AnimatedDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedDoor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveTick");

	ABP_AnimatedDoor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.OnBeginOverlapTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedDoor_C::OnBeginOverlapTrigger(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.OnBeginOverlapTrigger");

	ABP_AnimatedDoor_C_OnBeginOverlapTrigger_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.Open Door
// (BlueprintCallable, BlueprintEvent)

void ABP_AnimatedDoor_C::Open_Door()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.Open Door");

	ABP_AnimatedDoor_C_Open_Door_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ExecuteUbergraph_BP_AnimatedDoor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedDoor_C::ExecuteUbergraph_BP_AnimatedDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor.BP_AnimatedDoor_C.ExecuteUbergraph_BP_AnimatedDoor");

	ABP_AnimatedDoor_C_ExecuteUbergraph_BP_AnimatedDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
