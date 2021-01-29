#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// 0x0090 (0x0CC0 - 0x0C30)
class ABP_BaseCharacter_C : public AMACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SpeedLines;                                               // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SkateDust;                                                // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMAWeapon*                                   FirstWeapon;                                              // 0x0C48(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMAWeapon*                                   SecondWeapon;                                             // 0x0C50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMAWeapon*                                   ThirdWeapon;                                              // 0x0C58(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C64(0x0004) MISSED OFFSET
	class UWBP_VehiclePallete_C*                       VehiclePallete;                                           // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Starting_Friction;                                        // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasSkating;                                              // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C75(0x0003) MISSED OFFSET
	float                                              Friction_return_rate;                                     // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Friction_power;                                           // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Frictionless_Speed;                                   // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0C84(0x000C) MISSED OFFSET
	struct FTransform                                  SpeedLinesRelativeTransform;                              // 0x0C90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C");
		return ptr;
	}


	void GetWeaponByIndex(int WeaponIndex, class AMAWeapon** Weapon);
	void UserConstructionScript();
	void BP_OnRep_PlayerState();
	void ReceiveTick(float* DeltaSeconds);
	void BP_PlayTakeHitEffects();
	void BP_StartPurchaseVehicle(class AVehicleSpawnPad** SpawnPad);
	void BP_EndPurchaseVehicle();
	void BP_ShowEngineerWidget(class AEngineerPack** Pack);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void ExecuteUbergraph_BP_BaseCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
