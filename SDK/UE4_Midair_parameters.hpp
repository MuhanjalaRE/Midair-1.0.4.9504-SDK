#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Midair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Midair.MAPickup.PlayPickupEffects
struct AMAPickup_PlayPickupEffects_Params
{
	class AMAPlayerController*                         Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPickup.PlayLandingEffects
struct AMAPickup_PlayLandingEffects_Params
{
};

// Function Midair.MAPickup.OnStop
struct AMAPickup_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAPickup.OnBeginOverlap
struct AMAPickup_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAPickup.ApplyImpulse_NM
struct AMAPickup_ApplyImpulse_NM_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Midair.AmmoPickup.SetupFromCharacter
struct AAmmoPickup_SetupFromCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.AmmoPickup.GetRelatedPlayer
struct AAmmoPickup_GetRelatedPlayer_Params
{
	class AMAPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.ReturnPrefix
struct AMAGameMode_ReturnPrefix_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameMode.IsWeaponAllowed
struct AMAGameMode_IsWeaponAllowed_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.IsThrowableAllowed
struct AMAGameMode_IsThrowableAllowed_Params
{
	class UClass*                                      ThrowableClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.IsPackAllowed
struct AMAGameMode_IsPackAllowed_Params
{
	class UClass*                                      PackClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.IsDeployableAllowed
struct AMAGameMode_IsDeployableAllowed_Params
{
	class UClass*                                      DeployableClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.IsCharacterAllowed
struct AMAGameMode_IsCharacterAllowed_Params
{
	class UClass*                                      CharacterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.IsAugmentAllowed
struct AMAGameMode_IsAugmentAllowed_Params
{
	class UClass*                                      AugmentClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameMode.FilterDisallowedItems
struct AMAGameMode_FilterDisallowedItems_Params
{
	TArray<class UClass*>                              ItemsIn;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              ItemsOut;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.MAPlayerState.UpdateMatchResult
struct AMAPlayerState_UpdateMatchResult_Params
{
	struct FMatchHistory                               MatchHistory;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Midair.MAPlayerState.ServerRequestChangeTeam
struct AMAPlayerState_ServerRequestChangeTeam_Params
{
	unsigned char                                      DesiredTeamId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerState.RecordCaptureHighlight
struct AMAPlayerState_RecordCaptureHighlight_Params
{
};

// Function Midair.MAPlayerState.OnRep_NewSpray
struct AMAPlayerState_OnRep_NewSpray_Params
{
};

// Function Midair.MAPlayerState.OnRep_LastCauseHitInfo
struct AMAPlayerState_OnRep_LastCauseHitInfo_Params
{
};

// Function Midair.MAPlayerState.NotifyTeamChanged
struct AMAPlayerState_NotifyTeamChanged_Params
{
};

// Function Midair.MAPlayerState.IsAlive
struct AMAPlayerState_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerState.IncrementKills
struct AMAPlayerState_IncrementKills_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerState.IncrementDeaths
struct AMAPlayerState_IncrementDeaths_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerState.IncrementAssists
struct AMAPlayerState_IncrementAssists_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerState.GetPlayerTalkingState
struct AMAPlayerState_GetPlayerTalkingState_Params
{
	EPlayerVoiceState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerState.EndHighlights
struct AMAPlayerState_EndHighlights_Params
{
};

// Function Midair.MAPlayerState.Client_NotifyScoreApplied
struct AMAPlayerState_Client_NotifyScoreApplied_Params
{
	int                                                ScoreID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerState.AdjustScore
struct AMAPlayerState_AdjustScore_Params
{
	int                                                ScoreAdjustment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment_Art.Tick
struct UAugment_Art_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment_Art.SetActive_Visuals
struct UAugment_Art_SetActive_Visuals_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment_Art.SetActive_Audio
struct UAugment_Art_SetActive_Audio_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment_Art.SetActive
struct UAugment_Art_SetActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment.ServerUse
struct UAugment_ServerUse_Params
{
};

// Function Midair.Augment.ResetType
struct UAugment_ResetType_Params
{
};

// Function Midair.Augment.OnRep_Trigger
struct UAugment_OnRep_Trigger_Params
{
};

// Function Midair.Augment.OnRep_Buddies
struct UAugment_OnRep_Buddies_Params
{
};

// Function Midair.Augment.OnRemoved
struct UAugment_OnRemoved_Params
{
};

// Function Midair.Augment.OnRemoveBuddy
struct UAugment_OnRemoveBuddy_Params
{
	class AMACharacter*                                Buddy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment.OnGivenTo
struct UAugment_OnGivenTo_Params
{
};

// Function Midair.Augment.OnEnergyDepleted
struct UAugment_OnEnergyDepleted_Params
{
};

// Function Midair.Augment.OnAddBuddy
struct UAugment_OnAddBuddy_Params
{
	class AMACharacter*                                Buddy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment.OnActiveChanged
struct UAugment_OnActiveChanged_Params
{
	class AMACharacter*                                ReceivingCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment.MakePassive
struct UAugment_MakePassive_Params
{
};

// Function Midair.Augment.K2_Draw
struct UAugment_K2_Draw_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RenderDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Augment.IsReady
struct UAugment_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.Augment.GetCurrentEnergyChangeRate
struct UAugment_GetCurrentEnergyChangeRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.Augment.GetArtObjectFor
struct UAugment_GetArtObjectFor_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAugment_Art*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.Augment.CanBeUsedWith
struct UAugment_CanBeUsedWith_Params
{
	class UClass*                                      OtherAugmentClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.Augment_Blink.ReceiveBlinkLocation
struct UAugment_Blink_ReceiveBlinkLocation_Params
{
};

// Function Midair.Augment_Blink.OnBlinkOccured
struct UAugment_Blink_OnBlinkOccured_Params
{
};

// Function Midair.Augment_Blink_Art.StopBlink
struct UAugment_Blink_Art_StopBlink_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.Augment_Blink_Art.StartBlink
struct UAugment_Blink_Art_StartBlink_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.Augment_EngineerRegen.StopRegenTimer
struct UAugment_EngineerRegen_StopRegenTimer_Params
{
};

// Function Midair.Augment_EngineerRegen.StartRegenTimer
struct UAugment_EngineerRegen_StartRegenTimer_Params
{
};

// Function Midair.Augment_FlatShield.OwnerTookDamage
struct UAugment_FlatShield_OwnerTookDamage_Params
{
	struct FTakeHitInfo                                TakeHitInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.Augment_RepairTool.OnSetRepairTarget
struct UAugment_RepairTool_OnSetRepairTarget_Params
{
};

// Function Midair.MAItem.K2_Removed
struct AMAItem_K2_Removed_Params
{
};

// Function Midair.MAItem.K2_GivenTo
struct AMAItem_K2_GivenTo_Params
{
	class APawn*                                       NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAItem.ClientGivenTo
struct AMAItem_ClientGivenTo_Params
{
	class APawn*                                       NewInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeapon.ResetAmmo
struct AMAWeapon_ResetAmmo_Params
{
	int                                                NewTotal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeapon.K2_SetFireInterval
struct AMAWeapon_K2_SetFireInterval_Params
{
	float                                              From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeapon.K2_GetFireInterval
struct AMAWeapon_K2_GetFireInterval_Params
{
	float                                              From;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              To;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeapon.GetAdjustedFireLocationAndRotation
struct AMAWeapon_GetAdjustedFireLocationAndRotation_Params
{
	struct FVector                                     FireLocation;                                             // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    FireRotation;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function Midair.MAWeapon.ClientAddAmmo
struct AMAWeapon_ClientAddAmmo_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeapon.BP_GetReloadCompletion
struct AMAWeapon_BP_GetReloadCompletion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAWeapon.AddAmmo
struct AMAWeapon_AddAmmo_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.TrySeatCharacter
struct AVehiclePawn_TrySeatCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.TryReseatCharacter
struct AVehiclePawn_TryReseatCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.ServerSetRelativeControlRotation
struct AVehiclePawn_ServerSetRelativeControlRotation_Params
{
	uint32_t                                           NewControlPitchYaw;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehiclePawn.Server_SetCameraMode
struct AVehiclePawn_Server_SetCameraMode_Params
{
	ECameraMode                                        NewCameraMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehiclePawn.RemoveCharacter
struct AVehiclePawn_RemoveCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.PostNetReceivePhysicState
struct AVehiclePawn_PostNetReceivePhysicState_Params
{
};

// Function Midair.VehiclePawn.OnRep_ThrustInput
struct AVehiclePawn_OnRep_ThrustInput_Params
{
};

// Function Midair.VehiclePawn.OnRep_StickInput
struct AVehiclePawn_OnRep_StickInput_Params
{
};

// Function Midair.VehiclePawn.OnRep_SpawningTeamId
struct AVehiclePawn_OnRep_SpawningTeamId_Params
{
};

// Function Midair.VehiclePawn.OnRep_ControlPitchYaw
struct AVehiclePawn_OnRep_ControlPitchYaw_Params
{
};

// Function Midair.VehiclePawn.OnHit
struct AVehiclePawn_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.OnDeath
struct AVehiclePawn_OnDeath_Params
{
};

// Function Midair.VehiclePawn.NetMulticast_FireWeaponComponent
struct AVehiclePawn_NetMulticast_FireWeaponComponent_Params
{
	class UVehicleWeaponComponent*                     WeaponComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      FireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehiclePawn.HasRoomForCharacter
struct AVehiclePawn_HasRoomForCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.HasAnyOccupiedSeat
struct AVehiclePawn_HasAnyOccupiedSeat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehiclePawn.GetSeats
struct AVehiclePawn_GetSeats_Params
{
	TArray<class UVehicleSeatComponent*>               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.VehiclePawn.GetSeatForWeapon
struct AVehiclePawn_GetSeatForWeapon_Params
{
	class UVehicleWeaponComponent*                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.VehiclePawn.GetAllPossibleWeaponsForSeat
struct AVehiclePawn_GetAllPossibleWeaponsForSeat_Params
{
	class UVehicleSeatComponent*                       Seat;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UVehicleWeaponComponent*>             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.VehiclePawn.FindOccupiedSeat
struct AVehiclePawn_FindOccupiedSeat_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.VehiclePawn.FindAvailableSeat
struct AVehiclePawn_FindAvailableSeat_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.VehiclePawn.CanReseatCharacter
struct AVehiclePawn_CanReseatCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.Bomber.ApplyCustomLift
struct ABomber_ApplyCustomLift_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.Bomber.ApplyCustomAero
struct ABomber_ApplyCustomAero_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ChatWidget.ReleaseOwnership
struct UChatWidget_ReleaseOwnership_Params
{
	class UWidget*                                     CurrentOwner;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.ChatWidget.ReleaseFocus
struct UChatWidget_ReleaseFocus_Params
{
};

// Function Midair.ChatWidget.ReceiveMessage
struct UChatWidget_ReceiveMessage_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FLinearColor                                NameColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.ChatWidget.OnFocusPrompt
struct UChatWidget_OnFocusPrompt_Params
{
};

// Function Midair.ChatWidget.FocusPrompt
struct UChatWidget_FocusPrompt_Params
{
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ChatWidget.CommitMessage
struct UChatWidget_CommitMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Midair.ChatWidget.ClaimOwnership
struct UChatWidget_ClaimOwnership_Params
{
	class UWidget*                                     NewOwner;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.ChatWidget.AddMessage
struct UChatWidget_AddMessage_Params
{
	class APlayerState*                                Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetValue2
struct UComplexStatusBar_SetValue2_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetValue1
struct UComplexStatusBar_SetValue1_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetIsMarquee
struct UComplexStatusBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetFillMarkerColorAndOpacity
struct UComplexStatusBar_SetFillMarkerColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetFillColorAndOpacity2
struct UComplexStatusBar_SetFillColorAndOpacity2_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function Midair.ComplexStatusBar.SetFillColorAndOpacity
struct UComplexStatusBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function Midair.ConfigurableOOBVolume.PlayOOBEffects
struct AConfigurableOOBVolume_PlayOOBEffects_Params
{
	class AActor*                                      ActorExiting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Midair.ConfigurableOOBVolume.CheckForCarriedObject
struct AConfigurableOOBVolume_CheckForCarriedObject_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BodyIndexbool;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.ConfigurableOOBVolume.BP_PlayOOBEffects
struct AConfigurableOOBVolume_BP_PlayOOBEffects_Params
{
	class AActor*                                      ActorExiting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     WallNormal;                                               // (Parm, IsPlainOldData)
};

// Function Midair.DirectHotkey.HandleNamedHotkeyWithInt
struct UDirectHotkey_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                   // (Parm, ZeroConstructor)
	int                                                Int;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.DirectHotkey.HandleDirectNamedHotkey
struct UDirectHotkey_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MABackpack.Use
struct AMABackpack_Use_Params
{
};

// Function Midair.MABackpack.OnRep_Augments
struct AMABackpack_OnRep_Augments_Params
{
};

// Function Midair.EngineerPack.UseRepairAugment
struct AEngineerPack_UseRepairAugment_Params
{
};

// Function Midair.EngineerPack.ServerChangeOwnerDeployable
struct AEngineerPack_ServerChangeOwnerDeployable_Params
{
	class UClass*                                      Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.EngineerPack.RemoveUsedCharges
struct AEngineerPack_RemoveUsedCharges_Params
{
};

// Function Midair.EngineerPack.HasEnoughChargesForDeployable
struct AEngineerPack_HasEnoughChargesForDeployable_Params
{
	class UClass*                                      Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.EngineerPack.CheckAndHandleDeployableSpawn
struct AEngineerPack_CheckAndHandleDeployableSpawn_Params
{
	class UClass*                                      Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.EngineerPack.BindForDeployerUpdate
struct AEngineerPack_BindForDeployerUpdate_Params
{
};

// Function Midair.FighterVehicle.ApplyCustomLift
struct AFighterVehicle_ApplyCustomLift_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAProjectile.Timeout
struct AMAProjectile_Timeout_Params
{
};

// Function Midair.MAProjectile.Stopped
struct AMAProjectile_Stopped_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAProjectile.SphereTouched
struct AMAProjectile_SphereTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAProjectile.ShutDown
struct AMAProjectile_ShutDown_Params
{
};

// Function Midair.MAProjectile.ProcessHit
struct AMAProjectile_ProcessHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAProjectile.OnRep_TeamID
struct AMAProjectile_OnRep_TeamID_Params
{
};

// Function Midair.MAProjectile.OnRep_LastSurfaceImpact
struct AMAProjectile_OnRep_LastSurfaceImpact_Params
{
};

// Function Midair.MAProjectile.OnRep_CurrentStage
struct AMAProjectile_OnRep_CurrentStage_Params
{
};

// Function Midair.MAProjectile.LockInPlace
struct AMAProjectile_LockInPlace_Params
{
};

// Function Midair.MAProjectile.GetHomingTargetLocation
struct AMAProjectile_GetHomingTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAProjectile.Explode
struct AMAProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.MAProjectile.DamageImpactedActor
struct AMAProjectile_DamageImpactedActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAProjectile.CatchUp
struct AMAProjectile_CatchUp_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAProjectile.BP_StartArm
struct AMAProjectile_BP_StartArm_Params
{
};

// Function Midair.MAProjectile.BP_FinishedArm
struct AMAProjectile_BP_FinishedArm_Params
{
};

// Function Midair.MAProjectile.BP_Activate
struct AMAProjectile_BP_Activate_Params
{
};

// Function Midair.MAProjectile.Bounced
struct AMAProjectile_Bounced_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.GetCurrentUserStatsAsyncTask.GetCurrentUserStats
struct UGetCurrentUserStatsAsyncTask_GetCurrentUserStats_Params
{
	class UGetCurrentUserStatsAsyncTask*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.GetCurrentUserStatsAsyncTask.Activate
struct UGetCurrentUserStatsAsyncTask_Activate_Params
{
};

// Function Midair.GetDemoAsyncTask.PlayDemo
struct UGetDemoAsyncTask_PlayDemo_Params
{
	struct FString                                     DemoId;                                                   // (Parm, ZeroConstructor)
	bool                                               PlayDemo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetDemoAsyncTask*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries
struct UGetLeaderBoardEntriesAsyncTask_GetLeaderBoardEntries_Params
{
	struct FName                                       LeaboardName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMALeaderboardRequest>                 LeaderboardRequest;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RangeStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RangeEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DetailCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetLeaderBoardEntriesAsyncTask*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.GetMatchHistoryAsyncTask.GetMatchHistory
struct UGetMatchHistoryAsyncTask_GetMatchHistory_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGetMatchHistoryAsyncTask*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.GetMatchHistoryAsyncTask.Activate
struct UGetMatchHistoryAsyncTask_Activate_Params
{
};

// Function Midair.GetUserStatsAsyncTask.GetUserStats
struct UGetUserStatsAsyncTask_GetUserStats_Params
{
	struct FMASteamId                                  SteamId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	class UGetUserStatsAsyncTask*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.HeatseekerMissile.OnStartNewStage
struct AHeatseekerMissile_OnStartNewStage_Params
{
	int                                                NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.HeatseekerMissile.OnRep_CurrentTarget
struct AHeatseekerMissile_OnRep_CurrentTarget_Params
{
};

// Function Midair.MAAsset.UpdateTeamColors
struct AMAAsset_UpdateTeamColors_Params
{
};

// Function Midair.MAAsset.StatusChanged
struct AMAAsset_StatusChanged_Params
{
};

// Function Midair.MAAsset.SetPowered
struct AMAAsset_SetPowered_Params
{
	bool                                               bInIsPowered;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAAsset.OnRevived
struct AMAAsset_OnRevived_Params
{
};

// Function Midair.MAAsset.OnHealthChanged
struct AMAAsset_OnHealthChanged_Params
{
	bool                                               bFromDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAAsset.OnDied
struct AMAAsset_OnDied_Params
{
};

// Function Midair.MAAsset.IsPowered
struct AMAAsset_IsPowered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAAsset.IsAlive
struct AMAAsset_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAAsset.HasLowHealth
struct AMAAsset_HasLowHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAAsset.GetPlacementVisualRadius
struct AMAAsset_GetPlacementVisualRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATurretAsset.TryTargetLost
struct AMATurretAsset_TryTargetLost_Params
{
	class UTargetComponent*                            Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.MATurretAsset.TargetDroppedFromSensorChannel
struct AMATurretAsset_TargetDroppedFromSensorChannel_Params
{
	class UTargetComponent*                            Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATurretAsset.TargetAcquired
struct AMATurretAsset_TargetAcquired_Params
{
};

// Function Midair.MATurretAsset.OnTargetUpdated
struct AMATurretAsset_OnTargetUpdated_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function Midair.MATurretAsset.OnPerceptionUpdated
struct AMATurretAsset_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            // (Parm, ZeroConstructor)
};

// Function Midair.MATurretAsset.NetMulticast_FireProjectiles
struct AMATurretAsset_NetMulticast_FireProjectiles_Params
{
};

// Function Midair.HeatseekerTurret.TargetBelowMinLockHeat
struct AHeatseekerTurret_TargetBelowMinLockHeat_Params
{
};

// Function Midair.HoverTankVehicle.ServerSetActiveSiege
struct AHoverTankVehicle_ServerSetActiveSiege_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.HoverTankVehicle.OnEnterNewTankMode
struct AHoverTankVehicle_OnEnterNewTankMode_Params
{
};

// Function Midair.HoverTankVehicle.EnterNewTankMode
struct AHoverTankVehicle_EnterNewTankMode_Params
{
	ETankMode                                          NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.HoverTankVehicle.AbortSiege
struct AHoverTankVehicle_AbortSiege_Params
{
};

// Function Midair.LoadingScreenWidget.GetTip
struct ULoadingScreenWidget_GetTip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.LoadingScreenWidget.GetMapName
struct ULoadingScreenWidget_GetMapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.LoadingScreenWidget.GetMapLore
struct ULoadingScreenWidget_GetMapLore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.LoadingScreenWidget.GetBackground
struct ULoadingScreenWidget_GetBackground_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.LoadoutPreview.UpdateSelectionPreview
struct ALoadoutPreview_UpdateSelectionPreview_Params
{
	class UClass*                                      ObjectInfoClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CosmeticCustomization;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ACosmeticConfiguration*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.LoadoutPreview.GetWorldLoadoutPreview
struct ALoadoutPreview_GetWorldLoadoutPreview_Params
{
	class ALoadoutPreview*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.LoadoutPreview.GetCharacterLookAtLocation
struct ALoadoutPreview_GetCharacterLookAtLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MABeamProjectile.UpdateSpawnLocation
struct AMABeamProjectile_UpdateSpawnLocation_Params
{
};

// Function Midair.MACarriedObject.UpdateCameraDist
struct AMACarriedObject_UpdateCameraDist_Params
{
	float                                              CameraDistPct;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACarriedObject.TeamChanged
struct AMACarriedObject_TeamChanged_Params
{
};

// Function Midair.MACarriedObject.StateChanged
struct AMACarriedObject_StateChanged_Params
{
};

// Function Midair.MACarriedObject.OnRep_RemainingAutoReturnTime
struct AMACarriedObject_OnRep_RemainingAutoReturnTime_Params
{
};

// Function Midair.MACarriedObject.OnRep_RemainingAutoReturnSyncTime
struct AMACarriedObject_OnRep_RemainingAutoReturnSyncTime_Params
{
};

// Function Midair.MACarriedObject.OnRep_MAReplicatedMovement
struct AMACarriedObject_OnRep_MAReplicatedMovement_Params
{
};

// Function Midair.MACarriedObject.IsInState
struct AMACarriedObject_IsInState_Params
{
	struct FName                                       InStateName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACarriedObject.IsHome
struct AMACarriedObject_IsHome_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACarriedObject.HolderChanged
struct AMACarriedObject_HolderChanged_Params
{
};

// Function Midair.MACarriedObject.ChangeState
struct AMACarriedObject_ChangeState_Params
{
	struct FName                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACarriedObject.CatchUp
struct AMACarriedObject_CatchUp_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACarriedObject.CapsuleTouched
struct AMACarriedObject_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MACarriedObject.AutoReturnTimer
struct AMACarriedObject_AutoReturnTimer_Params
{
};

// Function Midair.MACarriedObject.AssistCapsuleTouched
struct AMACarriedObject_AssistCapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MACarriedObjectBase.ObjectStateChanged
struct AMACarriedObjectBase_ObjectStateChanged_Params
{
};

// Function Midair.MACarriedObjectBase.ObjectChanged
struct AMACarriedObjectBase_ObjectChanged_Params
{
};

// Function Midair.MACarriedObjectOOBVolume.OnCarriedObjectOOB
struct AMACarriedObjectOOBVolume_OnCarriedObjectOOB_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BodyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MACharacter.ZoomUpdated
struct AMACharacter_ZoomUpdated_Params
{
};

// Function Midair.MACharacter.WeaponActivityUpdated
struct AMACharacter_WeaponActivityUpdated_Params
{
};

// Function Midair.MACharacter.Vocalize
struct AMACharacter_Vocalize_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.UsePack
struct AMACharacter_UsePack_Params
{
};

// Function Midair.MACharacter.UpdateWeaponAttachment
struct AMACharacter_UpdateWeaponAttachment_Params
{
};

// Function Midair.MACharacter.UpdateVisualsToMatchCosmeticCustomizations
struct AMACharacter_UpdateVisualsToMatchCosmeticCustomizations_Params
{
};

// Function Midair.MACharacter.UpdateForClientPerspective
struct AMACharacter_UpdateForClientPerspective_Params
{
};

// Function Midair.MACharacter.UpdateCameraDist
struct AMACharacter_UpdateCameraDist_Params
{
	float                                              CameraDistPct;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.TryPurchaseVehicleAtIndex
struct AMACharacter_TryPurchaseVehicleAtIndex_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.TryExitVehicle
struct AMACharacter_TryExitVehicle_Params
{
};

// Function Midair.MACharacter.TryEnterVehicle
struct AMACharacter_TryEnterVehicle_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.TossFlag
struct AMACharacter_TossFlag_Params
{
};

// Function Midair.MACharacter.TossCarriedObject
struct AMACharacter_TossCarriedObject_Params
{
};

// Function Midair.MACharacter.ToggleZoom
struct AMACharacter_ToggleZoom_Params
{
};

// Function Midair.MACharacter.ToggleTrigger
struct AMACharacter_ToggleTrigger_Params
{
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.SwitchToWeaponAtIndex
struct AMACharacter_SwitchToWeaponAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.SwitchToWeapon
struct AMACharacter_SwitchToWeapon_Params
{
	class AMAWeapon*                                   NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.SwitchToNextWeapon
struct AMACharacter_SwitchToNextWeapon_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.SwitchToDeployerWeapon
struct AMACharacter_SwitchToDeployerWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.SwitchToDeployable
struct AMACharacter_SwitchToDeployable_Params
{
	class UClass*                                      Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.SwapTriggerBuffers
struct AMACharacter_SwapTriggerBuffers_Params
{
};

// Function Midair.MACharacter.Suicide
struct AMACharacter_Suicide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.StopSkating
struct AMACharacter_StopSkating_Params
{
};

// Function Midair.MACharacter.StopPurchaseVehicle
struct AMACharacter_StopPurchaseVehicle_Params
{
};

// Function Midair.MACharacter.StopPickup
struct AMACharacter_StopPickup_Params
{
};

// Function Midair.MACharacter.StopJetting
struct AMACharacter_StopJetting_Params
{
};

// Function Midair.MACharacter.StartPickup
struct AMACharacter_StartPickup_Params
{
};

// Function Midair.MACharacter.StartInvulnerability
struct AMACharacter_StartInvulnerability_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.Skate
struct AMACharacter_Skate_Params
{
};

// Function Midair.MACharacter.SetTrigger
struct AMACharacter_SetTrigger_Params
{
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSet;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.SetOverrideMaterials
struct AMACharacter_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewMaterial1P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.SetLoadout
struct AMACharacter_SetLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSetMaxes;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBaseInventory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.SetCameraMode
struct AMACharacter_SetCameraMode_Params
{
	ECameraMode                                        InCameraMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.ServerTrySpecificPickup
struct AMACharacter_ServerTrySpecificPickup_Params
{
	class AMAPickup*                                   Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.ServerTryPurchaseVehicleAtIndex
struct AMACharacter_ServerTryPurchaseVehicleAtIndex_Params
{
	class AVehicleSpawnPad*                            VehiclePad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.ServerTryExitVehicle
struct AMACharacter_ServerTryExitVehicle_Params
{
};

// Function Midair.MACharacter.ServerTryEnterVehicle
struct AMACharacter_ServerTryEnterVehicle_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.ServerTossCarriedObject
struct AMACharacter_ServerTossCarriedObject_Params
{
};

// Function Midair.MACharacter.ServerSetCameraMode
struct AMACharacter_ServerSetCameraMode_Params
{
	ECameraMode                                        InCameraMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.Server_UseSpray
struct AMACharacter_Server_UseSpray_Params
{
};

// Function Midair.MACharacter.RemoveItem
struct AMACharacter_RemoveItem_Params
{
	class AMAItem*                                     ItemToRemove;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.PlayCameraShake
struct AMACharacter_PlayCameraShake_Params
{
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayInUserSpace;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserSpaceRot;                                             // (Parm, IsPlainOldData)
};

// Function Midair.MACharacter.OnTookDamage
struct AMACharacter_OnTookDamage_Params
{
	struct FTakeHitInfo                                TakeHitInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.MACharacter.OnRep_ReplicatedAccelInfo
struct AMACharacter_OnRep_ReplicatedAccelInfo_Params
{
};

// Function Midair.MACharacter.OnRep_PressedJet
struct AMACharacter_OnRep_PressedJet_Params
{
};

// Function Midair.MACharacter.OnRep_MAReplicatedMovement
struct AMACharacter_OnRep_MAReplicatedMovement_Params
{
};

// Function Midair.MACharacter.OnRep_LMS
struct AMACharacter_OnRep_LMS_Params
{
};

// Function Midair.MACharacter.OnRep_LastAttachedSurfaceImpact
struct AMACharacter_OnRep_LastAttachedSurfaceImpact_Params
{
};

// Function Midair.MACharacter.OnRep_IsSkating
struct AMACharacter_OnRep_IsSkating_Params
{
};

// Function Midair.MACharacter.OnPurchasedVehicleSpawned
struct AMACharacter_OnPurchasedVehicleSpawned_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.OnHealthChanged
struct AMACharacter_OnHealthChanged_Params
{
	bool                                               bFromDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.OnFootStep
struct AMACharacter_OnFootStep_Params
{
};

// Function Midair.MACharacter.OnEnergyDamage
struct AMACharacter_OnEnergyDamage_Params
{
};

// Function Midair.MACharacter.OnDied
struct AMACharacter_OnDied_Params
{
};

// Function Midair.MACharacter.K2_FindItem
struct AMACharacter_K2_FindItem_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExactClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.K2_CreateItem
struct AMACharacter_K2_CreateItem_Params
{
	class UClass*                                      NewItemClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.Jet
struct AMACharacter_Jet_Params
{
};

// Function Midair.MACharacter.IsTriggerSet
struct AMACharacter_IsTriggerSet_Params
{
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.IsInInventory
struct AMACharacter_IsInInventory_Params
{
	class AMAItem*                                     ItemToFind;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.IsDead
struct AMACharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.IsAccelerating
struct AMACharacter_IsAccelerating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetWantsOrderVehicle
struct AMACharacter_GetWantsOrderVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetRemoteViewPitch
struct AMACharacter_GetRemoteViewPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetIsWarpingOut
struct AMACharacter_GetIsWarpingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetHealthPct
struct AMACharacter_GetHealthPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetHealth
struct AMACharacter_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetEnergyPct
struct AMACharacter_GetEnergyPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetEnergy
struct AMACharacter_GetEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.GetAccelerationYaw
struct AMACharacter_GetAccelerationYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.EndInvulnerability
struct AMACharacter_EndInvulnerability_Params
{
};

// Function Midair.MACharacter.DiscardInventory
struct AMACharacter_DiscardInventory_Params
{
};

// Function Midair.MACharacter.CycleZoom
struct AMACharacter_CycleZoom_Params
{
};

// Function Midair.MACharacter.ClientLoadoutRefreshed
struct AMACharacter_ClientLoadoutRefreshed_Params
{
};

// Function Midair.MACharacter.ClearTriggers
struct AMACharacter_ClearTriggers_Params
{
};

// Function Midair.MACharacter.CleanupDeadBody
struct AMACharacter_CleanupDeadBody_Params
{
};

// Function Midair.MACharacter.CameraShakeUpdated
struct AMACharacter_CameraShakeUpdated_Params
{
};

// Function Midair.MACharacter.BP_UpdateForClientPerspective
struct AMACharacter_BP_UpdateForClientPerspective_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.BP_StartPurchaseVehicle
struct AMACharacter_BP_StartPurchaseVehicle_Params
{
	class AVehicleSpawnPad*                            SpawnPad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.BP_ShowEngineerWidget
struct AMACharacter_BP_ShowEngineerWidget_Params
{
	class AEngineerPack*                               Pack;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacter.BP_OnRep_PlayerState
struct AMACharacter_BP_OnRep_PlayerState_Params
{
};

// Function Midair.MACharacter.BP_GetViewRotation
struct AMACharacter_BP_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacter.BP_EndPurchaseVehicle
struct AMACharacter_BP_EndPurchaseVehicle_Params
{
};

// Function Midair.MACharacter.AddItem
struct AMACharacter_AddItem_Params
{
	class AMAItem*                                     ItemToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACharacterMovement.MAServerMove
struct UMACharacterMovement_MAServerMove_Params
{
	struct FMAPackedMoveBundle                         Bundle;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Midair.MACharacterMovement.MAClientAdjustEnergy
struct UMACharacterMovement_MAClientAdjustEnergy_Params
{
	float                                              Energy;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MACharacterMovement.IsSkatingOnGround
struct UMACharacterMovement_IsSkatingOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACTFFlag.OnStop
struct AMACTFFlag_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MACTFFlag.OnBounce
struct AMACTFFlag_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAGameState.SortPlayersByScore
struct AMAGameState_SortPlayersByScore_Params
{
	TArray<class APlayerState*>                        Players;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Midair.MAGameState.PredictWinner
struct AMAGameState_PredictWinner_Params
{
	EMapVoteOption                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.OnSameTeam
struct AMAGameState_OnSameTeam_Params
{
	class AActor*                                      Actor1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.OnRep_WinningOption
struct AMAGameState_OnRep_WinningOption_Params
{
};

// Function Midair.MAGameState.OnRep_VotingStage
struct AMAGameState_OnRep_VotingStage_Params
{
};

// Function Midair.MAGameState.OnRep_TeamArray
struct AMAGameState_OnRep_TeamArray_Params
{
};

// Function Midair.MAGameState.OnRep_PunishVote
struct AMAGameState_OnRep_PunishVote_Params
{
};

// Function Midair.MAGameState.OnRep_MapVoteOptions
struct AMAGameState_OnRep_MapVoteOptions_Params
{
};

// Function Midair.MAGameState.IsAnySimpleVoteInProgress
struct AMAGameState_IsAnySimpleVoteInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetVotesForOption
struct AMAGameState_GetVotesForOption_Params
{
	EMapVoteOption                                     Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetTotalPlayersOnTeam
struct AMAGameState_GetTotalPlayersOnTeam_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetTeamStateById
struct AMAGameState_GetTeamStateById_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMATeamState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetTeamMaxObjectCount
struct AMAGameState_GetTeamMaxObjectCount_Params
{
	class UClass*                                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetRankedPlayerArrays
struct AMAGameState_GetRankedPlayerArrays_Params
{
	TArray<class AMAPlayerState*>                      Team1RankedArray;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<class AMAPlayerState*>                      Team2RankedArray;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.MAGameState.GetRankedPlayerArray
struct AMAGameState_GetRankedPlayerArray_Params
{
	TArray<class AMAPlayerState*>                      RankedArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.MAGameState.GetMatchStatus
struct AMAGameState_GetMatchStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAGameState.GetMAGameModeClass
struct AMAGameState_GetMAGameModeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetLivePlayersOnTeam
struct AMAGameState_GetLivePlayersOnTeam_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameState.GetGameTime
struct AMAGameState_GetGameTime_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameState.GetFlagHolderTimer
struct AMAGameState_GetFlagHolderTimer_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAGameState.GetCurrentJackpot
struct AMAGameState_GetCurrentJackpot_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAGameState.GetCurrentHolder
struct AMAGameState_GetCurrentHolder_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MACTFGameState.GetIsFlagHolder
struct AMACTFGameState_GetIsFlagHolder_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACTFGameState.GetFlagStateName
struct AMACTFGameState_GetFlagStateName_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MACTFGameState.GetFlagBase
struct AMACTFGameState_GetFlagBase_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMACTFFlagBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MADamageType.ComputeDamageSkillRating
struct UMADamageType_ComputeDamageSkillRating_Params
{
	float                                              PreviousSkillRating;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMidairHit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadialDamageScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MALocalMessage.GetTextColor
struct UMALocalMessage_GetTextColor_Params
{
	int                                                MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MALocalMessage.GetText
struct UMALocalMessage_GetText_Params
{
	struct FLocalMessageData                           MessageData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MADeployerWeapon.OnRep_DeployableClass
struct AMADeployerWeapon_OnRep_DeployableClass_Params
{
};

// Function Midair.MADeployerWeapon.NotifyMenuClosed
struct AMADeployerWeapon_NotifyMenuClosed_Params
{
};

// Function Midair.MAGameInstance.ShowMatchMakingWidget
struct UMAGameInstance_ShowMatchMakingWidget_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameInstance.SaveMouseSettings
struct UMAGameInstance_SaveMouseSettings_Params
{
	float                                              DPI;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameInstance.SaveInputSettings
struct UMAGameInstance_SaveInputSettings_Params
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Midair.MAGameInstance.ResetInputSettings
struct UMAGameInstance_ResetInputSettings_Params
{
};

// Function Midair.MAGameInstance.OnNetworkFailure
struct UMAGameInstance_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Midair.MAGameInstance.InputPasswordForSteamPresence
struct UMAGameInstance_InputPasswordForSteamPresence_Params
{
	struct FString                                     RichPresence;                                             // (Parm, ZeroConstructor)
	struct FString                                     JoinPassword;                                             // (Parm, ZeroConstructor)
};

// Function Midair.MAGameInstance.HideLoadingScreen
struct UMAGameInstance_HideLoadingScreen_Params
{
};

// Function Midair.MAGameInstance.GetSoundCueForVoiceSet
struct UMAGameInstance_GetSoundCueForVoiceSet_Params
{
	class UClass*                                      VoiceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SoundCueId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetSoundCueForAnnouncer
struct UMAGameInstance_GetSoundCueForAnnouncer_Params
{
	int                                                SoundCueId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetServiceState
struct UMAGameInstance_GetServiceState_Params
{
	EMAServiceState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetRootProgressionObject
struct UMAGameInstance_GetRootProgressionObject_Params
{
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetPlayerExpressionIndex
struct UMAGameInstance_GetPlayerExpressionIndex_Params
{
	struct FPlayerExpressionData                       Expression;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetMouseSettings
struct UMAGameInstance_GetMouseSettings_Params
{
	float                                              DPI;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivty;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertY;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameInstance.GetInputAxisMappings
struct UMAGameInstance_GetInputAxisMappings_Params
{
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameInstance.GetInputActionMappings
struct UMAGameInstance_GetInputActionMappings_Params
{
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameInstance.GetCurrenSeason
struct UMAGameInstance_GetCurrenSeason_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameInstance.FindSessions
struct UMAGameInstance_FindSessions_Params
{
	struct FScriptDelegate                             InFindSessionsResultsDelegate;                            // (Parm, ZeroConstructor)
	EFindSessionsSortMethod                            SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFull;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameInstance.ClientJoinSession
struct UMAGameInstance_ClientJoinSession_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintSessionResult                     SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.ClearLastNetworkError
struct UMAGameInstance_ClearLastNetworkError_Params
{
};

// Function Midair.MAGameInstance.CheckAndHandleNamedEvent
struct UMAGameInstance_CheckAndHandleNamedEvent_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameInstance.AuthenticateWithService
struct UMAGameInstance_AuthenticateWithService_Params
{
};

// Function Midair.MAGameplayStatics.UseProgressionPass
struct UMAGameplayStatics_UseProgressionPass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.TryUpdateAudioComponentPerspective
struct UMAGameplayStatics_TryUpdateAudioComponentPerspective_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.StashPresentationItems
struct UMAGameplayStatics_StashPresentationItems_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Items;                                                    // (Parm, ZeroConstructor)
};

// Function Midair.MAGameplayStatics.SpawnPerspectiveSoundAttached
struct UMAGameplayStatics_SpawnPerspectiveSoundAttached_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SpawnClientServerProjectile
struct UMAGameplayStatics_SpawnClientServerProjectile_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageModifier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.ShowStorePageForItem
struct UMAGameplayStatics_ShowStorePageForItem_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.ShowStorePage
struct UMAGameplayStatics_ShowStorePage_Params
{
};

// Function Midair.MAGameplayStatics.ShowDLCStorePage
struct UMAGameplayStatics_ShowDLCStorePage_Params
{
	int                                                Appid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.ShouldShowPerformanceStats
struct UMAGameplayStatics_ShouldShowPerformanceStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetTeamColorOnMesh
struct UMAGameplayStatics_SetTeamColorOnMesh_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetSoundClassVolume
struct UMAGameplayStatics_SetSoundClassVolume_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetSoundClassRadioFilterVolume
struct UMAGameplayStatics_SetSoundClassRadioFilterVolume_Params
{
	class USoundClass*                                 SoundClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetLowPassFilterOnAllSounds
struct UMAGameplayStatics_SetLowPassFilterOnAllSounds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout
struct UMAGameplayStatics_SetDefaultNamedCosmeticForLoadout_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.SetAudioComponentPerspective
struct UMAGameplayStatics_SetAudioComponentPerspective_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.RefreshInventory
struct UMAGameplayStatics_RefreshInventory_Params
{
};

// Function Midair.MAGameplayStatics.PredictProjectileCollisionPoint
struct UMAGameplayStatics_PredictProjectileCollisionPoint_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialLocation;                                          // (Parm, IsPlainOldData)
	struct FRotator                                    FireRotation;                                             // (Parm, IsPlainOldData)
	float                                              TimePerStep;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPredictionTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.OpenLootbox
struct UMAGameplayStatics_OpenLootbox_Params
{
	struct FLootboxInfo                                Lootbox;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function Midair.MAGameplayStatics.MAPlayWorldCameraShake
struct UMAGameplayStatics_MAPlayWorldCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWorldCameraShakeParams                     ShakeParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Epicenter;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      ShakeClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.MakeSpline
struct UMAGameplayStatics_MakeSpline_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   InStart;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InStartDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InEnd;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InEndDir;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InThickness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InTint;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.MAGetDamageImpulse
struct UMAGameplayStatics_MAGetDamageImpulse_Params
{
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.MAApplyRadialDamage
struct UMAGameplayStatics_MAApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageParams                         DamageParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.IsSteamConnected
struct UMAGameplayStatics_IsSteamConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.IsItemUnlockedForUser
struct UMAGameplayStatics_IsItemUnlockedForUser_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.IsDLCOwned
struct UMAGameplayStatics_IsDLCOwned_Params
{
	int                                                Appid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.HasUsedProgressionPass
struct UMAGameplayStatics_HasUsedProgressionPass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetTimeForSpawnWithSelectedLoadout
struct UMAGameplayStatics_GetTimeForSpawnWithSelectedLoadout_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetTimeForSpawnWithLoadout
struct UMAGameplayStatics_GetTimeForSpawnWithLoadout_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetStashedPresentationItems
struct UMAGameplayStatics_GetStashedPresentationItems_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.GetSpawnPenaltyForSelectedLoadout
struct UMAGameplayStatics_GetSpawnPenaltyForSelectedLoadout_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetSpawnPenaltyForLoadout
struct UMAGameplayStatics_GetSpawnPenaltyForLoadout_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetRecentlyRendered
struct UMAGameplayStatics_GetRecentlyRendered_Params
{
	class USkinnedMeshComponent*                       MeshComponent;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetRawLoadoutPenalties
struct UMAGameplayStatics_GetRawLoadoutPenalties_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bGensDown;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetProjectVersionString
struct UMAGameplayStatics_GetProjectVersionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.GetPredictedLOD
struct UMAGameplayStatics_GetPredictedLOD_Params
{
	class USkinnedMeshComponent*                       MeshComponent;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetObjectInfoClass
struct UMAGameplayStatics_GetObjectInfoClass_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetObjectInfo
struct UMAGameplayStatics_GetObjectInfo_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetMutableDefaultObject
struct UMAGameplayStatics_GetMutableDefaultObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetMAGameState
struct UMAGameplayStatics_GetMAGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMAGameState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetLootboxes
struct UMAGameplayStatics_GetLootboxes_Params
{
	TArray<struct FLootboxInfo>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.GetItemsBySteamDefinedType
struct UMAGameplayStatics_GetItemsBySteamDefinedType_Params
{
	ESteamDefinedItemType                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AssociativeFilter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.GetIsEditor
struct UMAGameplayStatics_GetIsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetDistanceFromPointToCollision
struct UMAGameplayStatics_GetDistanceFromPointToCollision_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout
struct UMAGameplayStatics_GetDefaultNamedCosmeticForLoadout_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetCurrentLoadoutName
struct UMAGameplayStatics_GetCurrentLoadoutName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.GetCatchUpTime
struct UMAGameplayStatics_GetCatchUpTime_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetCarriedObjectsFromOverlap
struct UMAGameplayStatics_GetCarriedObjectsFromOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetActorInfoObjectFromActorClass
struct UMAGameplayStatics_GetActorInfoObjectFromActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.GetActorInfoObject
struct UMAGameplayStatics_GetActorInfoObject_Params
{
	class UClass*                                      ActorInfoClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.FindComponentPerClass
struct UMAGameplayStatics_FindComponentPerClass_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Classes;                                                  // (Parm, ZeroConstructor)
	TMap<class UClass*, class UActorComponent*>        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.EjectCarriedObjectsFromOverlap
struct UMAGameplayStatics_EjectCarriedObjectsFromOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EjectVelocity;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.ConvertUUVelocityToKPH
struct UMAGameplayStatics_ConvertUUVelocityToKPH_Params
{
	struct FVector                                     UUVelocity;                                               // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.ConvertUUSpeedToKPH
struct UMAGameplayStatics_ConvertUUSpeedToKPH_Params
{
	float                                              UUSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.CheckBeginOverlapForEjection
struct UMAGameplayStatics_CheckBeginOverlapForEjection_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BodyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsRabbit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameplayStatics.CheckAreaForSpecificActorClass
struct UMAGameplayStatics_CheckAreaForSpecificActorClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameplayStatics.AreTeamGensDown
struct UMAGameplayStatics_AreTeamGensDown_Params
{
	class AMAPlayerController*                         Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.SetUserFOV
struct UMAGameUserSettings_SetUserFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.SetSoundClassVolume
struct UMAGameUserSettings_SetSoundClassVolume_Params
{
	class USoundClass*                                 Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.SetIFFDistance
struct UMAGameUserSettings_SetIFFDistance_Params
{
	bool                                               ShouldShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.SetFullscreenModeFromString
struct UMAGameUserSettings_SetFullscreenModeFromString_Params
{
	struct FString                                     AsString;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Midair.MAGameUserSettings.SetCrosshairIndex
struct UMAGameUserSettings_SetCrosshairIndex_Params
{
	struct FString                                     CrosshairType;                                            // (Parm, ZeroConstructor)
};

// Function Midair.MAGameUserSettings.SetCrosshairColor
struct UMAGameUserSettings_SetCrosshairColor_Params
{
	struct FString                                     Color;                                                    // (Parm, ZeroConstructor)
};

// Function Midair.MAGameUserSettings.SetAllSettingsGroups
struct UMAGameUserSettings_SetAllSettingsGroups_Params
{
	int                                                AAQuality;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VFXQuality;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoliageQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PPQuality;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.SetAdvancedSettings
struct UMAGameUserSettings_SetAdvancedSettings_Params
{
	int                                                InAnisotropy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTextureStreamingPoolSize;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMotionBlur;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.HideWelcomeMessage
struct UMAGameUserSettings_HideWelcomeMessage_Params
{
};

// Function Midair.MAGameUserSettings.GetUserFOV
struct UMAGameUserSettings_GetUserFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetSoundClassVolume
struct UMAGameUserSettings_GetSoundClassVolume_Params
{
	class USoundClass*                                 Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetMAGameUserSettings
struct UMAGameUserSettings_GetMAGameUserSettings_Params
{
	class UMAGameUserSettings*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetFOVMin
struct UMAGameUserSettings_GetFOVMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetFOVMax
struct UMAGameUserSettings_GetFOVMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetCrosshairType
struct UMAGameUserSettings_GetCrosshairType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameUserSettings.GetCrosshairIndex
struct UMAGameUserSettings_GetCrosshairIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetCrosshairColor
struct UMAGameUserSettings_GetCrosshairColor_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAGameUserSettings.GetAllSettingsGroups
struct UMAGameUserSettings_GetAllSettingsGroups_Params
{
	int                                                AAQuality;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                VFXQuality;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FoliageQuality;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PPQuality;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAGameUserSettings.GetAdvancedSettings
struct UMAGameUserSettings_GetAdvancedSettings_Params
{
	int                                                OutAnisotropy;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutTextureStreamingPoolSize;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutMotionBlur;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHandGrenade.GetMaxAmmoCountFor
struct AMAHandGrenade_GetMaxAmmoCountFor_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.UpdateReplayTime
struct AMAHUD_UpdateReplayTime_Params
{
	float                                              PctOfReplay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.ToggleReplayHud
struct AMAHUD_ToggleReplayHud_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.TogglePauseReplay
struct AMAHUD_TogglePauseReplay_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.ToggleInGameMenu
struct AMAHUD_ToggleInGameMenu_Params
{
	class AMAPlayerController*                         Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.StartQuickVoice
struct AMAHUD_StartQuickVoice_Params
{
};

// Function Midair.MAHUD.StartChat
struct AMAHUD_StartChat_Params
{
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.ShowMapVote
struct AMAHUD_ShowMapVote_Params
{
};

// Function Midair.MAHUD.ShowIffOnly
struct AMAHUD_ShowIffOnly_Params
{
};

// Function Midair.MAHUD.SetReplaySpeed
struct AMAHUD_SetReplaySpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAHUD.ProcessPlayerExpressionInput
struct AMAHUD_ProcessPlayerExpressionInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               IsAbortKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.IsReplayPaused
struct AMAHUD_IsReplayPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.IsInGameMenuVisible
struct AMAHUD_IsInGameMenuVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.GetTotalReplayTime
struct AMAHUD_GetTotalReplayTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.GetReplaySpeed
struct AMAHUD_GetReplaySpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.GetReplayPercent
struct AMAHUD_GetReplayPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.GetCurrentReplayTime
struct AMAHUD_GetCurrentReplayTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.GetCurrentCrosshairTexture
struct AMAHUD_GetCurrentCrosshairTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAHUD.BP_OnScoreApplied
struct AMAHUD_BP_OnScoreApplied_Params
{
	struct FText                                       ScoreText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.UpdateMousePropertiesForPawn
struct UMAInputSettings_UpdateMousePropertiesForPawn_Params
{
	class APawn*                                       Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.TryResolveLastConflict
struct UMAInputSettings_TryResolveLastConflict_Params
{
	EMappingConflictResolution                         Resolution;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.TryResetKey
struct UMAInputSettings_TryResetKey_Params
{
	struct FName                                       MappingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   KeyPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.TryBindKey
struct UMAInputSettings_TryBindKey_Params
{
	struct FName                                       MappingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewKey;                                                   // (Parm)
	EMappingPriority                                   KeyPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.SetMouseSensitivityForName
struct UMAInputSettings_SetMouseSensitivityForName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.SetMouseInvertForName
struct UMAInputSettings_SetMouseInvertForName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.ResetAll
struct UMAInputSettings_ResetAll_Params
{
};

// Function Midair.MAInputSettings.IsMappingDefault
struct UMAInputSettings_IsMappingDefault_Params
{
	struct FName                                       MappingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.HasAnyPendingConflict
struct UMAInputSettings_HasAnyPendingConflict_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetUISensitivityScale
struct UMAInputSettings_GetUISensitivityScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetSpecificInputMapping
struct UMAInputSettings_GetSpecificInputMapping_Params
{
	struct FName                                       MappingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMidairInputMapping                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.GetSettingsNameForPawn
struct UMAInputSettings_GetSettingsNameForPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetMouseSensitivityForPawn
struct UMAInputSettings_GetMouseSensitivityForPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetMouseSensitivityForName
struct UMAInputSettings_GetMouseSensitivityForName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetMouseInvertForPawn
struct UMAInputSettings_GetMouseInvertForPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetMouseInvertForName
struct UMAInputSettings_GetMouseInvertForName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetMappingDisplayName
struct UMAInputSettings_GetMappingDisplayName_Params
{
	struct FMidairInputMapping                         Mapping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	EMappingPriority                                   Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.GetMAInputSettings
struct UMAInputSettings_GetMAInputSettings_Params
{
	class UMAInputSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.GetInputMappingNamesOrdered
struct UMAInputSettings_GetInputMappingNamesOrdered_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAInputSettings.GetInputMappingByName
struct UMAInputSettings_GetInputMappingByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMidairInputMapping                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.GetInputCategoryNamesOrdered
struct UMAInputSettings_GetInputCategoryNamesOrdered_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.MAInputSettings.GetInputCategoryByName
struct UMAInputSettings_GetInputCategoryByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMidairInputCategory                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.GetDefaultInputMappingByName
struct UMAInputSettings_GetDefaultInputMappingByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMidairInputMapping                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.GetActionKeyMappingDisplayName
struct UMAInputSettings_GetActionKeyMappingDisplayName_Params
{
	struct FInputActionKeyMapping                      KeyMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAInputSettings.ClearKey
struct UMAInputSettings_ClearKey_Params
{
	struct FName                                       MappingName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   KeyPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAInputSettings.ClearAll
struct UMAInputSettings_ClearAll_Params
{
};

// Function Midair.MAInputSettings.AreMappingsEqual
struct UMAInputSettings_AreMappingsEqual_Params
{
	struct FInputActionKeyMapping                      First;                                                    // (Parm)
	struct FInputActionKeyMapping                      Second;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAInputSettings.ApplyAndSaveAll
struct UMAInputSettings_ApplyAndSaveAll_Params
{
};

// Function Midair.MAInventoryAsset.UserPlayerDied
struct AMAInventoryAsset_UserPlayerDied_Params
{
};

// Function Midair.MAInventoryAsset.PlayEquipEffects
struct AMAInventoryAsset_PlayEquipEffects_Params
{
};

// Function Midair.MAInventoryAsset.OnRep_CurrentUser
struct AMAInventoryAsset_OnRep_CurrentUser_Params
{
};

// Function Midair.MAInventoryAsset.OnBeginOverlap
struct AMAInventoryAsset_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAInventoryAsset.IsAvailable
struct AMAInventoryAsset_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MALocalMessagesWidget.Clear
struct UMALocalMessagesWidget_Clear_Params
{
};

// Function Midair.MALocalMessagesWidget.BP_Clear
struct UMALocalMessagesWidget_BP_Clear_Params
{
};

// Function Midair.MALocalMessagesWidget.AddMessage
struct UMALocalMessagesWidget_AddMessage_Params
{
	class UClass*                                      MessageClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLocalMessageData                           MessageData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.MALocalPlayer.UnlockObjectInfo
struct UMALocalPlayer_UnlockObjectInfo_Params
{
	class UObjectInfo*                                 ObjectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateProgression;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MALocalPlayer.CompleteTutorial
struct UMALocalPlayer_CompleteTutorial_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MALocalPlayer.ClearNewSkillPoints
struct UMALocalPlayer_ClearNewSkillPoints_Params
{
};

// Function Midair.MALocalPlayer.BypassProgression_TEMP
struct UMALocalPlayer_BypassProgression_TEMP_Params
{
};

// Function Midair.MALocalPlayer.AddXP
struct UMALocalPlayer_AddXP_Params
{
	int                                                XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPickupBackpack.UpdateVisuals
struct AMAPickupBackpack_UpdateVisuals_Params
{
};

// Function Midair.MAPlaybackComponent.K2_CreateAndAddEvent
struct UMAPlaybackComponent_K2_CreateAndAddEvent_Params
{
	class UClass*                                      EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMAPlaybackEvent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.ToggleMenu
struct AMAPlayerControllerBase_ToggleMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.TestSerializeLoadoutWithSteam
struct AMAPlayerControllerBase_TestSerializeLoadoutWithSteam_Params
{
};

// Function Midair.MAPlayerControllerBase.SetMouseSensitivityToDefault
struct AMAPlayerControllerBase_SetMouseSensitivityToDefault_Params
{
};

// Function Midair.MAPlayerControllerBase.SetMouseSensitivity
struct AMAPlayerControllerBase_SetMouseSensitivity_Params
{
	float                                              Sensitivity;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.ServerUpdateUserUnlocks
struct AMAPlayerControllerBase_ServerUpdateUserUnlocks_Params
{
	TArray<class UClass*>                              NewUnlocks;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Midair.MAPlayerControllerBase.ServerSetSteamLoadout
struct AMAPlayerControllerBase_ServerSetSteamLoadout_Params
{
	struct FMALoadout                                  SerializedLoadout;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function Midair.MAPlayerControllerBase.ServerSay
struct AMAPlayerControllerBase_ServerSay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.ServerDoExpression
struct AMAPlayerControllerBase_ServerDoExpression_Params
{
	int                                                MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.Say
struct AMAPlayerControllerBase_Say_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.SaveGeneralSettings
struct AMAPlayerControllerBase_SaveGeneralSettings_Params
{
};

// Function Midair.MAPlayerControllerBase.ResetAllSteamData
struct AMAPlayerControllerBase_ResetAllSteamData_Params
{
};

// Function Midair.MAPlayerControllerBase.RefreshSteamInventory
struct AMAPlayerControllerBase_RefreshSteamInventory_Params
{
};

// Function Midair.MAPlayerControllerBase.InvertMouse
struct AMAPlayerControllerBase_InvertMouse_Params
{
	bool                                               bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.GiveXP
struct AMAPlayerControllerBase_GiveXP_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.GetMALocalPlayer
struct AMAPlayerControllerBase_GetMALocalPlayer_Params
{
	class UMALocalPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.GetIsFinalizedPlayerInventory
struct AMAPlayerControllerBase_GetIsFinalizedPlayerInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.GenerateItem
struct AMAPlayerControllerBase_GenerateItem_Params
{
	int                                                ItemDefId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.EndQuickVoice
struct AMAPlayerControllerBase_EndQuickVoice_Params
{
};

// Function Midair.MAPlayerControllerBase.DoExpression
struct AMAPlayerControllerBase_DoExpression_Params
{
	int                                                MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.DebugCrashGame
struct AMAPlayerControllerBase_DebugCrashGame_Params
{
};

// Function Midair.MAPlayerControllerBase.ClientSay
struct AMAPlayerControllerBase_ClientSay_Params
{
	class APlayerState*                                Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bTeamOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.ClientRefreshProgression
struct AMAPlayerControllerBase_ClientRefreshProgression_Params
{
};

// Function Midair.MAPlayerControllerBase.ClientInventoryFinalized
struct AMAPlayerControllerBase_ClientInventoryFinalized_Params
{
};

// Function Midair.MAPlayerControllerBase.ClientGivenXP
struct AMAPlayerControllerBase_ClientGivenXP_Params
{
	int                                                XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLevelupReward;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.ClientDoExpression
struct AMAPlayerControllerBase_ClientDoExpression_Params
{
	class APlayerState*                                Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerControllerBase.BypassTutorials
struct AMAPlayerControllerBase_BypassTutorials_Params
{
};

// Function Midair.MAPlayerController.VotePunishPlayer
struct AMAPlayerController_VotePunishPlayer_Params
{
	class AMAPlayerState*                              TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPunishType                                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.UpdateServerName
struct AMAPlayerController_UpdateServerName_Params
{
};

// Function Midair.MAPlayerController.UnsetPassword
struct AMAPlayerController_UnsetPassword_Params
{
};

// Function Midair.MAPlayerController.ToggleScoreboard
struct AMAPlayerController_ToggleScoreboard_Params
{
};

// Function Midair.MAPlayerController.SpectateJumpToLocation
struct AMAPlayerController_SpectateJumpToLocation_Params
{
	struct FString                                     LocationString;                                           // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.Spectate
struct AMAPlayerController_Spectate_Params
{
};

// Function Midair.MAPlayerController.ShowScoreboard
struct AMAPlayerController_ShowScoreboard_Params
{
};

// Function Midair.MAPlayerController.SetupDeathEffects
struct AMAPlayerController_SetupDeathEffects_Params
{
};

// Function Midair.MAPlayerController.SetServerName
struct AMAPlayerController_SetServerName_Params
{
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.SetPassword
struct AMAPlayerController_SetPassword_Params
{
	struct FString                                     NewPassword;                                              // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.SetEnabledPawnRelatedInput
struct AMAPlayerController_SetEnabledPawnRelatedInput_Params
{
	class AActor*                                      RequestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerVotePunishPlayer
struct AMAPlayerController_ServerVotePunishPlayer_Params
{
	class AMAPlayerState*                              TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPunishType                                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerVoteEndWithNextMap
struct AMAPlayerController_ServerVoteEndWithNextMap_Params
{
	unsigned char                                      MapIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerViewRedFlag
struct AMAPlayerController_ServerViewRedFlag_Params
{
};

// Function Midair.MAPlayerController.ServerViewBlueFlag
struct AMAPlayerController_ServerViewBlueFlag_Params
{
};

// Function Midair.MAPlayerController.ServerViewAPlayerState
struct AMAPlayerController_ServerViewAPlayerState_Params
{
	class APlayerState*                                PlayerStateToView;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerUpdateRTT
struct AMAPlayerController_ServerUpdateRTT_Params
{
	float                                              RTT;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerUpdateReplicatedInputSettings
struct AMAPlayerController_ServerUpdateReplicatedInputSettings_Params
{
	struct FRepInputSettings                           RepInputSettings;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerUpdateReplicatedGeneralSettings
struct AMAPlayerController_ServerUpdateReplicatedGeneralSettings_Params
{
	struct FRepGenSettings                             RepGenSettings;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerUnsetPassword
struct AMAPlayerController_ServerUnsetPassword_Params
{
};

// Function Midair.MAPlayerController.ServerToggleSpectateMode
struct AMAPlayerController_ServerToggleSpectateMode_Params
{
};

// Function Midair.MAPlayerController.ServerSuicide
struct AMAPlayerController_ServerSuicide_Params
{
};

// Function Midair.MAPlayerController.ServerSubmitSimpleVote
struct AMAPlayerController_ServerSubmitSimpleVote_Params
{
	ESimpleVote                                        Vote;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerSpectate
struct AMAPlayerController_ServerSpectate_Params
{
};

// Function Midair.MAPlayerController.ServerSetViewTarget
struct AMAPlayerController_ServerSetViewTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerSetSpectateMode
struct AMAPlayerController_ServerSetSpectateMode_Params
{
	ESpectateMode                                      Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerSetPassword
struct AMAPlayerController_ServerSetPassword_Params
{
	struct FString                                     NewPassword;                                              // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.ServerSetLoadout
struct AMAPlayerController_ServerSetLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Midair.MAPlayerController.ServerSelectLoadoutByClass
struct AMAPlayerController_ServerSelectLoadoutByClass_Params
{
	class UClass*                                      CharacterInfo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerRespawnWithBasicLoadout
struct AMAPlayerController_ServerRespawnWithBasicLoadout_Params
{
};

// Function Midair.MAPlayerController.ServerRconOverrideNextMap
struct AMAPlayerController_ServerRconOverrideNextMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.ServerRconEndMatch
struct AMAPlayerController_ServerRconEndMatch_Params
{
};

// Function Midair.MAPlayerController.ServerNegotiatePredictionPing
struct AMAPlayerController_ServerNegotiatePredictionPing_Params
{
	float                                              NewPredictionPing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerMoveToSpectate
struct AMAPlayerController_ServerMoveToSpectate_Params
{
	class APlayerState*                                PlayerToMove;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerKickPlayer
struct AMAPlayerController_ServerKickPlayer_Params
{
	class APlayerState*                                KickedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.ServerChangePlayerTeam
struct AMAPlayerController_ServerChangePlayerTeam_Params
{
	class APlayerState*                                PlayerToMove;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerCastOptionVote
struct AMAPlayerController_ServerCastOptionVote_Params
{
	EMapVoteOption                                     Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ServerBanPlayer
struct AMAPlayerController_ServerBanPlayer_Params
{
	class APlayerState*                                BannedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.ServerAdminLogin
struct AMAPlayerController_ServerAdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.SendLoadoutToServer
struct AMAPlayerController_SendLoadoutToServer_Params
{
};

// Function Midair.MAPlayerController.SelectCurrentLoadout
struct AMAPlayerController_SelectCurrentLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.MAPlayerController.RecievedClearActiveRespawnDelay
struct AMAPlayerController_RecievedClearActiveRespawnDelay_Params
{
};

// Function Midair.MAPlayerController.RecievedActiveRespawnDelay
struct AMAPlayerController_RecievedActiveRespawnDelay_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.RconOverrideNextMap
struct AMAPlayerController_RconOverrideNextMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.RconEndMatch
struct AMAPlayerController_RconEndMatch_Params
{
};

// Function Midair.MAPlayerController.Predict
struct AMAPlayerController_Predict_Params
{
	float                                              NewPredictionPing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests
struct AMAPlayerController_OnRep_ServerDisablePawnRelatedInputRequests_Params
{
};

// Function Midair.MAPlayerController.OnRep_PlayerLoadout
struct AMAPlayerController_OnRep_PlayerLoadout_Params
{
};

// Function Midair.MAPlayerController.IsPawnRelatedInputEnabled
struct AMAPlayerController_IsPawnRelatedInputEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.HideScoreboard
struct AMAPlayerController_HideScoreboard_Params
{
};

// Function Midair.MAPlayerController.GetVehicleVitals
struct AMAPlayerController_GetVehicleVitals_Params
{
	class UMAVitalsComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetTimeDead
struct AMAPlayerController_GetTimeDead_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetPlayerSeat
struct AMAPlayerController_GetPlayerSeat_Params
{
	class UVehicleSeatComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetLastControlledCharacter
struct AMAPlayerController_GetLastControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetEffectiveControlRotation
struct AMAPlayerController_GetEffectiveControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetCurrentXPPool
struct AMAPlayerController_GetCurrentXPPool_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetControlledVehicle
struct AMAPlayerController_GetControlledVehicle_Params
{
	class AVehiclePawn*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetControlledPassengerPawn
struct AMAPlayerController_GetControlledPassengerPawn_Params
{
	class APassengerPawn*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetControlledCharacter
struct AMAPlayerController_GetControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetCharacterVitals
struct AMAPlayerController_GetCharacterVitals_Params
{
	class UMAVitalsComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Midair.MAPlayerController.GetActiveRespawnDelay
struct AMAPlayerController_GetActiveRespawnDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.FinishEndMatchVote
struct AMAPlayerController_FinishEndMatchVote_Params
{
};

// Function Midair.MAPlayerController.FindRelevantVehicle
struct AMAPlayerController_FindRelevantVehicle_Params
{
	class AVehiclePawn*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.FindRelevantCharacter
struct AMAPlayerController_FindRelevantCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.FindMostRelevantPawn
struct AMAPlayerController_FindMostRelevantPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAPlayerController.EnterTemporarySpectate
struct AMAPlayerController_EnterTemporarySpectate_Params
{
};

// Function Midair.MAPlayerController.ClientSetDeathTime
struct AMAPlayerController_ClientSetDeathTime_Params
{
};

// Function Midair.MAPlayerController.ClientReceiveDeathMessage
struct AMAPlayerController_ClientReceiveDeathMessage_Params
{
	struct FDeathMessageData                           DeathMessageData;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Midair.MAPlayerController.ClientPlayerKicked
struct AMAPlayerController_ClientPlayerKicked_Params
{
	struct FString                                     KickReason;                                               // (Parm, ZeroConstructor)
	float                                              TimeRemaining;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ClientNotifyMapChange
struct AMAPlayerController_ClientNotifyMapChange_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Midair.MAPlayerController.ClientNotifyInvulnerableBaseAssets
struct AMAPlayerController_ClientNotifyInvulnerableBaseAssets_Params
{
	int                                                PlayersRequired;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ClearDeathEffects
struct AMAPlayerController_ClearDeathEffects_Params
{
};

// Function Midair.MAPlayerController.ChangeTeam
struct AMAPlayerController_ChangeTeam_Params
{
	unsigned char                                      DesiredTeamId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.ChangeScoreboard
struct AMAPlayerController_ChangeScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.BeginEndMatchVote
struct AMAPlayerController_BeginEndMatchVote_Params
{
	unsigned char                                      MapIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAPlayerController.AdminLogin
struct AMAPlayerController_AdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function Midair.StagedMissileMovement.StartNewStage
struct UStagedMissileMovement_StartNewStage_Params
{
	float                                              InStageLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MatchMakingStatusWidget.ReleaseOwnership
struct UMatchMakingStatusWidget_ReleaseOwnership_Params
{
	class UWidget*                                     CurrentOwner;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.MatchMakingStatusWidget.ClaimOwnership
struct UMatchMakingStatusWidget_ClaimOwnership_Params
{
	class UWidget*                                     NewOwner;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.MATeamInterface.GetTeamId
struct UMATeamInterface_GetTeamId_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.RemoveFromTeam
struct AMATeamState_RemoveFromTeam_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATeamState.NetMulticast_SetWeaponLimited
struct AMATeamState_NetMulticast_SetWeaponLimited_Params
{
	class UClass*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLimited;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATeamState.IsWeaponRestricted
struct AMATeamState_IsWeaponRestricted_Params
{
	class UClass*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.GetObjectCount
struct AMATeamState_GetObjectCount_Params
{
	class UClass*                                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.GetNumPlayers
struct AMATeamState_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.FilterRestrictedItems
struct AMATeamState_FilterRestrictedItems_Params
{
	TArray<class UClass*>                              InItems;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.MATeamState.CheckAndHandleSpawnWeapon
struct AMATeamState_CheckAndHandleSpawnWeapon_Params
{
	class UClass*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.CanSpawnWeapon
struct AMATeamState_CanSpawnWeapon_Params
{
	class UClass*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATeamState.AdjustScore
struct AMATeamState_AdjustScore_Params
{
	int                                                ScoreAdjustment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATeamState.AdjustJackpot
struct AMATeamState_AdjustJackpot_Params
{
	int                                                ScoreAdjustment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATeamState.AddToTeam
struct AMATeamState_AddToTeam_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MATRFlag.OnStop
struct AMATRFlag_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MATRFlag.OnBounce
struct AMATRFlag_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.MATRGameState.GetIsFlagHolder
struct AMATRGameState_GetIsFlagHolder_Params
{
	class AMAPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATRGameState.GetFlagStateName
struct AMATRGameState_GetFlagStateName_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATRGameState.GetFlagHolderTimer
struct AMATRGameState_GetFlagHolderTimer_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MATRGameState.GetFlagBase
struct AMATRGameState_GetFlagBase_Params
{
	unsigned char                                      TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMATRFlagBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MATRGameState.GetCurrentHolder
struct AMATRGameState_GetCurrentHolder_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.MAVitalsComponent.TookDamage
struct UMAVitalsComponent_TookDamage_Params
{
};

// Function Midair.MAVitalsComponent.TakeDamage
struct UMAVitalsComponent_TakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.ShieldStatusChanged
struct UMAVitalsComponent_ShieldStatusChanged_Params
{
};

// Function Midair.MAVitalsComponent.SetHitFlashMeshes
struct UMAVitalsComponent_SetHitFlashMeshes_Params
{
	TArray<class UMeshComponent*>                      Meshes;                                                   // (Parm, ZeroConstructor)
};

// Function Midair.MAVitalsComponent.RepairHealth
struct UMAVitalsComponent_RepairHealth_Params
{
	float                                              RequestedAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.Repair
struct UMAVitalsComponent_Repair_Params
{
	float                                              EnergyUsed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.OnRep_IsDead
struct UMAVitalsComponent_OnRep_IsDead_Params
{
};

// Function Midair.MAVitalsComponent.OnRep_Heat
struct UMAVitalsComponent_OnRep_Heat_Params
{
};

// Function Midair.MAVitalsComponent.OnRep_Health
struct UMAVitalsComponent_OnRep_Health_Params
{
};

// Function Midair.MAVitalsComponent.IsDead
struct UMAVitalsComponent_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.HasLowHealth
struct UMAVitalsComponent_HasLowHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.HasFullHealth
struct UMAVitalsComponent_HasFullHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.GetHealthPct
struct UMAVitalsComponent_GetHealthPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.GetEnergyPct
struct UMAVitalsComponent_GetEnergyPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.ConsumeEnergy
struct UMAVitalsComponent_ConsumeEnergy_Params
{
	float                                              RequestedAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnPct;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.ClientDisableEnergyRegen
struct UMAVitalsComponent_ClientDisableEnergyRegen_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAVitalsComponent.CanBeRepaired
struct UMAVitalsComponent_CanBeRepaired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.SetOverrideMaterials
struct AMAWeaponAttachment_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewMaterial1P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.SetChargeIndicator
struct AMAWeaponAttachment_SetChargeIndicator_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.OnCharacterGrabAmmo
struct AMAWeaponAttachment_OnCharacterGrabAmmo_Params
{
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.OnCharacterAttachAmmo
struct AMAWeaponAttachment_OnCharacterAttachAmmo_Params
{
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.K2_UpdateForClientPerspective
struct AMAWeaponAttachment_K2_UpdateForClientPerspective_Params
{
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.MAWeaponAttachment.DetachFirstAmmoActor
struct AMAWeaponAttachment_DetachFirstAmmoActor_Params
{
	bool                                               bInFirstPerson;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ObjectInfo.OnUnlockableRequirementsMet
struct UObjectInfo_OnUnlockableRequirementsMet_Params
{
};

// Function Midair.ObjectInfo.OnUnlock
struct UObjectInfo_OnUnlock_Params
{
};

// Function Midair.ObjectInfo.IsUnlocked
struct UObjectInfo_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ObjectInfo.GetUnmetRequirements
struct UObjectInfo_GetUnmetRequirements_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.ObjectInfo.GetUnlockableData_BP
struct UObjectInfo_GetUnlockableData_BP_Params
{
	struct FUnlockableObjectNode                       InObjectNode;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ObjectInfo.GetObjectInfoFromClass
struct UObjectInfo_GetObjectInfoFromClass_Params
{
	class UClass*                                      InObjectClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ObjectInfo.GetObjectInfo
struct UObjectInfo_GetObjectInfo_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ObjectInfo.GetActionText
struct UObjectInfo_GetActionText_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.ObjectInfo.FilterObjectInfoArray
struct UObjectInfo_FilterObjectInfoArray_Params
{
	TArray<class UClass*>                              Base;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              AppliedFilter;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              outResult;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bReturnInBoth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ObjectInfo.ConvertObjectArrayToItemArray
struct UObjectInfo_ConvertObjectArrayToItemArray_Params
{
	TArray<class UClass*>                              Objects;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.WeaponInfo.GetStats
struct UWeaponInfo_GetStats_Params
{
	struct FWeaponStatDetails                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.AugmentInfo.CanBeUsedWith
struct UAugmentInfo_CanBeUsedWith_Params
{
	class UAugmentInfo*                                AugmentInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.BackpackInfo.GetAvailableSecondaryAugments
struct UBackpackInfo_GetAvailableSecondaryAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.BackpackInfo.GetAvailablePrimaryAugments
struct UBackpackInfo_GetAvailablePrimaryAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.IsWeaponAvailable
struct UCharacterInfo_IsWeaponAvailable_Params
{
	class UClass*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.IsVoiceSetAvailable
struct UCharacterInfo_IsVoiceSetAvailable_Params
{
	class UClass*                                      VoiceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.IsThrowableAvailable
struct UCharacterInfo_IsThrowableAvailable_Params
{
	class UClass*                                      Throwable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.IsBackpackAvailable
struct UCharacterInfo_IsBackpackAvailable_Params
{
	class UClass*                                      Backpack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.IsAugmentAvailable
struct UCharacterInfo_IsAugmentAvailable_Params
{
	class UClass*                                      Augment;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.GetUnavailableAugments
struct UCharacterInfo_GetUnavailableAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.GetStats
struct UCharacterInfo_GetStats_Params
{
	struct FCharacterStatDetails                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.CharacterInfo.GetAvailableWeapons
struct UCharacterInfo_GetAvailableWeapons_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.GetAvailableVoiceSets
struct UCharacterInfo_GetAvailableVoiceSets_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.GetAvailableThrowables
struct UCharacterInfo_GetAvailableThrowables_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.GetAvailableDeployables
struct UCharacterInfo_GetAvailableDeployables_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.CharacterInfo.GetAvailableBackpacks
struct UCharacterInfo_GetAvailableBackpacks_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.VehicleInfo.GetSeatCount
struct UVehicleInfo_GetSeatCount_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleInfo.GetMaxSeatableArmorSize
struct UVehicleInfo_GetMaxSeatableArmorSize_Params
{
	EArmorSize                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ObjectivePrompt.UpdateExistingPrompt
struct UObjectivePrompt_UpdateExistingPrompt_Params
{
	struct FMidairObjectiveInfo                        DeltaObjectiveInfo;                                       // (Parm, OutParm)
	EObjectiveUpdateType                               UpdateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsUpdate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ObjectivePrompt.SetPrompt
struct UObjectivePrompt_SetPrompt_Params
{
	struct FMidairObjectiveInfo                        NewObjectiveInfo;                                         // (Parm, OutParm)
};

// Function Midair.ObjectivePrompt.OnPromptChanged
struct UObjectivePrompt_OnPromptChanged_Params
{
};

// Function Midair.ObjectivePrompt.OnObjectiveCompleted
struct UObjectivePrompt_OnObjectiveCompleted_Params
{
};

// Function Midair.ObjectivePrompt.ClearPrompt
struct UObjectivePrompt_ClearPrompt_Params
{
	bool                                               bCompleted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ObjectiveVolume.OnOverlap
struct AObjectiveVolume_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BodyIndexbool;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.ObjectiveVolume.EndOverlap
struct AObjectiveVolume_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.ObjectLauncher.OnSpawnedActorDeath
struct AObjectLauncher_OnSpawnedActorDeath_Params
{
};

// Function Midair.ObjectLauncher.LaunchActor
struct AObjectLauncher_LaunchActor_Params
{
};

// Function Midair.ObjectLauncher_Spline.SpawnActorToLaunch
struct AObjectLauncher_Spline_SpawnActorToLaunch_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ParticleConfiguration.SetParticlesOnComponent
struct AParticleConfiguration_SetParticlesOnComponent_Params
{
	class UParticleSystemComponent*                    Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Midair.ParticleConfiguration.SetParticlesOnActor
struct AParticleConfiguration_SetParticlesOnActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.TryReload
struct APassengerPawn_TryReload_Params
{
};

// Function Midair.PassengerPawn.ServerSetRelativeControlRotation
struct APassengerPawn_ServerSetRelativeControlRotation_Params
{
	uint32_t                                           NewControlPitchYaw;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.ServerReseatCharacter
struct APassengerPawn_ServerReseatCharacter_Params
{
	unsigned char                                      NewSeatPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.ServerReload
struct APassengerPawn_ServerReload_Params
{
};

// Function Midair.PassengerPawn.Server_SetCameraMode
struct APassengerPawn_Server_SetCameraMode_Params
{
	ECameraMode                                        NewCameraMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.Server_SetActiveThirdAbility
struct APassengerPawn_Server_SetActiveThirdAbility_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.Server_SetActiveSecondAbility
struct APassengerPawn_Server_SetActiveSecondAbility_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.Server_SetActiveFirstAbility
struct APassengerPawn_Server_SetActiveFirstAbility_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PassengerPawn.RemoveCharacter
struct APassengerPawn_RemoveCharacter_Params
{
};

// Function Midair.PassengerPawn.OnRep_ControlPitchYaw
struct APassengerPawn_OnRep_ControlPitchYaw_Params
{
};

// Function Midair.PlayerLoadoutsSave.SetLastSelectedIndex
struct UPlayerLoadoutsSave_SetLastSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.SaveChanges
struct UPlayerLoadoutsSave_SaveChanges_Params
{
};

// Function Midair.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame
struct UPlayerLoadoutsSave_RestoreDefaultLoadoutsForGame_Params
{
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Weapon_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet
struct UPlayerLoadoutsSave_ModifySelectedLoadout_VoiceSet_Params
{
	class UClass*                                      DesiredVoiceSet;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Throwable_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredThrowable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Pack
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Pack_Params
{
	class UClass*                                      DesiredBackpack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin
struct UPlayerLoadoutsSave_ModifySelectedLoadout_ObjectSkin_Params
{
	class UClass*                                      ObjectInfoClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Name
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Name_Params
{
	struct FString                                     DesiredName;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Character
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Character_Params
{
	class UClass*                                      DesiredCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Augment
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Augment_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredAugment;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.ModifyNamedCosmeticSelection
struct UPlayerLoadoutsSave_ModifyNamedCosmeticSelection_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Cosmetic;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetVoiceIdent
struct UPlayerLoadoutsSave_GetVoiceIdent_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetSprayIdent
struct UPlayerLoadoutsSave_GetSprayIdent_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetSavedGamemodes
struct UPlayerLoadoutsSave_GetSavedGamemodes_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.GetNamedCosmeticSelection
struct UPlayerLoadoutsSave_GetNamedCosmeticSelection_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutWeapons
struct UPlayerLoadoutsSave_GetLoadoutWeapons_Params
{
	TArray<class UClass*>                              OutWeapons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutThrowables
struct UPlayerLoadoutsSave_GetLoadoutThrowables_Params
{
	TArray<class UClass*>                              OutThrowables;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutsForGamemode
struct UPlayerLoadoutsSave_GetLoadoutsForGamemode_Params
{
	TArray<struct FMALoadout>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutIndex
struct UPlayerLoadoutsSave_GetLoadoutIndex_Params
{
	struct FMALoadout                                  Loadout;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutCurrentlyAvailableAugments
struct UPlayerLoadoutsSave_GetLoadoutCurrentlyAvailableAugments_Params
{
	bool                                               bPrimary;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OutAugments;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bDoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutCharacterInfo
struct UPlayerLoadoutsSave_GetLoadoutCharacterInfo_Params
{
	class UCharacterInfo*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutCharacter
struct UPlayerLoadoutsSave_GetLoadoutCharacter_Params
{
	class UClass*                                      OutCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutBackpackInfo
struct UPlayerLoadoutsSave_GetLoadoutBackpackInfo_Params
{
	class UBackpackInfo*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutBackpack
struct UPlayerLoadoutsSave_GetLoadoutBackpack_Params
{
	class UClass*                                      OutBackpack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLoadoutAugments
struct UPlayerLoadoutsSave_GetLoadoutAugments_Params
{
	bool                                               bPrimary;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OutAugments;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bEvenInvalid;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetLastSelectedLoadout
struct UPlayerLoadoutsSave_GetLastSelectedLoadout_Params
{
	struct FMALoadout                                  outLoadout;                                               // (Parm, OutParm)
};

// Function Midair.PlayerLoadoutsSave.GetLastSelectedIndex
struct UPlayerLoadoutsSave_GetLastSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetGlobalLoadoutsSave
struct UPlayerLoadoutsSave_GetGlobalLoadoutsSave_Params
{
	bool                                               bForceNew;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerLoadoutsSave*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetCustomLoadoutsSave
struct UPlayerLoadoutsSave_GetCustomLoadoutsSave_Params
{
	bool                                               bForceNew;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerLoadoutsSave*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemodeInstance
struct UPlayerLoadoutsSave_GetCurrentLoadoutGamemodeInstance_Params
{
	class AMAGameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemode
struct UPlayerLoadoutsSave_GetCurrentLoadoutGamemode_Params
{
	class UClass*                                      OutGamemode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.GetCachedGamemode
struct UPlayerLoadoutsSave_GetCachedGamemode_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.CheckWeaponForLoadout
struct UPlayerLoadoutsSave_CheckWeaponForLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  UseLoadout;                                               // (Parm)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout
struct UPlayerLoadoutsSave_CheckWeaponForCurrentLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckThrowableForLoadout
struct UPlayerLoadoutsSave_CheckThrowableForLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredThrowable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  UseLoadout;                                               // (Parm)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout
struct UPlayerLoadoutsSave_CheckThrowableForCurrentLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredThrowable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckPackForLoadout
struct UPlayerLoadoutsSave_CheckPackForLoadout_Params
{
	class UClass*                                      DesiredBackpack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  UseLoadout;                                               // (Parm)
	class UClass*                                      OverrideComparisonCharacter;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckPackForCurrentLoadout
struct UPlayerLoadoutsSave_CheckPackForCurrentLoadout_Params
{
	class UClass*                                      DesiredBackpack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonCharacter;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckLoadoutNameUnique
struct UPlayerLoadoutsSave_CheckLoadoutNameUnique_Params
{
	struct FString                                     DesiredName;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.CheckCharacterForLoadout
struct UPlayerLoadoutsSave_CheckCharacterForLoadout_Params
{
	class UClass*                                      DesiredCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  UseLoadout;                                               // (Parm)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout
struct UPlayerLoadoutsSave_CheckCharacterForCurrentLoadout_Params
{
	class UClass*                                      DesiredCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckAugmentForLoadout
struct UPlayerLoadoutsSave_CheckAugmentForLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredAugment;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMALoadout                                  UseLoadout;                                               // (Parm)
	class UClass*                                      OverrideComparisonCharacter;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonPack;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonPrimaryAugment;                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.CheckAugmentForCurrentLoadout
struct UPlayerLoadoutsSave_CheckAugmentForCurrentLoadout_Params
{
	int                                                IndexAt;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DesiredAugment;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonCharacter;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonPack;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideComparisonPrimaryAugment;                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.PlayerLoadoutsSave.ChangeSelectedLoadout
struct UPlayerLoadoutsSave_ChangeSelectedLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function Midair.PlayerLoadoutsSave.CacheGamemodeClassAtIndex
struct UPlayerLoadoutsSave_CacheGamemodeClassAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PlayerLoadoutsSave.CacheGamemodeClass
struct UPlayerLoadoutsSave_CacheGamemodeClass_Params
{
	class UClass*                                      GameModeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.TutorialDialougeManager.TryAddSound
struct UTutorialDialougeManager_TryAddSound_Params
{
	struct FTutorialDialougeDetails                    NewSound;                                                 // (Parm)
};

// Function Midair.TutorialDialougeManager.StartNewDialouge
struct UTutorialDialougeManager_StartNewDialouge_Params
{
};

// Function Midair.TutorialDialougeManager.NewDialougeManager
struct UTutorialDialougeManager_NewDialougeManager_Params
{
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTutorialDialougeManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.TutorialDialougeManager.DialougeFinished
struct UTutorialDialougeManager_DialougeFinished_Params
{
};

// Function Midair.TutorialDialougeManager.ClearAndStopAllSounds
struct UTutorialDialougeManager_ClearAndStopAllSounds_Params
{
};

// Function Midair.PRGameMode.OnTriggerEndLesson
struct APRGameMode_OnTriggerEndLesson_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PRGameMode.OnTriggerBeginLesson
struct APRGameMode_OnTriggerBeginLesson_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PRGameMode.GetCurrentLessonTag
struct APRGameMode_GetCurrentLessonTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.PRGameMode.GetCurrentLesson
struct APRGameMode_GetCurrentLesson_Params
{
	struct FPracticeLessonDetails                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.PRGameMode.AdvanceTrackingToLesson
struct APRGameMode_AdvanceTrackingToLesson_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.PRGameMode.AdvanceToNextLesson
struct APRGameMode_AdvanceToNextLesson_Params
{
};

// Function Midair.SensorNetworkComponent.SetSensorChannel
struct USensorNetworkComponent_SetSensorChannel_Params
{
	unsigned char                                      NewChannel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.SensorNetworkComponent.Reactivate
struct USensorNetworkComponent_Reactivate_Params
{
};

// Function Midair.SensorNetworkComponent.HasDetectedTarget
struct USensorNetworkComponent_HasDetectedTarget_Params
{
	class UTargetComponent*                            TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SensorNetworkComponent.GetSensorChannel
struct USensorNetworkComponent_GetSensorChannel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ServiceBlueprintLibrary.IsSameDemoVersion
struct UServiceBlueprintLibrary_IsSameDemoVersion_Params
{
	struct FString                                     DemoVersion;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ServiceBlueprintLibrary.IsDownloadedDemo
struct UServiceBlueprintLibrary_IsDownloadedDemo_Params
{
	struct FString                                     DemoId;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ServiceBlueprintLibrary.GetDemoProgress
struct UServiceBlueprintLibrary_GetDemoProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.ServiceBlueprintLibrary.CancelGetDemo
struct UServiceBlueprintLibrary_CancelGetDemo_Params
{
};

// Function Midair.SteamMatchMakingBlueprintLibrary.StopMatchMaking
struct USteamMatchMakingBlueprintLibrary_StopMatchMaking_Params
{
};

// Function Midair.SteamMatchMakingBlueprintLibrary.StartMatchMaking
struct USteamMatchMakingBlueprintLibrary_StartMatchMaking_Params
{
	TArray<TEnumAsByte<EMAMatchType>>                  MatchType;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               WaitingWarmupServer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeNonOfficialServer;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.IsValidLobby
struct USteamMatchMakingBlueprintLibrary_IsValidLobby_Params
{
	TEnumAsByte<EMAMatchType>                          MatchType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.IsLobbyOwner
struct USteamMatchMakingBlueprintLibrary_IsLobbyOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers
struct USteamMatchMakingBlueprintLibrary_GetNumLobbyMembers_Params
{
	TEnumAsByte<EMAMatchType>                          MatchType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo
struct USteamMatchMakingBlueprintLibrary_GetMyPlayerInfo_Params
{
	struct FPlayerInfo                                 PlayerInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime
struct USteamMatchMakingBlueprintLibrary_GetMatchMakingTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyStatus
struct USteamMatchMakingBlueprintLibrary_GetLobbyStatus_Params
{
	TEnumAsByte<EMAMatchLobbyStatus>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers
struct USteamMatchMakingBlueprintLibrary_GetLobbyPlayers_Params
{
	TEnumAsByte<EMAMatchType>                          MatchType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerInfo>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated
struct USteamMatchMakingBlueprintLibrary_GetLobbyGameCreated_Params
{
	struct FLobbyGameCreated                           LobbyGameCreated;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.EventTick
struct USteamMatchMakingBlueprintLibrary_EventTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.SteamMatchMakingBlueprintLibrary.Equal
struct USteamMatchMakingBlueprintLibrary_Equal_Params
{
	struct FUniqueNetIdRepl                            UniqueId1;                                                // (Parm)
	struct FUniqueNetIdRepl                            UniqueId2;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.StickyProjectile.OnDeath
struct AStickyProjectile_OnDeath_Params
{
};

// Function Midair.StickyProjectile.OnAttachParentDied
struct AStickyProjectile_OnAttachParentDied_Params
{
	class AActor*                                      DeadActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.SubmitUserReportAsyncTask.SubmitUserReport
struct USubmitUserReportAsyncTask_SubmitUserReport_Params
{
	struct FString                                     Summary;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	struct FString                                     Reproduce;                                                // (Parm, ZeroConstructor)
	int                                                Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USubmitUserReportAsyncTask*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.TargetComponent.StopAllTargetting
struct UTargetComponent_StopAllTargetting_Params
{
};

// Function Midair.TargetComponent.SetSensorResolutionStrengthTime
struct UTargetComponent_SetSensorResolutionStrengthTime_Params
{
	ESensorResolutionStrength                          Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.TargetComponent.PushSensorModifiers
struct UTargetComponent_PushSensorModifiers_Params
{
	struct FSensorTargetModifiers                      Modifiers;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.TargetComponent.PopSensorModifiers
struct UTargetComponent_PopSensorModifiers_Params
{
	struct FSensorTargetModifiers                      Modifiers;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Midair.TargetComponent.IsDetectedByChannel
struct UTargetComponent_IsDetectedByChannel_Params
{
	unsigned char                                      InChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.TargetComponent.GetHighestDetectedState
struct UTargetComponent_GetHighestDetectedState_Params
{
	EDetectedState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.TargetDummy.OnDied
struct ATargetDummy_OnDied_Params
{
};

// Function Midair.TargetDummy.GetTeamId
struct ATargetDummy_GetTeamId_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.TargetDummy.ForceKill
struct ATargetDummy_ForceKill_Params
{
};

// Function Midair.VehicleWeaponComponent.TryFire
struct UVehicleWeaponComponent_TryFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleWeaponComponent.ServerTryReload
struct UVehicleWeaponComponent_ServerTryReload_Params
{
};

// Function Midair.VehicleWeaponComponent.ServerSetTrigger
struct UVehicleWeaponComponent_ServerSetTrigger_Params
{
	bool                                               bSet;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleWeaponComponent.ServerFireProjectiles
struct UVehicleWeaponComponent_ServerFireProjectiles_Params
{
	unsigned char                                      FireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleWeaponComponent.NM_StartReloadSound
struct UVehicleWeaponComponent_NM_StartReloadSound_Params
{
};

// Function Midair.VehicleWeaponComponent.NM_FinishReloadSound
struct UVehicleWeaponComponent_NM_FinishReloadSound_Params
{
};

// Function Midair.VehicleWeaponComponent.GetRemainingReload
struct UVehicleWeaponComponent_GetRemainingReload_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleWeaponComponent.CanFire
struct UVehicleWeaponComponent_CanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.SetAutoRoll
struct UVehicleMoveComponent_SetAutoRoll_Params
{
	bool                                               bNewAutoRoll;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.ServerUpdateState
struct UVehicleMoveComponent_ServerUpdateState_Params
{
	struct FRepStickInput                              StickInput;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRepThrustInput                             ThrustInput;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.IsUsingAfterburner
struct UVehicleMoveComponent_IsUsingAfterburner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.HoverFactorForSurface
struct UVehicleMoveComponent_HoverFactorForSurface_Params
{
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.GetSocketWorldRotation
struct UVehicleMoveComponent_GetSocketWorldRotation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.GetSocketWorldLocation
struct UVehicleMoveComponent_GetSocketWorldLocation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.GetSocketTransform
struct UVehicleMoveComponent_GetSocketTransform_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.GetOrientationInfo
struct UVehicleMoveComponent_GetOrientationInfo_Params
{
	struct FQuat                                       OutOrientationRotation;                                   // (Parm, OutParm, IsPlainOldData)
	float                                              OutProgradeDot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.GetFixedForwardVector
struct UVehicleMoveComponent_GetFixedForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedTorqueNonVelChange
struct UVehicleMoveComponent_AddFixedTorqueNonVelChange_Params
{
	struct FVector                                     Torque;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedTorque
struct UVehicleMoveComponent_AddFixedTorque_Params
{
	struct FVector                                     Torque;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedImpulseAtLocation
struct UVehicleMoveComponent_AddFixedImpulseAtLocation_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedImpulse
struct UVehicleMoveComponent_AddFixedImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedForceNonVelChange
struct UVehicleMoveComponent_AddFixedForceNonVelChange_Params
{
	struct FVector                                     Force;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedForceAtLocation
struct UVehicleMoveComponent_AddFixedForceAtLocation_Params
{
	struct FVector                                     Force;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedForce
struct UVehicleMoveComponent_AddFixedForce_Params
{
	struct FVector                                     Force;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleMoveComponent.AddFixedAngularImpulse
struct UVehicleMoveComponent_AddFixedAngularImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.SetTrigger
struct UVehicleSeatComponent_SetTrigger_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.ServerSeatCharacter
struct UVehicleSeatComponent_ServerSeatCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.ServerReseatCharacter
struct UVehicleSeatComponent_ServerReseatCharacter_Params
{
	unsigned char                                      NewSeatPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.ServerRemoveCharacter
struct UVehicleSeatComponent_ServerRemoveCharacter_Params
{
};

// Function Midair.VehicleSeatComponent.SeatCharacter
struct UVehicleSeatComponent_SeatCharacter_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.RemoveCharacter
struct UVehicleSeatComponent_RemoveCharacter_Params
{
	bool                                               bEject;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.IsEmpty
struct UVehicleSeatComponent_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.GetVehicleStateText
struct UVehicleSeatComponent_GetVehicleStateText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Midair.VehicleSeatComponent.GetSecondaryWeapons
struct UVehicleSeatComponent_GetSecondaryWeapons_Params
{
	TArray<class UVehicleWeaponComponent*>             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Midair.VehicleSeatComponent.GetSeatedPlayer
struct UVehicleSeatComponent_GetSeatedPlayer_Params
{
	class AMAPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSeatComponent.CanSit
struct UVehicleSeatComponent_CanSit_Params
{
	class AMACharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.OnVehicleDied
struct AVehicleSpawnPad_OnVehicleDied_Params
{
	class AVehiclePawn*                                Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.OnRep_PadState
struct AVehicleSpawnPad_OnRep_PadState_Params
{
};

// Function Midair.VehicleSpawnPad.OnEndOverlap
struct AVehicleSpawnPad_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.OnBeginOverlap
struct AVehicleSpawnPad_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.GetVehicleCount
struct AVehicleSpawnPad_GetVehicleCount_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.GetPadState
struct AVehicleSpawnPad_GetPadState_Params
{
	EVehicleSpawnState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.GetMaxVehicleCount
struct AVehicleSpawnPad_GetMaxVehicleCount_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.VehicleSpawnPad.CanSpawnClass
struct AVehicleSpawnPad_CanSpawnClass_Params
{
	class UClass*                                      VehicleClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.WardenWeapon.GetTarget
struct AWardenWeapon_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Midair.WeaponAmmoArt.SetOverrideMaterials
struct AWeaponAmmoArt_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewMaterial1P;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.WeaponAmmoArt.SetChargeIndicator
struct AWeaponAmmoArt_SetChargeIndicator_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Midair.WeaponAmmoArt.OnComponentHit
struct AWeaponAmmoArt_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
