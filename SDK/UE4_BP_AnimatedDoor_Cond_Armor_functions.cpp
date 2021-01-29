// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AnimatedDoor_Cond_Armor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AnimatedDoor_Cond_Armor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.UserConstructionScript");

	ABP_AnimatedDoor_Cond_Armor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.OnBeginOverlapTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedDoor_Cond_Armor_C::OnBeginOverlapTrigger(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.OnBeginOverlapTrigger");

	ABP_AnimatedDoor_Cond_Armor_C_OnBeginOverlapTrigger_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedDoor_Cond_Armor_C::ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor");

	ABP_AnimatedDoor_Cond_Armor_C_ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
