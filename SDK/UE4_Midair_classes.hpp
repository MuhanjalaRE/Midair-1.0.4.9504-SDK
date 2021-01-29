#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Midair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Midair.ActivatableObject
// 0x0000 (0x0028 - 0x0028)
class UActivatableObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ActivatableObject");
		return ptr;
	}

};


// Class Midair.MAPickup
// 0x0158 (0x04E0 - 0x0388)
class AMAPickup : public AActor
{
public:
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ActionableCollision;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bTimeout;                                                 // 0x03A8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bResetMeshRotationOnSpawn;                                // 0x03A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	float                                              InteractionCooldownTime;                                  // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FImpactEffect                               TimeoutEffects;                                           // 0x03B8(0x0108) (Edit, BlueprintVisible)
	class USoundBase*                                  DropSound;                                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ImpactSound;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PickupSound;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseInheritence;                                       // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPickup");
		return ptr;
	}


	void PlayPickupEffects(class AMAPlayerController* Controller);
	void PlayLandingEffects();
	void OnStop(const struct FHitResult& ImpactResult);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ApplyImpulse_NM(const struct FVector& Impulse);
};


// Class Midair.AmmoPickup
// 0x0068 (0x0548 - 0x04E0)
class AAmmoPickup : public AMAPickup
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x04E0(0x0050) MISSED OFFSET
	class UTargetComponent*                            TargetComponent;                                          // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AMAPlayerState*                              RelatedPlayerState;                                       // 0x0538(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FRegenProperties                            RegenProperties;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.AmmoPickup");
		return ptr;
	}


	void SetupFromCharacter(class AMACharacter* Character);
	class AMAPlayerState* GetRelatedPlayer();
};


// Class Midair.MAGameMode
// 0x0688 (0x0AF8 - 0x0470)
class AMAGameMode : public AGameMode
{
public:
	class UClass*                                      TeamStateClass;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bInWarmup;                                                // 0x0478(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class AMAGameState*                                MAGameState;                                              // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EndMatchVoteLength;                                       // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MatchLength;                                              // 0x048C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PostMatchLength;                                          // 0x0490(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MapVoteLength;                                            // 0x0494(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              EndMatchMinParticipationPct;                              // 0x0498(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              EndMatchYesVotePctToPass;                                 // 0x049C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WarmupLength;                                             // 0x04A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreRoundLength;                                           // 0x04A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PostRoundLength;                                          // 0x04A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WinningScore;                                             // 0x04AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinPlayersToStart;                                        // 0x04B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRandomizeTeams;                                          // 0x04B4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	int                                                InvulnerableBaseAssetsBelowPlayerCount;                   // 0x04B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MaxDeployableInventoryCount;                              // 0x04BC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MaxDeployableTurretCount;                                 // 0x04BD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MaxDeployableSensorCount;                                 // 0x04BE(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MaxRounds;                                                // 0x04BF(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bLimitPlayerLives : 1;                                    // 0x04C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShowLastManStanding : 1;                                 // 0x04C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              SpawnProtectionTime;                                      // 0x04C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BanTimeMinutes;                                           // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              AdminKickAsBanMinutes;                                    // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlayersDropBackpackOnDeath;                              // 0x04D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayersDropAmmoOnDeath;                                  // 0x04D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayersDropHealthOnDeath;                                // 0x04D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireLoadoutForSpawn;                                  // 0x04D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamGame;                                                // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTeamRabbit;                                            // 0x04D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBroadcastTeamChangeMessages;                             // 0x04D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      NumTeams;                                                 // 0x04D7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSuicideDelay;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockTeamSpectators;                                      // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTeamStarts;                                           // 0x04DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBalanceTeams;                                            // 0x04DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x04DF(0x0001) MISSED OFFSET
	int                                                MinPlayersForRebalance;                                   // 0x04E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                StartRebalanceWarningTime;                                // 0x04E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                StartRebalanceTime;                                       // 0x04E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentTargetsInheritAlwaysSensed;                        // 0x04EC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowOvertime;                                           // 0x04ED(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTeamDamageAllowed;                                       // 0x04EE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDistanceSpawnWeighting;                               // 0x04EF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTeammateDistanceSpawnWeighting;                       // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              SelfDamagePct;                                            // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillAssistThreshold;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	TMap<int, struct FText>                            ScoreDisplayText;                                         // 0x0500(0x0050) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	struct FGameModeComplexScore                       MaxPoints_DamageContributionToKill;                       // 0x0550(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_LastHitTowardsKill;                                // 0x0568(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_KillAssist;                                        // 0x0580(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       MaxPoints_TurretDamageContributionToKill;                 // 0x0598(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_TurretLastHitTowardsKill;                          // 0x05B0(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_TurretKillAssist;                                  // 0x05C8(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_DestroyInventory;                                  // 0x05E0(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_DestroySensor;                                     // 0x05F8(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_DestroyTurret;                                     // 0x0610(0x0018) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_DestroyGenerator;                                  // 0x0628(0x000C) (Edit, BlueprintVisible)
	float                                              Threshold_SensedEnemyLeadToKill;                          // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameModeSimpleScore                        Points_SensedEnemyLeadToKill;                             // 0x0638(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_DeployableInventoryUsed;                           // 0x0644(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_RepairingTeammate;                                 // 0x0650(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_RepairingAsset;                                    // 0x065C(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_RepairingVehicle;                                  // 0x0668(0x000C) (Edit, BlueprintVisible)
	float                                              Threshold_DamagingTeammates;                              // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameModeSimpleScore                        Points_DamagingTeammates;                                 // 0x0678(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_Teamkill;                                          // 0x0684(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_TeamAssetKill_BaseGen;                             // 0x0690(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_TeamAssetKill_BaseInventory;                       // 0x069C(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_TeamAssetKill_BaseTurret;                          // 0x06A8(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_TeamAssetKill_BaseSensor;                          // 0x06B4(0x000C) (Edit, BlueprintVisible)
	class UClass*                                      ScoreboardWidgetClass;                                    // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MatchStatusWidgetClass;                                   // 0x06C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, ESensorTrackingType>           SensorTrackingTypeOverrides;                              // 0x06D0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, ESensorResolutionStrength>     SensorResolutionStrengthOverrides;                        // 0x0720(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, float>                         SensorRangeMultipliers;                                   // 0x0770(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMALoadout>                          DefaultLoadouts;                                          // 0x07C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FLoadoutSpawnPenalties                      PerItemLoadoutPenalties;                                  // 0x07D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableWeapons;                                         // 0x07F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableWeapons;                                       // 0x0800(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, uint32_t>                      LimitedWeapons;                                           // 0x0810(0x0050) (ZeroConstructor, Deprecated)
	TArray<class UClass*>                              AvailableThrowables;                                      // 0x0860(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableThrowables;                                    // 0x0870(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableDeployables;                                     // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableDeployables;                                   // 0x0890(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailablePacks;                                           // 0x08A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailablePacks;                                         // 0x08B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableAugments;                                        // 0x08C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableAugments;                                      // 0x08D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableClasses;                                       // 0x08E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bVehiclePadsUseTeamPool;                                  // 0x08F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	TArray<struct FObjectCount>                        GameMaxObjectsPerTeam;                                    // 0x08F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance)
	int                                                LimitInventoryUsesTo;                                     // 0x0908(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvulnerableInventories;                                 // 0x090C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsLoadouts;                                        // 0x090D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x090E(0x0002) MISSED OFFSET
	struct FText                                       ShortDisplayName;                                         // 0x0910(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class AMATeamState*>                        TeamArray;                                                // 0x0928(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTeamConfigEntry>                    TeamConfig;                                               // 0x0938(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FMALoadout                                  DefaultLoadout;                                           // 0x0948(0x0098) (Config)
	class UClass*                                      LightClass;                                               // 0x09E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      MediumClass;                                              // 0x09E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      HeavyClass;                                               // 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1C];                                      // 0x09F8(0x001C) MISSED OFFSET
	int                                                MidmatchResetTime;                                        // 0x0A14(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x50];                                      // 0x0A18(0x0050) MISSED OFFSET
	class AActor*                                      WinningActor;                                             // 0x0A68(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDeferredRebalanceTeams;                                  // 0x0A70(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpdateMatchBalance;                                      // 0x0A71(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0A72(0x0002) MISSED OFFSET
	int                                                UnbalancedMatchTime;                                      // 0x0A74(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AMAPlayerState*>                      PlayersAutoChangeTeamDeferred;                            // 0x0A78(0x0010) (ZeroConstructor, Transient)
	bool                                               bMatchSkipped;                                            // 0x0A88(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
	TMap<struct FString, int>                          MapVotes;                                                 // 0x0A90(0x0050) (ZeroConstructor, Transient)
	struct FString                                     MapOverride;                                              // 0x0AE0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0AF0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameMode");
		return ptr;
	}


	struct FString ReturnPrefix();
	bool IsWeaponAllowed(class UClass* WeaponClass);
	bool IsThrowableAllowed(class UClass* ThrowableClass);
	bool IsPackAllowed(class UClass* PackClass);
	bool IsDeployableAllowed(class UClass* DeployableClass);
	bool IsCharacterAllowed(class UClass* CharacterClass);
	bool IsAugmentAllowed(class UClass* AugmentClass);
	void FilterDisallowedItems(TArray<class UClass*>* ItemsIn, TArray<class UClass*>* ItemsOut);
};


// Class Midair.ARGameMode
// 0x0008 (0x0B00 - 0x0AF8)
class AARGameMode : public AMAGameMode
{
public:
	int                                                RoundSpawnGracePeriodLength;                              // 0x0AF8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ARGameMode");
		return ptr;
	}

};


// Class Midair.MAPlayerState
// 0x0118 (0x0540 - 0x0428)
class AMAPlayerState : public AGameLiftPlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	class AMATeamState*                                TeamState;                                                // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMATeamState*                                LastTeamState;                                            // 0x0438(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ESimpleVote                                        PlayerVote;                                               // 0x0440(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInitializing;                                          // 0x0441(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0442(0x0002) MISSED OFFSET
	float                                              LastAutoAnnouncerTime;                                    // 0x0444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AutoAnnouncerTimeLimit;                                   // 0x0448(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x044C(0x0008) MISSED OFFSET
	bool                                               bIsAlive;                                                 // 0x0454(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	TMap<int, float>                                   LastTimeApplyScoreMap;                                    // 0x0458(0x0050) (ZeroConstructor, Transient)
	int                                                Lives;                                                    // 0x04A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfTimesUsedInventory;                               // 0x04AC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdmin;                                                 // 0x04B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	int                                                Kills;                                                    // 0x04B4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x04B8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x04BC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Suicides;                                                 // 0x04C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                MidairHits;                                               // 0x04C4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                MidairKills;                                              // 0x04C8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              SkillRating;                                              // 0x04CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      NewTeamId;                                                // 0x04D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	int                                                ElapsedTime;                                              // 0x04D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET
	bool                                               bIsDev;                                                   // 0x04E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	int                                                RequestChangeTeamCount;                                   // 0x04EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoChangedTeam;                                         // 0x04F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class UAudioComponent*                             LastPlayerExpressionAudio;                                // 0x04F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ADecalActor*                                 LastSpawnedSpray;                                         // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FReplicatedSpawnedSpray                     LastSpawnedSprayInfo;                                     // 0x0508(0x0020) (Net)
	class UClass*                                      VoiceSet;                                                 // 0x0528(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FCauseHitInfo                               LastCauseHitInfo;                                         // 0x0530(0x0008) (Net)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerState");
		return ptr;
	}


	void UpdateMatchResult(const struct FMatchHistory& MatchHistory);
	void ServerRequestChangeTeam(unsigned char DesiredTeamId);
	void RecordCaptureHighlight();
	void OnRep_NewSpray();
	void OnRep_LastCauseHitInfo();
	void NotifyTeamChanged();
	bool IsAlive();
	void IncrementKills(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementDeaths(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementAssists(class UClass* DamageType, class AMAPlayerState* Victim);
	EPlayerVoiceState GetPlayerTalkingState();
	void EndHighlights();
	void Client_NotifyScoreApplied(int ScoreID, float Value);
	void AdjustScore(int ScoreAdjustment);
};


// Class Midair.ARPlayerState
// 0x0010 (0x0550 - 0x0540)
class AARPlayerState : public AMAPlayerState
{
public:
	float                                              DamageTaken;                                              // 0x0540(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealt;                                              // 0x0544(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FirstBloods;                                              // 0x0548(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x054C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ARPlayerState");
		return ptr;
	}

};


// Class Midair.Augment_Art
// 0x00A8 (0x00D0 - 0x0028)
class UAugment_Art : public UObject
{
public:
	struct FName                                       ActivateSoundSocketName;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Activate1P;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Activate3P;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ActiveLoop;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Deactivate1P;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Deactivate3P;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseActiveMaterials;                                      // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UMaterialInterface*                          ActiveMaterial1P;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ActiveMaterial3P;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivateMaterialLerpTime;                                 // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveMaterialTickRate;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ActiveMaterialParameterName;                              // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ActiveMaterialRange;                                      // 0x0080(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartActiveMaterialAtMin;                                // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBuddy;                                                 // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	class UAugment*                                    OwningAugment;                                            // 0x0090(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AMACharacter*                                OwningCharacter;                                          // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class UAudioComponent*                             AudioLoopComponent;                                       // 0x00A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          OtherActiveMaterial1P;                                    // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          OtherActiveMaterial3P;                                    // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                ActiveMaterialUpdateTimer;                                // 0x00C0(0x0008) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_Art");
		return ptr;
	}


	void Tick(float DeltaTime);
	void SetActive_Visuals(bool bActive);
	void SetActive_Audio(bool bActive);
	void SetActive(bool bActive);
};


// Class Midair.Augment_Artillery_Art
// 0x0028 (0x00F8 - 0x00D0)
class UAugment_Artillery_Art : public UAugment_Art
{
public:
	struct FColor                                      WillHitAssetColor;                                        // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      WontHitAssetColor;                                        // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PredictionCrosshairTexture;                               // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_Artillery_Art");
		return ptr;
	}

};


// Class Midair.Augment
// 0x00E0 (0x02B0 - 0x01D0)
class UAugment : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
	class UClass*                                      ArtClass;                                                 // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAugmentType                                       Type;                                                     // 0x01E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	float                                              CoolDownTime;                                             // 0x01E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverRepActive;                                          // 0x01E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClientPredict;                                           // 0x01E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x01EA(0x0006) MISSED OFFSET
	TArray<class UClass*>                              RequiredAugments;                                         // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              EnergyActiveDrainRate;                                    // 0x0200(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyActivateCost;                                       // 0x0204(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuddyRange;                                               // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsHudDraw;                                            // 0x020C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeactivateWhenOwnerFiresWeapon;                          // 0x020D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA];                                       // 0x020E(0x000A) MISSED OFFSET
	float                                              LastActivateTime;                                         // 0x0218(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	class AMABackpack*                                 OwningPack;                                               // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AMACharacter*                                OwningCharacter;                                          // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      RepTrigger;                                               // 0x0230(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              CoolDownTimeSince;                                        // 0x0234(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBuddying;                                              // 0x0238(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	TArray<class AMACharacter*>                        RepBuddies;                                               // 0x0240(0x0010) (Net, ZeroConstructor, Transient)
	TArray<class AMACharacter*>                        CachedBuddies;                                            // 0x0250(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class AMACharacter*, class UAugment_Art*>     AugmentArtMap;                                            // 0x0260(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment");
		return ptr;
	}


	void ServerUse();
	void ResetType();
	void OnRep_Trigger();
	void OnRep_Buddies();
	void OnRemoved();
	void OnRemoveBuddy(class AMACharacter* Buddy);
	void OnGivenTo();
	void OnEnergyDepleted();
	void OnAddBuddy(class AMACharacter* Buddy);
	void OnActiveChanged(class AMACharacter* ReceivingCharacter);
	void MakePassive();
	void K2_Draw(class UCanvas* Canvas, float RenderDelta);
	bool IsReady();
	float GetCurrentEnergyChangeRate();
	class UAugment_Art* GetArtObjectFor(class AMACharacter* Character);
	bool CanBeUsedWith(class UClass* OtherAugmentClass);
};


// Class Midair.Augment_Artillery
// 0x0040 (0x02F0 - 0x02B0)
class UAugment_Artillery : public UAugment
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET
	float                                              TimePerStep;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPredictionTime;                                        // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveTime;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPredictionMarkerInfo                       PreviousPrediction;                                       // 0x02DC(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_Artillery");
		return ptr;
	}

};


// Class Midair.Augment_Blink
// 0x0110 (0x03C0 - 0x02B0)
class UAugment_Blink : public UAugment
{
public:
	TMap<class UClass*, float>                         BlinkDistances;                                           // 0x02B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, float>                         MaxConserveSpeeds;                                        // 0x0300(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, float>                         SpeedOverageReductionPcts;                                // 0x0350(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FVector_NetQuantize10                       StartLocation;                                            // 0x03A0(0x000C) (Net)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UAugment_Blink_Art*                          BlinkArt;                                                 // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_Blink");
		return ptr;
	}


	void ReceiveBlinkLocation();
	void OnBlinkOccured();
};


// Class Midair.Augment_Blink_Art
// 0x0020 (0x00F0 - 0x00D0)
class UAugment_Blink_Art : public UAugment_Art
{
public:
	class UParticleSystem*                             StartEffect;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EndEffect;                                                // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StartDirectionalEffect;                                   // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EndDirectionalEffect;                                     // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_Blink_Art");
		return ptr;
	}


	void StopBlink(const struct FVector& Location);
	void StartBlink(const struct FVector& Location);
};


// Class Midair.Augment_ChargePickup
// 0x0060 (0x0310 - 0x02B0)
class UAugment_ChargePickup : public UAugment
{
public:
	float                                              DefaultPickupCharges;                                     // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TMap<class UClass*, float>                         PickupCharges;                                            // 0x02B8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentPickupCharges;                                     // 0x0308(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_ChargePickup");
		return ptr;
	}

};


// Class Midair.Augment_ChargePlus
// 0x0060 (0x0310 - 0x02B0)
class UAugment_ChargePlus : public UAugment
{
public:
	float                                              DefaultGrantedCharges;                                    // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TMap<class UClass*, float>                         GrantedCharges;                                           // 0x02B8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentlyGrantedCharges;                                  // 0x0308(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_ChargePlus");
		return ptr;
	}

};


// Class Midair.Augment_EngineerRegen
// 0x0020 (0x02D0 - 0x02B0)
class UAugment_EngineerRegen : public UAugment
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	float                                              CyclePeriod;                                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeRegenRate;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_EngineerRegen");
		return ptr;
	}


	void StopRegenTimer();
	void StartRegenTimer();
};


// Class Midair.Augment_FlatShield
// 0x0070 (0x0320 - 0x02B0)
class UAugment_FlatShield : public UAugment
{
public:
	struct FFlatShieldVars                             DefaultShieldVars;                                        // 0x02B0(0x0014) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	TMap<class UClass*, struct FFlatShieldVars>        ShieldVarsMap;                                            // 0x02C8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_FlatShield");
		return ptr;
	}


	void OwnerTookDamage(const struct FTakeHitInfo& TakeHitInfo);
};


// Class Midair.Augment_PersonalShield_Art
// 0x0010 (0x00E0 - 0x00D0)
class UAugment_PersonalShield_Art : public UAugment_Art
{
public:
	class USkeletalMeshComponent*                      ShieldMesh3P;                                             // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldMesh1P;                                             // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_PersonalShield_Art");
		return ptr;
	}

};


// Class Midair.Augment_FlatShield_Art
// 0x0000 (0x00E0 - 0x00E0)
class UAugment_FlatShield_Art : public UAugment_PersonalShield_Art
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_FlatShield_Art");
		return ptr;
	}

};


// Class Midair.Augment_PersonalShield
// 0x0000 (0x02B0 - 0x02B0)
class UAugment_PersonalShield : public UAugment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_PersonalShield");
		return ptr;
	}

};


// Class Midair.Augment_ShieldIntensityModifier
// 0x0010 (0x02C0 - 0x02B0)
class UAugment_ShieldIntensityModifier : public UAugment
{
public:
	float                                              ShieldStrength;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldEfficiency;                                         // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_ShieldIntensityModifier");
		return ptr;
	}

};


// Class Midair.Augment_RepairTool
// 0x0010 (0x02C0 - 0x02B0)
class UAugment_RepairTool : public UAugment
{
public:
	class AActor*                                      RepairTarget;                                             // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMARepairGun*                                WeaponItem;                                               // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_RepairTool");
		return ptr;
	}


	void OnSetRepairTarget();
};


// Class Midair.MAItem
// 0x0018 (0x03A0 - 0x0388)
class AMAItem : public AActor
{
public:
	bool                                               bGivenToReplicated;                                       // 0x0388(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class AMACharacter*                                MAOwner;                                                  // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPendingAutoActivate : 1;                                 // 0x0398(0x0001) (Transient)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAItem");
		return ptr;
	}


	void K2_Removed();
	void K2_GivenTo(class APawn* NewOwner, bool bAutoActivate);
	void ClientGivenTo(class APawn* NewInstigator, bool bAutoActivate);
};


// Class Midair.MAWeapon
// 0x0120 (0x04C0 - 0x03A0)
class AMAWeapon : public AMAItem
{
public:
	class UClass*                                      AttachmentClass;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SkinClass;                                                // 0x03A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanAddToLoadout;                                         // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMAWeaponActivity                                  CurrentState;                                             // 0x03B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              StateDuration;                                            // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StateTimeElapsed;                                         // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastPutAwayTime;                                          // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CancelledStateTimeElapsed;                                // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CancelledStateDuration;                                   // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	EMAWeaponActivity                                  CancelledState;                                           // 0x03C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              RecoveryTimeElapsed;                                      // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingRecovery;                                         // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	int                                                ShotsLeftUntilIdle;                                       // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasPoweredUp;                                            // 0x03D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                StoredAmmo;                                               // 0x03DC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                LoadedAmmo;                                               // 0x03E0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Heat;                                                     // 0x03E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Charge;                                                   // 0x03E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireSpeed;                                                // 0x03EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BloomPattern;                                             // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloomIndex;                                               // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReload;                                           // 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                InitialAmmo;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoadedAmmo;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TakeOutTime;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerUpTime;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowGrenadeTime;                                         // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowGrenadeCompletionTime;                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireOffset;                                               // 0x0418(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ConvergenceDistance;                                      // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAdjustConvergence : 1;                                   // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAdjustFireOffset : 1;                                    // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableAutoSwitchTo : 1;                                 // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableAutoSwitchFrom : 1;                               // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableSwitchToWhenEmpty : 1;                            // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                MaxSimulationIterations;                                  // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProjectilesPerShot;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireIntervalFrom;                                         // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FireIntervalTo;                                           // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockFireInterval;                                        // 0x0444(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerIsFiring;                                           // 0x0445(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	float                                              FireAccelerationTime;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireDecelerationTime;                                     // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BurstSize;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PendingBurstSize;                                         // 0x0454(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                AmmoCost;                                                 // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnergyCost;                                               // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRecoveryTime;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftRecoveryWindow;                                       // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryFireTime;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearTriggerAfterRecovery;                               // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearTriggerWhenAbsolutelyEmpty;                         // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	float                                              FizzleTime;                                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanNotFireUnderwater;                                    // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysDryFireOnEmpty;                                    // 0x0475(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0476(0x0002) MISSED OFFSET
	float                                              BloomAngle;                                               // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BloomPatternRegions;                                      // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseQuasiRandomBloom;                                     // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChargeBeforeFiring;                                      // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              ChargeTime;                                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeDissipationTime;                                    // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverloadTime;                                             // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDischargeWhenOverloaded;                                 // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	float                                              ReloadTime;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReloadEveryRound;                                        // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasteAmmoWhenReloaded;                                   // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReloadOnEmpty;                                       // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireCanInterruptReload;                                  // 0x049B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatPerShot;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverheatThreshold;                                        // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverheatRecoveryThreshold;                                // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatLossPerSecond;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverheatedHeatLossPerSecond;                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  DryFireSound;                                             // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageModifier;                                           // 0x04B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAWeapon");
		return ptr;
	}


	void ResetAmmo(int NewTotal);
	void K2_SetFireInterval(float From, float To);
	void K2_GetFireInterval(float* From, float* To);
	void GetAdjustedFireLocationAndRotation(struct FVector* FireLocation, struct FRotator* FireRotation);
	void ClientAddAmmo(int Amount);
	float BP_GetReloadCompletion();
	int AddAmmo(int Amount);
};


// Class Midair.Blaster
// 0x0038 (0x04F8 - 0x04C0)
class ABlaster : public AMAWeapon
{
public:
	bool                                               bShouldChargedShotsCountFullyForAmmo;                     // 0x04C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	int                                                MaximumChargedShots;                                      // 0x04C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeTimePerChargedShots;                                // 0x04C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargedShotsDamageMultiplier;                             // 0x04CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargedBloomAngle;                                        // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UClass*                                      ChargedProjectileClass;                                   // 0x04D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class UClass*                                      DefaultProjectileClass;                                   // 0x04E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Blaster");
		return ptr;
	}

};


// Class Midair.VehiclePawn
// 0x0260 (0x0648 - 0x03E8)
class AVehiclePawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleMoveComponent*                       VehicleMovementComponent;                                 // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraArm;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera3P;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindAudioLoop;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MainEngineAudioLoop;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LowHealthParticleSystem;                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMAVitalsComponent*                          Vitals;                                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHeatComponent*                              HeatComponent;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             InverseSpawnTransform;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       PilotSeatComponent;                                       // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PilotEjectionArrow;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     PrimaryWeaponComponent;                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     SecondaryWeaponComponent;                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USensorNetworkComponent*                     VehicleSensor;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScrapeLoopComponent;                                      // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UVehicleSeatComponent*>               VehicleSeats;                                             // 0x0480(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      SpawningTeamId;                                           // 0x0490(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class USoundBase*                                  EngineStartSound;                                         // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EngineStopSound;                                          // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AfterburnerTailSound;                                     // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AfterburnerSound;                                         // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  CrashSound;                                               // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  DeathSound;                                               // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DeathEffects;                                             // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RammingDmgTypeClass;                                      // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRammingDamage;                                         // 0x04D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RammingDmgNormalizer;                                     // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDamageFrequency;                                 // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDamageThreshold;                                 // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x04E8(0x0014) MISSED OFFSET
	bool                                               bIsScraping;                                              // 0x04FC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasUsingAfterburner;                                     // 0x04FD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	float                                              AfterburnerLoopScale;                                     // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UAudioComponent*                             AfterburnerTailSoundComponent;                            // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVehicleInputFloatRate                      MainEngineAudioInputRate;                                 // 0x0510(0x0008) (Edit)
	struct FVehicleInputFloatRate                      SideEngineAudioInputRate;                                 // 0x0518(0x0008) (Edit)
	float                                              MinTimeBetweenCrashes;                                    // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinForceForCrash;                                         // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHandledCrashForce;                                     // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionScrapeAudioFadeInRate;                           // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionScrapeAudioMinActiveTime;                        // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionScrapeAudioFadeOutRate;                          // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageImpulseModifier;                                    // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x19];                                      // 0x053C(0x0019) MISSED OFFSET
	bool                                               bUseOriginalArmRotationToRestoreFromFreelook;             // 0x0555(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0556(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVehicleDied;                                            // 0x0558(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       FirstAbilityName;                                         // 0x0568(0x0018) (Edit, BlueprintVisible)
	struct FName                                       FirstAbilityBindingName;                                  // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       SecondAbilityName;                                        // 0x0588(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SecondAbilityBindingName;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ThirdAbilityName;                                         // 0x05A8(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ThirdAbilityBindingName;                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              MAPlayerState;                                            // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeOfDeath;                                              // 0x05D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NextCollideTime;                                          // 0x05D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      ServerMesh;                                               // 0x05D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PreviousEngineSound;                                      // 0x05E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FRepVehiclePhysics                          RepVehiclePhysics;                                        // 0x05E8(0x0034) (Net, Transient)
	struct FRepStickInput                              RepStickInput;                                            // 0x061C(0x0010) (Net, Transient, IsPlainOldData)
	struct FRepThrustInput                             RepThrustInput;                                           // 0x062C(0x0014) (Net, Transient, IsPlainOldData)
	uint32_t                                           RepControlPitchYaw;                                       // 0x0640(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0644(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehiclePawn");
		return ptr;
	}


	bool TrySeatCharacter(class AMACharacter* Character);
	bool TryReseatCharacter(class AMACharacter* Character, int NewSeatPosition);
	void ServerSetRelativeControlRotation(uint32_t NewControlPitchYaw);
	void Server_SetCameraMode(ECameraMode NewCameraMode);
	bool RemoveCharacter(class AMACharacter* Character);
	void PostNetReceivePhysicState();
	void OnRep_ThrustInput();
	void OnRep_StickInput();
	void OnRep_SpawningTeamId();
	void OnRep_ControlPitchYaw();
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDeath();
	void NetMulticast_FireWeaponComponent(class UVehicleWeaponComponent* WeaponComponent, unsigned char FireIndex);
	bool HasRoomForCharacter(class AMACharacter* Character);
	bool HasAnyOccupiedSeat();
	TArray<class UVehicleSeatComponent*> GetSeats();
	class UVehicleSeatComponent* GetSeatForWeapon(class UVehicleWeaponComponent* Weapon);
	TArray<class UVehicleWeaponComponent*> GetAllPossibleWeaponsForSeat(class UVehicleSeatComponent* Seat);
	class UVehicleSeatComponent* FindOccupiedSeat(class AMACharacter* Character);
	class UVehicleSeatComponent* FindAvailableSeat(class AMACharacter* Character);
	class UVehicleSeatComponent* CanReseatCharacter(class AMACharacter* Character, int NewSeatPosition);
};


// Class Midair.Bomber
// 0x0058 (0x06A0 - 0x0648)
class ABomber : public AVehiclePawn
{
public:
	class UVehicleWeaponComponent*                     BomberSeatPrimaryWeapon;                                  // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     GunnerSeatPrimaryWeapon;                                  // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       BomberSeat;                                               // 0x0658(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       GunnerSeat;                                               // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            BomberSeatCamera;                                         // 0x0668(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            GunnerSeatCamera;                                         // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0678(0x0008) MISSED OFFSET
	class UVehicleFlareLauncher*                       RightSideFlareLauncher;                                   // 0x0680(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleFlareLauncher*                       LeftSideFlareLauncher;                                    // 0x0688(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              LiftStabilizationForce;                                   // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalDrag_Piloted;                                     // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalDrag_Unpiloted;                                   // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalDrag_UnpilotedFalling;                            // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Bomber");
		return ptr;
	}


	void ApplyCustomLift(float DeltaSeconds);
	void ApplyCustomAero(float DeltaSeconds);
};


// Class Midair.ChatWidget
// 0x00E0 (0x0310 - 0x0230)
class UChatWidget : public UUserWidget
{
public:
	struct FName                                       SlotName;                                                 // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNativeWidgetHost*                           Host;                                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTeamOnly;                                                // 0x0240(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              LastMessageTime;                                          // 0x0244(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInputCache;                                           // 0x0248(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0249(0x003F) MISSED OFFSET
	struct FLinearColor                                Team0Color;                                               // 0x0288(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Team1Color;                                               // 0x0298(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x02A8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x02B8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NeutralColor;                                             // 0x02C8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SystemColor;                                              // 0x02D8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBlocksInChat;                                          // 0x02E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxEntriesPerChatBlock;                                   // 0x02EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCharactersPerMessage;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	class UMidiarStyleData*                            StyleData;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ChatWidget");
		return ptr;
	}


	void ReleaseOwnership(class UWidget* CurrentOwner);
	void ReleaseFocus();
	void ReceiveMessage(const struct FString& PlayerName, const struct FLinearColor& NameColor, const struct FString& Message, const struct FLinearColor& MessageColor);
	void OnFocusPrompt();
	void FocusPrompt(bool bTeamOnly);
	void CommitMessage(const struct FString& Message);
	void ClaimOwnership(class UWidget* NewOwner);
	void AddMessage(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly);
};


// Class Midair.ComplexStatusBar
// 0x0290 (0x03A8 - 0x0118)
class UComplexStatusBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0118(0x01B8) (Edit, BlueprintVisible)
	float                                              SizePerValue;                                             // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value1;                                                   // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value2;                                                   // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue1;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue2;                                                // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value2Separation;                                         // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FillMarkerSize;                                           // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EComplexStatusBarFillType                          Value2FillType;                                           // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x02F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x02F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreMaxes;                                             // 0x02F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Value1Delegate;                                           // 0x02F8(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             Value2Delegate;                                           // 0x0308(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MaxValue1Delegate;                                        // 0x0318(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MaxValue2Delegate;                                        // 0x0328(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FillColorAndOpacity2;                                     // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FillMarkerColorAndOpacity;                                // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x0368(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             FillColorAndOpacity2Delegate;                             // 0x0378(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             FillMarkerColorAndOpacityDelegate;                        // 0x0388(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ComplexStatusBar");
		return ptr;
	}


	void SetValue2(float InPercent);
	void SetValue1(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillMarkerColorAndOpacity(const struct FLinearColor& InColor);
	void SetFillColorAndOpacity2(const struct FLinearColor& InColor);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class Midair.ConfigurableOOBVolume
// 0x00B0 (0x0438 - 0x0388)
class AConfigurableOOBVolume : public AActor
{
public:
	class UStaticMeshComponent*                        InnerBoundsMesh;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        OuterBoundsMesh;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CeilingVolume;                                            // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CenterVolume;                                             // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	TArray<class UBoxComponent*>                       OuterWallVolumes;                                         // 0x03A8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UBoxComponent*>                       InnerWallVolumes;                                         // 0x03B8(0x0010) (ExportObject, ZeroConstructor)
	class USceneComponent*                             VolumeRoot;                                               // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OuterRoot;                                                // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             InnerRoot;                                                // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET
	class USoundBase*                                  ObjectBouncedSound;                                       // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasInnerVolume;                                           // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              CeilingHeight;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WrangleForce;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallsHeight;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HalfWallThickness;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InnerBoundsDimensions;                                    // 0x0414(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   OuterBoundsMargin;                                        // 0x041C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              InnerRotationYaw;                                         // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRotationYaw;                                         // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x042C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ConfigurableOOBVolume");
		return ptr;
	}


	void PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& Direction);
	void CheckForCarriedObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult);
	void BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal);
};


// Class Midair.CosmeticConfiguration
// 0x0040 (0x03C8 - 0x0388)
class ACosmeticConfiguration : public AActor
{
public:
	struct FText                                       DisplayText;                                              // 0x0388(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortDisplayText;                                         // 0x03A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FColor                                      DisplayTextColor;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UClass*                                      AssociatedClass;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.CosmeticConfiguration");
		return ptr;
	}

};


// Class Midair.CrateConfiguration
// 0x0008 (0x03D0 - 0x03C8)
class ACrateConfiguration : public ACosmeticConfiguration
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.CrateConfiguration");
		return ptr;
	}

};


// Class Midair.CustomDrawable
// 0x0000 (0x0028 - 0x0028)
class UCustomDrawable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.CustomDrawable");
		return ptr;
	}

};


// Class Midair.DirectHotkey
// 0x0000 (0x0028 - 0x0028)
class UDirectHotkey : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.DirectHotkey");
		return ptr;
	}


	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
};


// Class Midair.MABackpack
// 0x0048 (0x03E8 - 0x03A0)
class AMABackpack : public AMAItem
{
public:
	class UClass*                                      PrimaryAugmentClass;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SecondaryAugmentClass;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBackpackArt                                PickupArt;                                                // 0x03B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UAugment*                                    PrimaryAugment;                                           // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAugment*                                    SecondaryAugment;                                         // 0x03D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPendingUse;                                              // 0x03E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MABackpack");
		return ptr;
	}


	void Use();
	void OnRep_Augments();
};


// Class Midair.EngineerPack
// 0x00B0 (0x0498 - 0x03E8)
class AEngineerPack : public AMABackpack
{
public:
	float                                              DefaultMaxCharges;                                        // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRestoringCharges;                                  // 0x03EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, float>                         MaxChargesMap;                                            // 0x03F0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentCharges;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxCharges;                                               // 0x0444(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDeployableRadialCategory>           Categories;                                               // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDrainCharge;                                            // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllChargeDrained;                                       // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllChargesRefilled;                                     // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartialChargeRefilled;                                  // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.EngineerPack");
		return ptr;
	}


	void UseRepairAugment();
	void ServerChangeOwnerDeployable(class UClass* Deployable);
	void RemoveUsedCharges();
	bool HasEnoughChargesForDeployable(class UClass* Deployable);
	bool CheckAndHandleDeployableSpawn(class UClass* Deployable);
	void BindForDeployerUpdate();
};


// Class Midair.FighterVehicle
// 0x0010 (0x0658 - 0x0648)
class AFighterVehicle : public AVehiclePawn
{
public:
	class UVehicleFlareLauncher*                       FlareLauncher;                                            // 0x0648(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              LiftStabilizationForce;                                   // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0654(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.FighterVehicle");
		return ptr;
	}


	void ApplyCustomLift(float DeltaSeconds);
};


// Class Midair.MAProjectile
// 0x05C8 (0x0950 - 0x0388)
class AMAProjectile : public AActor
{
public:
	class UMAPlaybackComponent*                        PlaybackComponent;                                        // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail1P;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereComponent;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            AssistSphereComponent;                                    // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMAProjectileMovement*                       ProjectileMovement;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ProjectileAudioLoop;                                      // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03C8(0x00B0) MISSED OFFSET
	struct FHitResult                                  PendingImpactHit;                                         // 0x0478(0x0088) (Transient, IsPlainOldData)
	struct FPredictionSmoothing                        PredictionSmoothing;                                      // 0x0500(0x0070) (Edit, DisableEditOnInstance)
	bool                                               bIsFakeProjectile;                                        // 0x0570(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class AMAProjectile*                               LinkedProjectile;                                         // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	class AController*                                 SavedInstigatorController;                                // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageParams                         DamageParams;                                             // 0x0588(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWorldCameraShakeParams                     CameraShakeParams;                                        // 0x05B0(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShakeClass;                                         // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFuzeMode>                             FuzeMode;                                                 // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNetTemporary_BP;                                         // 0x05D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableClientCollision;                                  // 0x05D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x05D3(0x0001) MISSED OFFSET
	float                                              ArmingTime;                                               // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectArmingTime;                                         // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDirectArmingTime;                                     // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	float                                              ActivationTime;                                           // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UClass*                                      ExplosionEffectClass;                                     // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FImpactEffect                               ExplodeEffects;                                           // 0x05F0(0x0108) (Edit, BlueprintVisible)
	bool                                               bExploded;                                                // 0x06F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	struct FImpactEffect                               TimeoutEffects;                                           // 0x0700(0x0108) (Edit, BlueprintVisible)
	class UClass*                                      RejectOnStopClass;                                        // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     RejectTraceChannel;                                       // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	float                                              RejectionAreaRadius;                                      // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeamTrigger;                                        // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // 0x0819(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x081A(0x0002) MISSED OFFSET
	struct FVector                                     InheritVelocityScale;                                     // 0x081C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bPreventInheritanceSlowdown;                              // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	struct FSurfaceImpactInfo                          LastSurfaceImpact;                                        // 0x0830(0x0030) (Net, Transient)
	float                                              LastSurfaceImpactTime;                                    // 0x0860(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageModifier;                                           // 0x0864(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepStage;                                                // 0x0868(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	struct FRepStage                                   RepCurrentStage;                                          // 0x086C(0x0008) (Net, IsPlainOldData)
	struct FVector                                     InstigatorVelocity;                                       // 0x0874(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     InstigatorLocation;                                       // 0x0880(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DamageIgnoreActors;                                       // 0x0890(0x0010) (ZeroConstructor)
	struct FHitResult                                  SavedLastHit;                                             // 0x08A0(0x0088) (IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0928(0x0018) MISSED OFFSET
	bool                                               bHasShutDown;                                             // 0x0940(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0xF];                                       // 0x0941(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAProjectile");
		return ptr;
	}


	void Timeout();
	void Stopped(const struct FHitResult& Hit);
	void SphereTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ShutDown();
	void ProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void OnRep_TeamID();
	void OnRep_LastSurfaceImpact();
	void OnRep_CurrentStage();
	void LockInPlace();
	bool GetHomingTargetLocation(struct FVector* TargetLocation);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent);
	void DamageImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void CatchUp(float DeltaTime);
	void BP_StartArm();
	void BP_FinishedArm();
	void BP_Activate();
	void Bounced(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
};


// Class Midair.FlareProjectile
// 0x0030 (0x0980 - 0x0950)
class AFlareProjectile : public AMAProjectile
{
public:
	class UParticleSystemComponent*                    FlareParticle;                                            // 0x0950(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class UHeatComponent*                              HeatComponent;                                            // 0x0958(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x0960(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              PostApexGravityScale;                                     // 0x0968(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlareDrag;                                                // 0x096C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenTargeted;                                         // 0x0970(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0971(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.FlareProjectile");
		return ptr;
	}

};


// Class Midair.GetCurrentUserStatsAsyncTask
// 0x0020 (0x0048 - 0x0028)
class UGetCurrentUserStatsAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.GetCurrentUserStatsAsyncTask");
		return ptr;
	}


	class UGetCurrentUserStatsAsyncTask* STATIC_GetCurrentUserStats();
	void Activate();
};


// Class Midair.GetDemoAsyncTask
// 0x0020 (0x0048 - 0x0028)
class UGetDemoAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.GetDemoAsyncTask");
		return ptr;
	}


	class UGetDemoAsyncTask* STATIC_PlayDemo(const struct FString& DemoId, bool PlayDemo);
};


// Class Midair.GetLeaderBoardEntriesAsyncTask
// 0x0020 (0x0048 - 0x0028)
class UGetLeaderBoardEntriesAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.GetLeaderBoardEntriesAsyncTask");
		return ptr;
	}


	class UGetLeaderBoardEntriesAsyncTask* STATIC_GetLeaderBoardEntries(const struct FName& LeaboardName, const struct FName& GameMode, TEnumAsByte<EMALeaderboardRequest> LeaderboardRequest, int RangeStart, int RangeEnd, int DetailCount);
};


// Class Midair.GetMatchHistoryAsyncTask
// 0x0038 (0x0060 - 0x0028)
class UGetMatchHistoryAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.GetMatchHistoryAsyncTask");
		return ptr;
	}


	class UGetMatchHistoryAsyncTask* STATIC_GetMatchHistory(class APlayerController* PlayerController, const struct FName& GameMode, int Count);
	void Activate();
};


// Class Midair.GetUserStatsAsyncTask
// 0x0020 (0x0048 - 0x0028)
class UGetUserStatsAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.GetUserStatsAsyncTask");
		return ptr;
	}


	class UGetUserStatsAsyncTask* STATIC_GetUserStats(const struct FMASteamId& SteamId, const struct FString& GameMode);
};


// Class Midair.HeatComponent
// 0x0030 (0x0200 - 0x01D0)
class UHeatComponent : public UActorComponent
{
public:
	float                                              HeatVisibleThreshold;                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeatMax;                                                  // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EnergyHeatConversion;                                     // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeatDissapationRate;                                      // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHeat;                                              // 0x01E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01E4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.HeatComponent");
		return ptr;
	}

};


// Class Midair.HeatseekerMissile
// 0x0040 (0x0990 - 0x0950)
class AHeatseekerMissile : public AMAProjectile
{
public:
	float                                              LoseTargetVisibilityTimeThreshold;                        // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseHeatVisibilityThreshold;                              // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStagedMissileMovement*                      StagedMissileMovement;                                    // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class AActor*                                      CurrentTarget;                                            // 0x0960(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UTargetComponent*                            CurrentTargetComponent;                                   // 0x0968(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHeatComponent*                              CurrentTargetHeat;                                        // 0x0970(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMAVitalsComponent*                          CurrentTargetVitals;                                      // 0x0978(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      OldTarget;                                                // 0x0980(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LostTargetVisibilityTime;                                 // 0x0988(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.HeatseekerMissile");
		return ptr;
	}


	void OnStartNewStage(int NewStage);
	void OnRep_CurrentTarget();
};


// Class Midair.MAAsset
// 0x00D8 (0x0460 - 0x0388)
class AMAAsset : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	class UMAVitalsComponent*                          Vitals;                                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHeatComponent*                              HeatComponent;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DummyRoot;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DeploymentZone;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ClusteringSphere;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  DestroyedSound;                                           // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // 0x03E0(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MeshMIs;                                                  // 0x03E8(0x0010) (ZeroConstructor, Transient)
	EDeployableUsageState                              DeployableUsageState;                                     // 0x03F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FName                                       FriendlyDestroyedAnnouncement;                            // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnemyDestroyedAnnouncement;                               // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresPower;                                           // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInvulnerable;                                            // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	float                                              MinRepairHealthRatio;                                     // 0x0414(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bIsPowered : 1;                                           // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class USoundBase*                                  DeployedSound;                                            // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDeployable;                                            // 0x0428(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              MinAcceptableAngle;                                       // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAcceptableAngle;                                       // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDeploymentDist;                                        // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumberPerCluster;                                      // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSpokesClusterTest;                                     // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     PlaceableSurfaceType;                                     // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bControlSurfacesAreWhitelist;                             // 0x0441(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0442(0x0006) MISSED OFFSET
	TArray<TEnumAsByte<EPhysicalSurface>>              ControlPhysicalSurfaces;                                  // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ECollisionChannel>                     WhitelistType;                                            // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BlacklistType;                                            // 0x0459(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBePlacedUnderwater;                                   // 0x045A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x045B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAAsset");
		return ptr;
	}


	void UpdateTeamColors();
	void StatusChanged();
	void SetPowered(bool bInIsPowered);
	void OnRevived();
	void OnHealthChanged(bool bFromDamage);
	void OnDied();
	bool IsPowered();
	bool IsAlive();
	bool HasLowHealth();
	float GetPlacementVisualRadius();
};


// Class Midair.MATurretAsset
// 0x0090 (0x04F0 - 0x0460)
class AMATurretAsset : public AMAAsset
{
public:
	float                                              FireInterval;                                             // 0x0460(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GenDownFireRateTimeScale;                                 // 0x0464(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToFire;                                               // 0x0468(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetAcquiredSoundWaitTime;                              // 0x046C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTargetAcquiredSound;                                  // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinimumFirePitch;                                         // 0x0474(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumFirePitch;                                         // 0x0478(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x047C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurretEyeHeight;                                          // 0x0480(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UAnimMontage*                                FireAnim;                                                 // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USensorNetworkComponent*                     AutonomousTargettingSensor;                               // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            AssistedTargettingSphere;                                 // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  TargetAcquiredSound;                                      // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x04C0(0x000C) (Net, Transient, IsPlainOldData)
	struct FRotator                                    TurretRotation;                                           // 0x04CC(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	class UTargetComponent*                            CurrentTarget;                                            // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CurrentTargetActor;                                       // 0x04E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AMABaseGenerator*                            TeamGenerator;                                            // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATurretAsset");
		return ptr;
	}


	void TryTargetLost(class UTargetComponent* Target);
	void TargetDroppedFromSensorChannel(class UTargetComponent* Target, unsigned char Channel);
	void TargetAcquired();
	void OnTargetUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void OnPerceptionUpdated(TArray<class AActor*> UpdatedActors);
	void NetMulticast_FireProjectiles();
};


// Class Midair.HeatseekerTurret
// 0x0000 (0x04F0 - 0x04F0)
class AHeatseekerTurret : public AMATurretAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.HeatseekerTurret");
		return ptr;
	}


	void TargetBelowMinLockHeat();
};


// Class Midair.HoverTankVehicle
// 0x0058 (0x06A0 - 0x0648)
class AHoverTankVehicle : public AVehiclePawn
{
public:
	class UVehicleSeatComponent*                       GunnerSeatComponent;                                      // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             GunnerEjectionArrow;                                      // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     GunnerPrimaryWeaponComponent;                             // 0x0658(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     SiegeWeaponComponent;                                     // 0x0660(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	ETankMode                                          TankMode;                                                 // 0x0668(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	ETankMode                                          PrevTankMode;                                             // 0x0669(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x066A(0x0002) MISSED OFFSET
	float                                              SiegeVerifyDepth;                                         // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SiegeVerifyInterval;                                      // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0674(0x000C) MISSED OFFSET
	float                                              SiegeMaxSpeed;                                            // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class USoundBase*                                  SiegeRejectSound;                                         // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverThrottle;                                            // 0x0690(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              SiegeModeTransitionTime;                                  // 0x0694(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0698(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.HoverTankVehicle");
		return ptr;
	}


	void ServerSetActiveSiege(bool bActive);
	void OnEnterNewTankMode();
	void EnterNewTankMode(ETankMode NewMode);
	void AbortSiege();
};


// Class Midair.InvertedVerticalBox
// 0x0000 (0x0140 - 0x0140)
class UInvertedVerticalBox : public UVerticalBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.InvertedVerticalBox");
		return ptr;
	}

};


// Class Midair.LaunchableObject
// 0x0000 (0x0028 - 0x0028)
class ULaunchableObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.LaunchableObject");
		return ptr;
	}

};


// Class Midair.LoadingScreenWidget
// 0x0068 (0x0298 - 0x0230)
class ULoadingScreenWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	class UTexture2D*                                  DefaultBackground;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            LoadingScreenAnimation;                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0248(0x0038) MISSED OFFSET
	bool                                               bFinishedLoading;                                         // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0281(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.LoadingScreenWidget");
		return ptr;
	}


	struct FText GetTip();
	struct FString GetMapName();
	struct FText GetMapLore();
	class UTexture2D* GetBackground();
};


// Class Midair.LoadoutPreview
// 0x0080 (0x0408 - 0x0388)
class ALoadoutPreview : public AActor
{
public:
	class USceneComponent*                             PreviewMeshPivotPoint;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterMeshPreview;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAnimationAsset*                             CharacterPreviewAnim;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMeshComponent*                      ItemMeshPreview;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LootboxPivotPoint;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            MainCamera;                                               // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      LastObjectInfoClass;                                      // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASkinConfiguration*                          CurrentCharacterSkinPreview;                              // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASkinConfiguration*                          CurrentWeaponSkinPreview;                                 // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AParticleConfiguration*                      CurrentJetsPreview;                                       // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ACosmeticConfiguration*                      CurrentCosmeticPreview;                                   // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      LowQuality;                                               // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      HighQuality;                                              // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      CachedTextureTarget;                                      // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.LoadoutPreview");
		return ptr;
	}


	class ACosmeticConfiguration* STATIC_UpdateSelectionPreview(class UClass* ObjectInfoClass, class UClass* CosmeticCustomization);
	class ALoadoutPreview* STATIC_GetWorldLoadoutPreview();
	struct FVector GetCharacterLookAtLocation();
};


// Class Midair.Augment_BuddySystem
// 0x0010 (0x02C0 - 0x02B0)
class UAugment_BuddySystem : public UAugment
{
public:
	class UAugment*                                    BuddyingAugment;                                          // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.Augment_BuddySystem");
		return ptr;
	}

};


// Class Midair.MABaseGenerator
// 0x0010 (0x0470 - 0x0460)
class AMABaseGenerator : public AMAAsset
{
public:
	TArray<class AMAAsset*>                            PoweredAssets;                                            // 0x0460(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MABaseGenerator");
		return ptr;
	}

};


// Class Midair.MABeamProjectile
// 0x0010 (0x0960 - 0x0950)
class AMABeamProjectile : public AMAProjectile
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0950(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MABeamProjectile");
		return ptr;
	}


	void UpdateSpawnLocation();
};


// Class Midair.MAPlaybackEvent
// 0x0010 (0x0038 - 0x0028)
class UMAPlaybackEvent : public UObject
{
public:
	float                                              Time;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bApplied;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent");
		return ptr;
	}

};


// Class Midair.MAPlaybackEvent_CarriedObject_HolderChanged
// 0x0040 (0x0078 - 0x0038)
class UMAPlaybackEvent_CarriedObject_HolderChanged : public UMAPlaybackEvent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_CarriedObject_HolderChanged");
		return ptr;
	}

};


// Class Midair.MAPlaybackEvent_CarriedObject_MAReplicatedMovement
// 0x0028 (0x0060 - 0x0038)
class UMAPlaybackEvent_CarriedObject_MAReplicatedMovement : public UMAPlaybackEvent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_CarriedObject_MAReplicatedMovement");
		return ptr;
	}

};


// Class Midair.MACarriedObject
// 0x0268 (0x05F0 - 0x0388)
class AMACarriedObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	struct FName                                       FriendlyFlagTakenAnnouncement;                            // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnemyFlagTakenAnnouncement;                               // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FlagSecureAnnouncement;                                   // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           AssistCapsuleComponent;                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMACarriedObjectMovement*                    CarriedObjectMovement;                                    // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMAPlaybackComponent*                        PlaybackComponent;                                        // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera3P;                                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraSpringArm;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              TargetCamera3PDist;                                       // 0x03E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class AMAPlayerController*                         SpectatorController;                                      // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	struct FRepMAMovement                              MAReplicatedMovement;                                     // 0x0408(0x0028) (Net)
	bool                                               bHasStoppedSimulating;                                    // 0x0430(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0431(0x000F) MISSED OFFSET
	struct FPredictionSmoothing                        PredictionSmoothing;                                      // 0x0440(0x0070) (Edit, DisableEditOnInstance)
	struct FName                                       Holder3PSocketName;                                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Holder3PLocation;                                         // 0x04B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Holder3PRotation;                                         // 0x04C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       LastStateName;                                            // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCarriedObjectProperties                    DefaultProperties;                                        // 0x04E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TMap<class UClass*, struct FCarriedObjectProperties> PropertiesOverrideMap;                                    // 0x04F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RemainingAutoReturnTime;                                  // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RemainingAutoReturnSyncTime;                              // 0x0544(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0548(0x0008) MISSED OFFSET
	float                                              LastDroppedTime;                                          // 0x0550(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class AMACarriedObjectBase*                        HomeBase;                                                 // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMATeamState*                                TeamState;                                                // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMACharacter*                                Holder;                                                   // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMACharacter*                                LastHolder;                                               // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMACharacter*                                LocalHolder;                                              // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRepAttachment                              LastAttachmentRep;                                        // 0x0580(0x0040)
	class USoundBase*                                  AttachedToBase;                                           // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DetachedFromBase;                                         // 0x05C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x05D0(0x0018) MISSED OFFSET
	uint32_t                                           SensorBitmask;                                            // 0x05E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACarriedObject");
		return ptr;
	}


	void UpdateCameraDist(float CameraDistPct);
	void TeamChanged();
	void StateChanged();
	void OnRep_RemainingAutoReturnTime();
	void OnRep_RemainingAutoReturnSyncTime();
	void OnRep_MAReplicatedMovement();
	bool IsInState(const struct FName& InStateName);
	bool IsHome();
	void HolderChanged();
	void ChangeState(const struct FName& NewState);
	void CatchUp(float DeltaTime);
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AutoReturnTimer();
	void AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Midair.MACarriedObjectBase
// 0x0048 (0x03D0 - 0x0388)
class AMACarriedObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class UTargetComponent*                            TargetComponent;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UClass*                                      CarriedObjectClass;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialSpawnDelay;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03AC(0x000C) MISSED OFFSET
	struct FName                                       CarriedObjectStateName;                                   // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMACarriedObject*                            CarriedObject;                                            // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SensorBitmask;                                            // 0x03C8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACarriedObjectBase");
		return ptr;
	}


	void ObjectStateChanged();
	void ObjectChanged();
};


// Class Midair.MACarriedObjectMovement
// 0x0010 (0x02B0 - 0x02A0)
class UMACarriedObjectMovement : public UProjectileMovementComponent
{
public:
	class AMACarriedObject*                            CarriedObjectOwner;                                       // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACarriedObjectMovement");
		return ptr;
	}

};


// Class Midair.MACarriedObjectOOBVolume
// 0x0000 (0x03C0 - 0x03C0)
class AMACarriedObjectOOBVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACarriedObjectOOBVolume");
		return ptr;
	}


	void OnCarriedObjectOOB(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Midair.MACapsuleComponent
// 0x0010 (0x0850 - 0x0840)
class UMACapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0840(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACapsuleComponent");
		return ptr;
	}

};


// Class Midair.MACharacter
// 0x0490 (0x0C30 - 0x07A0)
class AMACharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07A0(0x0020) MISSED OFFSET
	bool                                               bJumpThenSkate;                                           // 0x07C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsViewTarget;                                            // 0x07C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07C2(0x0002) MISSED OFFSET
	float                                              TargetCamera3PDist;                                       // 0x07C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AMAPlayerController*                         ViewerController;                                         // 0x07C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMAVitalsComponent*                          Vitals;                                                   // 0x07D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHeatComponent*                              HeatComponent;                                            // 0x07D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ContactCapsuleComponent;                                  // 0x07E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x07E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            MeshBounds1P;                                             // 0x07F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera1P;                                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera3P;                                                 // 0x0800(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraSpringArm;                                          // 0x0808(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            ShoulderCamera;                                           // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         ShoulderCameraArm;                                        // 0x0818(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RagdollCameraCushion;                                     // 0x0820(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 RagdollCushionConstraint;                                 // 0x0828(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x0830(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetIcon*                                 TargetIcon;                                               // 0x0838(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMACharacterMovement*                        MACharacterMovement;                                      // 0x0840(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMAPlaybackComponent*                        PlaybackComponent;                                        // 0x0848(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SkateAudioLoop;                                           // 0x0850(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             JetAudioLoop;                                             // 0x0858(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindAudioLoop;                                            // 0x0860(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LowHealthAlarm;                                           // 0x0868(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USensorNetworkComponent*                     VisualSensor;                                             // 0x0870(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USensorNetworkComponent*                     OmniSensor;                                               // 0x0878(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PreviousVocalization;                                     // 0x0880(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bLastManStanding;                                         // 0x0888(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	struct FRepMACharMovement                          MAReplicatedMovement;                                     // 0x088C(0x0024) (Net)
	float                                              ContactCapsuleSkin;                                       // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class AActor*                                      Killer;                                                   // 0x08B8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WalkingEnergyRechargeBoost;                               // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JetEnergyDrainRate;                                       // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWarpingOut;                                            // 0x08C8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08C9(0x0003) MISSED OFFSET
	float                                              TimeOfDeath;                                              // 0x08CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET
	class UClass*                                      SkinConfiguration;                                        // 0x08D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      JetConfiguration;                                         // 0x08E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            BodyMIDs;                                                 // 0x08E8(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            HandMIDs;                                                 // 0x08F8(0x0010) (ZeroConstructor, Transient)
	class UMaterialInterface*                          OverrideMaterial3P;                                       // 0x0908(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial1P;                                       // 0x0910(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultVoiceSet;                                          // 0x0918(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NoDrawMaterial;                                           // 0x0920(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        RagdollHiddenMaterials;                                   // 0x0928(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0938(0x0008) MISSED OFFSET
	struct FSurfaceImpactInfo                          LastAttachedSurfaceImpact;                                // 0x0940(0x0030) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FCameraShakeInfo                            LastCameraShakeInfo;                                      // 0x0970(0x0010) (Net, Transient)
	float                                              LastCameraShakeTime;                                      // 0x0980(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FZoomInfo                                   ZoomInfo;                                                 // 0x0984(0x0002) (Net, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0986(0x0002) MISSED OFFSET
	class AMACarriedObject*                            CarriedObject;                                            // 0x0988(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowAnim1P;                                              // 0x0990(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowAnim3P;                                              // 0x0998(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GrabAnim1P;                                               // 0x09A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                GrabAnim3P;                                               // 0x09A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x09B0(0x0010) MISSED OFFSET
	class USoundBase*                                  SonicBoomSound;                                           // 0x09C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x09C8(0x0004) MISSED OFFSET
	float                                              SonicBoomPropogationSpeedKPH;                             // 0x09CC(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              SonicBoomTriggerSpeedKPH;                                 // 0x09D0(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              SonicBoomResetThresholdKPH;                               // 0x09D4(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	class USoundBase*                                  EvacuationSound;                                          // 0x09D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  CollisionFatalSound;                                      // 0x09E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  CollisionPainfulSound;                                    // 0x09E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  CollisionMinimalSound;                                    // 0x09F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimalCollisionSoundThreshold;                           // 0x09F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET
	class USoundBase*                                  JetStartSound;                                            // 0x0A00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  JetStopSound;                                             // 0x0A08(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  JetHitLowEnergySound;                                     // 0x0A10(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JetAudioWeightEaseInRate;                                 // 0x0A18(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JetAudioWeightEaseOutRate;                                // 0x0A1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JetAudioEnergyEaseInRate;                                 // 0x0A20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JetAudioEnergyEaseOutRate;                                // 0x0A24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkateAudioEaseInRate;                                     // 0x0A28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkateAudioEaseOutRate;                                    // 0x0A2C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JetAudioWeight;                                           // 0x0A30(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              JetAudioEnergyOutput;                                     // 0x0A34(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasOnLowEnergy;                                          // 0x0A38(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	float                                              SkateAudioWeight;                                         // 0x0A3C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LowHealthAlarmThreshold;                                  // 0x0A40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0A44(0x0004) MISSED OFFSET
	struct FSurfaceTypeSounds                          FootStepSounds;                                           // 0x0A48(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0AC0(0x0008) MISSED OFFSET
	float                                              MinTimeBetweenPickupGrabs;                                // 0x0AC8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInFirstPerson;                                           // 0x0ACC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	class UClass*                                      LandingCameraShake;                                       // 0x0AD0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingShakeMaxSpeed;                                     // 0x0AD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingShakeMinSpeed;                                     // 0x0ADC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDamagePowerExp;                                  // 0x0AE0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedAccelInfo;                                      // 0x0AE4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      AccelInfo;                                                // 0x0AE5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0AE6(0x0002) MISSED OFFSET
	TArray<class AMAItem*>                             Inventory;                                                // 0x0AE8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class UClass*                                      PickupBackpackClass;                                      // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PickupAmmoClass;                                          // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMADeployerWeapon*                           DeployerWeapon;                                           // 0x0B08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumHandGrenades;                                          // 0x0B10(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HandGrenadeCooldown;                                      // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandGrenadeCooldownRemaining;                             // 0x0B18(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GroundEnergyRegenAmount;                                  // 0x0B1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPickupDistance;                                        // 0x0B20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsPickup;                                             // 0x0B24(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      PickupCount;                                              // 0x0B25(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0B26(0x0002) MISSED OFFSET
	float                                              MinimumTimeBetweenSprays;                                 // 0x0B28(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprayMaximumDistance;                                     // 0x0B2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeUsedSpray;                                        // 0x0B30(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class AVehicleSpawnPad*                            PendingVehiclePad;                                        // 0x0B38(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x0B40(0x0001) MISSED OFFSET
	unsigned char                                      TriggerCount[0x2];                                        // 0x0B41(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      PrevTriggerCount[0x2];                                    // 0x0B43(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPressedReload;                                           // 0x0B45(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPressedThrowGrenade;                                     // 0x0B46(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x0B47(0x0001) MISSED OFFSET
	class AMAWeapon*                                   Weapon;                                                   // 0x0B48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PreviousWeaponClass;                                      // 0x0B50(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0B58(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMABackpack*                                 Backpack;                                                 // 0x0B60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DeployableInfo;                                           // 0x0B68(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AMAWeaponAttachment*                         WeaponAttachment;                                         // 0x0B70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlimitedAmmo;                                           // 0x0B78(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0B79(0x0003) MISSED OFFSET
	float                                              WeaponReloadModifier;                                     // 0x0B7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEnergyModifier;                                     // 0x0B80(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	TArray<class UAugment_Art*>                        AugmentArtQueue;                                          // 0x0B88(0x0010) (ZeroConstructor, Transient)
	TArray<class UAugment*>                            BuddyAugments;                                            // 0x0B98(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FTimerHandle                                TimerHandle_Invulnerability;                              // 0x0BA8(0x0008)
	bool                                               bEndInvulnerabilityOnFire;                                // 0x0BB0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	class UClass*                                      ReplicatedWeaponSkinClass;                                // 0x0BB8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HandGrenadeClass;                                         // 0x0BC0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponAttachmentClass;                                    // 0x0BC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMAWeapon*                                   PendingWeapon;                                            // 0x0BD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseForegrip;                                          // 0x0BD8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0BD9(0x0003) MISSED OFFSET
	struct FRepWeaponActivity                          ReplicatedWeaponActivity;                                 // 0x0BDC(0x000C) (Net)
	struct FRepWeaponActivity                          WeaponActivity;                                           // 0x0BE8(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FRepWeaponSpecial                           WeaponSpecial;                                            // 0x0BF4(0x0003) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	bool                                               bWeaponActivityChanged;                                   // 0x0BF7(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x0BF8(0x000C) MISSED OFFSET
	bool                                               bSingleJump;                                              // 0x0C04(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bPressedJet;                                              // 0x0C05(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x0C06(0x0002) MISSED OFFSET
	unsigned char                                      bIsSkating : 1;                                           // 0x0C08(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0C09(0x0007) MISSED OFFSET
	class AActor*                                      CurrentBestTarget;                                        // 0x0C10(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHasValidLock;                                            // 0x0C18(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	ECameraMode                                        CameraMode;                                               // 0x0C19(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x16];                                      // 0x0C1A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACharacter");
		return ptr;
	}


	void ZoomUpdated();
	void WeaponActivityUpdated();
	void Vocalize(class USoundBase* Sound);
	void UsePack();
	void UpdateWeaponAttachment();
	void UpdateVisualsToMatchCosmeticCustomizations();
	void UpdateForClientPerspective();
	void UpdateCameraDist(float CameraDistPct);
	void TryPurchaseVehicleAtIndex(unsigned char Index);
	void TryExitVehicle();
	void TryEnterVehicle(class AVehiclePawn* Vehicle);
	void TossFlag();
	void TossCarriedObject();
	void ToggleZoom();
	void ToggleTrigger(unsigned char FireMode);
	bool SwitchToWeaponAtIndex(int Index);
	bool SwitchToWeapon(class AMAWeapon* NewWeapon);
	bool SwitchToNextWeapon(int Direction);
	bool SwitchToDeployerWeapon();
	void SwitchToDeployable(class UClass* Deployable);
	void SwapTriggerBuffers();
	bool Suicide();
	void StopSkating();
	void StopPurchaseVehicle();
	void StopPickup();
	void StopJetting();
	void StartPickup();
	void StartInvulnerability(float Length);
	void Skate();
	void SetTrigger(unsigned char FireMode, bool bSet);
	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetLoadout(const struct FMALoadout& Loadout, bool bSetMaxes, bool bIsBaseInventory);
	void SetCameraMode(ECameraMode InCameraMode);
	void ServerTrySpecificPickup(class AMAPickup* Pickup);
	void ServerTryPurchaseVehicleAtIndex(class AVehicleSpawnPad* VehiclePad, unsigned char Index);
	void ServerTryExitVehicle();
	void ServerTryEnterVehicle(class AVehiclePawn* Vehicle);
	void ServerTossCarriedObject();
	void ServerSetCameraMode(ECameraMode InCameraMode);
	void Server_UseSpray();
	void RemoveItem(class AMAItem* ItemToRemove);
	void PlayCameraShake(class UClass* Shake, float Scale, bool bPlayInUserSpace, const struct FRotator& UserSpaceRot);
	void OnTookDamage(const struct FTakeHitInfo& TakeHitInfo);
	void OnRep_ReplicatedAccelInfo();
	void OnRep_PressedJet();
	void OnRep_MAReplicatedMovement();
	void OnRep_LMS();
	void OnRep_LastAttachedSurfaceImpact();
	void OnRep_IsSkating();
	void OnPurchasedVehicleSpawned(class AVehiclePawn* Vehicle);
	void OnHealthChanged(bool bFromDamage);
	void OnFootStep();
	void OnEnergyDamage();
	void OnDied();
	class AMAItem* K2_FindItem(class UClass* Type, bool bExactClass);
	class AMAItem* K2_CreateItem(class UClass* NewItemClass, bool bAutoActivate);
	void Jet();
	bool IsTriggerSet(unsigned char FireMode);
	bool IsInInventory(class AMAItem* ItemToFind);
	bool IsDead();
	bool IsAccelerating();
	bool GetWantsOrderVehicle();
	float GetRemoteViewPitch();
	bool GetIsWarpingOut();
	float GetHealthPct();
	float GetHealth();
	float GetEnergyPct();
	float GetEnergy();
	float GetAccelerationYaw();
	void EndInvulnerability();
	void DiscardInventory();
	void CycleZoom();
	void ClientLoadoutRefreshed();
	void ClearTriggers();
	void CleanupDeadBody();
	void CameraShakeUpdated();
	void BP_UpdateForClientPerspective(bool bFirstPerson);
	void BP_StartPurchaseVehicle(class AVehicleSpawnPad* SpawnPad);
	void BP_ShowEngineerWidget(class AEngineerPack* Pack);
	void BP_OnRep_PlayerState();
	struct FRotator BP_GetViewRotation();
	void BP_EndPurchaseVehicle();
	bool AddItem(class AMAItem* ItemToAdd, bool bAutoActivate);
};


// Class Midair.MACharacterMovement
// 0x0120 (0x0920 - 0x0800)
class UMACharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              MaxJetLateralPercent;                                     // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	class UCurveFloat*                                 LateralJetCurve;                                          // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxJetVerticalSpeedStart;                                 // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxJetVerticalSpeedEnd;                                   // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBonusMaxSpeed;                                   // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpwardJetBonus;                                        // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBonusRegenRate;                                  // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBonusWalkingBonusRegenRate;                      // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBonusRegenWaitTime;                              // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBonusBurnRate;                                   // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardJetBurnPower;                                       // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	class UCurveFloat*                                 UpwardJetBonusModifierCurve;                              // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparateSkateJumpVelocity;                               // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	float                                              SkateJumpZVelocity;                                       // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JetModifier;                                              // 0x0848(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     JetBonus;                                                 // 0x084C(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              MaxFallingLateralSpeed;                                   // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardsDamping;                                           // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpwardsDampingSpeed;                                      // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpwardsSpeed;                                          // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0868(0x0010) MISSED OFFSET
	class AMACharacter*                                MACharacterOwner;                                         // 0x0878(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0880(0x0004) MISSED OFFSET
	float                                              UpwardJetBonusEnergy;                                     // 0x0884(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceLastUpwardJetBonus;                              // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x94];                                      // 0x088C(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACharacterMovement");
		return ptr;
	}


	void MAServerMove(const struct FMAPackedMoveBundle& Bundle);
	void MAClientAdjustEnergy(float Energy);
	bool IsSkatingOnGround();
};


// Class Midair.MACTFFlag
// 0x0030 (0x0620 - 0x05F0)
class AMACTFFlag : public AMACarriedObject
{
public:
	class UAudioComponent*                             FlagSlideLoop;                                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  FlagBounce;                                               // 0x05F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BounceSoundVelocityThreshold;                             // 0x0600(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x0604(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0608(0x0008) MISSED OFFSET
	float                                              SlideAudioEaseInRate;                                     // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideAudioEaseOutRate;                                    // 0x0614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACTFFlag");
		return ptr;
	}


	void OnStop(const struct FHitResult& ImpactResult);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class Midair.MACTFFlagBase
// 0x0008 (0x03D8 - 0x03D0)
class AMACTFFlagBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACTFFlagBase");
		return ptr;
	}

};


// Class Midair.MACTFGameMode
// 0x00E8 (0x0BE0 - 0x0AF8)
class AMACTFGameMode : public AMAGameMode
{
public:
	bool                                               bSpawnWithInventory;                                      // 0x0AF8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AF9(0x0003) MISSED OFFSET
	float                                              TimeToSpawnWithLoadout;                                   // 0x0AFC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              WithLoadoutSpawnPenaltyMultiplierNoGens;                  // 0x0B00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleKillAssistThreshold;                               // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameModeComplexScore                       Points_Return;                                            // 0x0B08(0x0018) (Edit, BlueprintVisible)
	struct FGameModeComplexScore                       Points_Grab;                                              // 0x0B20(0x0018) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_Capture;                                           // 0x0B38(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        MaxPoints_DamageContributionToVehicleKill;                // 0x0B44(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_LastHitTowardsVehicleKill;                         // 0x0B50(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_VehicleKillAssist;                                 // 0x0B5C(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_VehiclePerOccupantKill;                            // 0x0B68(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_VehiclePerOccupantAssist;                          // 0x0B74(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_PilotAssist;                                       // 0x0B80(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0B8C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACTFGameMode");
		return ptr;
	}

};


// Class Midair.MAGameState
// 0x01A8 (0x0590 - 0x03E8)
class AMAGameState : public AGameState
{
public:
	struct FScriptMulticastDelegate                    OnMapVoteOptionsChanged;                                  // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapVoteStageChanged;                                    // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapVoteWinningOptionChanged;                            // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPunishVoteStarted;                                      // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPunishVoteEnded;                                        // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FLoadoutSpawnPenalties                      PerItemLoadoutPenalties;                                  // 0x0438(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TArray<struct FString>                             MapRotation;                                              // 0x0458(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FString>                             VoteOptionNames;                                          // 0x0468(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0478(0x0028) MISSED OFFSET
	float                                              PunishVoteDuration;                                       // 0x04A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PunishVoteMinParticipationPct;                            // 0x04A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PunishVoteWinPct;                                         // 0x04A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PunishVoteKickAsBanTimeMinutes;                           // 0x04AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinimumPlayersForPunishVote;                              // 0x04B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FPunishVote                                 ActivePunishVote;                                         // 0x04B8(0x0018) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	TArray<unsigned char>                              MapVoteCounts;                                            // 0x04D8(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x60];                                      // 0x04E8(0x0060) MISSED OFFSET
	EMapVoteOption                                     WinningOption;                                            // 0x0548(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	EMapVoteStage                                      VotingStage;                                              // 0x0549(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamGame;                                                // 0x054A(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTeamRabbit;                                            // 0x054B(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bModeSupportsSpawnWithLoadout;                            // 0x054C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowTeamChangeRequests;                                 // 0x054D(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBalanceTeams;                                            // 0x054E(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x054F(0x0001) MISSED OFFSET
	TArray<class AMATeamState*>                        TeamArray;                                                // 0x0550(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	int                                                MatchTime;                                                // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanInitiateEndMatchVote;                                 // 0x0564(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEndMatchVoteInProgress;                                  // 0x0565(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0566(0x0002) MISSED OFFSET
	float                                              WinningScore;                                             // 0x0568(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentRound;                                             // 0x056C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      MaxRounds;                                                // 0x056D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x056E(0x0002) MISSED OFFSET
	float                                              PctFrameOnTime;                                           // 0x0570(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<struct FObjectCount>                        MaxSpawnablePerObject;                                    // 0x0578(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameState");
		return ptr;
	}


	void SortPlayersByScore(TArray<class APlayerState*>* Players);
	EMapVoteOption PredictWinner();
	bool OnSameTeam(class AActor* Actor1, class AActor* Actor2);
	void OnRep_WinningOption();
	void OnRep_VotingStage();
	void OnRep_TeamArray();
	void OnRep_PunishVote();
	void OnRep_MapVoteOptions();
	bool IsAnySimpleVoteInProgress();
	unsigned char GetVotesForOption(EMapVoteOption Option);
	unsigned char GetTotalPlayersOnTeam(unsigned char TeamID);
	class AMATeamState* GetTeamStateById(unsigned char TeamID);
	unsigned char GetTeamMaxObjectCount(class UClass* ObjectType);
	void GetRankedPlayerArrays(TArray<class AMAPlayerState*>* Team1RankedArray, TArray<class AMAPlayerState*>* Team2RankedArray);
	void GetRankedPlayerArray(TArray<class AMAPlayerState*>* RankedArray);
	struct FText GetMatchStatus();
	class UClass* GetMAGameModeClass();
	unsigned char GetLivePlayersOnTeam(unsigned char TeamID);
	struct FString GetGameTime();
	struct FText GetFlagHolderTimer();
	struct FText GetCurrentJackpot();
	struct FText GetCurrentHolder();
};


// Class Midair.MACTFGameState
// 0x0028 (0x05B8 - 0x0590)
class AMACTFGameState : public AMAGameState
{
public:
	TArray<class AMACTFFlagBase*>                      FlagBases;                                                // 0x0590(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET
	bool                                               bIsLite;                                                  // 0x05B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACTFGameState");
		return ptr;
	}


	bool GetIsFlagHolder(class AMAPlayerState* PlayerState);
	struct FName GetFlagStateName(unsigned char TeamID);
	class AMACTFFlagBase* GetFlagBase(unsigned char TeamID);
};


// Class Midair.MACTFPlayerState
// 0x0018 (0x0558 - 0x0540)
class AMACTFPlayerState : public AMAPlayerState
{
public:
	int                                                FlagCaptures;                                             // 0x0540(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagReturns;                                              // 0x0544(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagPickUps;                                              // 0x0548(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagGrabs;                                                // 0x054C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                CarrierKills;                                             // 0x0550(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0554(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MACTFPlayerState");
		return ptr;
	}

};


// Class Midair.MADamageProfile
// 0x0018 (0x0040 - 0x0028)
class UMADamageProfile : public UObject
{
public:
	TArray<struct FMADamageProfileEntry>               DamageProfiles;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              ShieldConversionFactor;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADamageProfile");
		return ptr;
	}

};


// Class Midair.MADamageType
// 0x0050 (0x0090 - 0x0040)
class UMADamageType : public UDamageType
{
public:
	float                                              SelfImpulsePct;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldAbsorptionPct;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           HitFlashColor;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ShieldFlashCurve;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bHitFlashColorRimOnly : 1;                                // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bCriticalOnDirectHit : 1;                                 // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDropFlagOnHit : 1;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bFromDeployable : 1;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UTexture2D*                                  SmallIcon;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  LargeIcon;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OneStarDist;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumDistStars;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OneStarSpeed;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumSpeedStars;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OneStarSpeedDiff;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumSpeedDiffStars;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumMidairHitStars;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComputedMaxStars;                                         // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADamageType");
		return ptr;
	}


	float ComputeDamageSkillRating(float PreviousSkillRating, class AActor* Instigator, class AActor* Victim, bool bMidairHit, float RadialDamageScale);
};


// Class Midair.MADmgType_Spook
// 0x0000 (0x0090 - 0x0090)
class UMADmgType_Spook : public UMADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADmgType_Spook");
		return ptr;
	}

};


// Class Midair.MADmgType_WorldCollision
// 0x0000 (0x0090 - 0x0090)
class UMADmgType_WorldCollision : public UMADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADmgType_WorldCollision");
		return ptr;
	}

};


// Class Midair.MALocalMessage
// 0x0000 (0x0028 - 0x0028)
class UMALocalMessage : public ULocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MALocalMessage");
		return ptr;
	}


	struct FLinearColor GetTextColor(int MessageIndex);
	struct FText GetText(const struct FLocalMessageData& MessageData);
};


// Class Midair.MADeathMessage
// 0x0000 (0x0028 - 0x0028)
class UMADeathMessage : public UMALocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADeathMessage");
		return ptr;
	}

};


// Class Midair.MADeployerWeapon
// 0x0090 (0x0550 - 0x04C0)
class AMADeployerWeapon : public AMAWeapon
{
public:
	class UClass*                                      DeployableClass;                                          // 0x04C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AMAAsset*                                    DefaultDeployable;                                        // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      PlacementMesh;                                            // 0x04D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PlacementRadiusEffects;                                   // 0x04D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FTransform                                  PlacementMeshRelativeTransform;                           // 0x04E0(0x0030) (Transient, IsPlainOldData)
	class UMaterialInterface*                          HolographMaterial;                                        // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RadiusEffects;                                            // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDeployableUsed;                                         // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FText>                               CachedErrors;                                             // 0x0538(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MADeployerWeapon");
		return ptr;
	}


	void OnRep_DeployableClass();
	void NotifyMenuClosed();
};


// Class Midair.MAFlagGoal
// 0x0010 (0x0398 - 0x0388)
class AMAFlagGoal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	unsigned char                                      TeamID;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAFlagGoal");
		return ptr;
	}

};


// Class Midair.MAGameEngine
// 0x0020 (0x0D50 - 0x0D30)
class UMAGameEngine : public UGameEngine
{
public:
	float                                              HitchScaleThreshold;                                      // 0x0D30(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HitchSmoothingRate;                                       // 0x0D34(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              NormalSmoothingRate;                                      // 0x0D38(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaximumSmoothedTime;                                      // 0x0D3C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FrameRateCap;                                             // 0x0D40(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingSmoothingRate;                                        // 0x0D44(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxPredictionPing;                                        // 0x0D48(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D4C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameEngine");
		return ptr;
	}

};


// Class Midair.MAGameGlobals
// 0x0DE8 (0x0E10 - 0x0028)
class UMAGameGlobals : public UObject
{
public:
	unsigned char                                      UnknownData00[0xDE8];                                     // 0x0028(0x0DE8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameGlobals");
		return ptr;
	}

};


// Class Midair.MAGameInstance
// 0x03E0 (0x0980 - 0x05A0)
class UMAGameInstance : public USteamBeaconGameInstance
{
public:
	class UDataTable*                                  ProgressionLevelsTable;                                   // 0x05A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x05A8(0x0060) MISSED OFFSET
	EFindSessionsSortMethod                            FindSessionsSortMethod;                                   // 0x0608(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFindSessionsHideFull;                                    // 0x0609(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputJoinPassword;                                      // 0x0610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyChatUpdate;                                        // 0x0620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyGameCreatedDelegate;                               // 0x0630(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FString>                             MapRotation;                                              // 0x0640(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             AdminIdList;                                              // 0x0650(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, struct FSimplePlayerStats>    PlayerSkillRatings;                                       // 0x0660(0x0050) (ZeroConstructor, Transient)
	TArray<struct FString>                             Team1Players;                                             // 0x06B0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             Team2Players;                                             // 0x06C0(0x0010) (ZeroConstructor, Transient)
	int                                                MapRotationIndex;                                         // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xDC];                                      // 0x06D4(0x00DC) MISSED OFFSET
	class ULoadingScreenWidget*                        LoadingScreenWidget;                                      // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      LoadingScreenWidgetClass;                                 // 0x07B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      MatchMakingStatusWidgetClass;                             // 0x07C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHadNetworkError;                                         // 0x07C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	struct FString                                     LastNetworkErrorMessage;                                  // 0x07D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastServerName;                                           // 0x07E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastMapName;                                              // 0x07F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnServerNameReceived;                                     // 0x0800(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bGameUpdateAvailable;                                     // 0x0810(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	TArray<struct FPlayerExpressionData>               PlayerExpressionCategories;                               // 0x0818(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayerExpressionData>               PlayerExpressions;                                        // 0x0828(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FPlayerExpressionData>   PlayerExpressionsMap;                                     // 0x0838(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x78];                                      // 0x0888(0x0078) MISSED OFFSET
	class UObjectInfo*                                 RootProgressionObjectInfo;                                // 0x0900(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0908(0x0018) MISSED OFFSET
	TMap<struct FString, struct FLoadingScreenMapData> LoadingScreenMapData;                                     // 0x0920(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USoundCue*>                           VoiceSets;                                                // 0x0970(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameInstance");
		return ptr;
	}


	void ShowMatchMakingWidget(bool Show);
	void SaveMouseSettings(float DPI, float Sensitivity, bool bInvertY);
	void SaveInputSettings(TArray<struct FInputActionKeyMapping> ActionMappings, TArray<struct FInputAxisKeyMapping> AxisMappings);
	void ResetInputSettings();
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString);
	void InputPasswordForSteamPresence(const struct FString& RichPresence, const struct FString& JoinPassword);
	void HideLoadingScreen();
	class USoundCue* GetSoundCueForVoiceSet(class UClass* VoiceSet, int SoundCueId);
	class USoundCue* GetSoundCueForAnnouncer(int SoundCueId);
	EMAServiceState GetServiceState();
	class UObjectInfo* GetRootProgressionObject();
	int GetPlayerExpressionIndex(const struct FPlayerExpressionData& Expression);
	void GetMouseSettings(float* DPI, float* Sensitivty, bool* bInvertY);
	TArray<struct FInputAxisKeyMapping> GetInputAxisMappings();
	TArray<struct FInputActionKeyMapping> GetInputActionMappings();
	struct FString GetCurrenSeason();
	void FindSessions(const struct FScriptDelegate& InFindSessionsResultsDelegate, EFindSessionsSortMethod SortMethod, bool bHideFull);
	bool ClientJoinSession(class ULocalPlayer* Player, const struct FBlueprintSessionResult& SearchResult, const struct FString& Password);
	void ClearLastNetworkError();
	bool CheckAndHandleNamedEvent(const struct FName& Name);
	void AuthenticateWithService();
};


// Class Midair.MAGameMessage
// 0x0000 (0x0028 - 0x0028)
class UMAGameMessage : public UMALocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameMessage");
		return ptr;
	}

};


// Class Midair.RBMessage
// 0x0000 (0x0028 - 0x0028)
class URBMessage : public UMALocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.RBMessage");
		return ptr;
	}

};


// Class Midair.PRMessage
// 0x0000 (0x0028 - 0x0028)
class UPRMessage : public UMALocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PRMessage");
		return ptr;
	}

};


// Class Midair.MAGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UMAGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameplayStatics");
		return ptr;
	}


	void STATIC_UseProgressionPass(class UObject* WorldContextObject);
	bool STATIC_TryUpdateAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson);
	void STATIC_StashPresentationItems(class UObject* WorldContextObject, TArray<class UClass*> Items);
	class UAudioComponent* STATIC_SpawnPerspectiveSoundAttached(class USoundBase* Sound, bool bInFirstPerson, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	class AMAProjectile* STATIC_SpawnClientServerProjectile(class APawn* Instigator, class UClass* ProjectileClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, float DamageModifier);
	void STATIC_ShowStorePageForItem(class UClass* ItemClass);
	void STATIC_ShowStorePage();
	void STATIC_ShowDLCStorePage(int Appid);
	bool STATIC_ShouldShowPerformanceStats();
	void STATIC_SetTeamColorOnMesh(class UMeshComponent* Mesh, unsigned char TeamID);
	void STATIC_SetSoundClassVolume(class USoundClass* SoundClass, float NewVolume);
	void STATIC_SetSoundClassRadioFilterVolume(class USoundClass* SoundClass, float NewVolume);
	void STATIC_SetLowPassFilterOnAllSounds(class UObject* WorldContextObject, bool bEnable, float Frequency);
	void STATIC_SetDefaultNamedCosmeticForLoadout(const struct FName& Name, class UClass* Class);
	void STATIC_SetAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson);
	void STATIC_RefreshInventory();
	struct FHitResult STATIC_PredictProjectileCollisionPoint(class UWorld* World, class UClass* ProjectileClass, const struct FVector& InitialLocation, const struct FRotator& FireRotation, float TimePerStep, float MaxPredictionTime);
	void STATIC_OpenLootbox(const struct FLootboxInfo& Lootbox, const struct FScriptDelegate& Callback);
	bool STATIC_MAPlayWorldCameraShake(class UObject* WorldContextObject, const struct FWorldCameraShakeParams& ShakeParams, const struct FVector& Epicenter, class UClass* ShakeClass, TArray<class AActor*> IgnoreActors);
	void STATIC_MakeSpline(const struct FVector2D& InStart, const struct FVector2D& InStartDir, const struct FVector2D& InEnd, const struct FVector2D& InEndDir, float InThickness, const struct FLinearColor& InTint, int LayerOffset, struct FPaintContext* Context);
	struct FVector STATIC_MAGetDamageImpulse(const struct FDamageEvent& DamageEvent, class AActor* HitActor, class AController* EventInstigator);
	bool STATIC_MAApplyRadialDamage(class UObject* WorldContextObject, const struct FRadialDamageParams& DamageParams, const struct FVector& Origin, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController);
	bool STATIC_IsSteamConnected();
	bool STATIC_IsItemUnlockedForUser(class UClass* ItemClass);
	bool STATIC_IsDLCOwned(int Appid);
	bool STATIC_HasUsedProgressionPass(class UObject* WorldContextObject);
	float STATIC_GetTimeForSpawnWithSelectedLoadout(class AMAPlayerController* Controller);
	float STATIC_GetTimeForSpawnWithLoadout(class AMAPlayerController* Controller, const struct FMALoadout& Loadout);
	TArray<class UClass*> STATIC_GetStashedPresentationItems(class UObject* WorldContextObject);
	float STATIC_GetSpawnPenaltyForSelectedLoadout(class AMAPlayerController* Controller);
	float STATIC_GetSpawnPenaltyForLoadout(class AMAPlayerController* Controller, const struct FMALoadout& Loadout);
	bool STATIC_GetRecentlyRendered(class USkinnedMeshComponent* MeshComponent);
	float STATIC_GetRawLoadoutPenalties(class AMAPlayerController* Controller, const struct FMALoadout& Loadout, bool* bGensDown);
	struct FString STATIC_GetProjectVersionString();
	int STATIC_GetPredictedLOD(class USkinnedMeshComponent* MeshComponent);
	class UClass* STATIC_GetObjectInfoClass(class UClass* ObjectClass);
	class UObjectInfo* STATIC_GetObjectInfo(class UClass* ObjectClass);
	class UObject* STATIC_GetMutableDefaultObject(class UClass* Class);
	class AMAGameState* STATIC_GetMAGameState(class UObject* WorldContextObject);
	TArray<struct FLootboxInfo> STATIC_GetLootboxes();
	TArray<class UClass*> STATIC_GetItemsBySteamDefinedType(ESteamDefinedItemType Type, class UClass* AssociativeFilter);
	bool STATIC_GetIsEditor();
	float STATIC_GetDistanceFromPointToCollision(const struct FVector& Point, class UPrimitiveComponent* Component);
	class UClass* STATIC_GetDefaultNamedCosmeticForLoadout(const struct FName& Name);
	struct FString STATIC_GetCurrentLoadoutName();
	float STATIC_GetCatchUpTime(class AActor* Actor);
	bool STATIC_GetCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, unsigned char TeamID);
	class UObjectInfo* STATIC_GetActorInfoObjectFromActorClass(class UClass* ActorClass);
	class UObjectInfo* STATIC_GetActorInfoObject(class UClass* ActorInfoClass);
	TMap<class UClass*, class UActorComponent*> STATIC_FindComponentPerClass(class AActor* Actor, TArray<class UClass*> Classes);
	bool STATIC_EjectCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, const struct FVector& EjectVelocity);
	float STATIC_ConvertUUVelocityToKPH(const struct FVector& UUVelocity);
	float STATIC_ConvertUUSpeedToKPH(float UUSpeed);
	void STATIC_CheckBeginOverlapForEjection(class AActor* SelfActor, bool bInvertNormal, class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult, bool bIsRabbit);
	TArray<class AActor*> STATIC_CheckAreaForSpecificActorClass(class UObject* WorldContextObject, class UClass* ActorClass, TEnumAsByte<ECollisionChannel> TraceChannel, const struct FVector& BaseLocation, float Radius);
	bool STATIC_AreTeamGensDown(class AMAPlayerController* Controller);
};


// Class Midair.MAGameSession
// 0x0000 (0x0760 - 0x0760)
class AMAGameSession : public ASteamBeaconGameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameSession");
		return ptr;
	}

};


// Class Midair.MAGameUserSettings
// 0x00E8 (0x01F0 - 0x0108)
class UMAGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	float                                              UserFOV;                                                  // 0x0110(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                Anisotropy;                                               // 0x0114(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TextureStreamingPoolSize;                                 // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MotionBlur;                                               // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     CrosshairColor;                                           // 0x0120(0x0010) (ZeroConstructor, Config)
	int                                                CrosshairIndex;                                           // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TMap<class USoundClass*, float>                    VolumeMap;                                                // 0x0138(0x0050) (ZeroConstructor, Config)
	bool                                               bHideWelcomeMessage;                                      // 0x0188(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowIFFDistance;                                         // 0x0189(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
	TArray<struct FCanvasIcon>                         WhiteCrosshairs;                                          // 0x0190(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         GreenCrosshairs;                                          // 0x01A0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         BlueCrosshairs;                                           // 0x01B0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         RedCrosshairs;                                            // 0x01C0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         YellowCrosshairs;                                         // 0x01D0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         MagentaCrosshairs;                                        // 0x01E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAGameUserSettings");
		return ptr;
	}


	void SetUserFOV(float NewFOV);
	void SetSoundClassVolume(class USoundClass* Class, float Volume);
	void SetIFFDistance(bool ShouldShow);
	void SetFullscreenModeFromString(struct FString* AsString);
	void SetCrosshairIndex(const struct FString& CrosshairType);
	void SetCrosshairColor(const struct FString& Color);
	void SetAllSettingsGroups(int AAQuality, int VFXQuality, int FoliageQuality, int PPQuality, int ShadowQuality, int TextureQuality, int ViewDistance);
	void SetAdvancedSettings(int InAnisotropy, int InTextureStreamingPoolSize, int InMotionBlur);
	void HideWelcomeMessage();
	float GetUserFOV();
	float GetSoundClassVolume(class USoundClass* Class);
	class UMAGameUserSettings* STATIC_GetMAGameUserSettings();
	float STATIC_GetFOVMin();
	float STATIC_GetFOVMax();
	struct FString GetCrosshairType();
	int GetCrosshairIndex();
	struct FString GetCrosshairColor();
	void GetAllSettingsGroups(int* AAQuality, int* VFXQuality, int* FoliageQuality, int* PPQuality, int* ShadowQuality, int* TextureQuality, int* ViewDistance);
	void GetAdvancedSettings(int* OutAnisotropy, int* OutTextureStreamingPoolSize, int* OutMotionBlur);
};


// Class Midair.MAHandGrenade
// 0x00C0 (0x0460 - 0x03A0)
class AMAHandGrenade : public AMAItem
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCountDefault;                                      // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           MaxAmmoCountMap;                                          // 0x03B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     ThrowOffset;                                              // 0x0400(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_Throw;                                     // 0x0410(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAHandGrenade");
		return ptr;
	}


	int GetMaxAmmoCountFor(class AMACharacter* Character);
};


// Class Midair.MAHUD
// 0x0258 (0x06C8 - 0x0470)
class AMAHUD : public AHUD
{
public:
	struct FTargetRenderModifiers                      TargetRenderModifiers;                                    // 0x0470(0x0078) (Edit)
	class UClass*                                      InGameMenuClass;                                          // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 InGameMenu;                                               // 0x04F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      HUDWidgetClass;                                           // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 HUDWidget;                                                // 0x0500(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      NetPerfWidgetClass;                                       // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 ScoreboardWidget;                                         // 0x0510(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 MatchStatusWidget;                                        // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     DemoSlotWidget;                                           // 0x0520(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0528(0x0050) MISSED OFFSET
	bool                                               bShowIffOnly;                                             // 0x0578(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	TArray<struct FDamageMarkerInfo>                   DamageMarkers;                                            // 0x0580(0x0010) (ZeroConstructor, Transient)
	class UMaterial*                                   DamageMarkerMaterial;                                     // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FHitMarkerInfo                              LastHitMarkerInfo;                                        // 0x0598(0x0018) (IsPlainOldData)
	class UMaterial*                                   HitMarkerMaterial;                                        // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x05B8(0x0018) MISSED OFFSET
	TArray<struct FCanvasIcon>                         WhiteCrosshairs;                                          // 0x05D0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         GreenCrosshairs;                                          // 0x05E0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         BlueCrosshairs;                                           // 0x05F0(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         RedCrosshairs;                                            // 0x0600(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         YellowCrosshairs;                                         // 0x0610(0x0010) (ZeroConstructor)
	TArray<struct FCanvasIcon>                         MagentaCrosshairs;                                        // 0x0620(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             Drawables;                                                // 0x0630(0x0010) (ZeroConstructor)
	class USoundBase*                                  CauseHitSound;                                            // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CauseCriticalHitSound;                                    // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CauseMidairHitSound;                                      // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CauseKillSound;                                           // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CauseTeamHitSound;                                        // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TakeHitSound;                                             // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TakeShieldedHitSound;                                     // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OneStarAmbience;                                          // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TwoStarAmbience;                                          // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThreeStarAmbience;                                        // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FourStarAmbience;                                         // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FiveStarAmbience;                                         // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x06A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAHUD");
		return ptr;
	}


	void UpdateReplayTime(float PctOfReplay);
	void ToggleReplayHud(class APlayerController* Controller);
	void TogglePauseReplay(class APlayerController* Controller);
	void ToggleInGameMenu(class AMAPlayerController* Controller);
	void StartQuickVoice();
	void StartChat(bool bTeamOnly);
	void ShowMapVote();
	void ShowIffOnly();
	void SetReplaySpeed(float Speed);
	bool ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey);
	bool IsReplayPaused();
	bool IsInGameMenuVisible();
	int GetTotalReplayTime();
	float GetReplaySpeed();
	float GetReplayPercent();
	int GetCurrentReplayTime();
	class UTexture* GetCurrentCrosshairTexture();
	void BP_OnScoreApplied(const struct FText& ScoreText, float Value);
};


// Class Midair.MAImpactEffect
// 0x0010 (0x0398 - 0x0388)
class AMAImpactEffect : public AActor
{
public:
	float                                              MaxVisibleLifeSpan;                                       // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxInvisibleLifeSpan;                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeDecalRoll;                                      // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAImpactEffect");
		return ptr;
	}

};


// Class Midair.MAInputSettings
// 0x0160 (0x0208 - 0x00A8)
class UMAInputSettings : public UInputSettings
{
public:
	struct FScriptMulticastDelegate                    OnBindsConflict;                                          // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBindingChanged;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FName, struct FMidairInputMapping>     TrackedMappings;                                          // 0x00C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0118(0x0048) MISSED OFFSET
	TMap<struct FName, float>                          NamedMouseSensitivies;                                    // 0x0160(0x0050) (ZeroConstructor, Config)
	TMap<struct FName, bool>                           NamedMouseInverts;                                        // 0x01B0(0x0050) (ZeroConstructor, Config)
	bool                                               bToggleSkate;                                             // 0x0200(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bJumpThenSkate;                                           // 0x0201(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoAnnouncer;                                           // 0x0202(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0203(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAInputSettings");
		return ptr;
	}


	void UpdateMousePropertiesForPawn(class APawn* Class);
	void TryResolveLastConflict(EMappingConflictResolution Resolution);
	void TryResetKey(const struct FName& MappingName, EMappingPriority KeyPriority);
	void TryBindKey(const struct FName& MappingName, const struct FInputActionKeyMapping& NewKey, EMappingPriority KeyPriority);
	void SetMouseSensitivityForName(const struct FName& Name, float Value);
	void SetMouseInvertForName(const struct FName& Name, bool bInvert);
	void ResetAll();
	EMappingPriority IsMappingDefault(const struct FName& MappingName);
	bool HasAnyPendingConflict();
	float GetUISensitivityScale();
	struct FMidairInputMapping GetSpecificInputMapping(const struct FName& MappingName);
	struct FName STATIC_GetSettingsNameForPawn(class APawn* Pawn);
	float GetMouseSensitivityForPawn(class APawn* Pawn);
	float GetMouseSensitivityForName(const struct FName& Name);
	bool GetMouseInvertForPawn(class APawn* Pawn);
	bool GetMouseInvertForName(const struct FName& Name);
	struct FText STATIC_GetMappingDisplayName(const struct FMidairInputMapping& Mapping, EMappingPriority Priority);
	class UMAInputSettings* STATIC_GetMAInputSettings();
	TArray<struct FName> STATIC_GetInputMappingNamesOrdered();
	struct FMidairInputMapping GetInputMappingByName(const struct FName& Name);
	TArray<struct FName> STATIC_GetInputCategoryNamesOrdered();
	struct FMidairInputCategory STATIC_GetInputCategoryByName(const struct FName& Name);
	struct FMidairInputMapping STATIC_GetDefaultInputMappingByName(const struct FName& Name);
	struct FText STATIC_GetActionKeyMappingDisplayName(const struct FInputActionKeyMapping& KeyMapping);
	void ClearKey(const struct FName& MappingName, EMappingPriority KeyPriority);
	void ClearAll();
	bool AreMappingsEqual(const struct FInputActionKeyMapping& First, const struct FInputActionKeyMapping& Second);
	void ApplyAndSaveAll();
};


// Class Midair.MAInventoryAsset
// 0x00E0 (0x0540 - 0x0460)
class AMAInventoryAsset : public AMAAsset
{
public:
	class USphereComponent*                            PlatformSphere;                                           // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              EquipTime;                                                // 0x0468(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipResetTime;                                           // 0x046C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        EquipAnims;                                               // 0x0470(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EInventoryStationState                             State;                                                    // 0x0480(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              StateTimeRemaining;                                       // 0x0484(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0488(0x00A0) MISSED OFFSET
	class AMACharacter*                                CurrentCharacter;                                         // 0x0528(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerState*                                CurrentUser;                                              // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAvailable;                                             // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0539(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAInventoryAsset");
		return ptr;
	}


	void UserPlayerDied();
	void PlayEquipEffects();
	void OnRep_CurrentUser();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsAvailable();
};


// Class Midair.MALCTFGameMode
// 0x0000 (0x0BE0 - 0x0BE0)
class AMALCTFGameMode : public AMACTFGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MALCTFGameMode");
		return ptr;
	}

};


// Class Midair.MALocalMessagesWidget
// 0x0000 (0x0230 - 0x0230)
class UMALocalMessagesWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MALocalMessagesWidget");
		return ptr;
	}


	void Clear();
	void BP_Clear();
	void AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData);
};


// Class Midair.MALocalPlayer
// 0x00B0 (0x0278 - 0x01C8)
class UMALocalPlayer : public ULocalPlayer
{
public:
	bool                                               bProgressionWasLoaded;                                    // 0x01C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRefreshClearCache;                                       // 0x01C9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	class UProgressionSaveCache*                       ProgressionSaveCache;                                     // 0x01D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FBaseProgressionData                        ProgressionData;                                          // 0x01D8(0x0058) (BlueprintVisible, BlueprintReadOnly, Transient)
	int                                                TotalXPForNextLevel;                                      // 0x0230(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NextLevel;                                                // 0x0234(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UChatWidget*                                 ChatWidget;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMatchMakingStatusWidget*                    MatchMakingStatusWidget;                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnProgressionDataUpdated;                                 // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnXPGiven;                                                // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGivenNewLoot;                                           // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MALocalPlayer");
		return ptr;
	}


	void UnlockObjectInfo(class UObjectInfo* ObjectInfo, bool bUpdateProgression);
	void CompleteTutorial(const struct FName& TutorialName);
	void ClearNewSkillPoints();
	void BypassProgression_TEMP();
	void AddXP(int XP);
};


// Class Midair.ProgressionSaveCache
// 0x0058 (0x0080 - 0x0028)
class UProgressionSaveCache : public USaveGame
{
public:
	struct FBaseProgressionData                        Data;                                                     // 0x0028(0x0058)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ProgressionSaveCache");
		return ptr;
	}

};


// Class Midair.MANetConnection
// 0x00B0 (0x33728 - 0x33678)
class UMANetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x33678(0x0038) MISSED OFFSET
	TArray<class UClass*>                              SteamItems;                                               // 0x336B0(0x0010) (ZeroConstructor, Transient)
	struct FBaseProgressionData                        ProgressionCache;                                         // 0x336C0(0x0058) (Transient)
	bool                                               bBaseProgressionLoaded;                                   // 0x33718(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x33719(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MANetConnection");
		return ptr;
	}

};


// Class Midair.MAPendingNetGame
// 0x0000 (0x00C8 - 0x00C8)
class UMAPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPendingNetGame");
		return ptr;
	}

};


// Class Midair.MAPickupBackpack
// 0x0030 (0x0510 - 0x04E0)
class AMAPickupBackpack : public AMAPickup
{
public:
	class UTargetComponent*                            TargetComponent;                                          // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoActivateOnPickup;                                    // 0x04F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExpireOnPickup;                                          // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04F2(0x0006) MISSED OFFSET
	class UClass*                                      BackpackType;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AugmentClasses;                                           // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPickupBackpack");
		return ptr;
	}


	void UpdateVisuals();
};


// Class Midair.MAPlaybackComponent
// 0x0020 (0x01F0 - 0x01D0)
class UMAPlaybackComponent : public UActorComponent
{
public:
	float                                              TimeOffset;                                               // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	TArray<class UMAPlaybackEvent*>                    Events;                                                   // 0x01D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackComponent");
		return ptr;
	}


	class UMAPlaybackEvent* K2_CreateAndAddEvent(class UClass* EventClass);
};


// Class Midair.MAPlaybackEvent_TornOff
// 0x0000 (0x0038 - 0x0038)
class UMAPlaybackEvent_TornOff : public UMAPlaybackEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_TornOff");
		return ptr;
	}

};


// Class Midair.MAPlaybackEvent_ReplicatedMovement
// 0x0028 (0x0060 - 0x0038)
class UMAPlaybackEvent_ReplicatedMovement : public UMAPlaybackEvent
{
public:
	struct FRotator                                    Rotation;                                                 // 0x0038(0x000C) (IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0044(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0050(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_ReplicatedMovement");
		return ptr;
	}

};


// Class Midair.MAPlayerControllerBase
// 0x0100 (0x0840 - 0x0740)
class AMAPlayerControllerBase : public ASteamBeaconPlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0740(0x0008) MISSED OFFSET
	float                                              DesiredFOV;                                               // 0x0748(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bScorePointsShownToPlayer;                                // 0x074C(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSpectateStayWithOnePlayer;                               // 0x074D(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	class UClass*                                      ChatWidgetClass;                                          // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      XPLevelingWidgetClass;                                    // 0x0758(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMessageRate;                                           // 0x0760(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpamCooloffTime;                                          // 0x0764(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              ExpressionRateCost;                                       // 0x0768(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              ChatRateCost;                                             // 0x076C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              RemainingSpamCooloff;                                     // 0x0770(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerExpressionInput;                                    // 0x0774(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinalizedPlayerInventory;                                // 0x0775(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA];                                       // 0x0776(0x000A) MISSED OFFSET
	struct FMALoadout                                  SteamSerializedLoadout;                                   // 0x0780(0x0098) (Transient)
	class UAudioComponent*                             LastAnnouncerExpressionAudio;                             // 0x0818(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UChatWidget*                                 ChatWidget;                                               // 0x0820(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 XPLevelingWidget;                                         // 0x0828(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0830(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerControllerBase");
		return ptr;
	}


	bool ToggleMenu();
	void TestSerializeLoadoutWithSteam();
	void SetMouseSensitivityToDefault();
	void SetMouseSensitivity(float Sensitivity);
	void ServerUpdateUserUnlocks(TArray<class UClass*> NewUnlocks);
	void ServerSetSteamLoadout(const struct FMALoadout& SerializedLoadout);
	void ServerSay(const struct FString& Message, bool bTeamOnly);
	void ServerDoExpression(int MessageType);
	void Say(const struct FString& Message, bool bTeamOnly);
	void SaveGeneralSettings();
	void ResetAllSteamData();
	void RefreshSteamInventory();
	void InvertMouse(bool bInvert);
	void GiveXP(int Amount);
	class UMALocalPlayer* GetMALocalPlayer();
	bool GetIsFinalizedPlayerInventory();
	void GenerateItem(int ItemDefId);
	void EndQuickVoice();
	void DoExpression(int MessageType);
	void DebugCrashGame();
	void ClientSay(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly);
	void ClientRefreshProgression();
	void ClientInventoryFinalized();
	void ClientGivenXP(int XP, bool bHasLevelupReward);
	void ClientDoExpression(class APlayerState* Speaker, int MessageType);
	void BypassTutorials();
};


// Class Midair.MAPlayerController
// 0x02C0 (0x0B00 - 0x0840)
class AMAPlayerController : public AMAPlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0840(0x0020) MISSED OFFSET
	float                                              ActionDistance;                                           // 0x0860(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0864(0x0014) MISSED OFFSET
	TArray<class AActor*>                              ServerDisablePawnRelatedInputRequests;                    // 0x0878(0x0010) (Net, ZeroConstructor)
	TArray<class AActor*>                              DisablePawnRelatedInputRequests;                          // 0x0888(0x0010) (ZeroConstructor)
	class UInputComponent*                             CharacterInput;                                           // 0x0898(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInputComponent*                             PassengerPawnInput;                                       // 0x08A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInputComponent*                             VehicleInput;                                             // 0x08A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInputComponent*                             SpectatorInput;                                           // 0x08B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<ELockState, class USoundBase*>                LockStateLoops;                                           // 0x08B8(0x0050) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0908(0x0008) MISSED OFFSET
	class UAudioComponent*                             LockStateLoopComponent;                                   // 0x0910(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AMACharacter*                                SpectateCharacter;                                        // 0x0918(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerState*                                LastPlayerState;                                          // 0x0920(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ESpectateMode                                      CurrentSpectateMode;                                      // 0x0928(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0928(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ECameraMode                                        CameraMode;                                               // 0x092C(0x0001) (ZeroConstructor, IsPlainOldData)
	ECameraMode                                        PreviousCameraMode;                                       // 0x092D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x092E(0x0002) MISSED OFFSET
	float                                              OrbitCameraPressTime;                                     // 0x0930(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0934(0x0018) MISSED OFFSET
	float                                              CameraDistPct;                                            // 0x094C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0950(0x0020) MISSED OFFSET
	class AActor*                                      ActionActor;                                              // 0x0970(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WindMaxSpeed;                                             // 0x0978(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadoutSet;                                              // 0x097C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	class AVehiclePawn*                                ControlledVehicle;                                        // 0x0980(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APassengerPawn*                              ControlledPassengerPawn;                                  // 0x0988(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatComponent*                       PlayerSeat;                                               // 0x0990(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMACharacter*                                ControlledCharacter;                                      // 0x0998(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WindAudioLoop;                                            // 0x09A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AMACharacter*                                LastControlledCharacter;                                  // 0x09A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      PreviousKiller;                                           // 0x09B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      MatchEndClass;                                            // 0x09B8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CachedCameraTotalTrackTime;                               // 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndMatchWithMapVote;                                    // 0x09C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndMatchVoteOver;                                       // 0x09D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKicked;                                                 // 0x09E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x4];                                       // 0x09F8(0x0004) MISSED OFFSET
	float                                              MinTimeBetweenInvulnNotifies;                             // 0x09FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredPredictionPing;                                    // 0x0A00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MaxPredictionPing;                                        // 0x0A04(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedRTT;                                              // 0x0A08(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastPingTime;                                             // 0x0A0C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastDeathTime;                                            // 0x0A10(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraTrackRate;                                          // 0x0A14(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraTrackBodyAndKillerTime;                             // 0x0A18(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraTrackKillerTime;                                    // 0x0A1C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraTotalTrackTime;                                     // 0x0A20(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraTrackBodyBias;                                      // 0x0A24(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceBodyTooCloseToCamera;                             // 0x0A28(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraAngleIgnoreBodyAbove;                               // 0x0A2C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraIdealDistanceFromBlockers;                          // 0x0A30(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CameraNumberOfAxesChecks;                                 // 0x0A34(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET
	TArray<class AMAProjectile*>                       FakeProjectiles;                                          // 0x0A40(0x0010) (ZeroConstructor)
	float                                              DemoHZ;                                                   // 0x0A50(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              ServerHZ;                                                 // 0x0A54(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentCharacterClass;                                    // 0x0A58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMALoadout                                  PlayerLoadout;                                            // 0x0A60(0x0098) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bToggleSkate;                                             // 0x0AF8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMenuWantsEquipKeys;                                      // 0x0AF9(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDemoController;                                        // 0x0AFA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x0AFB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerController");
		return ptr;
	}


	void VotePunishPlayer(class AMAPlayerState* TargetPlayer, EPunishType Type);
	void UpdateServerName();
	void UnsetPassword();
	void ToggleScoreboard();
	void SpectateJumpToLocation(const struct FString& LocationString);
	void Spectate();
	void ShowScoreboard();
	void SetupDeathEffects();
	void SetServerName(const struct FString& ServerName);
	void SetPassword(const struct FString& NewPassword);
	void SetEnabledPawnRelatedInput(class AActor* RequestingActor, bool bEnabled);
	void ServerVotePunishPlayer(class AMAPlayerState* TargetPlayer, EPunishType Type);
	void ServerVoteEndWithNextMap(unsigned char MapIndex);
	void ServerViewRedFlag();
	void ServerViewBlueFlag();
	void ServerViewAPlayerState(class APlayerState* PlayerStateToView);
	void ServerUpdateRTT(float RTT);
	void ServerUpdateReplicatedInputSettings(const struct FRepInputSettings& RepInputSettings);
	void ServerUpdateReplicatedGeneralSettings(const struct FRepGenSettings& RepGenSettings);
	void ServerUnsetPassword();
	void ServerToggleSpectateMode();
	void ServerSuicide();
	void ServerSubmitSimpleVote(ESimpleVote Vote);
	void ServerSpectate();
	void ServerSetViewTarget(class AActor* Target);
	void ServerSetSpectateMode(ESpectateMode Mode);
	void ServerSetPassword(const struct FString& NewPassword);
	void ServerSetLoadout(const struct FMALoadout& Loadout);
	void ServerSelectLoadoutByClass(class UClass* CharacterInfo);
	void ServerRespawnWithBasicLoadout();
	void ServerRconOverrideNextMap(const struct FString& MapName);
	void ServerRconEndMatch();
	void ServerNegotiatePredictionPing(float NewPredictionPing);
	void ServerMoveToSpectate(class APlayerState* PlayerToMove);
	void ServerKickPlayer(class APlayerState* KickedPlayer, const struct FString& Reason);
	void ServerChangePlayerTeam(class APlayerState* PlayerToMove);
	void ServerCastOptionVote(EMapVoteOption Option);
	void ServerBanPlayer(class APlayerState* BannedPlayer, const struct FString& Reason);
	void ServerAdminLogin(const struct FString& Password);
	void SendLoadoutToServer();
	void SelectCurrentLoadout(const struct FMALoadout& Loadout);
	void RecievedClearActiveRespawnDelay();
	void RecievedActiveRespawnDelay(float Time);
	void RconOverrideNextMap(const struct FString& MapName);
	void RconEndMatch();
	void Predict(float NewPredictionPing);
	void OnRep_ServerDisablePawnRelatedInputRequests();
	void OnRep_PlayerLoadout();
	bool IsPawnRelatedInputEnabled();
	void HideScoreboard();
	class UMAVitalsComponent* GetVehicleVitals();
	float GetTimeDead();
	class UVehicleSeatComponent* GetPlayerSeat();
	class AMACharacter* GetLastControlledCharacter();
	struct FRotator GetEffectiveControlRotation();
	int GetCurrentXPPool();
	class AVehiclePawn* GetControlledVehicle();
	class APassengerPawn* GetControlledPassengerPawn();
	class AMACharacter* GetControlledCharacter();
	class UMAVitalsComponent* GetCharacterVitals();
	float GetActiveRespawnDelay();
	void FinishEndMatchVote();
	class AVehiclePawn* FindRelevantVehicle();
	class AMACharacter* FindRelevantCharacter();
	class APawn* FindMostRelevantPawn();
	void EnterTemporarySpectate();
	void ClientSetDeathTime();
	void ClientReceiveDeathMessage(const struct FDeathMessageData& DeathMessageData);
	void ClientPlayerKicked(const struct FString& KickReason, float TimeRemaining);
	void ClientNotifyMapChange(const struct FString& MapName);
	void ClientNotifyInvulnerableBaseAssets(int PlayersRequired);
	void ClearDeathEffects();
	void ChangeTeam(unsigned char DesiredTeamId);
	void ChangeScoreboard(bool bShow);
	void BeginEndMatchVote(unsigned char MapIndex);
	void AdminLogin(const struct FString& Password);
};


// Class Midair.MAPlayerMovementComponent
// 0x0010 (0x0270 - 0x0260)
class UMAPlayerMovementComponent : public UPawnMovementComponent
{
public:
	float                                              Elasticity;                                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionIterations;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPenetrationIterations;                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSolverIterations;                                      // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerMovementComponent");
		return ptr;
	}

};


// Class Midair.MAPlayerPawn
// 0x0028 (0x0410 - 0x03E8)
class AMAPlayerPawn : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CachedOverlapComponent;                                   // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMAPlayerMovementComponent*                  PlayerMovement;                                           // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerPawn");
		return ptr;
	}

};


// Class Midair.MAPlayerStart
// 0x0010 (0x03C8 - 0x03B8)
class AMAPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	unsigned char                                      TeamID;                                                   // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUserPlaced;                                              // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlayerStart");
		return ptr;
	}

};


// Class Midair.MAPlaybackEvent_Projectile_Spawn
// 0x0000 (0x0038 - 0x0038)
class UMAPlaybackEvent_Projectile_Spawn : public UMAPlaybackEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_Projectile_Spawn");
		return ptr;
	}

};


// Class Midair.MAPlaybackEvent_Projectile_SurfaceImpact
// 0x0030 (0x0068 - 0x0038)
class UMAPlaybackEvent_Projectile_SurfaceImpact : public UMAPlaybackEvent
{
public:
	struct FSurfaceImpactInfo                          SurfaceImpact;                                            // 0x0038(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAPlaybackEvent_Projectile_SurfaceImpact");
		return ptr;
	}

};


// Class Midair.MAProjectileMovement
// 0x0060 (0x0300 - 0x02A0)
class UMAProjectileMovement : public UProjectileMovementComponent
{
public:
	float                                              MaxThrust;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxThrustAngle;                                           // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetThrustAlignmentScalar;                              // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
	struct FVector                                     TargetDirection;                                          // 0x02C0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class AMAProjectile*                               ProjectileOwner;                                          // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x02D8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bHasCurrentTargetLocation;                                // 0x02E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FVector                                     ThrustDir;                                                // 0x02E8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x02F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAProjectileMovement");
		return ptr;
	}

};


// Class Midair.StagedMissileMovement
// 0x0030 (0x0330 - 0x0300)
class UStagedMissileMovement : public UMAProjectileMovement
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0300(0x0018) MISSED OFFSET
	int                                                CurrentStage;                                             // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StageTime;                                                // 0x031C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StageLength;                                              // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0324(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.StagedMissileMovement");
		return ptr;
	}


	void StartNewStage(float InStageLength);
};


// Class Midair.MARepairGun
// 0x0030 (0x04F0 - 0x04C0)
class AMARepairGun : public AMAWeapon
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04C0(0x0004) MISSED OFFSET
	float                                              EnergyDrainRate;                                          // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairRange;                                              // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x04D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class UAugment_RepairTool*                         OwningAugment;                                            // 0x04E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MARepairGun");
		return ptr;
	}

};


// Class Midair.MASmoothCameraMoveComponent
// 0x0010 (0x0290 - 0x0280)
class UMASmoothCameraMoveComponent : public USpectatorPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MASmoothCameraMoveComponent");
		return ptr;
	}

};


// Class Midair.MASpectatorPawn
// 0x0020 (0x0430 - 0x0410)
class AMASpectatorPawn : public ASpectatorPawn
{
public:
	struct FRotator                                    CurrentLookInput;                                         // 0x0410(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class UMASmoothCameraMoveComponent*                MASmoothMove;                                             // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpeedOffset;                                              // 0x0428(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MASpectatorPawn");
		return ptr;
	}

};


// Class Midair.MatchMakingStatusWidget
// 0x0028 (0x0258 - 0x0230)
class UMatchMakingStatusWidget : public UUserWidget
{
public:
	struct FName                                       SlotName;                                                 // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0238(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MatchMakingStatusWidget");
		return ptr;
	}


	void ReleaseOwnership(class UWidget* CurrentOwner);
	void ClaimOwnership(class UWidget* NewOwner);
};


// Class Midair.MATeamInterface
// 0x0000 (0x0028 - 0x0028)
class UMATeamInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATeamInterface");
		return ptr;
	}


	unsigned char GetTeamId();
};


// Class Midair.MATeamState
// 0x0118 (0x04A0 - 0x0388)
class AMATeamState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	unsigned char                                      TeamID;                                                   // 0x0390(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FText                                       TeamName;                                                 // 0x0398(0x0018) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FLinearColor                                TeamColor;                                                // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x03C0(0x00A8) MISSED OFFSET
	TArray<struct FObjectCount>                        SpawnedItems;                                             // 0x0468(0x0010) (Net, ZeroConstructor)
	int                                                Score;                                                    // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                jackpot;                                                  // 0x047C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<class AMAPlayerState*>                      PlayerArray;                                              // 0x0480(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FObjectCount>                        CurrentSpawnedObjectCounts;                               // 0x0490(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATeamState");
		return ptr;
	}


	void RemoveFromTeam(class AMAPlayerState* PlayerState);
	void NetMulticast_SetWeaponLimited(class UClass* Weapon, bool bLimited);
	bool IsWeaponRestricted(class UClass* Weapon);
	unsigned char GetObjectCount(class UClass* ObjectType);
	int GetNumPlayers();
	void FilterRestrictedItems(TArray<class UClass*>* InItems, TArray<class UClass*>* OutItems);
	bool CheckAndHandleSpawnWeapon(class UClass* Weapon);
	bool CanSpawnWeapon(class UClass* Weapon);
	void AdjustScore(int ScoreAdjustment);
	void AdjustJackpot(int ScoreAdjustment);
	void AddToTeam(class AMAPlayerState* PlayerState);
};


// Class Midair.MATRFlag
// 0x0040 (0x0630 - 0x05F0)
class AMATRFlag : public AMACarriedObject
{
public:
	class UAudioComponent*                             FlagSlideLoop;                                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x05F8(0x0018) MISSED OFFSET
	class USoundBase*                                  FlagBounce;                                               // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BounceSoundVelocityThreshold;                             // 0x0618(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0620(0x0008) MISSED OFFSET
	float                                              SlideAudioEaseInRate;                                     // 0x0628(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideAudioEaseOutRate;                                    // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATRFlag");
		return ptr;
	}


	void OnStop(const struct FHitResult& ImpactResult);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};


// Class Midair.MATRFlagBase
// 0x0008 (0x03D8 - 0x03D0)
class AMATRFlagBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATRFlagBase");
		return ptr;
	}

};


// Class Midair.MATRGameMode
// 0x00A8 (0x0BA0 - 0x0AF8)
class AMATRGameMode : public AMAGameMode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AF8(0x0010) MISSED OFFSET
	float                                              RabbitScoreRate;                                          // 0x0B08(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RabbitSelfDamagePct;                                      // 0x0B0C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RabbitInvulnerabilityLength;                              // 0x0B10(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HotPotatoLength;                                          // 0x0B14(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FGameModeComplexScore                       Points_Grab;                                              // 0x0B18(0x0018) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_Capture;                                           // 0x0B30(0x000C) (Edit, BlueprintVisible)
	struct FGameModeSimpleScore                        Points_Holding;                                           // 0x0B3C(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0B48(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATRGameMode");
		return ptr;
	}

};


// Class Midair.MATRGameState
// 0x0050 (0x05E0 - 0x0590)
class AMATRGameState : public AMAGameState
{
public:
	TArray<class AMATRFlagBase*>                       FlagBases;                                                // 0x0590(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET
	bool                                               bIsLite;                                                  // 0x05B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	float                                              CurrentJackPot;                                           // 0x05B4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentHolderName;                                        // 0x05B8(0x0018) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FTimerHandle                                TimerHandle_HeldTimer;                                    // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net)
	float                                              bTimerExpired;                                            // 0x05D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATRGameState");
		return ptr;
	}


	bool GetIsFlagHolder(class AMAPlayerState* PlayerState);
	struct FName GetFlagStateName(unsigned char TeamID);
	struct FText GetFlagHolderTimer();
	class AMATRFlagBase* GetFlagBase(unsigned char TeamID);
	struct FText GetCurrentHolder();
};


// Class Midair.MATRPlayerState
// 0x0018 (0x0558 - 0x0540)
class AMATRPlayerState : public AMAPlayerState
{
public:
	int                                                FlagCaptures;                                             // 0x0540(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagReturns;                                              // 0x0544(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagPickUps;                                              // 0x0548(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlagGrabs;                                                // 0x054C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                CarrierKills;                                             // 0x0550(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0554(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MATRPlayerState");
		return ptr;
	}

};


// Class Midair.MAVitalsComponent
// 0x0200 (0x03D0 - 0x01D0)
class UMAVitalsComponent : public UActorComponent
{
public:
	float                                              HealthMax;                                                // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRepairPct;                                             // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowHealthPct;                                             // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRegenHealth;                                             // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              HealthRegenRate;                                          // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnergyRepairConversion;                                   // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnergyBadRepairConversion;                                // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	class UClass*                                      DamageProfileClass;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnergyMax;                                                // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnergyRechargeRate;                                       // 0x01FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRepEnergyToOwner;                                        // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              EnergyRegenDisableThreshold;                              // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyRegenDisableDuration;                               // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnergyDamageBypassShield;                                // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableEnergyAndShield;                                  // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENetDeathType                                      NetDeathType;                                             // 0x020E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepHeat;                                                 // 0x020F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0210(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTookDamage;                                             // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChanged;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShieldStatusChanged;                                    // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnergyDepleted;                                         // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnergyDisabled;                                         // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnergyDamage;                                           // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDied;                                                   // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRevived;                                                // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Health;                                                   // 0x02D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastHealth;                                               // 0x02D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Energy;                                                   // 0x02D8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShielded;                                              // 0x02DC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x02DD(0x000B) MISSED OFFSET
	EShieldType                                        ShieldType;                                               // 0x02E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              ShieldHealthPool;                                         // 0x02EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShieldHealthMaxPool;                                      // 0x02F0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x02F4(0x0008) MISSED OFFSET
	float                                              ShieldRechargeConversionFactor;                           // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepIsDead;                                               // 0x0300(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	class AController*                                 LastDamageInstigator;                                     // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // 0x0310(0x0020) (Net)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	TArray<struct FKillAssistInfo>                     KillAssists;                                              // 0x0338(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRegenProperties>                    RegenQueue;                                               // 0x0348(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           SensorBitmask;                                            // 0x0358(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      LockBitmask;                                              // 0x035C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	float                                              EnergyRegenDisableTimeRemaining;                          // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RepHeat;                                                  // 0x0364(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UHeatComponent*                              HeatComponent;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 ShieldFlashCurve;                                         // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ShieldMID;                                                // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              ShieldMeshes;                                             // 0x0388(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            HitFlashMIDs;                                             // 0x0398(0x0010) (ZeroConstructor)
	class UCurveLinearColor*                           HitFlashCurve;                                            // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	class UMaterialInterface*                          ShieldMaterial;                                           // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldHandleShieldFlashes;                               // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFakePlayerKillOnDeath;                                   // 0x03C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xE];                                       // 0x03C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAVitalsComponent");
		return ptr;
	}


	void TookDamage();
	float TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void ShieldStatusChanged();
	void SetHitFlashMeshes(TArray<class UMeshComponent*> Meshes);
	float RepairHealth(float RequestedAmount);
	float Repair(float EnergyUsed);
	void OnRep_IsDead();
	void OnRep_Heat();
	void OnRep_Health();
	bool IsDead();
	bool HasLowHealth();
	bool HasFullHealth();
	float GetHealthPct();
	float GetEnergyPct();
	float ConsumeEnergy(float RequestedAmount, bool bReturnPct);
	void ClientDisableEnergyRegen(float Duration);
	bool CanBeRepaired();
};


// Class Midair.MAWeaponAttachment
// 0x0390 (0x0718 - 0x0388)
class AMAWeaponAttachment : public AActor
{
public:
	class UClass*                                      SkinClass;                                                // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WeaponHotLoop;                                            // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WeaponFireSpeedLoop;                                      // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WeaponChargeLoop;                                         // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WeaponFireLoop;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials3P;                                              // 0x03C0(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInterface*>                  Materials1P;                                              // 0x03D0(0x0010) (ZeroConstructor, Transient)
	class UMaterialInterface*                          OverrideMaterial3P;                                       // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial1P;                                       // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AWeaponAmmoArt*>                      AmmoActors;                                               // 0x03F0(0x0010) (ZeroConstructor, Transient)
	int                                                MeshMaterialElementIndexForChargeIndicator;               // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial1P;                                // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial3P;                                // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0418(0x0004) MISSED OFFSET
	float                                              ChargeIndicatorIntensityMultiplier;                       // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeIndicatorOverchargedIntensity;                      // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAccelerationTime;                                     // 0x0424(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireDecelerationTime;                                     // 0x0428(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireSpeedEstimate;                                        // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeTime;                                               // 0x0430(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeEstimate;                                           // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             DefaultMuzzleFlash1P;                                     // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DefaultMuzzleFlash3P;                                     // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DefaultFireSound;                                         // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMACharacter*                                MAOwner;                                                  // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMAWeaponActivity                                  CurrentActivity;                                          // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EMAWeaponActivity                                  LastActivity;                                             // 0x0461(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              CurrentActivityDuration;                                  // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentActivityTimeout;                                   // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UClass*                                      AmmoArtClass;                                             // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AmmoSocket;                                               // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoDetachAmmoOnReload;                                  // 0x0480(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_Fire;                                         // 0x0488(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_Fire;                                      // 0x04D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_Reload;                                       // 0x04E8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_Reload;                                    // 0x0538(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_TakeOut;                                      // 0x0548(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_TakeOut;                                   // 0x0598(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_FireMap;                                   // 0x05A8(0x0050) (ZeroConstructor, Transient)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_ReloadMap;                                 // 0x05F8(0x0050) (ZeroConstructor, Transient)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_TakeOutMap;                                // 0x0648(0x0050) (ZeroConstructor, Transient)
	struct FName                                       AttachSocket;                                             // 0x0698(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stance1P;                                                 // 0x06A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stance3P;                                                 // 0x06A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightScale;                                               // 0x06A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumScale;                                              // 0x06AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyScale;                                               // 0x06B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	class UAnimMontage*                                FireAnim;                                                 // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimMontage*                                ReloadAnim;                                               // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimMontage*                                TakeOutAnim;                                              // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FCharacterItemAnims                         Character_Fire;                                           // 0x06D0(0x0018) (Deprecated)
	struct FCharacterItemAnims                         Character_Reload;                                         // 0x06E8(0x0018) (Deprecated)
	struct FCharacterItemAnims                         Character_TakeOut;                                        // 0x0700(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAWeaponAttachment");
		return ptr;
	}


	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetChargeIndicator(float Intensity);
	void OnCharacterGrabAmmo(bool bInFirstPerson);
	void OnCharacterAttachAmmo(bool bInFirstPerson);
	void K2_UpdateForClientPerspective(bool bInFirstPerson);
	void DetachFirstAmmoActor(bool bInFirstPerson);
};


// Class Midair.MAWorldSettings
// 0x00B0 (0x05E0 - 0x0530)
class AMAWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0530(0x0010) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        Background;                                               // 0x0540(0x0020) (Edit, DisableEditOnTemplate)
	struct FString                                     MapName;                                                  // 0x0560(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FText                                       Lore;                                                     // 0x0570(0x0018) (Edit, DisableEditOnTemplate)
	class USoundBase*                                  LoadingScreenMusic;                                       // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FString                                     MapLore;                                                  // 0x0590(0x0010) (ZeroConstructor, Deprecated)
	ELevelSymmetryMode                                 LevelSymmetryMode;                                        // 0x05A0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	float                                              SpawnGenerationTracingGridSize;                           // 0x05A4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SpawnGenerationCompareDistance;                           // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SpawnGenerationCandidateDot;                              // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                SpawnGenerationMinimumClearSides;                         // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SpawnWeightDistanceToEnemy;                               // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 SpawnWeightDistanceToTeammate;                            // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 SpawnWeightDistanceToFlag;                                // 0x05C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SpawnWeightNewSpawn;                                      // 0x05D0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              HazeDistance;                                             // 0x05D4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              VisibleDistance;                                          // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIgnoreMapGameModeErrors;                                 // 0x05DC(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MAWorldSettings");
		return ptr;
	}

};


// Class Midair.MidiarStyleData
// 0x0060 (0x0090 - 0x0030)
class UMidiarStyleData : public UDataAsset
{
public:
	TMap<struct FName, struct FStringAssetReference>   SpecifiedWidgetStyles;                                    // 0x0030(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MidiarStyleData");
		return ptr;
	}

};


// Class Midair.MissileLauncher
// 0x0138 (0x05F8 - 0x04C0)
class AMissileLauncher : public AMAWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	TMap<class UClass*, int>                           PerCharacterMaxAmmo;                                      // 0x04C8(0x0050) (Edit, ZeroConstructor)
	int                                                DefaultMaxAmmo;                                           // 0x0518(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           PerCharacterInitialAmmo;                                  // 0x0520(0x0050) (Edit, ZeroConstructor)
	int                                                DefaultInitialAmmo;                                       // 0x0570(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTargetRange;                                           // 0x0574(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetRange;                                           // 0x0578(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InViewTargetAngle;                                        // 0x057C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoseTargetedAngle;                                        // 0x0580(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetableAngle;                                          // 0x0584(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToValidLock;                                          // 0x0588(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UTexture*                                    PotentialTargetIconTexture;                               // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PotentialTargetColor;                                     // 0x0598(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UTexture*                                    LockableTargetIconTexture;                                // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LockableTargetColor;                                      // 0x05A8(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LockbarMaterial;                                          // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ValidTargetIconTexture;                                   // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ValidTargetColor;                                         // 0x05C0(0x0004) (Edit, IsPlainOldData)
	float                                              LockBarThickness;                                         // 0x05C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockBarOffset;                                            // 0x05C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	class UTargetComponent*                            BestTarget;                                               // 0x05D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x05D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MissileLauncher");
		return ptr;
	}

};


// Class Midair.ObjectInfo
// 0x0188 (0x01B0 - 0x0028)
class UObjectInfo : public UObject
{
public:
	class UTexture2D*                                  IconSmall;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  IconLarge;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ShortDisplayName;                                         // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FColor                                      DisplayNameColor;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       SpecialDescription;                                       // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Tooltip;                                                  // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bOnlyAvailableAtBase;                                     // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class UClass*                                      ObjectClass;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviewMeshScale;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class UAnimationAsset*                             PreviewMeshAnim;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresProgression;                                     // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FUnlockableObjectNode                       UnlockableData;                                           // 0x00E0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUnlocked;                                               // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequirementsMet;                                        // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FText                                       ItemName;                                                 // 0x0190(0x0018) (Deprecated)
	class UClass*                                      ActorClass;                                               // 0x01A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ObjectInfo");
		return ptr;
	}


	void OnUnlockableRequirementsMet();
	void OnUnlock();
	bool IsUnlocked();
	TArray<struct FText> GetUnmetRequirements(class APlayerController* Player);
	bool GetUnlockableData_BP(struct FUnlockableObjectNode* InObjectNode);
	class UObjectInfo* STATIC_GetObjectInfoFromClass(class UClass* InObjectClass);
	class UObjectInfo* STATIC_GetObjectInfo(class UObject* InObject);
	struct FText GetActionText(class AActor* Actor);
	void STATIC_FilterObjectInfoArray(bool bReturnInBoth, TArray<class UClass*>* Base, TArray<class UClass*>* AppliedFilter, TArray<class UClass*>* outResult);
	void STATIC_ConvertObjectArrayToItemArray(TArray<class UClass*>* Objects, TArray<class UClass*>* OutItems);
};


// Class Midair.LoadoutUpgradeInfo
// 0x0000 (0x01B0 - 0x01B0)
class ULoadoutUpgradeInfo : public UObjectInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.LoadoutUpgradeInfo");
		return ptr;
	}

};


// Class Midair.MenuUnlockable
// 0x0000 (0x01B0 - 0x01B0)
class UMenuUnlockable : public UObjectInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.MenuUnlockable");
		return ptr;
	}

};


// Class Midair.ItemInfo
// 0x0000 (0x01B0 - 0x01B0)
class UItemInfo : public UObjectInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ItemInfo");
		return ptr;
	}

};


// Class Midair.WeaponInfo
// 0x0020 (0x01D0 - 0x01B0)
class UWeaponInfo : public UItemInfo
{
public:
	TArray<class UClass*>                              Skins;                                                    // 0x01B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FWeaponStatDetails                          Stats;                                                    // 0x01C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.WeaponInfo");
		return ptr;
	}


	struct FWeaponStatDetails GetStats();
};


// Class Midair.ThrowableInfo
// 0x0000 (0x01B0 - 0x01B0)
class UThrowableInfo : public UItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ThrowableInfo");
		return ptr;
	}

};


// Class Midair.DeployableInfo
// 0x0008 (0x01B8 - 0x01B0)
class UDeployableInfo : public UItemInfo
{
public:
	float                                              BaseChargeCost;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.DeployableInfo");
		return ptr;
	}

};


// Class Midair.AugmentInfo
// 0x0000 (0x01B0 - 0x01B0)
class UAugmentInfo : public UItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.AugmentInfo");
		return ptr;
	}


	bool CanBeUsedWith(class UAugmentInfo* AugmentInfo);
};


// Class Midair.BackpackInfo
// 0x0020 (0x01D0 - 0x01B0)
class UBackpackInfo : public UObjectInfo
{
public:
	TArray<class UClass*>                              AvailablePrimaryAugments;                                 // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableSecondaryAugments;                               // 0x01C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.BackpackInfo");
		return ptr;
	}


	TArray<class UClass*> GetAvailableSecondaryAugments();
	TArray<class UClass*> GetAvailablePrimaryAugments();
};


// Class Midair.VoiceSetInfo
// 0x0008 (0x01B8 - 0x01B0)
class UVoiceSetInfo : public UObjectInfo
{
public:
	class UDataTable*                                  VoiceSetDataTable;                                        // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VoiceSetInfo");
		return ptr;
	}

};


// Class Midair.CharacterInfo
// 0x00B0 (0x0260 - 0x01B0)
class UCharacterInfo : public UObjectInfo
{
public:
	int                                                CurrentWeaponCount;                                       // 0x01B0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Skins;                                                    // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              JetSkins;                                                 // 0x01C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              Sprays;                                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              AvailableWeapons;                                         // 0x01E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxWeapons;                                               // 0x01F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BaseWeaponCount;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AvailableThrowables;                                      // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableDeployables;                                     // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableBackpacks;                                       // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              UnavailableAugments;                                      // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailableVoiceSets;                                       // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FCharacterStatDetails                       Stats;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	EArmorSize                                         ArmorSize;                                                // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.CharacterInfo");
		return ptr;
	}


	bool IsWeaponAvailable(class UClass* Weapon);
	bool IsVoiceSetAvailable(class UClass* VoiceSet);
	bool IsThrowableAvailable(class UClass* Throwable);
	bool IsBackpackAvailable(class UClass* Backpack);
	bool IsAugmentAvailable(class UClass* Augment);
	TArray<class UClass*> GetUnavailableAugments();
	struct FCharacterStatDetails GetStats();
	TArray<class UClass*> GetAvailableWeapons();
	TArray<class UClass*> GetAvailableVoiceSets();
	TArray<class UClass*> GetAvailableThrowables();
	TArray<class UClass*> GetAvailableDeployables();
	TArray<class UClass*> GetAvailableBackpacks();
};


// Class Midair.VehicleInfo
// 0x0008 (0x01B8 - 0x01B0)
class UVehicleInfo : public UObjectInfo
{
public:
	unsigned char                                      SeatCount;                                                // 0x01B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArmorSize                                         MaxSeatableArmorSize;                                     // 0x01B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleInfo");
		return ptr;
	}


	unsigned char GetSeatCount();
	EArmorSize GetMaxSeatableArmorSize();
};


// Class Midair.PracticeSectionInfo
// 0x0010 (0x01C0 - 0x01B0)
class UPracticeSectionInfo : public UObjectInfo
{
public:
	TArray<struct FPracticeCourseInfo>                 Courses;                                                  // 0x01B0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PracticeSectionInfo");
		return ptr;
	}

};


// Class Midair.ObjectivePrompt
// 0x0078 (0x02A8 - 0x0230)
class UObjectivePrompt : public UUserWidget
{
public:
	struct FMidairObjectiveInfo                        UpdatedInfo;                                              // 0x0230(0x0078) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ObjectivePrompt");
		return ptr;
	}


	void UpdateExistingPrompt(EObjectiveUpdateType UpdateType, bool bWantsUpdate, struct FMidairObjectiveInfo* DeltaObjectiveInfo);
	void SetPrompt(struct FMidairObjectiveInfo* NewObjectiveInfo);
	void OnPromptChanged();
	void OnObjectiveCompleted();
	void ClearPrompt(bool bCompleted);
};


// Class Midair.ObjectiveVolume
// 0x0188 (0x0510 - 0x0388)
class AObjectiveVolume : public AActor
{
public:
	class UBoxComponent*                               OverlapVolume;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bUseSeparateObjectiveData;                                // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FMidairObjectiveInfo                        ObjectiveInfo;                                            // 0x0398(0x0078)
	struct FMidairObjectiveInfo                        ObjectiveInfoData;                                        // 0x0410(0x0078) (Edit)
	struct FMidairObjectiveInfo                        EndOverlapObjectiveInfoData;                              // 0x0488(0x0078) (Edit)
	EObjectiveUpdateType                               StartOverlapUpdateOption;                                 // 0x0500(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EObjectiveUpdateType                               EndOverlapUpdateOption;                                   // 0x0501(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0502(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ObjectiveVolume");
		return ptr;
	}


	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
};


// Class Midair.ObjectLauncher
// 0x0038 (0x03C0 - 0x0388)
class AObjectLauncher : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ArrowComponent;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      ClassToLaunch;                                            // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenLaunches;                                      // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitUntilObjectDestroyed;                                // 0x03AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	float                                              LaunchVelocity;                                           // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ObjectLauncher");
		return ptr;
	}


	void OnSpawnedActorDeath();
	void LaunchActor();
};


// Class Midair.ObjectLauncher_Spline
// 0x0040 (0x0400 - 0x03C0)
class AObjectLauncher_Spline : public AObjectLauncher
{
public:
	class USplineComponent*                            PathComponent;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03C8(0x000C) MISSED OFFSET
	float                                              ConstantSpeed;                                            // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SpeedAtPoint;                                             // 0x03D8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E8(0x0004) MISSED OFFSET
	ESplineFinishAction                                FinishAction;                                             // 0x03EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x03ED(0x000B) MISSED OFFSET
	class AActor*                                      TrackedActor;                                             // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ObjectLauncher_Spline");
		return ptr;
	}


	class AActor* SpawnActorToLaunch();
};


// Class Midair.ParticleConfiguration
// 0x0058 (0x0420 - 0x03C8)
class AParticleConfiguration : public ACosmeticConfiguration
{
public:
	class UParticleSystemComponent*                    DisplayPreview;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TMap<struct FName, class UParticleSystem*>         TaggedEmitters;                                           // 0x03D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ParticleConfiguration");
		return ptr;
	}


	void SetParticlesOnComponent(class UParticleSystemComponent* Component);
	void SetParticlesOnActor(class AActor* Actor);
};


// Class Midair.PassengerPawn
// 0x0070 (0x0458 - 0x03E8)
class APassengerPawn : public APawn
{
public:
	class USpringArmComponent*                         CameraArm;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera3P;                                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FRotator                                    RelativeControlRotation;                                  // 0x03F8(0x000C) (Transient, IsPlainOldData)
	uint32_t                                           RepControlPitchYaw;                                       // 0x0404(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0408(0x0018) MISSED OFFSET
	class UVehicleSeatComponent*                       Seat;                                                     // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    FirstAbilityActiveChanged;                                // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SecondAbilityActiveChanged;                               // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThirdAbilityActiveChanged;                                // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PassengerPawn");
		return ptr;
	}


	void TryReload();
	void ServerSetRelativeControlRotation(uint32_t NewControlPitchYaw);
	void ServerReseatCharacter(unsigned char NewSeatPosition);
	void ServerReload();
	void Server_SetCameraMode(ECameraMode NewCameraMode);
	void Server_SetActiveThirdAbility(bool bActive);
	void Server_SetActiveSecondAbility(bool bActive);
	void Server_SetActiveFirstAbility(bool bActive);
	void RemoveCharacter();
	void OnRep_ControlPitchYaw();
};


// Class Midair.PlayerLoadoutsSave
// 0x0118 (0x0140 - 0x0028)
class UPlayerLoadoutsSave : public USaveGame
{
public:
	struct FScriptMulticastDelegate                    OnCurrentLoadoutUpdated;                                  // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	TMap<struct FName, class UClass*>                  CosmeticReplacementMap;                                   // 0x0038(0x0050) (ZeroConstructor, SaveGame)
	TMap<class UClass*, struct FCustomLoadoutContainer> PerGamemodeLoadouts;                                      // 0x0088(0x0050) (ZeroConstructor, SaveGame)
	TMap<class UClass*, int>                           PerGamemodeLastSelection;                                 // 0x00D8(0x0050) (ZeroConstructor, SaveGame)
	TArray<class UClass*>                              ValidatedGamemodes;                                       // 0x0128(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      CachedGamemodeClass;                                      // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PlayerLoadoutsSave");
		return ptr;
	}


	void SetLastSelectedIndex(int Index);
	void SaveChanges();
	void RestoreDefaultLoadoutsForGame();
	bool ModifySelectedLoadout_Weapon(int IndexAt, class UClass* DesiredWeapon, class UClass* DesiredSkin, bool bDoCheck);
	bool ModifySelectedLoadout_VoiceSet(class UClass* DesiredVoiceSet);
	bool ModifySelectedLoadout_Throwable(int IndexAt, class UClass* DesiredThrowable, bool bDoCheck);
	bool ModifySelectedLoadout_Pack(class UClass* DesiredBackpack, bool bDoCheck);
	bool ModifySelectedLoadout_ObjectSkin(class UClass* ObjectInfoClass, class UClass* DesiredSkin);
	void ModifySelectedLoadout_Name(struct FString* DesiredName);
	bool ModifySelectedLoadout_Character(class UClass* DesiredCharacter, bool bDoCheck);
	bool ModifySelectedLoadout_Augment(int IndexAt, class UClass* DesiredAugment, bool bDoCheck);
	void ModifyNamedCosmeticSelection(const struct FName& Name, class UClass* Cosmetic);
	struct FName STATIC_GetVoiceIdent();
	struct FName STATIC_GetSprayIdent();
	TArray<class UClass*> GetSavedGamemodes();
	class UClass* GetNamedCosmeticSelection(const struct FName& Name);
	void STATIC_GetLoadoutWeapons(TArray<class UClass*>* OutWeapons);
	void STATIC_GetLoadoutThrowables(TArray<class UClass*>* OutThrowables);
	TArray<struct FMALoadout> GetLoadoutsForGamemode();
	int GetLoadoutIndex(struct FMALoadout* Loadout);
	void GetLoadoutCurrentlyAvailableAugments(bool bPrimary, bool bDoCheck, TArray<class UClass*>* OutAugments);
	class UCharacterInfo* STATIC_GetLoadoutCharacterInfo();
	void STATIC_GetLoadoutCharacter(class UClass** OutCharacter);
	class UBackpackInfo* STATIC_GetLoadoutBackpackInfo();
	void STATIC_GetLoadoutBackpack(class UClass** OutBackpack);
	void STATIC_GetLoadoutAugments(bool bPrimary, bool bEvenInvalid, TArray<class UClass*>* OutAugments);
	void GetLastSelectedLoadout(struct FMALoadout* outLoadout);
	int GetLastSelectedIndex();
	class UPlayerLoadoutsSave* STATIC_GetGlobalLoadoutsSave(bool bForceNew);
	class UPlayerLoadoutsSave* STATIC_GetCustomLoadoutsSave(bool bForceNew);
	class AMAGameMode* STATIC_GetCurrentLoadoutGamemodeInstance();
	void STATIC_GetCurrentLoadoutGamemode(class UClass** OutGamemode);
	class UClass* GetCachedGamemode();
	TArray<struct FText> CheckWeaponForLoadout(int IndexAt, class UClass* DesiredWeapon, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckWeaponForCurrentLoadout(int IndexAt, class UClass* DesiredWeapon);
	TArray<struct FText> CheckThrowableForLoadout(int IndexAt, class UClass* DesiredThrowable, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckThrowableForCurrentLoadout(int IndexAt, class UClass* DesiredThrowable);
	TArray<struct FText> CheckPackForLoadout(class UClass* DesiredBackpack, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter);
	TArray<struct FText> CheckPackForCurrentLoadout(class UClass* DesiredBackpack, class UClass* OverrideComparisonCharacter);
	bool CheckLoadoutNameUnique(struct FString* DesiredName);
	TArray<struct FText> CheckCharacterForLoadout(class UClass* DesiredCharacter, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckCharacterForCurrentLoadout(class UClass* DesiredCharacter);
	TArray<struct FText> CheckAugmentForLoadout(int IndexAt, class UClass* DesiredAugment, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter, class UClass* OverrideComparisonPack, class UClass* OverrideComparisonPrimaryAugment);
	TArray<struct FText> CheckAugmentForCurrentLoadout(int IndexAt, class UClass* DesiredAugment, class UClass* OverrideComparisonCharacter, class UClass* OverrideComparisonPack, class UClass* OverrideComparisonPrimaryAugment);
	void ChangeSelectedLoadout(struct FMALoadout* Loadout);
	class UClass* CacheGamemodeClassAtIndex(int Index);
	void CacheGamemodeClass(class UClass* GameModeClass);
};


// Class Midair.PlayerStartSpawningVolume
// 0x0008 (0x03C8 - 0x03C0)
class APlayerStartSpawningVolume : public AVolume
{
public:
	bool                                               bDebug;                                                   // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PlayerStartSpawningVolume");
		return ptr;
	}

};


// Class Midair.TutorialDialougeManager
// 0x0050 (0x0078 - 0x0028)
class UTutorialDialougeManager : public UObject
{
public:
	class UAudioComponent*                             CurrentlyPlayingSoundComponent;                           // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTutorialDialougeDetails>            DialougeStack;                                            // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              WaitBetweenSoundsInQueue;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDialougeFinished;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDialougeStarted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStackEmpty;                                             // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TutorialDialougeManager");
		return ptr;
	}


	void TryAddSound(const struct FTutorialDialougeDetails& NewSound);
	void StartNewDialouge();
	class UTutorialDialougeManager* STATIC_NewDialougeManager(class UObject* Owner);
	void DialougeFinished();
	void ClearAndStopAllSounds();
};


// Class Midair.PracticeSectionDetails
// 0x0028 (0x03B0 - 0x0388)
class APracticeSectionDetails : public AActor
{
public:
	class UBillboardComponent*                         MainBillboard;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bNeedsRefresh;                                            // 0x0390(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UClass*                                      PracticeInfo;                                             // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FPracticeLessonContainer>            Courses;                                                  // 0x03A0(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PracticeSectionDetails");
		return ptr;
	}

};


// Class Midair.PRGameMode
// 0x0140 (0x0C38 - 0x0AF8)
class APRGameMode : public AMAGameMode
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDied;                                             // 0x0AF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLessonStart;                                            // 0x0B08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLessonEnd;                                              // 0x0B18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0B28(0x0100) MISSED OFFSET
	class UObjectivePrompt*                            ObjectivePrompt;                                          // 0x0C28(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PracticeModeTeleportDelay;                                // 0x0C30(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              EndSectionHangoutTime;                                    // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PRGameMode");
		return ptr;
	}


	void OnTriggerEndLesson(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnTriggerBeginLesson(class AActor* OverlappedActor, class AActor* OtherActor);
	struct FName GetCurrentLessonTag();
	struct FPracticeLessonDetails GetCurrentLesson();
	void AdvanceTrackingToLesson(int Index);
	void AdvanceToNextLesson();
};


// Class Midair.PRGameState
// 0x0000 (0x0590 - 0x0590)
class APRGameState : public AMAGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.PRGameState");
		return ptr;
	}

};


// Class Midair.RBGameMode
// 0x0020 (0x0B18 - 0x0AF8)
class ARBGameMode : public AMAGameMode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AF8(0x0010) MISSED OFFSET
	float                                              RabbitScoreRate;                                          // 0x0B08(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RabbitSelfDamagePct;                                      // 0x0B0C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RabbitInvulnerabilityLength;                              // 0x0B10(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.RBGameMode");
		return ptr;
	}

};


// Class Midair.RBPlayerState
// 0x0008 (0x0548 - 0x0540)
class ARBPlayerState : public AMAPlayerState
{
public:
	float                                              TimeHeld;                                                 // 0x0540(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                RabbitKills;                                              // 0x0544(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.RBPlayerState");
		return ptr;
	}

};


// Class Midair.SensorNetworkComponent
// 0x00B0 (0x08F0 - 0x0840)
class USensorNetworkComponent : public USphereComponent
{
public:
	ESensorResolutionStrength                          ResolutionStrength;                                       // 0x0840(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Channel;                                                  // 0x0841(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlertTargetWhenTracking;                                 // 0x0842(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivateOnVitalsChange;                              // 0x0843(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUserSetColor;                                            // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	float                                              GenDownResolveTimeScale;                                  // 0x0848(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResolveFactorsLocation;                                  // 0x084C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	float                                              ResolveBoostMultiplier;                                   // 0x0850(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTargetAcquired;                                         // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x78];                                      // 0x0868(0x0078) MISSED OFFSET
	class AMABaseGenerator*                            TeamGenerator;                                            // 0x08E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.SensorNetworkComponent");
		return ptr;
	}


	void SetSensorChannel(unsigned char NewChannel);
	void Reactivate();
	bool HasDetectedTarget(class UTargetComponent* TargetComponent);
	unsigned char GetSensorChannel();
};


// Class Midair.ServiceBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UServiceBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.ServiceBlueprintLibrary");
		return ptr;
	}


	bool STATIC_IsSameDemoVersion(const struct FString& DemoVersion);
	bool STATIC_IsDownloadedDemo(const struct FString& DemoId);
	float STATIC_GetDemoProgress();
	void STATIC_CancelGetDemo();
};


// Class Midair.SkinConfiguration
// 0x0010 (0x03D8 - 0x03C8)
class ASkinConfiguration : public ACosmeticConfiguration
{
public:
	class USkeletalMeshComponent*                      SkinMesh1P;                                               // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkinMesh3P;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.SkinConfiguration");
		return ptr;
	}

};


// Class Midair.WeaponSkinConfiguration
// 0x0020 (0x03F8 - 0x03D8)
class AWeaponSkinConfiguration : public ASkinConfiguration
{
public:
	class USkeletalMeshComponent*                      AmmoMesh1P;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AmmoMesh3P;                                               // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      WeaponAttachment;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTeamColor;                                            // 0x03F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.WeaponSkinConfiguration");
		return ptr;
	}

};


// Class Midair.SprayConfiguration
// 0x0018 (0x03E0 - 0x03C8)
class ASprayConfiguration : public ACosmeticConfiguration
{
public:
	class UMaterialInterface*                          DecalMaterial;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SprayDimensions;                                          // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              SprayThickness;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprayLifetime;                                            // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.SprayConfiguration");
		return ptr;
	}

};


// Class Midair.SteamMatchMakingBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamMatchMakingBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.SteamMatchMakingBlueprintLibrary");
		return ptr;
	}


	void STATIC_StopMatchMaking();
	void STATIC_StartMatchMaking(TArray<TEnumAsByte<EMAMatchType>> MatchType, bool WaitingWarmupServer, bool IncludeNonOfficialServer);
	bool STATIC_IsValidLobby(TEnumAsByte<EMAMatchType> MatchType);
	bool STATIC_IsLobbyOwner();
	int STATIC_GetNumLobbyMembers(TEnumAsByte<EMAMatchType> MatchType);
	bool STATIC_GetMyPlayerInfo(struct FPlayerInfo* PlayerInfo);
	struct FTimespan STATIC_GetMatchMakingTime();
	TEnumAsByte<EMAMatchLobbyStatus> STATIC_GetLobbyStatus();
	TArray<struct FPlayerInfo> STATIC_GetLobbyPlayers(TEnumAsByte<EMAMatchType> MatchType);
	bool STATIC_GetLobbyGameCreated(struct FLobbyGameCreated* LobbyGameCreated);
	void STATIC_EventTick(float DeltaSeconds);
	bool STATIC_Equal(const struct FUniqueNetIdRepl& UniqueId1, const struct FUniqueNetIdRepl& UniqueId2);
};


// Class Midair.StickyLauncher
// 0x0050 (0x0510 - 0x04C0)
class AStickyLauncher : public AMAWeapon
{
public:
	int                                                FullyChargedBurstSize;                                    // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHoldTime;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFuseTime;                                          // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetProjectilesToDefaultOnEarlyRelease;                   // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearBurstOnEarlyRelease;                                // 0x04CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04CE(0x0002) MISSED OFFSET
	float                                              PostRoundDeferExplosionTriggerTime;                       // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeFireProjectile;                                   // 0x04D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasFullyCharged;                                         // 0x04D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	TArray<class AMAProjectile*>                       ProjectilesToManuallyTrigger;                             // 0x04E0(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              AllFiredProjectiles;                                      // 0x04F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0500(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.StickyLauncher");
		return ptr;
	}

};


// Class Midair.StickyProjectile
// 0x0010 (0x0960 - 0x0950)
class AStickyProjectile : public AMAProjectile
{
public:
	class USoundBase*                                  StuckToObjectSound;                                       // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldTakeDamageInAir;                                   // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0959(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.StickyProjectile");
		return ptr;
	}


	void OnDeath();
	void OnAttachParentDied(class AActor* DeadActor);
};


// Class Midair.SubmitUserReportAsyncTask
// 0x0020 (0x0048 - 0x0028)
class USubmitUserReportAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.SubmitUserReportAsyncTask");
		return ptr;
	}


	class USubmitUserReportAsyncTask* STATIC_SubmitUserReport(const struct FString& Summary, const struct FString& Description, const struct FString& Reproduce, int Severity);
};


// Class Midair.TargetComponent
// 0x0450 (0x0830 - 0x03E0)
class UTargetComponent : public USceneComponent
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	ETargetPlacement                                   DrawPlacement;                                            // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	struct FVector2D                                   ScreenEdgeOffset;                                         // 0x03EC(0x0008) (Edit, IsPlainOldData)
	bool                                               bRequireLOS;                                              // 0x03F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLOS;                                                 // 0x03F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	float                                              VisibleRange;                                             // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticSensorRangeModifier;                                // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticSensorRangeModifierPriority;                        // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PermaMinimumVisibleRange;                                 // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeSensed;                                             // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetFlag;                                            // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysSensed;                                            // 0x040A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x040B(0x0005) MISSED OFFSET
	TArray<class UTargetElement*>                      TargetElements;                                           // 0x0410(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst)
	TMap<ESensorResolutionStrength, float>             ResolutionTimes;                                          // 0x0420(0x0050) (Edit, ZeroConstructor)
	struct FDetectionCache                             LastDetectedBy;                                           // 0x0470(0x0010) (IsPlainOldData)
	class AMAHUD*                                      HUD;                                                      // 0x0480(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x290];                                     // 0x0488(0x0290) MISSED OFFSET
	float                                              DistToViewTarget;                                         // 0x0718(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	ETeamAllegiance                                    TeamAllegiance;                                           // 0x071C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x23];                                      // 0x071D(0x0023) MISSED OFFSET
	class UMAVitalsComponent*                          OwnerVitals;                                              // 0x0740(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHeatComponent*                              OwnerHeat;                                                // 0x0748(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	TArray<class UTargetComponent*>                    AttachedTargetComponents;                                 // 0x0758(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UTargetComponent*                            ParentTargetComponent;                                    // 0x0768(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       State;                                                    // 0x0770(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0778(0x0028) MISSED OFFSET
	TArray<class AActor*>                              GettingLockedBy;                                          // 0x07A0(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              IsLockedBy;                                               // 0x07B0(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              BeingTrackedBy;                                           // 0x07C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x60];                                      // 0x07D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetComponent");
		return ptr;
	}


	void StopAllTargetting();
	void SetSensorResolutionStrengthTime(ESensorResolutionStrength Strength, float Time);
	void PushSensorModifiers(const struct FSensorTargetModifiers& Modifiers);
	void PopSensorModifiers(const struct FSensorTargetModifiers& Modifiers);
	bool IsDetectedByChannel(unsigned char InChannel);
	EDetectedState GetHighestDetectedState();
};


// Class Midair.TargetDummy
// 0x0070 (0x03F8 - 0x0388)
class ATargetDummy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET
	class UCapsuleComponent*                           ColliderComponent;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UTargetComponent*                            TargetComponent;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMAVitalsComponent*                          VitalsComponent;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C0(0x0004) MISSED OFFSET
	float                                              ReviveTime;                                               // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class USoundBase*                                  DeathSound;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DeathParticle;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadLoiterTime;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFakeMidair;                                              // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetDummy");
		return ptr;
	}


	void OnDied();
	unsigned char GetTeamId();
	void ForceKill();
};


// Class Midair.TargetElement
// 0x0070 (0x0098 - 0x0028)
class UTargetElement : public UObject
{
public:
	class AMAHUD*                                      DefaultHUDProperties;                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShowInViewConeOnly;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnForceOverrideViewConeOnly;                             // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawWhenAttached;                                        // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEdgeLockBehavior>                     EdgeLockBehavior;                                         // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              TimedEdgeLockDuration;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAttachedColor;                                        // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FLinearColor                                AttachedColor;                                            // 0x0040(0x0010) (Edit, IsPlainOldData)
	float                                              DefaultOffsetY;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FName                                       RequiredState;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTargetComponent*                            Owner;                                                    // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetElement");
		return ptr;
	}

};


// Class Midair.TargetHealthbar
// 0x00D8 (0x0170 - 0x0098)
class UTargetHealthbar : public UTargetElement
{
public:
	bool                                               bHideAtFull;                                              // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC7];                                      // 0x0099(0x00C7) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetHealthbar");
		return ptr;
	}

};


// Class Midair.TargetName
// 0x00A8 (0x0140 - 0x0098)
class UTargetName : public UTargetElement
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0098(0x0098) MISSED OFFSET
	int                                                StackedNameVerticalOffset;                                // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryNamesRelativeScale;                              // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetName");
		return ptr;
	}

};


// Class Midair.TargetIcon
// 0x0058 (0x00F0 - 0x0098)
class UTargetIcon : public UTargetElement
{
public:
	class UMaterialInterface*                          IconMaterial;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00A0(0x0040) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TargetIcon");
		return ptr;
	}

};


// Class Midair.TDMGameMode
// 0x0008 (0x0B00 - 0x0AF8)
class ATDMGameMode : public AMAGameMode
{
public:
	bool                                               bSpawnWithInventory;                                      // 0x0AF8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TDMGameMode");
		return ptr;
	}

};


// Class Midair.TDMPlayerState
// 0x0008 (0x0548 - 0x0540)
class ATDMPlayerState : public AMAPlayerState
{
public:
	float                                              DamageTaken;                                              // 0x0540(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealt;                                              // 0x0544(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TDMPlayerState");
		return ptr;
	}

};


// Class Midair.TeamDeploymentRestrictionVolume
// 0x0010 (0x03D0 - 0x03C0)
class ATeamDeploymentRestrictionVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	unsigned char                                      TeamID;                                                   // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.TeamDeploymentRestrictionVolume");
		return ptr;
	}

};


// Class Midair.VehicleWeaponComponent
// 0x01B0 (0x0380 - 0x01D0)
class UVehicleWeaponComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x01D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TurretBase;                                               // 0x01E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TurretPitch;                                              // 0x01E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TargetingScreenComponent;                                 // 0x01F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TargetingLaserComponent;                                  // 0x01F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TargetingScreenDist;                                      // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	class UAnimMontage*                                FireAnimation;                                            // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DefaultFireEffect;                                        // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  DefaultFireSound;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReloadStartSound;                                         // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReloadLoopSound;                                          // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReloadFadeInRate;                                         // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReloadFadeOutRate;                                        // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReloadFinishSound;                                        // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FiringSockets;                                            // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UArrowComponent*>                     FiringArrows;                                             // 0x0250(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	class UClass*                                      ProjectileClass;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BloomAngle;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MagazineFullReloadRate;                                   // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundsPerMagazine;                                        // 0x0274(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFullMagazineDump;                                        // 0x0275(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlternateFiringSockets;                                  // 0x0276(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0277(0x0001) MISSED OFFSET
	float                                              TurretCrosshairDistance;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurretVerticalCompensationAngle;                          // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPredictedProjectileDrop;                             // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FColor                                      WillHitAssetColor;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FColor                                      WontHitAssetColor;                                        // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	class UTexture*                                    PredictionCrosshairTexture;                               // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0298(0x0028) MISSED OFFSET
	float                                              TurretYawRate;                                            // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurretPitchRate;                                          // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScreenInterpRate;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurretYawTolerance;                                       // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurretPitchTolerance;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurretYawBounds;                                          // 0x02D4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   TurretPitchBounds;                                        // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class UAudioComponent*                             ReloadLoopComponent;                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       WeaponBindingName;                                        // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       WeaponDisplayName;                                        // 0x02F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUsePrediction;                                           // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVWC_InterpType                                    InterpType;                                               // 0x0311(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldRotation;                                            // 0x0312(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePawnControlRotation;                                  // 0x0313(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipPitchInput;                                          // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProjectedAimPoint;                                    // 0x0315(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShareAimPrediction;                                      // 0x0316(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0317(0x0001) MISSED OFFSET
	class AVehiclePawn*                                OwningVehicle;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVehicleSeatComponent*                       ControllingSeat;                                          // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              ReloadPct;                                                // 0x0328(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentRoundsInMagazine;                                  // 0x032C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	struct FRotator                                    RotationInput;                                            // 0x0330(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x033C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     LastTargettingScreenLocation;                             // 0x0348(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2C];                                      // 0x0354(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleWeaponComponent");
		return ptr;
	}


	bool TryFire();
	void ServerTryReload();
	void ServerSetTrigger(bool bSet);
	void ServerFireProjectiles(unsigned char FireIndex);
	void NM_StartReloadSound();
	void NM_FinishReloadSound();
	float GetRemainingReload();
	bool CanFire();
};


// Class Midair.VehicleFlareLauncher
// 0x0000 (0x0380 - 0x0380)
class UVehicleFlareLauncher : public UVehicleWeaponComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleFlareLauncher");
		return ptr;
	}

};


// Class Midair.VehicleMoveComponent
// 0x03B0 (0x0610 - 0x0260)
class UVehicleMoveComponent : public UPawnMovementComponent
{
public:
	struct FVehicleInputFloatRate                      StickInputRate;                                           // 0x0260(0x0008) (Edit)
	float                                              RollInput;                                                // 0x0268(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PitchInput;                                               // 0x026C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawYawInput;                                              // 0x0270(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVehicleInputFloatRate                      YawInputRate;                                             // 0x0274(0x0008) (Edit)
	float                                              YawInput;                                                 // 0x027C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x0280(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVehicleInputFloatRate                      ThrottleInputRate;                                        // 0x0284(0x0008) (Edit)
	float                                              ThrottleInput;                                            // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawRightThrustInput;                                      // 0x0290(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawUpThrustInput;                                         // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVehicleInputFloatRate                      DirectionalThrustRate;                                    // 0x0298(0x0008) (Edit)
	float                                              UpThrustInput;                                            // 0x02A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightThrustInput;                                         // 0x02A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawBreakInput;                                            // 0x02A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVehicleInputFloatRate                      BreakInputRate;                                           // 0x02AC(0x0008) (Edit)
	float                                              BreakInput;                                               // 0x02B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RawAfterburnerInput;                                      // 0x02B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AfterBurnerInput;                                         // 0x02B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02BA(0x0002) MISSED OFFSET
	float                                              InputFallingRate;                                         // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlowMovingRollRate;                                       // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FastMovingRollRate;                                       // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollTorque;                                            // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlowMovingPitchRate;                                      // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FastMovingPitchRate;                                      // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchTorque;                                           // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlowMovingYawRate;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FastMovingYawRate;                                        // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawTorque;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinTerminalVelocity;                                      // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTerminalVelocity;                                      // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAirSpeed;                                              // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxRearThrusterStrength;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxRearThrusterAfterburnerStrength;                       // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AfterburnerEnergyConsumptionRate;                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHandleBreakAsHorizontalThruster;                         // 0x02FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	float                                              MaxBreakStrength;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSideMountedThrusterStrength;                           // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBottomThrusterStrength;                                // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTopThrusterStrength;                                   // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxVerticalThrustSpeed;                                   // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxHorizontalThrustSpeed;                                 // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRoll;                                                // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	struct FVector2D                                   AutoRollRange;                                            // 0x031C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bShouldHover;                                             // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHoverMaintainsVerticalSpeed;                             // 0x0325(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0326(0x0002) MISSED OFFSET
	float                                              GroundHoverHeight;                                        // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverThrottle;                                            // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 HoverThrottleCurve;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxThrust;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxTorque;                                           // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverFullGripMaxAngle;                                    // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverLinearDampening;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverAngularDampening;                                    // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverEffectivenessWater;                                  // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVariationAdjustedProperty                  HoverHeightAdjustment;                                    // 0x0350(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVariationAdjustedProperty                  HoverSpeedAdjustment;                                     // 0x036C(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVehicleDragCharacteristics                 DragCharacteristics;                                      // 0x0388(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              UnderwaterBouyancyForce;                                  // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UnderwaterTraceOffset;                                    // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UnderwaterBouyancyLevelingForce;                          // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldAlignedDirectionalMovement;                         // 0x03A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRearThrusterForUpThrust;                              // 0x03A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSlow;                                                // 0x03AA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x03AB(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnApplyAerodynamics;                                      // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnApplyLift;                                              // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnApplyAutoRoll;                                          // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnApplyThrust;                                            // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnApplyTorque;                                            // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AVehiclePawn*                                OwningVehicle;                                            // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      UpdatedMesh;                                              // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FRepStickInput                              RepStickInput;                                            // 0x0410(0x0010) (Transient, IsPlainOldData)
	struct FRepThrustInput                             RepThrustInput;                                           // 0x0420(0x0014) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0434(0x000C) MISSED OFFSET
	struct FTransform                                  CurrentTransform;                                         // 0x0440(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FQuat                                       CurrentQuat;                                              // 0x0470(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentLoc;                                               // 0x0480(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentForward;                                           // 0x048C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentUp;                                                // 0x0498(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentRight;                                             // 0x04A4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     WorldAlignedRight;                                        // 0x04B0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     WorldAlignedForward;                                      // 0x04BC(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentAngularVelocity;                                   // 0x04C8(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentLocalAngularVelocity;                              // 0x04D4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CurrentVelocity;                                          // 0x04E0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              CurrentSpeed;                                             // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PctMaxSpeed;                                              // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProgradeVector;                                           // 0x04F4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              ProgradeDot;                                              // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PitchDot;                                                 // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RollDot;                                                  // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseRollRate;                                             // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredRollRate;                                          // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BasePitchRate;                                            // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredPitchRate;                                         // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseYawRate;                                              // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredYawRate;                                           // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseRearThrusterStrength;                                 // 0x0524(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RearThrusterStrength;                                     // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RearAfterburnerThrustStrength;                            // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightThrustVelocity;                                      // 0x0530(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpThrustVelocity;                                         // 0x0534(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BackThrustVelocity;                                       // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	TArray<struct FRepVehiclePhysics>                  SimulatedPhysicsHistory;                                  // 0x0540(0x0010) (ZeroConstructor, Transient)
	uint16_t                                           CurrentFrame;                                             // 0x0550(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	class ASkeletalMeshActor*                          ServerMeshActor;                                          // 0x0558(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNetworkSmoothingComplete;                                // 0x0560(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0xAF];                                      // 0x0561(0x00AF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleMoveComponent");
		return ptr;
	}


	void SetAutoRoll(bool bNewAutoRoll);
	void ServerUpdateState(const struct FRepStickInput& StickInput, const struct FRepThrustInput& ThrustInput);
	bool IsUsingAfterburner();
	float HoverFactorForSurface(TEnumAsByte<EPhysicalSurface> Surface);
	struct FQuat GetSocketWorldRotation(const struct FName& InSocketName);
	struct FVector GetSocketWorldLocation(const struct FName& InSocketName);
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	void GetOrientationInfo(struct FQuat* OutOrientationRotation, float* OutProgradeDot);
	struct FVector GetFixedForwardVector();
	void AddFixedTorqueNonVelChange(const struct FVector& Torque);
	void AddFixedTorque(const struct FVector& Torque);
	void AddFixedImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location);
	void AddFixedImpulse(const struct FVector& Impulse);
	void AddFixedForceNonVelChange(const struct FVector& Force);
	void AddFixedForceAtLocation(const struct FVector& Force, const struct FVector& Location);
	void AddFixedForce(const struct FVector& Force);
	void AddFixedAngularImpulse(const struct FVector& Impulse, bool bVelChange);
};


// Class Midair.VehicleSeatComponent
// 0x0080 (0x0460 - 0x03E0)
class UVehicleSeatComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	bool                                               bEjectFacingEjectDirection;                               // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EArmorSize                                         MaxArmorSize;                                             // 0x03E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	class UArrowComponent*                             EjectionArrow;                                            // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESeatType                                          Type;                                                     // 0x03F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCharactersInSeat;                                    // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03FA(0x0001) MISSED OFFSET
	bool                                               bCanUseOwnerCamera;                                       // 0x03FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCrosshair;                                           // 0x03FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x0400(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVehicleWeaponComponent*                     Weapon;                                                   // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AMACharacter*                                SeatedCharacter;                                          // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCachedUseAbsoluteTransforms;                             // 0x0418(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class APassengerPawn*                              Passenger;                                                // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 SeatedCharacterController;                                // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       SeatName;                                                 // 0x0430(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0448(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleSeatComponent");
		return ptr;
	}


	void SetTrigger(bool bActive);
	void ServerSeatCharacter(class AMACharacter* Character);
	void ServerReseatCharacter(unsigned char NewSeatPosition);
	void ServerRemoveCharacter();
	bool SeatCharacter(class AMACharacter* Character);
	bool RemoveCharacter(bool bEject);
	bool IsEmpty();
	struct FText GetVehicleStateText();
	TArray<class UVehicleWeaponComponent*> GetSecondaryWeapons();
	class AMAPlayerState* GetSeatedPlayer();
	bool CanSit(class AMACharacter* Character);
};


// Class Midair.VehicleSpawnPad
// 0x00D0 (0x0530 - 0x0460)
class AVehicleSpawnPad : public AMAAsset
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class USkeletalMeshComponent*                      PadMesh;                                                  // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class UArrowComponent*                             SpawnTransform;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SpawnArea;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BuyingArea;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      NextClassToSpawn;                                         // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResetTime;                                                // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EVehicleSpawnState                                 PadState;                                                 // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpawnedVehicle;                                         // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UClass*>                              PotentialClassesInfo;                                     // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseTeamPool;                                             // 0x04C8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	TArray<struct FObjectCount>                        MaxVehiclesForPad;                                        // 0x04D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FObjectCount>                        CurrentVehiclesForPad;                                    // 0x04E0(0x0010) (Net, ZeroConstructor)
	class AVehiclePawn*                                DefaultVehicle;                                           // 0x04F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	TArray<class AActor*>                              ActorsOnPad;                                              // 0x0500(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0510(0x0018) MISSED OFFSET
	class AMATeamState*                                TeamState;                                                // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.VehicleSpawnPad");
		return ptr;
	}


	void OnVehicleDied(class AVehiclePawn* Vehicle);
	void OnRep_PadState();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	int GetVehicleCount(class UClass* VehicleClass);
	EVehicleSpawnState GetPadState();
	int GetMaxVehicleCount(class UClass* VehicleClass);
	bool CanSpawnClass(class UClass* VehicleClass);
};


// Class Midair.WardenWeapon
// 0x0050 (0x0510 - 0x04C0)
class AWardenWeapon : public AMAWeapon
{
public:
	float                                              EnergyDrainRate;                                          // 0x04C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyDamageRate;                                         // 0x04C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRate;                                               // 0x04C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoTargetFireLockoutTime;                                  // 0x04CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GainLockRange;                                            // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseLockRange;                                            // 0x04D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GainLockAngle;                                            // 0x04D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseLockAngle;                                            // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSpokesConeTest;                                        // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLayersSpokesConeTest;                                  // 0x04E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSegmentsConeTest;                                      // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockTimeout;                                              // 0x04F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastTimeFailToFindTarget;                                 // 0x04FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMADamageType*                               DamageType;                                               // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.WardenWeapon");
		return ptr;
	}


	class AActor* GetTarget();
};


// Class Midair.WeaponAmmoArt
// 0x0090 (0x0418 - 0x0388)
class AWeaponAmmoArt : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials3P;                                              // 0x0398(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInterface*>                  Materials1P;                                              // 0x03A8(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     EjectVelocity;                                            // 0x03B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EjectLifeSpan;                                            // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshMaterialElementIndexForChargeIndicator;               // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial1P;                                // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial3P;                                // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E0(0x0004) MISSED OFFSET
	int                                                LoadedAmmo;                                               // 0x03E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x03E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UClass*                                      SkinClass;                                                // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial3P;                                       // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial1P;                                       // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachActor1P;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      AttachActor3P;                                            // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Midair.WeaponAmmoArt");
		return ptr;
	}


	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetChargeIndicator(float Intensity);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
