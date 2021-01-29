// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMAWeapon*               Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::GetWeaponByIndex(int WeaponIndex, class AMAWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex");

	ABP_BaseCharacter_C_GetWeaponByIndex_Params params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript");

	ABP_BaseCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState
// (Event, Public, BlueprintEvent)

void ABP_BaseCharacter_C::BP_OnRep_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState");

	ABP_BaseCharacter_C_BP_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick");

	ABP_BaseCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseCharacter_C::BP_PlayTakeHitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects");

	ABP_BaseCharacter_C_BP_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_StartPurchaseVehicle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AVehicleSpawnPad**       SpawnPad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::BP_StartPurchaseVehicle(class AVehicleSpawnPad** SpawnPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_StartPurchaseVehicle");

	ABP_BaseCharacter_C_BP_StartPurchaseVehicle_Params params;
	params.SpawnPad = SpawnPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_EndPurchaseVehicle
// (Event, Protected, BlueprintEvent)

void ABP_BaseCharacter_C::BP_EndPurchaseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_EndPurchaseVehicle");

	ABP_BaseCharacter_C_BP_EndPurchaseVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ShowEngineerWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngineerPack**          Pack                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::BP_ShowEngineerWidget(class AEngineerPack** Pack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ShowEngineerWidget");

	ABP_BaseCharacter_C_BP_ShowEngineerWidget_Params params;
	params.Pack = Pack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged");

	ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseCharacter_C::ExecuteUbergraph_BP_BaseCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter");

	ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
