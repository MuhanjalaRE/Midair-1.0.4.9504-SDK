// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Midair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Midair.MAPickup.PlayPickupEffects
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class AMAPlayerController*     Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMAPickup::PlayPickupEffects(class AMAPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickup.PlayPickupEffects");

	AMAPickup_PlayPickupEffects_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPickup.PlayLandingEffects
// (Net, Native, Event, NetMulticast, Public)

void AMAPickup::PlayLandingEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickup.PlayLandingEffects");

	AMAPickup_PlayLandingEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPickup.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAPickup::OnStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickup.OnStop");

	AMAPickup_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPickup.OnBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAPickup::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickup.OnBeginOverlap");

	AMAPickup_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPickup.ApplyImpulse_NM
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AMAPickup::ApplyImpulse_NM(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickup.ApplyImpulse_NM");

	AMAPickup_ApplyImpulse_NM_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.AmmoPickup.SetupFromCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AAmmoPickup::SetupFromCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.AmmoPickup.SetupFromCharacter");

	AAmmoPickup_SetupFromCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.AmmoPickup.GetRelatedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMAPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAPlayerState* AAmmoPickup::GetRelatedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.AmmoPickup.GetRelatedPlayer");

	AAmmoPickup_GetRelatedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.ReturnPrefix
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMAGameMode::ReturnPrefix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.ReturnPrefix");

	AMAGameMode_ReturnPrefix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsWeaponAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsWeaponAllowed(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsWeaponAllowed");

	AMAGameMode_IsWeaponAllowed_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsThrowableAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ThrowableClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsThrowableAllowed(class UClass* ThrowableClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsThrowableAllowed");

	AMAGameMode_IsThrowableAllowed_Params params;
	params.ThrowableClass = ThrowableClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsPackAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  PackClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsPackAllowed(class UClass* PackClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsPackAllowed");

	AMAGameMode_IsPackAllowed_Params params;
	params.PackClass = PackClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsDeployableAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  DeployableClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsDeployableAllowed(class UClass* DeployableClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsDeployableAllowed");

	AMAGameMode_IsDeployableAllowed_Params params;
	params.DeployableClass = DeployableClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsCharacterAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  CharacterClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsCharacterAllowed(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsCharacterAllowed");

	AMAGameMode_IsCharacterAllowed_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.IsAugmentAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AugmentClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameMode::IsAugmentAllowed(class UClass* AugmentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.IsAugmentAllowed");

	AMAGameMode_IsAugmentAllowed_Params params;
	params.AugmentClass = AugmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameMode.FilterDisallowedItems
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ItemsIn                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          ItemsOut                       (Parm, OutParm, ZeroConstructor)

void AMAGameMode::FilterDisallowedItems(TArray<class UClass*>* ItemsIn, TArray<class UClass*>* ItemsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameMode.FilterDisallowedItems");

	AMAGameMode_FilterDisallowedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsIn != nullptr)
		*ItemsIn = params.ItemsIn;
	if (ItemsOut != nullptr)
		*ItemsOut = params.ItemsOut;
}


// Function Midair.MAPlayerState.UpdateMatchResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FMatchHistory           MatchHistory                   (ConstParm, Parm, ReferenceParm)

void AMAPlayerState::UpdateMatchResult(const struct FMatchHistory& MatchHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.UpdateMatchResult");

	AMAPlayerState_UpdateMatchResult_Params params;
	params.MatchHistory = MatchHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.ServerRequestChangeTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  DesiredTeamId                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::ServerRequestChangeTeam(unsigned char DesiredTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.ServerRequestChangeTeam");

	AMAPlayerState_ServerRequestChangeTeam_Params params;
	params.DesiredTeamId = DesiredTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.RecordCaptureHighlight
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AMAPlayerState::RecordCaptureHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.RecordCaptureHighlight");

	AMAPlayerState_RecordCaptureHighlight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.OnRep_NewSpray
// (Native, Public)

void AMAPlayerState::OnRep_NewSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.OnRep_NewSpray");

	AMAPlayerState_OnRep_NewSpray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.OnRep_LastCauseHitInfo
// (Native, Protected)

void AMAPlayerState::OnRep_LastCauseHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.OnRep_LastCauseHitInfo");

	AMAPlayerState_OnRep_LastCauseHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.NotifyTeamChanged
// (Final, Native, Public)

void AMAPlayerState::NotifyTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.NotifyTeamChanged");

	AMAPlayerState_NotifyTeamChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAPlayerState::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.IsAlive");

	AMAPlayerState_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerState.IncrementKills
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::IncrementKills(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.IncrementKills");

	AMAPlayerState_IncrementKills_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.IncrementDeaths
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::IncrementDeaths(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.IncrementDeaths");

	AMAPlayerState_IncrementDeaths_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.IncrementAssists
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::IncrementAssists(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.IncrementAssists");

	AMAPlayerState_IncrementAssists_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.GetPlayerTalkingState
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerVoiceState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerVoiceState AMAPlayerState::GetPlayerTalkingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.GetPlayerTalkingState");

	AMAPlayerState_GetPlayerTalkingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerState.EndHighlights
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AMAPlayerState::EndHighlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.EndHighlights");

	AMAPlayerState_EndHighlights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.Client_NotifyScoreApplied
// (Net, Native, Event, Public, NetClient)
// Parameters:
// int                            ScoreID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::Client_NotifyScoreApplied(int ScoreID, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.Client_NotifyScoreApplied");

	AMAPlayerState_Client_NotifyScoreApplied_Params params;
	params.ScoreID = ScoreID;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerState.AdjustScore
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerState::AdjustScore(int ScoreAdjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerState.AdjustScore");

	AMAPlayerState_AdjustScore_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Art.Tick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAugment_Art::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Art.Tick");

	UAugment_Art_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Art.SetActive_Visuals
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UAugment_Art::SetActive_Visuals(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Art.SetActive_Visuals");

	UAugment_Art_SetActive_Visuals_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Art.SetActive_Audio
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UAugment_Art::SetActive_Audio(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Art.SetActive_Audio");

	UAugment_Art_SetActive_Audio_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Art.SetActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UAugment_Art::SetActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Art.SetActive");

	UAugment_Art_SetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.ServerUse
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UAugment::ServerUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.ServerUse");

	UAugment_ServerUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.ResetType
// (Final, Native, Public, BlueprintCallable)

void UAugment::ResetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.ResetType");

	UAugment_ResetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnRep_Trigger
// (Final, Native, Protected)

void UAugment::OnRep_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnRep_Trigger");

	UAugment_OnRep_Trigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnRep_Buddies
// (Final, Native, Protected)

void UAugment::OnRep_Buddies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnRep_Buddies");

	UAugment_OnRep_Buddies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnRemoved
// (Event, Protected, BlueprintEvent)

void UAugment::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnRemoved");

	UAugment_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnRemoveBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (Parm, ZeroConstructor, IsPlainOldData)

void UAugment::OnRemoveBuddy(class AMACharacter* Buddy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnRemoveBuddy");

	UAugment_OnRemoveBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnGivenTo
// (Event, Protected, BlueprintEvent)

void UAugment::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnGivenTo");

	UAugment_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnEnergyDepleted
// (Native, Event, Protected, BlueprintEvent)

void UAugment::OnEnergyDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnEnergyDepleted");

	UAugment_OnEnergyDepleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnAddBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (Parm, ZeroConstructor, IsPlainOldData)

void UAugment::OnAddBuddy(class AMACharacter* Buddy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnAddBuddy");

	UAugment_OnAddBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.OnActiveChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            ReceivingCharacter             (Parm, ZeroConstructor, IsPlainOldData)

void UAugment::OnActiveChanged(class AMACharacter* ReceivingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.OnActiveChanged");

	UAugment_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.MakePassive
// (Final, Native, Public, BlueprintCallable)

void UAugment::MakePassive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.MakePassive");

	UAugment_MakePassive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.K2_Draw
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          RenderDelta                    (Parm, ZeroConstructor, IsPlainOldData)

void UAugment::K2_Draw(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.K2_Draw");

	UAugment_K2_Draw_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment.IsReady
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugment::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.IsReady");

	UAugment_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.Augment.GetCurrentEnergyChangeRate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAugment::GetCurrentEnergyChangeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.GetCurrentEnergyChangeRate");

	UAugment_GetCurrentEnergyChangeRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.Augment.GetArtObjectFor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAugment_Art*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAugment_Art* UAugment::GetArtObjectFor(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.GetArtObjectFor");

	UAugment_GetArtObjectFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.Augment.CanBeUsedWith
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  OtherAugmentClass              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugment::CanBeUsedWith(class UClass* OtherAugmentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment.CanBeUsedWith");

	UAugment_CanBeUsedWith_Params params;
	params.OtherAugmentClass = OtherAugmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.Augment_Blink.ReceiveBlinkLocation
// (Native, Public)

void UAugment_Blink::ReceiveBlinkLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Blink.ReceiveBlinkLocation");

	UAugment_Blink_ReceiveBlinkLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Blink.OnBlinkOccured
// (Native, Public)

void UAugment_Blink::OnBlinkOccured()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Blink.OnBlinkOccured");

	UAugment_Blink_OnBlinkOccured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Blink_Art.StopBlink
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAugment_Blink_Art::StopBlink(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Blink_Art.StopBlink");

	UAugment_Blink_Art_StopBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_Blink_Art.StartBlink
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAugment_Blink_Art::StartBlink(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_Blink_Art.StartBlink");

	UAugment_Blink_Art_StartBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_EngineerRegen.StopRegenTimer
// (Native, Public)

void UAugment_EngineerRegen::StopRegenTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_EngineerRegen.StopRegenTimer");

	UAugment_EngineerRegen_StopRegenTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_EngineerRegen.StartRegenTimer
// (Native, Public)

void UAugment_EngineerRegen::StartRegenTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_EngineerRegen.StartRegenTimer");

	UAugment_EngineerRegen_StartRegenTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_FlatShield.OwnerTookDamage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FTakeHitInfo            TakeHitInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAugment_FlatShield::OwnerTookDamage(const struct FTakeHitInfo& TakeHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_FlatShield.OwnerTookDamage");

	UAugment_FlatShield_OwnerTookDamage_Params params;
	params.TakeHitInfo = TakeHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Augment_RepairTool.OnSetRepairTarget
// (Native, Protected)

void UAugment_RepairTool::OnSetRepairTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Augment_RepairTool.OnSetRepairTarget");

	UAugment_RepairTool_OnSetRepairTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAItem.K2_Removed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AMAItem::K2_Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAItem.K2_Removed");

	AMAItem_K2_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAItem.K2_GivenTo
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAItem::K2_GivenTo(class APawn* NewOwner, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAItem.K2_GivenTo");

	AMAItem_K2_GivenTo_Params params;
	params.NewOwner = NewOwner;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAItem.ClientGivenTo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class APawn*                   NewInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAItem::ClientGivenTo(class APawn* NewInstigator, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAItem.ClientGivenTo");

	AMAItem_ClientGivenTo_Params params;
	params.NewInstigator = NewInstigator;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeapon.ResetAmmo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTotal                       (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeapon::ResetAmmo(int NewTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.ResetAmmo");

	AMAWeapon_ResetAmmo_Params params;
	params.NewTotal = NewTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeapon.K2_SetFireInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          From                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          To                             (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeapon::K2_SetFireInterval(float From, float To)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.K2_SetFireInterval");

	AMAWeapon_K2_SetFireInterval_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeapon.K2_GetFireInterval
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          From                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          To                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMAWeapon::K2_GetFireInterval(float* From, float* To)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.K2_GetFireInterval");

	AMAWeapon_K2_GetFireInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (To != nullptr)
		*To = params.To;
}


// Function Midair.MAWeapon.GetAdjustedFireLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 FireLocation                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                FireRotation                   (Parm, OutParm, IsPlainOldData)

void AMAWeapon::GetAdjustedFireLocationAndRotation(struct FVector* FireLocation, struct FRotator* FireRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.GetAdjustedFireLocationAndRotation");

	AMAWeapon_GetAdjustedFireLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireLocation != nullptr)
		*FireLocation = params.FireLocation;
	if (FireRotation != nullptr)
		*FireRotation = params.FireRotation;
}


// Function Midair.MAWeapon.ClientAddAmmo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeapon::ClientAddAmmo(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.ClientAddAmmo");

	AMAWeapon_ClientAddAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeapon.BP_GetReloadCompletion
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAWeapon::BP_GetReloadCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.BP_GetReloadCompletion");

	AMAWeapon_BP_GetReloadCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAWeapon.AddAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMAWeapon::AddAmmo(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeapon.AddAmmo");

	AMAWeapon_AddAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.TrySeatCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehiclePawn::TrySeatCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.TrySeatCharacter");

	AVehiclePawn_TrySeatCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.TryReseatCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatPosition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehiclePawn::TryReseatCharacter(class AMACharacter* Character, int NewSeatPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.TryReseatCharacter");

	AVehiclePawn_TryReseatCharacter_Params params;
	params.Character = Character;
	params.NewSeatPosition = NewSeatPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.ServerSetRelativeControlRotation
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint32_t                       NewControlPitchYaw             (Parm, ZeroConstructor, IsPlainOldData)

void AVehiclePawn::ServerSetRelativeControlRotation(uint32_t NewControlPitchYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.ServerSetRelativeControlRotation");

	AVehiclePawn_ServerSetRelativeControlRotation_Params params;
	params.NewControlPitchYaw = NewControlPitchYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.Server_SetCameraMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// ECameraMode                    NewCameraMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehiclePawn::Server_SetCameraMode(ECameraMode NewCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.Server_SetCameraMode");

	AVehiclePawn_Server_SetCameraMode_Params params;
	params.NewCameraMode = NewCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.RemoveCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehiclePawn::RemoveCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.RemoveCharacter");

	AVehiclePawn_RemoveCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.PostNetReceivePhysicState
// (Native, Public)

void AVehiclePawn::PostNetReceivePhysicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.PostNetReceivePhysicState");

	AVehiclePawn_PostNetReceivePhysicState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnRep_ThrustInput
// (Native, Protected)

void AVehiclePawn::OnRep_ThrustInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnRep_ThrustInput");

	AVehiclePawn_OnRep_ThrustInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnRep_StickInput
// (Native, Protected)

void AVehiclePawn::OnRep_StickInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnRep_StickInput");

	AVehiclePawn_OnRep_StickInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnRep_SpawningTeamId
// (Native, Public)

void AVehiclePawn::OnRep_SpawningTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnRep_SpawningTeamId");

	AVehiclePawn_OnRep_SpawningTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnRep_ControlPitchYaw
// (Native, Protected)

void AVehiclePawn::OnRep_ControlPitchYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnRep_ControlPitchYaw");

	AVehiclePawn_OnRep_ControlPitchYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVehiclePawn::OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnHit");

	AVehiclePawn_OnHit_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.OnDeath
// (Native, Protected)

void AVehiclePawn::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.OnDeath");

	AVehiclePawn_OnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.NetMulticast_FireWeaponComponent
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UVehicleWeaponComponent* WeaponComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  FireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AVehiclePawn::NetMulticast_FireWeaponComponent(class UVehicleWeaponComponent* WeaponComponent, unsigned char FireIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.NetMulticast_FireWeaponComponent");

	AVehiclePawn_NetMulticast_FireWeaponComponent_Params params;
	params.WeaponComponent = WeaponComponent;
	params.FireIndex = FireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehiclePawn.HasRoomForCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehiclePawn::HasRoomForCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.HasRoomForCharacter");

	AVehiclePawn_HasRoomForCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.HasAnyOccupiedSeat
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehiclePawn::HasAnyOccupiedSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.HasAnyOccupiedSeat");

	AVehiclePawn_HasAnyOccupiedSeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.GetSeats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVehicleSeatComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVehicleSeatComponent*> AVehiclePawn::GetSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.GetSeats");

	AVehiclePawn_GetSeats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.GetSeatForWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehicleWeaponComponent* Weapon                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVehicleSeatComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeatComponent* AVehiclePawn::GetSeatForWeapon(class UVehicleWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.GetSeatForWeapon");

	AVehiclePawn_GetSeatForWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.GetAllPossibleWeaponsForSeat
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleSeatComponent*   Seat                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UVehicleWeaponComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVehicleWeaponComponent*> AVehiclePawn::GetAllPossibleWeaponsForSeat(class UVehicleSeatComponent* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.GetAllPossibleWeaponsForSeat");

	AVehiclePawn_GetAllPossibleWeaponsForSeat_Params params;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.FindOccupiedSeat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeatComponent* AVehiclePawn::FindOccupiedSeat(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.FindOccupiedSeat");

	AVehiclePawn_FindOccupiedSeat_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.FindAvailableSeat
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeatComponent* AVehiclePawn::FindAvailableSeat(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.FindAvailableSeat");

	AVehiclePawn_FindAvailableSeat_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehiclePawn.CanReseatCharacter
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatPosition                (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeatComponent* AVehiclePawn::CanReseatCharacter(class AMACharacter* Character, int NewSeatPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehiclePawn.CanReseatCharacter");

	AVehiclePawn_CanReseatCharacter_Params params;
	params.Character = Character;
	params.NewSeatPosition = NewSeatPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.Bomber.ApplyCustomLift
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABomber::ApplyCustomLift(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Bomber.ApplyCustomLift");

	ABomber_ApplyCustomLift_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.Bomber.ApplyCustomAero
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABomber::ApplyCustomAero(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.Bomber.ApplyCustomAero");

	ABomber_ApplyCustomAero_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.ReleaseOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 CurrentOwner                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChatWidget::ReleaseOwnership(class UWidget* CurrentOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.ReleaseOwnership");

	UChatWidget_ReleaseOwnership_Params params;
	params.CurrentOwner = CurrentOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.ReleaseFocus
// (Final, Native, Public, BlueprintCallable)

void UChatWidget::ReleaseFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.ReleaseFocus");

	UChatWidget_ReleaseFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.ReceiveMessage
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FLinearColor            NameColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UChatWidget::ReceiveMessage(const struct FString& PlayerName, const struct FLinearColor& NameColor, const struct FString& Message, const struct FLinearColor& MessageColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.ReceiveMessage");

	UChatWidget_ReceiveMessage_Params params;
	params.PlayerName = PlayerName;
	params.NameColor = NameColor;
	params.Message = Message;
	params.MessageColor = MessageColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.OnFocusPrompt
// (Event, Protected, BlueprintEvent)

void UChatWidget::OnFocusPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.OnFocusPrompt");

	UChatWidget_OnFocusPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.FocusPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget::FocusPrompt(bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.FocusPrompt");

	UChatWidget_FocusPrompt_Params params;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.CommitMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UChatWidget::CommitMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.CommitMessage");

	UChatWidget_CommitMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.ClaimOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 NewOwner                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChatWidget::ClaimOwnership(class UWidget* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.ClaimOwnership");

	UChatWidget_ClaimOwnership_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ChatWidget.AddMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void UChatWidget::AddMessage(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ChatWidget.AddMessage");

	UChatWidget_AddMessage_Params params;
	params.Speaker = Speaker;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetValue2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UComplexStatusBar::SetValue2(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetValue2");

	UComplexStatusBar_SetValue2_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetValue1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UComplexStatusBar::SetValue1(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetValue1");

	UComplexStatusBar_SetValue1_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData)

void UComplexStatusBar::SetIsMarquee(bool InbIsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetIsMarquee");

	UComplexStatusBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetFillMarkerColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void UComplexStatusBar::SetFillMarkerColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetFillMarkerColorAndOpacity");

	UComplexStatusBar_SetFillMarkerColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetFillColorAndOpacity2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void UComplexStatusBar::SetFillColorAndOpacity2(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetFillColorAndOpacity2");

	UComplexStatusBar_SetFillColorAndOpacity2_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ComplexStatusBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void UComplexStatusBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ComplexStatusBar.SetFillColorAndOpacity");

	UComplexStatusBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ConfigurableOOBVolume.PlayOOBEffects
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                  ActorExiting                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)

void AConfigurableOOBVolume::PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ConfigurableOOBVolume.PlayOOBEffects");

	AConfigurableOOBVolume_PlayOOBEffects_Params params;
	params.ActorExiting = ActorExiting;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ConfigurableOOBVolume.CheckForCarriedObject
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BodyIndexbool                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AConfigurableOOBVolume::CheckForCarriedObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ConfigurableOOBVolume.CheckForCarriedObject");

	AConfigurableOOBVolume_CheckForCarriedObject_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndexbool = BodyIndexbool;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ConfigurableOOBVolume.BP_PlayOOBEffects
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  ActorExiting                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 WallNormal                     (Parm, IsPlainOldData)

void AConfigurableOOBVolume::BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ConfigurableOOBVolume.BP_PlayOOBEffects");

	AConfigurableOOBVolume_BP_PlayOOBEffects_Params params;
	params.ActorExiting = ActorExiting;
	params.Location = Location;
	params.WallNormal = WallNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.DirectHotkey.HandleNamedHotkeyWithInt
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (Parm, ZeroConstructor)
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDirectHotkey::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.DirectHotkey.HandleNamedHotkeyWithInt");

	UDirectHotkey_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.DirectHotkey.HandleDirectNamedHotkey
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDirectHotkey::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.DirectHotkey.HandleDirectNamedHotkey");

	UDirectHotkey_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MABackpack.Use
// (Native, Public, BlueprintCallable)

void AMABackpack::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MABackpack.Use");

	AMABackpack_Use_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MABackpack.OnRep_Augments
// (Native, Protected)

void AMABackpack::OnRep_Augments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MABackpack.OnRep_Augments");

	AMABackpack_OnRep_Augments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.EngineerPack.UseRepairAugment
// (Native, Public, BlueprintCallable)

void AEngineerPack::UseRepairAugment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.UseRepairAugment");

	AEngineerPack_UseRepairAugment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.EngineerPack.ServerChangeOwnerDeployable
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  Deployable                     (Parm, ZeroConstructor, IsPlainOldData)

void AEngineerPack::ServerChangeOwnerDeployable(class UClass* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.ServerChangeOwnerDeployable");

	AEngineerPack_ServerChangeOwnerDeployable_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.EngineerPack.RemoveUsedCharges
// (Final, Native, Public)

void AEngineerPack::RemoveUsedCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.RemoveUsedCharges");

	AEngineerPack_RemoveUsedCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.EngineerPack.HasEnoughChargesForDeployable
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Deployable                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEngineerPack::HasEnoughChargesForDeployable(class UClass* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.HasEnoughChargesForDeployable");

	AEngineerPack_HasEnoughChargesForDeployable_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.EngineerPack.CheckAndHandleDeployableSpawn
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Deployable                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEngineerPack::CheckAndHandleDeployableSpawn(class UClass* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.CheckAndHandleDeployableSpawn");

	AEngineerPack_CheckAndHandleDeployableSpawn_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.EngineerPack.BindForDeployerUpdate
// (Final, Native, Public)

void AEngineerPack::BindForDeployerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.EngineerPack.BindForDeployerUpdate");

	AEngineerPack_BindForDeployerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.FighterVehicle.ApplyCustomLift
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AFighterVehicle::ApplyCustomLift(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.FighterVehicle.ApplyCustomLift");

	AFighterVehicle_ApplyCustomLift_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.Timeout
// (Native, Public, BlueprintCallable)

void AMAProjectile::Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.Timeout");

	AMAProjectile_Timeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.Stopped
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAProjectile::Stopped(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.Stopped");

	AMAProjectile_Stopped_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.SphereTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAProjectile::SphereTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.SphereTouched");

	AMAProjectile_SphereTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.ShutDown
// (Native, Public, BlueprintCallable)

void AMAProjectile::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.ShutDown");

	AMAProjectile_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.ProcessHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAProjectile::ProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.ProcessHit");

	AMAProjectile_ProcessHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.OnRep_TeamID
// (Event, Protected, BlueprintEvent)

void AMAProjectile::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.OnRep_TeamID");

	AMAProjectile_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.OnRep_LastSurfaceImpact
// (Native, Public)

void AMAProjectile::OnRep_LastSurfaceImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.OnRep_LastSurfaceImpact");

	AMAProjectile_OnRep_LastSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.OnRep_CurrentStage
// (Native, Public)

void AMAProjectile::OnRep_CurrentStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.OnRep_CurrentStage");

	AMAProjectile_OnRep_CurrentStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.LockInPlace
// (Native, Protected)

void AMAProjectile::LockInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.LockInPlace");

	AMAProjectile_LockInPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.GetHomingTargetLocation
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAProjectile::GetHomingTargetLocation(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.GetHomingTargetLocation");

	AMAProjectile_GetHomingTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;

	return params.ReturnValue;
}


// Function Midair.MAProjectile.Explode
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMAProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.Explode");

	AMAProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.DamageImpactedActor
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAProjectile::DamageImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.DamageImpactedActor");

	AMAProjectile_DamageImpactedActor_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.CatchUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAProjectile::CatchUp(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.CatchUp");

	AMAProjectile_CatchUp_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.BP_StartArm
// (Event, Protected, BlueprintEvent)

void AMAProjectile::BP_StartArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.BP_StartArm");

	AMAProjectile_BP_StartArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.BP_FinishedArm
// (Event, Protected, BlueprintEvent)

void AMAProjectile::BP_FinishedArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.BP_FinishedArm");

	AMAProjectile_BP_FinishedArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.BP_Activate
// (Event, Protected, BlueprintEvent)

void AMAProjectile::BP_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.BP_Activate");

	AMAProjectile_BP_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAProjectile.Bounced
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAProjectile::Bounced(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAProjectile.Bounced");

	AMAProjectile_Bounced_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.GetCurrentUserStatsAsyncTask.GetCurrentUserStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGetCurrentUserStatsAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetCurrentUserStatsAsyncTask* UGetCurrentUserStatsAsyncTask::STATIC_GetCurrentUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetCurrentUserStatsAsyncTask.GetCurrentUserStats");

	UGetCurrentUserStatsAsyncTask_GetCurrentUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.GetCurrentUserStatsAsyncTask.Activate
// (Native, Public, BlueprintCallable)

void UGetCurrentUserStatsAsyncTask::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetCurrentUserStatsAsyncTask.Activate");

	UGetCurrentUserStatsAsyncTask_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.GetDemoAsyncTask.PlayDemo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DemoId                         (Parm, ZeroConstructor)
// bool                           PlayDemo                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGetDemoAsyncTask*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetDemoAsyncTask* UGetDemoAsyncTask::STATIC_PlayDemo(const struct FString& DemoId, bool PlayDemo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetDemoAsyncTask.PlayDemo");

	UGetDemoAsyncTask_PlayDemo_Params params;
	params.DemoId = DemoId;
	params.PlayDemo = PlayDemo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   LeaboardName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMALeaderboardRequest> LeaderboardRequest             (Parm, ZeroConstructor, IsPlainOldData)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DetailCount                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGetLeaderBoardEntriesAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetLeaderBoardEntriesAsyncTask* UGetLeaderBoardEntriesAsyncTask::STATIC_GetLeaderBoardEntries(const struct FName& LeaboardName, const struct FName& GameMode, TEnumAsByte<EMALeaderboardRequest> LeaderboardRequest, int RangeStart, int RangeEnd, int DetailCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries");

	UGetLeaderBoardEntriesAsyncTask_GetLeaderBoardEntries_Params params;
	params.LeaboardName = LeaboardName;
	params.GameMode = GameMode;
	params.LeaderboardRequest = LeaderboardRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.DetailCount = DetailCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.GetMatchHistoryAsyncTask.GetMatchHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGetMatchHistoryAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetMatchHistoryAsyncTask* UGetMatchHistoryAsyncTask::STATIC_GetMatchHistory(class APlayerController* PlayerController, const struct FName& GameMode, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetMatchHistoryAsyncTask.GetMatchHistory");

	UGetMatchHistoryAsyncTask_GetMatchHistory_Params params;
	params.PlayerController = PlayerController;
	params.GameMode = GameMode;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.GetMatchHistoryAsyncTask.Activate
// (Native, Public, BlueprintCallable)

void UGetMatchHistoryAsyncTask::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetMatchHistoryAsyncTask.Activate");

	UGetMatchHistoryAsyncTask_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.GetUserStatsAsyncTask.GetUserStats
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMASteamId              SteamId                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// class UGetUserStatsAsyncTask*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGetUserStatsAsyncTask* UGetUserStatsAsyncTask::STATIC_GetUserStats(const struct FMASteamId& SteamId, const struct FString& GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.GetUserStatsAsyncTask.GetUserStats");

	UGetUserStatsAsyncTask_GetUserStats_Params params;
	params.SteamId = SteamId;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.HeatseekerMissile.OnStartNewStage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            NewStage                       (Parm, ZeroConstructor, IsPlainOldData)

void AHeatseekerMissile::OnStartNewStage(int NewStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HeatseekerMissile.OnStartNewStage");

	AHeatseekerMissile_OnStartNewStage_Params params;
	params.NewStage = NewStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HeatseekerMissile.OnRep_CurrentTarget
// (Native, Public)

void AHeatseekerMissile::OnRep_CurrentTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HeatseekerMissile.OnRep_CurrentTarget");

	AHeatseekerMissile_OnRep_CurrentTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.UpdateTeamColors
// (Native, Public)

void AMAAsset::UpdateTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.UpdateTeamColors");

	AMAAsset_UpdateTeamColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.StatusChanged
// (Native, Protected)

void AMAAsset::StatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.StatusChanged");

	AMAAsset_StatusChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.SetPowered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsPowered                   (Parm, ZeroConstructor, IsPlainOldData)

void AMAAsset::SetPowered(bool bInIsPowered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.SetPowered");

	AMAAsset_SetPowered_Params params;
	params.bInIsPowered = bInIsPowered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.OnRevived
// (Native, Protected)

void AMAAsset::OnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.OnRevived");

	AMAAsset_OnRevived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.OnHealthChanged
// (Native, Protected)
// Parameters:
// bool                           bFromDamage                    (Parm, ZeroConstructor, IsPlainOldData)

void AMAAsset::OnHealthChanged(bool bFromDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.OnHealthChanged");

	AMAAsset_OnHealthChanged_Params params;
	params.bFromDamage = bFromDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.OnDied
// (Native, Protected)

void AMAAsset::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.OnDied");

	AMAAsset_OnDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAAsset.IsPowered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAAsset::IsPowered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.IsPowered");

	AMAAsset_IsPowered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAAsset.IsAlive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAAsset::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.IsAlive");

	AMAAsset_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAAsset.HasLowHealth
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAAsset::HasLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.HasLowHealth");

	AMAAsset_HasLowHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAAsset.GetPlacementVisualRadius
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAAsset::GetPlacementVisualRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAAsset.GetPlacementVisualRadius");

	AMAAsset_GetPlacementVisualRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATurretAsset.TryTargetLost
// (Native, Protected)
// Parameters:
// class UTargetComponent*        Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMATurretAsset::TryTargetLost(class UTargetComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.TryTargetLost");

	AMATurretAsset_TryTargetLost_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATurretAsset.TargetDroppedFromSensorChannel
// (Native, Protected)
// Parameters:
// class UTargetComponent*        Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void AMATurretAsset::TargetDroppedFromSensorChannel(class UTargetComponent* Target, unsigned char Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.TargetDroppedFromSensorChannel");

	AMATurretAsset_TargetDroppedFromSensorChannel_Params params;
	params.Target = Target;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATurretAsset.TargetAcquired
// (Native, Protected)

void AMATurretAsset::TargetAcquired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.TargetAcquired");

	AMATurretAsset_TargetAcquired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATurretAsset.OnTargetUpdated
// (Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (Parm)

void AMATurretAsset::OnTargetUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.OnTargetUpdated");

	AMATurretAsset_OnTargetUpdated_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATurretAsset.OnPerceptionUpdated
// (Native, Protected)
// Parameters:
// TArray<class AActor*>          UpdatedActors                  (Parm, ZeroConstructor)

void AMATurretAsset::OnPerceptionUpdated(TArray<class AActor*> UpdatedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.OnPerceptionUpdated");

	AMATurretAsset_OnPerceptionUpdated_Params params;
	params.UpdatedActors = UpdatedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATurretAsset.NetMulticast_FireProjectiles
// (Net, Native, Event, NetMulticast, Public)

void AMATurretAsset::NetMulticast_FireProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATurretAsset.NetMulticast_FireProjectiles");

	AMATurretAsset_NetMulticast_FireProjectiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HeatseekerTurret.TargetBelowMinLockHeat
// (Final, Native, Private)

void AHeatseekerTurret::TargetBelowMinLockHeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HeatseekerTurret.TargetBelowMinLockHeat");

	AHeatseekerTurret_TargetBelowMinLockHeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HoverTankVehicle.ServerSetActiveSiege
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AHoverTankVehicle::ServerSetActiveSiege(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HoverTankVehicle.ServerSetActiveSiege");

	AHoverTankVehicle_ServerSetActiveSiege_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HoverTankVehicle.OnEnterNewTankMode
// (Native, Event, Public, BlueprintEvent)

void AHoverTankVehicle::OnEnterNewTankMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HoverTankVehicle.OnEnterNewTankMode");

	AHoverTankVehicle_OnEnterNewTankMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HoverTankVehicle.EnterNewTankMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ETankMode                      NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AHoverTankVehicle::EnterNewTankMode(ETankMode NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HoverTankVehicle.EnterNewTankMode");

	AHoverTankVehicle_EnterNewTankMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.HoverTankVehicle.AbortSiege
// (Native, Public, BlueprintCallable)

void AHoverTankVehicle::AbortSiege()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.HoverTankVehicle.AbortSiege");

	AHoverTankVehicle_AbortSiege_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.LoadingScreenWidget.GetTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULoadingScreenWidget::GetTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadingScreenWidget.GetTip");

	ULoadingScreenWidget_GetTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadingScreenWidget.GetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULoadingScreenWidget::GetMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadingScreenWidget.GetMapName");

	ULoadingScreenWidget_GetMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadingScreenWidget.GetMapLore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULoadingScreenWidget::GetMapLore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadingScreenWidget.GetMapLore");

	ULoadingScreenWidget_GetMapLore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadingScreenWidget.GetBackground
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ULoadingScreenWidget::GetBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadingScreenWidget.GetBackground");

	ULoadingScreenWidget_GetBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadoutPreview.UpdateSelectionPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectInfoClass                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CosmeticCustomization          (Parm, ZeroConstructor, IsPlainOldData)
// class ACosmeticConfiguration*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACosmeticConfiguration* ALoadoutPreview::STATIC_UpdateSelectionPreview(class UClass* ObjectInfoClass, class UClass* CosmeticCustomization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadoutPreview.UpdateSelectionPreview");

	ALoadoutPreview_UpdateSelectionPreview_Params params;
	params.ObjectInfoClass = ObjectInfoClass;
	params.CosmeticCustomization = CosmeticCustomization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadoutPreview.GetWorldLoadoutPreview
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ALoadoutPreview*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALoadoutPreview* ALoadoutPreview::STATIC_GetWorldLoadoutPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadoutPreview.GetWorldLoadoutPreview");

	ALoadoutPreview_GetWorldLoadoutPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.LoadoutPreview.GetCharacterLookAtLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ALoadoutPreview::GetCharacterLookAtLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.LoadoutPreview.GetCharacterLookAtLocation");

	ALoadoutPreview_GetCharacterLookAtLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MABeamProjectile.UpdateSpawnLocation
// (Native, Public)

void AMABeamProjectile::UpdateSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MABeamProjectile.UpdateSpawnLocation");

	AMABeamProjectile_UpdateSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.UpdateCameraDist
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          CameraDistPct                  (Parm, ZeroConstructor, IsPlainOldData)

void AMACarriedObject::UpdateCameraDist(float CameraDistPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.UpdateCameraDist");

	AMACarriedObject_UpdateCameraDist_Params params;
	params.CameraDistPct = CameraDistPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.TeamChanged
// (Native, Event, Protected, BlueprintEvent)

void AMACarriedObject::TeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.TeamChanged");

	AMACarriedObject_TeamChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.StateChanged
// (Native, Public)

void AMACarriedObject::StateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.StateChanged");

	AMACarriedObject_StateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.OnRep_RemainingAutoReturnTime
// (Native, Public)

void AMACarriedObject::OnRep_RemainingAutoReturnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.OnRep_RemainingAutoReturnTime");

	AMACarriedObject_OnRep_RemainingAutoReturnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.OnRep_RemainingAutoReturnSyncTime
// (Native, Public)

void AMACarriedObject::OnRep_RemainingAutoReturnSyncTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.OnRep_RemainingAutoReturnSyncTime");

	AMACarriedObject_OnRep_RemainingAutoReturnSyncTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.OnRep_MAReplicatedMovement
// (Native, Public)

void AMACarriedObject::OnRep_MAReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.OnRep_MAReplicatedMovement");

	AMACarriedObject_OnRep_MAReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.IsInState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InStateName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACarriedObject::IsInState(const struct FName& InStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.IsInState");

	AMACarriedObject_IsInState_Params params;
	params.InStateName = InStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACarriedObject.IsHome
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACarriedObject::IsHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.IsHome");

	AMACarriedObject_IsHome_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACarriedObject.HolderChanged
// (Native, Protected)

void AMACarriedObject::HolderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.HolderChanged");

	AMACarriedObject_HolderChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.ChangeState
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AMACarriedObject::ChangeState(const struct FName& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.ChangeState");

	AMACarriedObject_ChangeState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.CatchUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMACarriedObject::CatchUp(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.CatchUp");

	AMACarriedObject_CatchUp_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.CapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMACarriedObject::CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.CapsuleTouched");

	AMACarriedObject_CapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.AutoReturnTimer
// (Native, Public)

void AMACarriedObject::AutoReturnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.AutoReturnTimer");

	AMACarriedObject_AutoReturnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObject.AssistCapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMACarriedObject::AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObject.AssistCapsuleTouched");

	AMACarriedObject_AssistCapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObjectBase.ObjectStateChanged
// (Native, Public)

void AMACarriedObjectBase::ObjectStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObjectBase.ObjectStateChanged");

	AMACarriedObjectBase_ObjectStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObjectBase.ObjectChanged
// (Native, Protected)

void AMACarriedObjectBase::ObjectChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObjectBase.ObjectChanged");

	AMACarriedObjectBase_ObjectChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACarriedObjectOOBVolume.OnCarriedObjectOOB
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMACarriedObjectOOBVolume::OnCarriedObjectOOB(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACarriedObjectOOBVolume.OnCarriedObjectOOB");

	AMACarriedObjectOOBVolume_OnCarriedObjectOOB_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndex = BodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ZoomUpdated
// (Native, Public)

void AMACharacter::ZoomUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ZoomUpdated");

	AMACharacter_ZoomUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.WeaponActivityUpdated
// (Native, Public)

void AMACharacter::WeaponActivityUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.WeaponActivityUpdated");

	AMACharacter_WeaponActivityUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.Vocalize
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::Vocalize(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.Vocalize");

	AMACharacter_Vocalize_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.UsePack
// (Final, Exec, Native, Public)

void AMACharacter::UsePack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.UsePack");

	AMACharacter_UsePack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.UpdateWeaponAttachment
// (Native, Public)

void AMACharacter::UpdateWeaponAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.UpdateWeaponAttachment");

	AMACharacter_UpdateWeaponAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.UpdateVisualsToMatchCosmeticCustomizations
// (Final, Native, Public)

void AMACharacter::UpdateVisualsToMatchCosmeticCustomizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.UpdateVisualsToMatchCosmeticCustomizations");

	AMACharacter_UpdateVisualsToMatchCosmeticCustomizations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.UpdateForClientPerspective
// (Final, Native, Public, BlueprintCallable)

void AMACharacter::UpdateForClientPerspective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.UpdateForClientPerspective");

	AMACharacter_UpdateForClientPerspective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.UpdateCameraDist
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          CameraDistPct                  (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::UpdateCameraDist(float CameraDistPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.UpdateCameraDist");

	AMACharacter_UpdateCameraDist_Params params;
	params.CameraDistPct = CameraDistPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.TryPurchaseVehicleAtIndex
// (Native, Protected, BlueprintCallable)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::TryPurchaseVehicleAtIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.TryPurchaseVehicleAtIndex");

	AMACharacter_TryPurchaseVehicleAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.TryExitVehicle
// (Final, Native, Public, BlueprintCallable)

void AMACharacter::TryExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.TryExitVehicle");

	AMACharacter_TryExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.TryEnterVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::TryEnterVehicle(class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.TryEnterVehicle");

	AMACharacter_TryEnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.TossFlag
// (Final, Exec, Native, Public)

void AMACharacter::TossFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.TossFlag");

	AMACharacter_TossFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.TossCarriedObject
// (Exec, Native, Public)

void AMACharacter::TossCarriedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.TossCarriedObject");

	AMACharacter_TossCarriedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ToggleZoom
// (Native, Public, BlueprintCallable)

void AMACharacter::ToggleZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ToggleZoom");

	AMACharacter_ToggleZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ToggleTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::ToggleTrigger(unsigned char FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ToggleTrigger");

	AMACharacter_ToggleTrigger_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SwitchToWeaponAtIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::SwitchToWeaponAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwitchToWeaponAtIndex");

	AMACharacter_SwitchToWeaponAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.SwitchToWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMAWeapon*               NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::SwitchToWeapon(class AMAWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwitchToWeapon");

	AMACharacter_SwitchToWeapon_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.SwitchToNextWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::SwitchToNextWeapon(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwitchToNextWeapon");

	AMACharacter_SwitchToNextWeapon_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.SwitchToDeployerWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::SwitchToDeployerWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwitchToDeployerWeapon");

	AMACharacter_SwitchToDeployerWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.SwitchToDeployable
// (Final, Native, Public)
// Parameters:
// class UClass*                  Deployable                     (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::SwitchToDeployable(class UClass* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwitchToDeployable");

	AMACharacter_SwitchToDeployable_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SwapTriggerBuffers
// (Final, Native, Public, BlueprintCallable)

void AMACharacter::SwapTriggerBuffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SwapTriggerBuffers");

	AMACharacter_SwapTriggerBuffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.Suicide
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.Suicide");

	AMACharacter_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.StopSkating
// (Native, Public, BlueprintCallable)

void AMACharacter::StopSkating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StopSkating");

	AMACharacter_StopSkating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.StopPurchaseVehicle
// (Native, Public, BlueprintCallable)

void AMACharacter::StopPurchaseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StopPurchaseVehicle");

	AMACharacter_StopPurchaseVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.StopPickup
// (Native, Public, BlueprintCallable)

void AMACharacter::StopPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StopPickup");

	AMACharacter_StopPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.StopJetting
// (Native, Public, BlueprintCallable)

void AMACharacter::StopJetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StopJetting");

	AMACharacter_StopJetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.StartPickup
// (Native, Public, BlueprintCallable)

void AMACharacter::StartPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StartPickup");

	AMACharacter_StartPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.StartInvulnerability
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::StartInvulnerability(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.StartInvulnerability");

	AMACharacter_StartInvulnerability_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.Skate
// (Native, Public, BlueprintCallable)

void AMACharacter::Skate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.Skate");

	AMACharacter_Skate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSet                           (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::SetTrigger(unsigned char FireMode, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SetTrigger");

	AMACharacter_SetTrigger_Params params;
	params.FireMode = FireMode;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SetOverrideMaterials");

	AMACharacter_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SetLoadout
// (Native, Public, HasOutParms)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSetMaxes                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBaseInventory               (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::SetLoadout(const struct FMALoadout& Loadout, bool bSetMaxes, bool bIsBaseInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SetLoadout");

	AMACharacter_SetLoadout_Params params;
	params.Loadout = Loadout;
	params.bSetMaxes = bSetMaxes;
	params.bIsBaseInventory = bIsBaseInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.SetCameraMode
// (Native, Public, BlueprintCallable)
// Parameters:
// ECameraMode                    InCameraMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::SetCameraMode(ECameraMode InCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.SetCameraMode");

	AMACharacter_SetCameraMode_Params params;
	params.InCameraMode = InCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerTrySpecificPickup
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AMAPickup*               Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::ServerTrySpecificPickup(class AMAPickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerTrySpecificPickup");

	AMACharacter_ServerTrySpecificPickup_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerTryPurchaseVehicleAtIndex
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AVehicleSpawnPad*        VehiclePad                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::ServerTryPurchaseVehicleAtIndex(class AVehicleSpawnPad* VehiclePad, unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerTryPurchaseVehicleAtIndex");

	AMACharacter_ServerTryPurchaseVehicleAtIndex_Params params;
	params.VehiclePad = VehiclePad;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerTryExitVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMACharacter::ServerTryExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerTryExitVehicle");

	AMACharacter_ServerTryExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerTryEnterVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::ServerTryEnterVehicle(class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerTryEnterVehicle");

	AMACharacter_ServerTryEnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerTossCarriedObject
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMACharacter::ServerTossCarriedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerTossCarriedObject");

	AMACharacter_ServerTossCarriedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ServerSetCameraMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// ECameraMode                    InCameraMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::ServerSetCameraMode(ECameraMode InCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ServerSetCameraMode");

	AMACharacter_ServerSetCameraMode_Params params;
	params.InCameraMode = InCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.Server_UseSpray
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMACharacter::Server_UseSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.Server_UseSpray");

	AMACharacter_Server_UseSpray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.RemoveItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAItem*                 ItemToRemove                   (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::RemoveItem(class AMAItem* ItemToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.RemoveItem");

	AMACharacter_RemoveItem_Params params;
	params.ItemToRemove = ItemToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.PlayCameraShake
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayInUserSpace               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                UserSpaceRot                   (Parm, IsPlainOldData)

void AMACharacter::PlayCameraShake(class UClass* Shake, float Scale, bool bPlayInUserSpace, const struct FRotator& UserSpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.PlayCameraShake");

	AMACharacter_PlayCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.bPlayInUserSpace = bPlayInUserSpace;
	params.UserSpaceRot = UserSpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnTookDamage
// (Native, Public, HasOutParms)
// Parameters:
// struct FTakeHitInfo            TakeHitInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void AMACharacter::OnTookDamage(const struct FTakeHitInfo& TakeHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnTookDamage");

	AMACharacter_OnTookDamage_Params params;
	params.TakeHitInfo = TakeHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_ReplicatedAccelInfo
// (Native, Public)

void AMACharacter::OnRep_ReplicatedAccelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_ReplicatedAccelInfo");

	AMACharacter_OnRep_ReplicatedAccelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_PressedJet
// (Native, Public)

void AMACharacter::OnRep_PressedJet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_PressedJet");

	AMACharacter_OnRep_PressedJet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_MAReplicatedMovement
// (Native, Public)

void AMACharacter::OnRep_MAReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_MAReplicatedMovement");

	AMACharacter_OnRep_MAReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_LMS
// (Final, Native, Public)

void AMACharacter::OnRep_LMS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_LMS");

	AMACharacter_OnRep_LMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_LastAttachedSurfaceImpact
// (Final, Native, Public)

void AMACharacter::OnRep_LastAttachedSurfaceImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_LastAttachedSurfaceImpact");

	AMACharacter_OnRep_LastAttachedSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnRep_IsSkating
// (Native, Public)

void AMACharacter::OnRep_IsSkating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnRep_IsSkating");

	AMACharacter_OnRep_IsSkating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnPurchasedVehicleSpawned
// (Final, Native, Protected)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::OnPurchasedVehicleSpawned(class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnPurchasedVehicleSpawned");

	AMACharacter_OnPurchasedVehicleSpawned_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnHealthChanged
// (Native, Public)
// Parameters:
// bool                           bFromDamage                    (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::OnHealthChanged(bool bFromDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnHealthChanged");

	AMACharacter_OnHealthChanged_Params params;
	params.bFromDamage = bFromDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnFootStep
// (Native, Public, BlueprintCallable)

void AMACharacter::OnFootStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnFootStep");

	AMACharacter_OnFootStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnEnergyDamage
// (Native, Public)

void AMACharacter::OnEnergyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnEnergyDamage");

	AMACharacter_OnEnergyDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.OnDied
// (Native, Protected)

void AMACharacter::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.OnDied");

	AMACharacter_OnDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.K2_FindItem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExactClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AMAItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAItem* AMACharacter::K2_FindItem(class UClass* Type, bool bExactClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.K2_FindItem");

	AMACharacter_K2_FindItem_Params params;
	params.Type = Type;
	params.bExactClass = bExactClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.K2_CreateItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewItemClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// class AMAItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAItem* AMACharacter::K2_CreateItem(class UClass* NewItemClass, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.K2_CreateItem");

	AMACharacter_K2_CreateItem_Params params;
	params.NewItemClass = NewItemClass;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.Jet
// (Native, Public, BlueprintCallable)

void AMACharacter::Jet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.Jet");

	AMACharacter_Jet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.IsTriggerSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::IsTriggerSet(unsigned char FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.IsTriggerSet");

	AMACharacter_IsTriggerSet_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.IsInInventory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMAItem*                 ItemToFind                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::IsInInventory(class AMAItem* ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.IsInInventory");

	AMACharacter_IsInInventory_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.IsDead");

	AMACharacter_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.IsAccelerating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::IsAccelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.IsAccelerating");

	AMACharacter_IsAccelerating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetWantsOrderVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::GetWantsOrderVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetWantsOrderVehicle");

	AMACharacter_GetWantsOrderVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetRemoteViewPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetRemoteViewPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetRemoteViewPitch");

	AMACharacter_GetRemoteViewPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetIsWarpingOut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::GetIsWarpingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetIsWarpingOut");

	AMACharacter_GetIsWarpingOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetHealthPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetHealthPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetHealthPct");

	AMACharacter_GetHealthPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetHealth");

	AMACharacter_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetEnergyPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetEnergyPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetEnergyPct");

	AMACharacter_GetEnergyPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetEnergy");

	AMACharacter_GetEnergy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.GetAccelerationYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMACharacter::GetAccelerationYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.GetAccelerationYaw");

	AMACharacter_GetAccelerationYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.EndInvulnerability
// (Native, Public, BlueprintCallable)

void AMACharacter::EndInvulnerability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.EndInvulnerability");

	AMACharacter_EndInvulnerability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.DiscardInventory
// (Native, Public, BlueprintCallable)

void AMACharacter::DiscardInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.DiscardInventory");

	AMACharacter_DiscardInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.CycleZoom
// (Native, Public, BlueprintCallable)

void AMACharacter::CycleZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.CycleZoom");

	AMACharacter_CycleZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ClientLoadoutRefreshed
// (Net, NetReliable, Native, Event, Public, NetClient)

void AMACharacter::ClientLoadoutRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ClientLoadoutRefreshed");

	AMACharacter_ClientLoadoutRefreshed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.ClearTriggers
// (Final, Native, Public, BlueprintCallable)

void AMACharacter::ClearTriggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.ClearTriggers");

	AMACharacter_ClearTriggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.CleanupDeadBody
// (Native, Protected)

void AMACharacter::CleanupDeadBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.CleanupDeadBody");

	AMACharacter_CleanupDeadBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.CameraShakeUpdated
// (Native, Public)

void AMACharacter::CameraShakeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.CameraShakeUpdated");

	AMACharacter_CameraShakeUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.BP_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::BP_UpdateForClientPerspective(bool bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_UpdateForClientPerspective");

	AMACharacter_BP_UpdateForClientPerspective_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.BP_StartPurchaseVehicle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AVehicleSpawnPad*        SpawnPad                       (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::BP_StartPurchaseVehicle(class AVehicleSpawnPad* SpawnPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_StartPurchaseVehicle");

	AMACharacter_BP_StartPurchaseVehicle_Params params;
	params.SpawnPad = SpawnPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.BP_ShowEngineerWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEngineerPack*           Pack                           (Parm, ZeroConstructor, IsPlainOldData)

void AMACharacter::BP_ShowEngineerWidget(class AEngineerPack* Pack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_ShowEngineerWidget");

	AMACharacter_BP_ShowEngineerWidget_Params params;
	params.Pack = Pack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.BP_OnRep_PlayerState
// (Event, Public, BlueprintEvent)

void AMACharacter::BP_OnRep_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_OnRep_PlayerState");

	AMACharacter_BP_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.BP_GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AMACharacter::BP_GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_GetViewRotation");

	AMACharacter_BP_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacter.BP_EndPurchaseVehicle
// (Event, Protected, BlueprintEvent)

void AMACharacter::BP_EndPurchaseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.BP_EndPurchaseVehicle");

	AMACharacter_BP_EndPurchaseVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacter.AddItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAItem*                 ItemToAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACharacter::AddItem(class AMAItem* ItemToAdd, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacter.AddItem");

	AMACharacter_AddItem_Params params;
	params.ItemToAdd = ItemToAdd;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACharacterMovement.MAServerMove
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FMAPackedMoveBundle     Bundle                         (ConstParm, Parm, ReferenceParm)

void UMACharacterMovement::MAServerMove(const struct FMAPackedMoveBundle& Bundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacterMovement.MAServerMove");

	UMACharacterMovement_MAServerMove_Params params;
	params.Bundle = Bundle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacterMovement.MAClientAdjustEnergy
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                          Energy                         (Parm, ZeroConstructor, IsPlainOldData)

void UMACharacterMovement::MAClientAdjustEnergy(float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacterMovement.MAClientAdjustEnergy");

	UMACharacterMovement_MAClientAdjustEnergy_Params params;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACharacterMovement.IsSkatingOnGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMACharacterMovement::IsSkatingOnGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACharacterMovement.IsSkatingOnGround");

	UMACharacterMovement_IsSkatingOnGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACTFFlag.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMACTFFlag::OnStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACTFFlag.OnStop");

	AMACTFFlag_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MACTFFlag.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMACTFFlag::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACTFFlag.OnBounce");

	AMACTFFlag_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.SortPlayersByScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APlayerState*>    Players                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMAGameState::SortPlayersByScore(TArray<class APlayerState*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.SortPlayersByScore");

	AMAGameState_SortPlayersByScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function Midair.MAGameState.PredictWinner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EMapVoteOption                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMapVoteOption AMAGameState::PredictWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.PredictWinner");

	AMAGameState_PredictWinner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.OnSameTeam
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameState::OnSameTeam(class AActor* Actor1, class AActor* Actor2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnSameTeam");

	AMAGameState_OnSameTeam_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.OnRep_WinningOption
// (Final, Native, Public)

void AMAGameState::OnRep_WinningOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnRep_WinningOption");

	AMAGameState_OnRep_WinningOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.OnRep_VotingStage
// (Final, Native, Public)

void AMAGameState::OnRep_VotingStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnRep_VotingStage");

	AMAGameState_OnRep_VotingStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.OnRep_TeamArray
// (Final, Native, Public)

void AMAGameState::OnRep_TeamArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnRep_TeamArray");

	AMAGameState_OnRep_TeamArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.OnRep_PunishVote
// (Final, Native, Public)

void AMAGameState::OnRep_PunishVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnRep_PunishVote");

	AMAGameState_OnRep_PunishVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.OnRep_MapVoteOptions
// (Final, Native, Public)

void AMAGameState::OnRep_MapVoteOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.OnRep_MapVoteOptions");

	AMAGameState_OnRep_MapVoteOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameState.IsAnySimpleVoteInProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAGameState::IsAnySimpleVoteInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.IsAnySimpleVoteInProgress");

	AMAGameState_IsAnySimpleVoteInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetVotesForOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EMapVoteOption                 Option                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AMAGameState::GetVotesForOption(EMapVoteOption Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetVotesForOption");

	AMAGameState_GetVotesForOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetTotalPlayersOnTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AMAGameState::GetTotalPlayersOnTeam(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetTotalPlayersOnTeam");

	AMAGameState_GetTotalPlayersOnTeam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetTeamStateById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMATeamState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMATeamState* AMAGameState::GetTeamStateById(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetTeamStateById");

	AMAGameState_GetTeamStateById_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetTeamMaxObjectCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ObjectType                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AMAGameState::GetTeamMaxObjectCount(class UClass* ObjectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetTeamMaxObjectCount");

	AMAGameState_GetTeamMaxObjectCount_Params params;
	params.ObjectType = ObjectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetRankedPlayerArrays
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMAPlayerState*>  Team1RankedArray               (Parm, OutParm, ZeroConstructor)
// TArray<class AMAPlayerState*>  Team2RankedArray               (Parm, OutParm, ZeroConstructor)

void AMAGameState::GetRankedPlayerArrays(TArray<class AMAPlayerState*>* Team1RankedArray, TArray<class AMAPlayerState*>* Team2RankedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetRankedPlayerArrays");

	AMAGameState_GetRankedPlayerArrays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team1RankedArray != nullptr)
		*Team1RankedArray = params.Team1RankedArray;
	if (Team2RankedArray != nullptr)
		*Team2RankedArray = params.Team2RankedArray;
}


// Function Midair.MAGameState.GetRankedPlayerArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMAPlayerState*>  RankedArray                    (Parm, OutParm, ZeroConstructor)

void AMAGameState::GetRankedPlayerArray(TArray<class AMAPlayerState*>* RankedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetRankedPlayerArray");

	AMAGameState_GetRankedPlayerArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RankedArray != nullptr)
		*RankedArray = params.RankedArray;
}


// Function Midair.MAGameState.GetMatchStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMAGameState::GetMatchStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetMatchStatus");

	AMAGameState_GetMatchStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetMAGameModeClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AMAGameState::GetMAGameModeClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetMAGameModeClass");

	AMAGameState_GetMAGameModeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetLivePlayersOnTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AMAGameState::GetLivePlayersOnTeam(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetLivePlayersOnTeam");

	AMAGameState_GetLivePlayersOnTeam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetGameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AMAGameState::GetGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetGameTime");

	AMAGameState_GetGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetFlagHolderTimer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMAGameState::GetFlagHolderTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetFlagHolderTimer");

	AMAGameState_GetFlagHolderTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetCurrentJackpot
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMAGameState::GetCurrentJackpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetCurrentJackpot");

	AMAGameState_GetCurrentJackpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameState.GetCurrentHolder
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMAGameState::GetCurrentHolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameState.GetCurrentHolder");

	AMAGameState_GetCurrentHolder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACTFGameState.GetIsFlagHolder
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMACTFGameState::GetIsFlagHolder(class AMAPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACTFGameState.GetIsFlagHolder");

	AMACTFGameState_GetIsFlagHolder_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACTFGameState.GetFlagStateName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AMACTFGameState::GetFlagStateName(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACTFGameState.GetFlagStateName");

	AMACTFGameState_GetFlagStateName_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MACTFGameState.GetFlagBase
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMACTFFlagBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMACTFFlagBase* AMACTFGameState::GetFlagBase(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MACTFGameState.GetFlagBase");

	AMACTFGameState_GetFlagBase_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MADamageType.ComputeDamageSkillRating
// (Native, Public, Const)
// Parameters:
// float                          PreviousSkillRating            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMidairHit                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          RadialDamageScale              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMADamageType::ComputeDamageSkillRating(float PreviousSkillRating, class AActor* Instigator, class AActor* Victim, bool bMidairHit, float RadialDamageScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MADamageType.ComputeDamageSkillRating");

	UMADamageType_ComputeDamageSkillRating_Params params;
	params.PreviousSkillRating = PreviousSkillRating;
	params.Instigator = Instigator;
	params.Victim = Victim;
	params.bMidairHit = bMidairHit;
	params.RadialDamageScale = RadialDamageScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MALocalMessage.GetTextColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            MessageIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UMALocalMessage::GetTextColor(int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalMessage.GetTextColor");

	UMALocalMessage_GetTextColor_Params params;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MALocalMessage.GetText
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLocalMessageData       MessageData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMALocalMessage::GetText(const struct FLocalMessageData& MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalMessage.GetText");

	UMALocalMessage_GetText_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MADeployerWeapon.OnRep_DeployableClass
// (Native, Protected)

void AMADeployerWeapon::OnRep_DeployableClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MADeployerWeapon.OnRep_DeployableClass");

	AMADeployerWeapon_OnRep_DeployableClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MADeployerWeapon.NotifyMenuClosed
// (Final, Native, Public, BlueprintCallable)

void AMADeployerWeapon::NotifyMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MADeployerWeapon.NotifyMenuClosed");

	AMADeployerWeapon_NotifyMenuClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.ShowMatchMakingWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameInstance::ShowMatchMakingWidget(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.ShowMatchMakingWidget");

	UMAGameInstance_ShowMatchMakingWidget_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.SaveMouseSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DPI                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInvertY                       (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameInstance::SaveMouseSettings(float DPI, float Sensitivity, bool bInvertY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.SaveMouseSettings");

	UMAGameInstance_SaveMouseSettings_Params params;
	params.DPI = DPI;
	params.Sensitivity = Sensitivity;
	params.bInvertY = bInvertY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.SaveInputSettings
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInputActionKeyMapping> ActionMappings                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FInputAxisKeyMapping> AxisMappings                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMAGameInstance::SaveInputSettings(TArray<struct FInputActionKeyMapping> ActionMappings, TArray<struct FInputAxisKeyMapping> AxisMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.SaveInputSettings");

	UMAGameInstance_SaveInputSettings_Params params;
	params.ActionMappings = ActionMappings;
	params.AxisMappings = AxisMappings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.ResetInputSettings
// (Final, Native, Public, BlueprintCallable)

void UMAGameInstance::ResetInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.ResetInputSettings");

	UMAGameInstance_ResetInputSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.OnNetworkFailure
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetworkFailure>   FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void UMAGameInstance::OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.OnNetworkFailure");

	UMAGameInstance_OnNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.InputPasswordForSteamPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RichPresence                   (Parm, ZeroConstructor)
// struct FString                 JoinPassword                   (Parm, ZeroConstructor)

void UMAGameInstance::InputPasswordForSteamPresence(const struct FString& RichPresence, const struct FString& JoinPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.InputPasswordForSteamPresence");

	UMAGameInstance_InputPasswordForSteamPresence_Params params;
	params.RichPresence = RichPresence;
	params.JoinPassword = JoinPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.HideLoadingScreen
// (Final, Native, Public, BlueprintCallable)

void UMAGameInstance::HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.HideLoadingScreen");

	UMAGameInstance_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.GetSoundCueForVoiceSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VoiceSet                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SoundCueId                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* UMAGameInstance::GetSoundCueForVoiceSet(class UClass* VoiceSet, int SoundCueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetSoundCueForVoiceSet");

	UMAGameInstance_GetSoundCueForVoiceSet_Params params;
	params.VoiceSet = VoiceSet;
	params.SoundCueId = SoundCueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetSoundCueForAnnouncer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SoundCueId                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundCue* UMAGameInstance::GetSoundCueForAnnouncer(int SoundCueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetSoundCueForAnnouncer");

	UMAGameInstance_GetSoundCueForAnnouncer_Params params;
	params.SoundCueId = SoundCueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetServiceState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMAServiceState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMAServiceState UMAGameInstance::GetServiceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetServiceState");

	UMAGameInstance_GetServiceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetRootProgressionObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UMAGameInstance::GetRootProgressionObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetRootProgressionObject");

	UMAGameInstance_GetRootProgressionObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetPlayerExpressionIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPlayerExpressionData   Expression                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMAGameInstance::GetPlayerExpressionIndex(const struct FPlayerExpressionData& Expression)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetPlayerExpressionIndex");

	UMAGameInstance_GetPlayerExpressionIndex_Params params;
	params.Expression = Expression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetMouseSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DPI                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Sensitivty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bInvertY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMAGameInstance::GetMouseSettings(float* DPI, float* Sensitivty, bool* bInvertY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetMouseSettings");

	UMAGameInstance_GetMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DPI != nullptr)
		*DPI = params.DPI;
	if (Sensitivty != nullptr)
		*Sensitivty = params.Sensitivty;
	if (bInvertY != nullptr)
		*bInvertY = params.bInvertY;
}


// Function Midair.MAGameInstance.GetInputAxisMappings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FInputAxisKeyMapping> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FInputAxisKeyMapping> UMAGameInstance::GetInputAxisMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetInputAxisMappings");

	UMAGameInstance_GetInputAxisMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetInputActionMappings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FInputActionKeyMapping> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FInputActionKeyMapping> UMAGameInstance::GetInputActionMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetInputActionMappings");

	UMAGameInstance_GetInputActionMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.GetCurrenSeason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMAGameInstance::GetCurrenSeason()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.GetCurrenSeason");

	UMAGameInstance_GetCurrenSeason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.FindSessions
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InFindSessionsResultsDelegate  (Parm, ZeroConstructor)
// EFindSessionsSortMethod        SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideFull                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameInstance::FindSessions(const struct FScriptDelegate& InFindSessionsResultsDelegate, EFindSessionsSortMethod SortMethod, bool bHideFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.FindSessions");

	UMAGameInstance_FindSessions_Params params;
	params.InFindSessionsResultsDelegate = InFindSessionsResultsDelegate;
	params.SortMethod = SortMethod;
	params.bHideFull = bHideFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.ClientJoinSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Password                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameInstance::ClientJoinSession(class ULocalPlayer* Player, const struct FBlueprintSessionResult& SearchResult, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.ClientJoinSession");

	UMAGameInstance_ClientJoinSession_Params params;
	params.Player = Player;
	params.SearchResult = SearchResult;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.ClearLastNetworkError
// (Final, Native, Public, BlueprintCallable)

void UMAGameInstance::ClearLastNetworkError()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.ClearLastNetworkError");

	UMAGameInstance_ClearLastNetworkError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameInstance.CheckAndHandleNamedEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameInstance::CheckAndHandleNamedEvent(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.CheckAndHandleNamedEvent");

	UMAGameInstance_CheckAndHandleNamedEvent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameInstance.AuthenticateWithService
// (Final, Native, Private)

void UMAGameInstance::AuthenticateWithService()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameInstance.AuthenticateWithService");

	UMAGameInstance_AuthenticateWithService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.UseProgressionPass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_UseProgressionPass(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.UseProgressionPass");

	UMAGameplayStatics_UseProgressionPass_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.TryUpdateAudioComponentPerspective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_TryUpdateAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.TryUpdateAudioComponentPerspective");

	UMAGameplayStatics_TryUpdateAudioComponentPerspective_Params params;
	params.AudioComponent = AudioComponent;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.StashPresentationItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Items                          (Parm, ZeroConstructor)

void UMAGameplayStatics::STATIC_StashPresentationItems(class UObject* WorldContextObject, TArray<class UClass*> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.StashPresentationItems");

	UMAGameplayStatics_StashPresentationItems_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Items = Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SpawnPerspectiveSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UMAGameplayStatics::STATIC_SpawnPerspectiveSoundAttached(class USoundBase* Sound, bool bInFirstPerson, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SpawnPerspectiveSoundAttached");

	UMAGameplayStatics_SpawnPerspectiveSoundAttached_Params params;
	params.Sound = Sound;
	params.bInFirstPerson = bInFirstPerson;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.SpawnClientServerProjectile
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ProjectileClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                SpawnRotation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageModifier                 (Parm, ZeroConstructor, IsPlainOldData)
// class AMAProjectile*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAProjectile* UMAGameplayStatics::STATIC_SpawnClientServerProjectile(class APawn* Instigator, class UClass* ProjectileClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, float DamageModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SpawnClientServerProjectile");

	UMAGameplayStatics_SpawnClientServerProjectile_Params params;
	params.Instigator = Instigator;
	params.ProjectileClass = ProjectileClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.DamageModifier = DamageModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.ShowStorePageForItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_ShowStorePageForItem(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ShowStorePageForItem");

	UMAGameplayStatics_ShowStorePageForItem_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.ShowStorePage
// (Final, Native, Static, Public, BlueprintCallable)

void UMAGameplayStatics::STATIC_ShowStorePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ShowStorePage");

	UMAGameplayStatics_ShowStorePage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.ShowDLCStorePage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Appid                          (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_ShowDLCStorePage(int Appid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ShowDLCStorePage");

	UMAGameplayStatics_ShowDLCStorePage_Params params;
	params.Appid = Appid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.ShouldShowPerformanceStats
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_ShouldShowPerformanceStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ShouldShowPerformanceStats");

	UMAGameplayStatics_ShouldShowPerformanceStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.SetTeamColorOnMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetTeamColorOnMesh(class UMeshComponent* Mesh, unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetTeamColorOnMesh");

	UMAGameplayStatics_SetTeamColorOnMesh_Params params;
	params.Mesh = Mesh;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SetSoundClassVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetSoundClassVolume(class USoundClass* SoundClass, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetSoundClassVolume");

	UMAGameplayStatics_SetSoundClassVolume_Params params;
	params.SoundClass = SoundClass;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SetSoundClassRadioFilterVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetSoundClassRadioFilterVolume(class USoundClass* SoundClass, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetSoundClassRadioFilterVolume");

	UMAGameplayStatics_SetSoundClassRadioFilterVolume_Params params;
	params.SoundClass = SoundClass;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SetLowPassFilterOnAllSounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetLowPassFilterOnAllSounds(class UObject* WorldContextObject, bool bEnable, float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetLowPassFilterOnAllSounds");

	UMAGameplayStatics_SetLowPassFilterOnAllSounds_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnable = bEnable;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetDefaultNamedCosmeticForLoadout(const struct FName& Name, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout");

	UMAGameplayStatics_SetDefaultNamedCosmeticForLoadout_Params params;
	params.Name = Name;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.SetAudioComponentPerspective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_SetAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.SetAudioComponentPerspective");

	UMAGameplayStatics_SetAudioComponentPerspective_Params params;
	params.AudioComponent = AudioComponent;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.RefreshInventory
// (Final, Native, Static, Public, BlueprintCallable)

void UMAGameplayStatics::STATIC_RefreshInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.RefreshInventory");

	UMAGameplayStatics_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.PredictProjectileCollisionPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ProjectileClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InitialLocation                (Parm, IsPlainOldData)
// struct FRotator                FireRotation                   (Parm, IsPlainOldData)
// float                          TimePerStep                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPredictionTime              (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult UMAGameplayStatics::STATIC_PredictProjectileCollisionPoint(class UWorld* World, class UClass* ProjectileClass, const struct FVector& InitialLocation, const struct FRotator& FireRotation, float TimePerStep, float MaxPredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.PredictProjectileCollisionPoint");

	UMAGameplayStatics_PredictProjectileCollisionPoint_Params params;
	params.World = World;
	params.ProjectileClass = ProjectileClass;
	params.InitialLocation = InitialLocation;
	params.FireRotation = FireRotation;
	params.TimePerStep = TimePerStep;
	params.MaxPredictionTime = MaxPredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.OpenLootbox
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLootboxInfo            Lootbox                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)

void UMAGameplayStatics::STATIC_OpenLootbox(const struct FLootboxInfo& Lootbox, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.OpenLootbox");

	UMAGameplayStatics_OpenLootbox_Params params;
	params.Lootbox = Lootbox;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.MAPlayWorldCameraShake
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FWorldCameraShakeParams ShakeParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Epicenter                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_MAPlayWorldCameraShake(class UObject* WorldContextObject, const struct FWorldCameraShakeParams& ShakeParams, const struct FVector& Epicenter, class UClass* ShakeClass, TArray<class AActor*> IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.MAPlayWorldCameraShake");

	UMAGameplayStatics_MAPlayWorldCameraShake_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ShakeParams = ShakeParams;
	params.Epicenter = Epicenter;
	params.ShakeClass = ShakeClass;
	params.IgnoreActors = IgnoreActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.MakeSpline
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D               InStart                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               InStartDir                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               InEnd                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               InEndDir                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          InThickness                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InTint                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_MakeSpline(const struct FVector2D& InStart, const struct FVector2D& InStartDir, const struct FVector2D& InEnd, const struct FVector2D& InEndDir, float InThickness, const struct FLinearColor& InTint, int LayerOffset, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.MakeSpline");

	UMAGameplayStatics_MakeSpline_Params params;
	params.InStart = InStart;
	params.InStartDir = InStartDir;
	params.InEnd = InEnd;
	params.InEndDir = InEndDir;
	params.InThickness = InThickness;
	params.InTint = InTint;
	params.LayerOffset = LayerOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function Midair.MAGameplayStatics.MAGetDamageImpulse
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  HitActor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMAGameplayStatics::STATIC_MAGetDamageImpulse(const struct FDamageEvent& DamageEvent, class AActor* HitActor, class AController* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.MAGetDamageImpulse");

	UMAGameplayStatics_MAGetDamageImpulse_Params params;
	params.DamageEvent = DamageEvent;
	params.HitActor = HitActor;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.MAApplyRadialDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageParams     DamageParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_MAApplyRadialDamage(class UObject* WorldContextObject, const struct FRadialDamageParams& DamageParams, const struct FVector& Origin, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.MAApplyRadialDamage");

	UMAGameplayStatics_MAApplyRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DamageParams = DamageParams;
	params.Origin = Origin;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.IsSteamConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_IsSteamConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.IsSteamConnected");

	UMAGameplayStatics_IsSteamConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.IsItemUnlockedForUser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_IsItemUnlockedForUser(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.IsItemUnlockedForUser");

	UMAGameplayStatics_IsItemUnlockedForUser_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.IsDLCOwned
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Appid                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_IsDLCOwned(int Appid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.IsDLCOwned");

	UMAGameplayStatics_IsDLCOwned_Params params;
	params.Appid = Appid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.HasUsedProgressionPass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_HasUsedProgressionPass(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.HasUsedProgressionPass");

	UMAGameplayStatics_HasUsedProgressionPass_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetTimeForSpawnWithSelectedLoadout
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetTimeForSpawnWithSelectedLoadout(class AMAPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetTimeForSpawnWithSelectedLoadout");

	UMAGameplayStatics_GetTimeForSpawnWithSelectedLoadout_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetTimeForSpawnWithLoadout
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetTimeForSpawnWithLoadout(class AMAPlayerController* Controller, const struct FMALoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetTimeForSpawnWithLoadout");

	UMAGameplayStatics_GetTimeForSpawnWithLoadout_Params params;
	params.Controller = Controller;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetStashedPresentationItems
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UMAGameplayStatics::STATIC_GetStashedPresentationItems(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetStashedPresentationItems");

	UMAGameplayStatics_GetStashedPresentationItems_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetSpawnPenaltyForSelectedLoadout
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetSpawnPenaltyForSelectedLoadout(class AMAPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetSpawnPenaltyForSelectedLoadout");

	UMAGameplayStatics_GetSpawnPenaltyForSelectedLoadout_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetSpawnPenaltyForLoadout
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetSpawnPenaltyForLoadout(class AMAPlayerController* Controller, const struct FMALoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetSpawnPenaltyForLoadout");

	UMAGameplayStatics_GetSpawnPenaltyForLoadout_Params params;
	params.Controller = Controller;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetRecentlyRendered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   MeshComponent                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_GetRecentlyRendered(class USkinnedMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetRecentlyRendered");

	UMAGameplayStatics_GetRecentlyRendered_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetRawLoadoutPenalties
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bGensDown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetRawLoadoutPenalties(class AMAPlayerController* Controller, const struct FMALoadout& Loadout, bool* bGensDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetRawLoadoutPenalties");

	UMAGameplayStatics_GetRawLoadoutPenalties_Params params;
	params.Controller = Controller;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bGensDown != nullptr)
		*bGensDown = params.bGensDown;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetProjectVersionString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMAGameplayStatics::STATIC_GetProjectVersionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetProjectVersionString");

	UMAGameplayStatics_GetProjectVersionString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetPredictedLOD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   MeshComponent                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMAGameplayStatics::STATIC_GetPredictedLOD(class USkinnedMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetPredictedLOD");

	UMAGameplayStatics_GetPredictedLOD_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetObjectInfoClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMAGameplayStatics::STATIC_GetObjectInfoClass(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetObjectInfoClass");

	UMAGameplayStatics_GetObjectInfoClass_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetObjectInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UMAGameplayStatics::STATIC_GetObjectInfo(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetObjectInfo");

	UMAGameplayStatics_GetObjectInfo_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetMutableDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMAGameplayStatics::STATIC_GetMutableDefaultObject(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetMutableDefaultObject");

	UMAGameplayStatics_GetMutableDefaultObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetMAGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AMAGameState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAGameState* UMAGameplayStatics::STATIC_GetMAGameState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetMAGameState");

	UMAGameplayStatics_GetMAGameState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetLootboxes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FLootboxInfo>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLootboxInfo> UMAGameplayStatics::STATIC_GetLootboxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetLootboxes");

	UMAGameplayStatics_GetLootboxes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetItemsBySteamDefinedType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ESteamDefinedItemType          Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AssociativeFilter              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UMAGameplayStatics::STATIC_GetItemsBySteamDefinedType(ESteamDefinedItemType Type, class UClass* AssociativeFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetItemsBySteamDefinedType");

	UMAGameplayStatics_GetItemsBySteamDefinedType_Params params;
	params.Type = Type;
	params.AssociativeFilter = AssociativeFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetIsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_GetIsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetIsEditor");

	UMAGameplayStatics_GetIsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetDistanceFromPointToCollision
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetDistanceFromPointToCollision(const struct FVector& Point, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetDistanceFromPointToCollision");

	UMAGameplayStatics_GetDistanceFromPointToCollision_Params params;
	params.Point = Point;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMAGameplayStatics::STATIC_GetDefaultNamedCosmeticForLoadout(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout");

	UMAGameplayStatics_GetDefaultNamedCosmeticForLoadout_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetCurrentLoadoutName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMAGameplayStatics::STATIC_GetCurrentLoadoutName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetCurrentLoadoutName");

	UMAGameplayStatics_GetCurrentLoadoutName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetCatchUpTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_GetCatchUpTime(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetCatchUpTime");

	UMAGameplayStatics_GetCatchUpTime_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetCarriedObjectsFromOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_GetCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetCarriedObjectsFromOverlap");

	UMAGameplayStatics_GetCarriedObjectsFromOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetActorInfoObjectFromActorClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UMAGameplayStatics::STATIC_GetActorInfoObjectFromActorClass(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetActorInfoObjectFromActorClass");

	UMAGameplayStatics_GetActorInfoObjectFromActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.GetActorInfoObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorInfoClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UMAGameplayStatics::STATIC_GetActorInfoObject(class UClass* ActorInfoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.GetActorInfoObject");

	UMAGameplayStatics_GetActorInfoObject_Params params;
	params.ActorInfoClass = ActorInfoClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.FindComponentPerClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Classes                        (Parm, ZeroConstructor)
// TMap<class UClass*, class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<class UClass*, class UActorComponent*> UMAGameplayStatics::STATIC_FindComponentPerClass(class AActor* Actor, TArray<class UClass*> Classes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.FindComponentPerClass");

	UMAGameplayStatics_FindComponentPerClass_Params params;
	params.Actor = Actor;
	params.Classes = Classes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.EjectCarriedObjectsFromOverlap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 EjectVelocity                  (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_EjectCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, const struct FVector& EjectVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.EjectCarriedObjectsFromOverlap");

	UMAGameplayStatics_EjectCarriedObjectsFromOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.EjectVelocity = EjectVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.ConvertUUVelocityToKPH
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 UUVelocity                     (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_ConvertUUVelocityToKPH(const struct FVector& UUVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ConvertUUVelocityToKPH");

	UMAGameplayStatics_ConvertUUVelocityToKPH_Params params;
	params.UUVelocity = UUVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.ConvertUUSpeedToKPH
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          UUSpeed                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameplayStatics::STATIC_ConvertUUSpeedToKPH(float UUSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.ConvertUUSpeedToKPH");

	UMAGameplayStatics_ConvertUUSpeedToKPH_Params params;
	params.UUSpeed = UUSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.CheckBeginOverlapForEjection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInvertNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsRabbit                      (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameplayStatics::STATIC_CheckBeginOverlapForEjection(class AActor* SelfActor, bool bInvertNormal, class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult, bool bIsRabbit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.CheckBeginOverlapForEjection");

	UMAGameplayStatics_CheckBeginOverlapForEjection_Params params;
	params.SelfActor = SelfActor;
	params.bInvertNormal = bInvertNormal;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndex = BodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;
	params.bIsRabbit = bIsRabbit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameplayStatics.CheckAreaForSpecificActorClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BaseLocation                   (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UMAGameplayStatics::STATIC_CheckAreaForSpecificActorClass(class UObject* WorldContextObject, class UClass* ActorClass, TEnumAsByte<ECollisionChannel> TraceChannel, const struct FVector& BaseLocation, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.CheckAreaForSpecificActorClass");

	UMAGameplayStatics_CheckAreaForSpecificActorClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.TraceChannel = TraceChannel;
	params.BaseLocation = BaseLocation;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameplayStatics.AreTeamGensDown
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAGameplayStatics::STATIC_AreTeamGensDown(class AMAPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameplayStatics.AreTeamGensDown");

	UMAGameplayStatics_AreTeamGensDown_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.SetUserFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::SetUserFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetUserFOV");

	UMAGameUserSettings_SetUserFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetSoundClassVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             Class                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::SetSoundClassVolume(class USoundClass* Class, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetSoundClassVolume");

	UMAGameUserSettings_SetSoundClassVolume_Params params;
	params.Class = Class;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetIFFDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldShow                     (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::SetIFFDistance(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetIFFDistance");

	UMAGameUserSettings_SetIFFDistance_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetFullscreenModeFromString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 AsString                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMAGameUserSettings::SetFullscreenModeFromString(struct FString* AsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetFullscreenModeFromString");

	UMAGameUserSettings_SetFullscreenModeFromString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsString != nullptr)
		*AsString = params.AsString;
}


// Function Midair.MAGameUserSettings.SetCrosshairIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrosshairType                  (Parm, ZeroConstructor)

void UMAGameUserSettings::SetCrosshairIndex(const struct FString& CrosshairType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetCrosshairIndex");

	UMAGameUserSettings_SetCrosshairIndex_Params params;
	params.CrosshairType = CrosshairType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetCrosshairColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Color                          (Parm, ZeroConstructor)

void UMAGameUserSettings::SetCrosshairColor(const struct FString& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetCrosshairColor");

	UMAGameUserSettings_SetCrosshairColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetAllSettingsGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AAQuality                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            VFXQuality                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FoliageQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            PPQuality                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShadowQuality                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            TextureQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ViewDistance                   (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::SetAllSettingsGroups(int AAQuality, int VFXQuality, int FoliageQuality, int PPQuality, int ShadowQuality, int TextureQuality, int ViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetAllSettingsGroups");

	UMAGameUserSettings_SetAllSettingsGroups_Params params;
	params.AAQuality = AAQuality;
	params.VFXQuality = VFXQuality;
	params.FoliageQuality = FoliageQuality;
	params.PPQuality = PPQuality;
	params.ShadowQuality = ShadowQuality;
	params.TextureQuality = TextureQuality;
	params.ViewDistance = ViewDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.SetAdvancedSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InAnisotropy                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTextureStreamingPoolSize     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMotionBlur                   (Parm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::SetAdvancedSettings(int InAnisotropy, int InTextureStreamingPoolSize, int InMotionBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.SetAdvancedSettings");

	UMAGameUserSettings_SetAdvancedSettings_Params params;
	params.InAnisotropy = InAnisotropy;
	params.InTextureStreamingPoolSize = InTextureStreamingPoolSize;
	params.InMotionBlur = InMotionBlur;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.HideWelcomeMessage
// (Final, Native, Public, BlueprintCallable)

void UMAGameUserSettings::HideWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.HideWelcomeMessage");

	UMAGameUserSettings_HideWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAGameUserSettings.GetUserFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameUserSettings::GetUserFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetUserFOV");

	UMAGameUserSettings_GetUserFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetSoundClassVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*             Class                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameUserSettings::GetSoundClassVolume(class USoundClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetSoundClassVolume");

	UMAGameUserSettings_GetSoundClassVolume_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetMAGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMAGameUserSettings*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMAGameUserSettings* UMAGameUserSettings::STATIC_GetMAGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetMAGameUserSettings");

	UMAGameUserSettings_GetMAGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetFOVMin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameUserSettings::STATIC_GetFOVMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetFOVMin");

	UMAGameUserSettings_GetFOVMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetFOVMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAGameUserSettings::STATIC_GetFOVMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetFOVMax");

	UMAGameUserSettings_GetFOVMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetCrosshairType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMAGameUserSettings::GetCrosshairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetCrosshairType");

	UMAGameUserSettings_GetCrosshairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetCrosshairIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMAGameUserSettings::GetCrosshairIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetCrosshairIndex");

	UMAGameUserSettings_GetCrosshairIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetCrosshairColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMAGameUserSettings::GetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetCrosshairColor");

	UMAGameUserSettings_GetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAGameUserSettings.GetAllSettingsGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AAQuality                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            VFXQuality                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FoliageQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PPQuality                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ShadowQuality                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TextureQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ViewDistance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::GetAllSettingsGroups(int* AAQuality, int* VFXQuality, int* FoliageQuality, int* PPQuality, int* ShadowQuality, int* TextureQuality, int* ViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetAllSettingsGroups");

	UMAGameUserSettings_GetAllSettingsGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AAQuality != nullptr)
		*AAQuality = params.AAQuality;
	if (VFXQuality != nullptr)
		*VFXQuality = params.VFXQuality;
	if (FoliageQuality != nullptr)
		*FoliageQuality = params.FoliageQuality;
	if (PPQuality != nullptr)
		*PPQuality = params.PPQuality;
	if (ShadowQuality != nullptr)
		*ShadowQuality = params.ShadowQuality;
	if (TextureQuality != nullptr)
		*TextureQuality = params.TextureQuality;
	if (ViewDistance != nullptr)
		*ViewDistance = params.ViewDistance;
}


// Function Midair.MAGameUserSettings.GetAdvancedSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            OutAnisotropy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutTextureStreamingPoolSize    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutMotionBlur                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMAGameUserSettings::GetAdvancedSettings(int* OutAnisotropy, int* OutTextureStreamingPoolSize, int* OutMotionBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAGameUserSettings.GetAdvancedSettings");

	UMAGameUserSettings_GetAdvancedSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnisotropy != nullptr)
		*OutAnisotropy = params.OutAnisotropy;
	if (OutTextureStreamingPoolSize != nullptr)
		*OutTextureStreamingPoolSize = params.OutTextureStreamingPoolSize;
	if (OutMotionBlur != nullptr)
		*OutMotionBlur = params.OutMotionBlur;
}


// Function Midair.MAHandGrenade.GetMaxAmmoCountFor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMAHandGrenade::GetMaxAmmoCountFor(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHandGrenade.GetMaxAmmoCountFor");

	AMAHandGrenade_GetMaxAmmoCountFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.UpdateReplayTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          PctOfReplay                    (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::UpdateReplayTime(float PctOfReplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.UpdateReplayTime");

	AMAHUD_UpdateReplayTime_Params params;
	params.PctOfReplay = PctOfReplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.ToggleReplayHud
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::ToggleReplayHud(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.ToggleReplayHud");

	AMAHUD_ToggleReplayHud_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.TogglePauseReplay
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::TogglePauseReplay(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.TogglePauseReplay");

	AMAHUD_TogglePauseReplay_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.ToggleInGameMenu
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerController*     Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::ToggleInGameMenu(class AMAPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.ToggleInGameMenu");

	AMAHUD_ToggleInGameMenu_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.StartQuickVoice
// (Native, Event, Public, BlueprintEvent)

void AMAHUD::StartQuickVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.StartQuickVoice");

	AMAHUD_StartQuickVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.StartChat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::StartChat(bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.StartChat");

	AMAHUD_StartChat_Params params;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.ShowMapVote
// (Event, Public, BlueprintEvent)

void AMAHUD::ShowMapVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.ShowMapVote");

	AMAHUD_ShowMapVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.ShowIffOnly
// (Exec, Native, Public)

void AMAHUD::ShowIffOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.ShowIffOnly");

	AMAHUD_ShowIffOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.SetReplaySpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::SetReplaySpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.SetReplaySpeed");

	AMAHUD_SetReplaySpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAHUD.ProcessPlayerExpressionInput
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           IsAbortKey                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAHUD::ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.ProcessPlayerExpressionInput");

	AMAHUD_ProcessPlayerExpressionInput_Params params;
	params.Key = Key;
	params.IsAbortKey = IsAbortKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.IsReplayPaused
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAHUD::IsReplayPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.IsReplayPaused");

	AMAHUD_IsReplayPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.IsInGameMenuVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAHUD::IsInGameMenuVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.IsInGameMenuVisible");

	AMAHUD_IsInGameMenuVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.GetTotalReplayTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMAHUD::GetTotalReplayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.GetTotalReplayTime");

	AMAHUD_GetTotalReplayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.GetReplaySpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAHUD::GetReplaySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.GetReplaySpeed");

	AMAHUD_GetReplaySpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.GetReplayPercent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAHUD::GetReplayPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.GetReplayPercent");

	AMAHUD_GetReplayPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.GetCurrentReplayTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMAHUD::GetCurrentReplayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.GetCurrentReplayTime");

	AMAHUD_GetCurrentReplayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.GetCurrentCrosshairTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* AMAHUD::GetCurrentCrosshairTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.GetCurrentCrosshairTexture");

	AMAHUD_GetCurrentCrosshairTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAHUD.BP_OnScoreApplied
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ScoreText                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMAHUD::BP_OnScoreApplied(const struct FText& ScoreText, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAHUD.BP_OnScoreApplied");

	AMAHUD_BP_OnScoreApplied_Params params;
	params.ScoreText = ScoreText;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.UpdateMousePropertiesForPawn
// (Final, Native, Public)
// Parameters:
// class APawn*                   Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::UpdateMousePropertiesForPawn(class APawn* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.UpdateMousePropertiesForPawn");

	UMAInputSettings_UpdateMousePropertiesForPawn_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.TryResolveLastConflict
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMappingConflictResolution     Resolution                     (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::TryResolveLastConflict(EMappingConflictResolution Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.TryResolveLastConflict");

	UMAInputSettings_TryResolveLastConflict_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.TryResetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData)
// EMappingPriority               KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::TryResetKey(const struct FName& MappingName, EMappingPriority KeyPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.TryResetKey");

	UMAInputSettings_TryResetKey_Params params;
	params.MappingName = MappingName;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.TryBindKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  NewKey                         (Parm)
// EMappingPriority               KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::TryBindKey(const struct FName& MappingName, const struct FInputActionKeyMapping& NewKey, EMappingPriority KeyPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.TryBindKey");

	UMAInputSettings_TryBindKey_Params params;
	params.MappingName = MappingName;
	params.NewKey = NewKey;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.SetMouseSensitivityForName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::SetMouseSensitivityForName(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.SetMouseSensitivityForName");

	UMAInputSettings_SetMouseSensitivityForName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.SetMouseInvertForName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInvert                        (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::SetMouseInvertForName(const struct FName& Name, bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.SetMouseInvertForName");

	UMAInputSettings_SetMouseInvertForName_Params params;
	params.Name = Name;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.ResetAll
// (Final, Native, Public, BlueprintCallable)

void UMAInputSettings::ResetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.ResetAll");

	UMAInputSettings_ResetAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.IsMappingDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData)
// EMappingPriority               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMappingPriority UMAInputSettings::IsMappingDefault(const struct FName& MappingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.IsMappingDefault");

	UMAInputSettings_IsMappingDefault_Params params;
	params.MappingName = MappingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.HasAnyPendingConflict
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAInputSettings::HasAnyPendingConflict()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.HasAnyPendingConflict");

	UMAInputSettings_HasAnyPendingConflict_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetUISensitivityScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAInputSettings::GetUISensitivityScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetUISensitivityScale");

	UMAInputSettings_GetUISensitivityScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetSpecificInputMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMidairInputMapping UMAInputSettings::GetSpecificInputMapping(const struct FName& MappingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetSpecificInputMapping");

	UMAInputSettings_GetSpecificInputMapping_Params params;
	params.MappingName = MappingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetSettingsNameForPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMAInputSettings::STATIC_GetSettingsNameForPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetSettingsNameForPawn");

	UMAInputSettings_GetSettingsNameForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMouseSensitivityForPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAInputSettings::GetMouseSensitivityForPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMouseSensitivityForPawn");

	UMAInputSettings_GetMouseSensitivityForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMouseSensitivityForName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAInputSettings::GetMouseSensitivityForName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMouseSensitivityForName");

	UMAInputSettings_GetMouseSensitivityForName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMouseInvertForPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAInputSettings::GetMouseInvertForPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMouseInvertForPawn");

	UMAInputSettings_GetMouseInvertForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMouseInvertForName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAInputSettings::GetMouseInvertForName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMouseInvertForName");

	UMAInputSettings_GetMouseInvertForName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMappingDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMidairInputMapping     Mapping                        (ConstParm, Parm, OutParm, ReferenceParm)
// EMappingPriority               Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMAInputSettings::STATIC_GetMappingDisplayName(const struct FMidairInputMapping& Mapping, EMappingPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMappingDisplayName");

	UMAInputSettings_GetMappingDisplayName_Params params;
	params.Mapping = Mapping;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetMAInputSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMAInputSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMAInputSettings* UMAInputSettings::STATIC_GetMAInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetMAInputSettings");

	UMAInputSettings_GetMAInputSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetInputMappingNamesOrdered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UMAInputSettings::STATIC_GetInputMappingNamesOrdered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetInputMappingNamesOrdered");

	UMAInputSettings_GetInputMappingNamesOrdered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetInputMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMidairInputMapping UMAInputSettings::GetInputMappingByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetInputMappingByName");

	UMAInputSettings_GetInputMappingByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetInputCategoryNamesOrdered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UMAInputSettings::STATIC_GetInputCategoryNamesOrdered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetInputCategoryNamesOrdered");

	UMAInputSettings_GetInputCategoryNamesOrdered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetInputCategoryByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FMidairInputCategory    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMidairInputCategory UMAInputSettings::STATIC_GetInputCategoryByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetInputCategoryByName");

	UMAInputSettings_GetInputCategoryByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetDefaultInputMappingByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMidairInputMapping UMAInputSettings::STATIC_GetDefaultInputMappingByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetDefaultInputMappingByName");

	UMAInputSettings_GetDefaultInputMappingByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.GetActionKeyMappingDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionKeyMapping  KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMAInputSettings::STATIC_GetActionKeyMappingDisplayName(const struct FInputActionKeyMapping& KeyMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.GetActionKeyMappingDisplayName");

	UMAInputSettings_GetActionKeyMappingDisplayName_Params params;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.ClearKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData)
// EMappingPriority               KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void UMAInputSettings::ClearKey(const struct FName& MappingName, EMappingPriority KeyPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.ClearKey");

	UMAInputSettings_ClearKey_Params params;
	params.MappingName = MappingName;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.ClearAll
// (Final, Native, Public, BlueprintCallable)

void UMAInputSettings::ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.ClearAll");

	UMAInputSettings_ClearAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInputSettings.AreMappingsEqual
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionKeyMapping  First                          (Parm)
// struct FInputActionKeyMapping  Second                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAInputSettings::AreMappingsEqual(const struct FInputActionKeyMapping& First, const struct FInputActionKeyMapping& Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.AreMappingsEqual");

	UMAInputSettings_AreMappingsEqual_Params params;
	params.First = First;
	params.Second = Second;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAInputSettings.ApplyAndSaveAll
// (Final, Native, Public, BlueprintCallable)

void UMAInputSettings::ApplyAndSaveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInputSettings.ApplyAndSaveAll");

	UMAInputSettings_ApplyAndSaveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInventoryAsset.UserPlayerDied
// (Native, Public)

void AMAInventoryAsset::UserPlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInventoryAsset.UserPlayerDied");

	AMAInventoryAsset_UserPlayerDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInventoryAsset.PlayEquipEffects
// (Native, Event, Public, BlueprintEvent)

void AMAInventoryAsset::PlayEquipEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInventoryAsset.PlayEquipEffects");

	AMAInventoryAsset_PlayEquipEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInventoryAsset.OnRep_CurrentUser
// (Final, Native, Public)

void AMAInventoryAsset::OnRep_CurrentUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInventoryAsset.OnRep_CurrentUser");

	AMAInventoryAsset_OnRep_CurrentUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInventoryAsset.OnBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMAInventoryAsset::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInventoryAsset.OnBeginOverlap");

	AMAInventoryAsset_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAInventoryAsset.IsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAInventoryAsset::IsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAInventoryAsset.IsAvailable");

	AMAInventoryAsset_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MALocalMessagesWidget.Clear
// (Native, Public, BlueprintCallable)

void UMALocalMessagesWidget::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalMessagesWidget.Clear");

	UMALocalMessagesWidget_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalMessagesWidget.BP_Clear
// (Event, Protected, BlueprintEvent)

void UMALocalMessagesWidget::BP_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalMessagesWidget.BP_Clear");

	UMALocalMessagesWidget_BP_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalMessagesWidget.AddMessage
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  MessageClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLocalMessageData       MessageData                    (ConstParm, Parm, OutParm, ReferenceParm)

void UMALocalMessagesWidget::AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalMessagesWidget.AddMessage");

	UMALocalMessagesWidget_AddMessage_Params params;
	params.MessageClass = MessageClass;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalPlayer.UnlockObjectInfo
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObjectInfo*             ObjectInfo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateProgression             (Parm, ZeroConstructor, IsPlainOldData)

void UMALocalPlayer::UnlockObjectInfo(class UObjectInfo* ObjectInfo, bool bUpdateProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalPlayer.UnlockObjectInfo");

	UMALocalPlayer_UnlockObjectInfo_Params params;
	params.ObjectInfo = ObjectInfo;
	params.bUpdateProgression = bUpdateProgression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalPlayer.CompleteTutorial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TutorialName                   (Parm, ZeroConstructor, IsPlainOldData)

void UMALocalPlayer::CompleteTutorial(const struct FName& TutorialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalPlayer.CompleteTutorial");

	UMALocalPlayer_CompleteTutorial_Params params;
	params.TutorialName = TutorialName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalPlayer.ClearNewSkillPoints
// (Native, Public, BlueprintCallable)

void UMALocalPlayer::ClearNewSkillPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalPlayer.ClearNewSkillPoints");

	UMALocalPlayer_ClearNewSkillPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalPlayer.BypassProgression_TEMP
// (Final, Native, Public, BlueprintCallable)

void UMALocalPlayer::BypassProgression_TEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalPlayer.BypassProgression_TEMP");

	UMALocalPlayer_BypassProgression_TEMP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MALocalPlayer.AddXP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            XP                             (Parm, ZeroConstructor, IsPlainOldData)

void UMALocalPlayer::AddXP(int XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MALocalPlayer.AddXP");

	UMALocalPlayer_AddXP_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPickupBackpack.UpdateVisuals
// (Native, Public)

void AMAPickupBackpack::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPickupBackpack.UpdateVisuals");

	AMAPickupBackpack_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlaybackComponent.K2_CreateAndAddEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UMAPlaybackEvent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMAPlaybackEvent* UMAPlaybackComponent::K2_CreateAndAddEvent(class UClass* EventClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlaybackComponent.K2_CreateAndAddEvent");

	UMAPlaybackComponent_K2_CreateAndAddEvent_Params params;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerControllerBase.ToggleMenu
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAPlayerControllerBase::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ToggleMenu");

	AMAPlayerControllerBase_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerControllerBase.TestSerializeLoadoutWithSteam
// (Final, Exec, Native, Protected)

void AMAPlayerControllerBase::TestSerializeLoadoutWithSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.TestSerializeLoadoutWithSteam");

	AMAPlayerControllerBase_TestSerializeLoadoutWithSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.SetMouseSensitivityToDefault
// (Final, Exec, Native, Public)

void AMAPlayerControllerBase::SetMouseSensitivityToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.SetMouseSensitivityToDefault");

	AMAPlayerControllerBase_SetMouseSensitivityToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.SetMouseSensitivity
// (Final, Exec, Native, Public)
// Parameters:
// float                          Sensitivity                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::SetMouseSensitivity(float Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.SetMouseSensitivity");

	AMAPlayerControllerBase_SetMouseSensitivity_Params params;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ServerUpdateUserUnlocks
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<class UClass*>          NewUnlocks                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AMAPlayerControllerBase::ServerUpdateUserUnlocks(TArray<class UClass*> NewUnlocks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ServerUpdateUserUnlocks");

	AMAPlayerControllerBase_ServerUpdateUserUnlocks_Params params;
	params.NewUnlocks = NewUnlocks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ServerSetSteamLoadout
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FMALoadout              SerializedLoadout              (ConstParm, Parm, ReferenceParm)

void AMAPlayerControllerBase::ServerSetSteamLoadout(const struct FMALoadout& SerializedLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ServerSetSteamLoadout");

	AMAPlayerControllerBase_ServerSetSteamLoadout_Params params;
	params.SerializedLoadout = SerializedLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ServerSay
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::ServerSay(const struct FString& Message, bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ServerSay");

	AMAPlayerControllerBase_ServerSay_Params params;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ServerDoExpression
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::ServerDoExpression(int MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ServerDoExpression");

	AMAPlayerControllerBase_ServerDoExpression_Params params;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.Say
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::Say(const struct FString& Message, bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.Say");

	AMAPlayerControllerBase_Say_Params params;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.SaveGeneralSettings
// (Native, Public, BlueprintCallable)

void AMAPlayerControllerBase::SaveGeneralSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.SaveGeneralSettings");

	AMAPlayerControllerBase_SaveGeneralSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ResetAllSteamData
// (Final, Exec, Native, Public)

void AMAPlayerControllerBase::ResetAllSteamData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ResetAllSteamData");

	AMAPlayerControllerBase_ResetAllSteamData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.RefreshSteamInventory
// (Final, Exec, Native, Public)

void AMAPlayerControllerBase::RefreshSteamInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.RefreshSteamInventory");

	AMAPlayerControllerBase_RefreshSteamInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.InvertMouse
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bInvert                        (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::InvertMouse(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.InvertMouse");

	AMAPlayerControllerBase_InvertMouse_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.GiveXP
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::GiveXP(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.GiveXP");

	AMAPlayerControllerBase_GiveXP_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.GetMALocalPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMALocalPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMALocalPlayer* AMAPlayerControllerBase::GetMALocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.GetMALocalPlayer");

	AMAPlayerControllerBase_GetMALocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerControllerBase.GetIsFinalizedPlayerInventory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAPlayerControllerBase::GetIsFinalizedPlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.GetIsFinalizedPlayerInventory");

	AMAPlayerControllerBase_GetIsFinalizedPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerControllerBase.GenerateItem
// (Final, Exec, Native, Public)
// Parameters:
// int                            ItemDefId                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::GenerateItem(int ItemDefId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.GenerateItem");

	AMAPlayerControllerBase_GenerateItem_Params params;
	params.ItemDefId = ItemDefId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.EndQuickVoice
// (Native, Public, BlueprintCallable)

void AMAPlayerControllerBase::EndQuickVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.EndQuickVoice");

	AMAPlayerControllerBase_EndQuickVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.DoExpression
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::DoExpression(int MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.DoExpression");

	AMAPlayerControllerBase_DoExpression_Params params;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.DebugCrashGame
// (Final, Exec, Native, Protected)

void AMAPlayerControllerBase::DebugCrashGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.DebugCrashGame");

	AMAPlayerControllerBase_DebugCrashGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ClientSay
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::ClientSay(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ClientSay");

	AMAPlayerControllerBase_ClientSay_Params params;
	params.Speaker = Speaker;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ClientRefreshProgression
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AMAPlayerControllerBase::ClientRefreshProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ClientRefreshProgression");

	AMAPlayerControllerBase_ClientRefreshProgression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ClientInventoryFinalized
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AMAPlayerControllerBase::ClientInventoryFinalized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ClientInventoryFinalized");

	AMAPlayerControllerBase_ClientInventoryFinalized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ClientGivenXP
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            XP                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasLevelupReward              (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::ClientGivenXP(int XP, bool bHasLevelupReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ClientGivenXP");

	AMAPlayerControllerBase_ClientGivenXP_Params params;
	params.XP = XP;
	params.bHasLevelupReward = bHasLevelupReward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.ClientDoExpression
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerControllerBase::ClientDoExpression(class APlayerState* Speaker, int MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.ClientDoExpression");

	AMAPlayerControllerBase_ClientDoExpression_Params params;
	params.Speaker = Speaker;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerControllerBase.BypassTutorials
// (Final, Exec, Native, Public)

void AMAPlayerControllerBase::BypassTutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerControllerBase.BypassTutorials");

	AMAPlayerControllerBase_BypassTutorials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.VotePunishPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// EPunishType                    Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::VotePunishPlayer(class AMAPlayerState* TargetPlayer, EPunishType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.VotePunishPlayer");

	AMAPlayerController_VotePunishPlayer_Params params;
	params.TargetPlayer = TargetPlayer;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.UpdateServerName
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::UpdateServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.UpdateServerName");

	AMAPlayerController_UpdateServerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.UnsetPassword
// (Final, Exec, Native, Public)

void AMAPlayerController::UnsetPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.UnsetPassword");

	AMAPlayerController_UnsetPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ToggleScoreboard
// (Native, Public, BlueprintCallable)

void AMAPlayerController::ToggleScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ToggleScoreboard");

	AMAPlayerController_ToggleScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SpectateJumpToLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 LocationString                 (Parm, ZeroConstructor)

void AMAPlayerController::SpectateJumpToLocation(const struct FString& LocationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SpectateJumpToLocation");

	AMAPlayerController_SpectateJumpToLocation_Params params;
	params.LocationString = LocationString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.Spectate
// (Final, Exec, Native, Public)

void AMAPlayerController::Spectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.Spectate");

	AMAPlayerController_Spectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ShowScoreboard
// (Native, Public, BlueprintCallable)

void AMAPlayerController::ShowScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ShowScoreboard");

	AMAPlayerController_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SetupDeathEffects
// (Event, Public, BlueprintEvent)

void AMAPlayerController::SetupDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SetupDeathEffects");

	AMAPlayerController_SetupDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SetServerName
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 ServerName                     (Parm, ZeroConstructor)

void AMAPlayerController::SetServerName(const struct FString& ServerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SetServerName");

	AMAPlayerController_SetServerName_Params params;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SetPassword
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 NewPassword                    (Parm, ZeroConstructor)

void AMAPlayerController::SetPassword(const struct FString& NewPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SetPassword");

	AMAPlayerController_SetPassword_Params params;
	params.NewPassword = NewPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SetEnabledPawnRelatedInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  RequestingActor                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::SetEnabledPawnRelatedInput(class AActor* RequestingActor, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SetEnabledPawnRelatedInput");

	AMAPlayerController_SetEnabledPawnRelatedInput_Params params;
	params.RequestingActor = RequestingActor;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerVotePunishPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AMAPlayerState*          TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// EPunishType                    Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerVotePunishPlayer(class AMAPlayerState* TargetPlayer, EPunishType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerVotePunishPlayer");

	AMAPlayerController_ServerVotePunishPlayer_Params params;
	params.TargetPlayer = TargetPlayer;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerVoteEndWithNextMap
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// unsigned char                  MapIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerVoteEndWithNextMap(unsigned char MapIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerVoteEndWithNextMap");

	AMAPlayerController_ServerVoteEndWithNextMap_Params params;
	params.MapIndex = MapIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerViewRedFlag
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerViewRedFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerViewRedFlag");

	AMAPlayerController_ServerViewRedFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerViewBlueFlag
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerViewBlueFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerViewBlueFlag");

	AMAPlayerController_ServerViewBlueFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerViewAPlayerState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APlayerState*            PlayerStateToView              (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerViewAPlayerState(class APlayerState* PlayerStateToView)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerViewAPlayerState");

	AMAPlayerController_ServerViewAPlayerState_Params params;
	params.PlayerStateToView = PlayerStateToView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerUpdateRTT
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          RTT                            (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerUpdateRTT(float RTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerUpdateRTT");

	AMAPlayerController_ServerUpdateRTT_Params params;
	params.RTT = RTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerUpdateReplicatedInputSettings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FRepInputSettings       RepInputSettings               (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AMAPlayerController::ServerUpdateReplicatedInputSettings(const struct FRepInputSettings& RepInputSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerUpdateReplicatedInputSettings");

	AMAPlayerController_ServerUpdateReplicatedInputSettings_Params params;
	params.RepInputSettings = RepInputSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerUpdateReplicatedGeneralSettings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FRepGenSettings         RepGenSettings                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AMAPlayerController::ServerUpdateReplicatedGeneralSettings(const struct FRepGenSettings& RepGenSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerUpdateReplicatedGeneralSettings");

	AMAPlayerController_ServerUpdateReplicatedGeneralSettings_Params params;
	params.RepGenSettings = RepGenSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerUnsetPassword
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerUnsetPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerUnsetPassword");

	AMAPlayerController_ServerUnsetPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerToggleSpectateMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerToggleSpectateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerToggleSpectateMode");

	AMAPlayerController_ServerToggleSpectateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSuicide");

	AMAPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSubmitSimpleVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// ESimpleVote                    Vote                           (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerSubmitSimpleVote(ESimpleVote Vote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSubmitSimpleVote");

	AMAPlayerController_ServerSubmitSimpleVote_Params params;
	params.Vote = Vote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSpectate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerSpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSpectate");

	AMAPlayerController_ServerSpectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSetViewTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerSetViewTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSetViewTarget");

	AMAPlayerController_ServerSetViewTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSetSpectateMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// ESpectateMode                  Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerSetSpectateMode(ESpectateMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSetSpectateMode");

	AMAPlayerController_ServerSetSpectateMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSetPassword
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 NewPassword                    (Parm, ZeroConstructor)

void AMAPlayerController::ServerSetPassword(const struct FString& NewPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSetPassword");

	AMAPlayerController_ServerSetPassword_Params params;
	params.NewPassword = NewPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSetLoadout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, ReferenceParm)

void AMAPlayerController::ServerSetLoadout(const struct FMALoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSetLoadout");

	AMAPlayerController_ServerSetLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerSelectLoadoutByClass
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  CharacterInfo                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerSelectLoadoutByClass(class UClass* CharacterInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerSelectLoadoutByClass");

	AMAPlayerController_ServerSelectLoadoutByClass_Params params;
	params.CharacterInfo = CharacterInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerRespawnWithBasicLoadout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerRespawnWithBasicLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerRespawnWithBasicLoadout");

	AMAPlayerController_ServerRespawnWithBasicLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerRconOverrideNextMap
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void AMAPlayerController::ServerRconOverrideNextMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerRconOverrideNextMap");

	AMAPlayerController_ServerRconOverrideNextMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerRconEndMatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AMAPlayerController::ServerRconEndMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerRconEndMatch");

	AMAPlayerController_ServerRconEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerNegotiatePredictionPing
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          NewPredictionPing              (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerNegotiatePredictionPing(float NewPredictionPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerNegotiatePredictionPing");

	AMAPlayerController_ServerNegotiatePredictionPing_Params params;
	params.NewPredictionPing = NewPredictionPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerMoveToSpectate
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            PlayerToMove                   (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerMoveToSpectate(class APlayerState* PlayerToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerMoveToSpectate");

	AMAPlayerController_ServerMoveToSpectate_Params params;
	params.PlayerToMove = PlayerToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerKickPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            KickedPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void AMAPlayerController::ServerKickPlayer(class APlayerState* KickedPlayer, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerKickPlayer");

	AMAPlayerController_ServerKickPlayer_Params params;
	params.KickedPlayer = KickedPlayer;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerChangePlayerTeam
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            PlayerToMove                   (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerChangePlayerTeam(class APlayerState* PlayerToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerChangePlayerTeam");

	AMAPlayerController_ServerChangePlayerTeam_Params params;
	params.PlayerToMove = PlayerToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerCastOptionVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// EMapVoteOption                 Option                         (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ServerCastOptionVote(EMapVoteOption Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerCastOptionVote");

	AMAPlayerController_ServerCastOptionVote_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerBanPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            BannedPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void AMAPlayerController::ServerBanPlayer(class APlayerState* BannedPlayer, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerBanPlayer");

	AMAPlayerController_ServerBanPlayer_Params params;
	params.BannedPlayer = BannedPlayer;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ServerAdminLogin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Password                       (Parm, ZeroConstructor)

void AMAPlayerController::ServerAdminLogin(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ServerAdminLogin");

	AMAPlayerController_ServerAdminLogin_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SendLoadoutToServer
// (Native, Public, BlueprintCallable)

void AMAPlayerController::SendLoadoutToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SendLoadoutToServer");

	AMAPlayerController_SendLoadoutToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.SelectCurrentLoadout
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)

void AMAPlayerController::SelectCurrentLoadout(const struct FMALoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.SelectCurrentLoadout");

	AMAPlayerController_SelectCurrentLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.RecievedClearActiveRespawnDelay
// (Net, NetReliable, Native, Event, Public, NetClient)

void AMAPlayerController::RecievedClearActiveRespawnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.RecievedClearActiveRespawnDelay");

	AMAPlayerController_RecievedClearActiveRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.RecievedActiveRespawnDelay
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::RecievedActiveRespawnDelay(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.RecievedActiveRespawnDelay");

	AMAPlayerController_RecievedActiveRespawnDelay_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.RconOverrideNextMap
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void AMAPlayerController::RconOverrideNextMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.RconOverrideNextMap");

	AMAPlayerController_RconOverrideNextMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.RconEndMatch
// (Final, Exec, Native, Public)

void AMAPlayerController::RconEndMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.RconEndMatch");

	AMAPlayerController_RconEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.Predict
// (Exec, Native, Public)
// Parameters:
// float                          NewPredictionPing              (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::Predict(float NewPredictionPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.Predict");

	AMAPlayerController_Predict_Params params;
	params.NewPredictionPing = NewPredictionPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests
// (Native, Public)

void AMAPlayerController::OnRep_ServerDisablePawnRelatedInputRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests");

	AMAPlayerController_OnRep_ServerDisablePawnRelatedInputRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.OnRep_PlayerLoadout
// (Native, Public)

void AMAPlayerController::OnRep_PlayerLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.OnRep_PlayerLoadout");

	AMAPlayerController_OnRep_PlayerLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.IsPawnRelatedInputEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAPlayerController::IsPawnRelatedInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.IsPawnRelatedInputEnabled");

	AMAPlayerController_IsPawnRelatedInputEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.HideScoreboard
// (Native, Public, BlueprintCallable)

void AMAPlayerController::HideScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.HideScoreboard");

	AMAPlayerController_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.GetVehicleVitals
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMAVitalsComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMAVitalsComponent* AMAPlayerController::GetVehicleVitals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetVehicleVitals");

	AMAPlayerController_GetVehicleVitals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetTimeDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAPlayerController::GetTimeDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetTimeDead");

	AMAPlayerController_GetTimeDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetPlayerSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVehicleSeatComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehicleSeatComponent* AMAPlayerController::GetPlayerSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetPlayerSeat");

	AMAPlayerController_GetPlayerSeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetLastControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMACharacter* AMAPlayerController::GetLastControlledCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetLastControlledCharacter");

	AMAPlayerController_GetLastControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetEffectiveControlRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AMAPlayerController::GetEffectiveControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetEffectiveControlRotation");

	AMAPlayerController_GetEffectiveControlRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetCurrentXPPool
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMAPlayerController::GetCurrentXPPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetCurrentXPPool");

	AMAPlayerController_GetCurrentXPPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetControlledVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVehiclePawn*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVehiclePawn* AMAPlayerController::GetControlledVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetControlledVehicle");

	AMAPlayerController_GetControlledVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetControlledPassengerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APassengerPawn*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APassengerPawn* AMAPlayerController::GetControlledPassengerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetControlledPassengerPawn");

	AMAPlayerController_GetControlledPassengerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMACharacter* AMAPlayerController::GetControlledCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetControlledCharacter");

	AMAPlayerController_GetControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetCharacterVitals
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMAVitalsComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMAVitalsComponent* AMAPlayerController::GetCharacterVitals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetCharacterVitals");

	AMAPlayerController_GetCharacterVitals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.GetActiveRespawnDelay
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMAPlayerController::GetActiveRespawnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.GetActiveRespawnDelay");

	AMAPlayerController_GetActiveRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.FinishEndMatchVote
// (Net, NetReliable, Native, Event, Public, NetClient)

void AMAPlayerController::FinishEndMatchVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.FinishEndMatchVote");

	AMAPlayerController_FinishEndMatchVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.FindRelevantVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVehiclePawn*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVehiclePawn* AMAPlayerController::FindRelevantVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.FindRelevantVehicle");

	AMAPlayerController_FindRelevantVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.FindRelevantCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMACharacter* AMAPlayerController::FindRelevantCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.FindRelevantCharacter");

	AMAPlayerController_FindRelevantCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.FindMostRelevantPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AMAPlayerController::FindMostRelevantPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.FindMostRelevantPawn");

	AMAPlayerController_FindMostRelevantPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAPlayerController.EnterTemporarySpectate
// (Final, Native, Public)

void AMAPlayerController::EnterTemporarySpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.EnterTemporarySpectate");

	AMAPlayerController_EnterTemporarySpectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClientSetDeathTime
// (Net, NetReliable, Native, Event, Public, NetClient)

void AMAPlayerController::ClientSetDeathTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClientSetDeathTime");

	AMAPlayerController_ClientSetDeathTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClientReceiveDeathMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FDeathMessageData       DeathMessageData               (ConstParm, Parm, ReferenceParm)

void AMAPlayerController::ClientReceiveDeathMessage(const struct FDeathMessageData& DeathMessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClientReceiveDeathMessage");

	AMAPlayerController_ClientReceiveDeathMessage_Params params;
	params.DeathMessageData = DeathMessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClientPlayerKicked
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 KickReason                     (Parm, ZeroConstructor)
// float                          TimeRemaining                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ClientPlayerKicked(const struct FString& KickReason, float TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClientPlayerKicked");

	AMAPlayerController_ClientPlayerKicked_Params params;
	params.KickReason = KickReason;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClientNotifyMapChange
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void AMAPlayerController::ClientNotifyMapChange(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClientNotifyMapChange");

	AMAPlayerController_ClientNotifyMapChange_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClientNotifyInvulnerableBaseAssets
// (Net, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayersRequired                (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ClientNotifyInvulnerableBaseAssets(int PlayersRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClientNotifyInvulnerableBaseAssets");

	AMAPlayerController_ClientNotifyInvulnerableBaseAssets_Params params;
	params.PlayersRequired = PlayersRequired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ClearDeathEffects
// (Event, Public, BlueprintEvent)

void AMAPlayerController::ClearDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ClearDeathEffects");

	AMAPlayerController_ClearDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ChangeTeam
// (Exec, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  DesiredTeamId                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ChangeTeam(unsigned char DesiredTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ChangeTeam");

	AMAPlayerController_ChangeTeam_Params params;
	params.DesiredTeamId = DesiredTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.ChangeScoreboard
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::ChangeScoreboard(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.ChangeScoreboard");

	AMAPlayerController_ChangeScoreboard_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.BeginEndMatchVote
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// unsigned char                  MapIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AMAPlayerController::BeginEndMatchVote(unsigned char MapIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.BeginEndMatchVote");

	AMAPlayerController_BeginEndMatchVote_Params params;
	params.MapIndex = MapIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAPlayerController.AdminLogin
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Password                       (Parm, ZeroConstructor)

void AMAPlayerController::AdminLogin(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAPlayerController.AdminLogin");

	AMAPlayerController_AdminLogin_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.StagedMissileMovement.StartNewStage
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStageLength                  (Parm, ZeroConstructor, IsPlainOldData)

void UStagedMissileMovement::StartNewStage(float InStageLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.StagedMissileMovement.StartNewStage");

	UStagedMissileMovement_StartNewStage_Params params;
	params.InStageLength = InStageLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MatchMakingStatusWidget.ReleaseOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 CurrentOwner                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMatchMakingStatusWidget::ReleaseOwnership(class UWidget* CurrentOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MatchMakingStatusWidget.ReleaseOwnership");

	UMatchMakingStatusWidget_ReleaseOwnership_Params params;
	params.CurrentOwner = CurrentOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MatchMakingStatusWidget.ClaimOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 NewOwner                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMatchMakingStatusWidget::ClaimOwnership(class UWidget* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MatchMakingStatusWidget.ClaimOwnership");

	UMatchMakingStatusWidget_ClaimOwnership_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATeamInterface.GetTeamId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UMATeamInterface::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamInterface.GetTeamId");

	UMATeamInterface_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.RemoveFromTeam
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void AMATeamState::RemoveFromTeam(class AMAPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.RemoveFromTeam");

	AMATeamState_RemoveFromTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATeamState.NetMulticast_SetWeaponLimited
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLimited                       (Parm, ZeroConstructor, IsPlainOldData)

void AMATeamState::NetMulticast_SetWeaponLimited(class UClass* Weapon, bool bLimited)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.NetMulticast_SetWeaponLimited");

	AMATeamState_NetMulticast_SetWeaponLimited_Params params;
	params.Weapon = Weapon;
	params.bLimited = bLimited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATeamState.IsWeaponRestricted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMATeamState::IsWeaponRestricted(class UClass* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.IsWeaponRestricted");

	AMATeamState_IsWeaponRestricted_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.GetObjectCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ObjectType                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AMATeamState::GetObjectCount(class UClass* ObjectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.GetObjectCount");

	AMATeamState_GetObjectCount_Params params;
	params.ObjectType = ObjectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.GetNumPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMATeamState::GetNumPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.GetNumPlayers");

	AMATeamState_GetNumPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.FilterRestrictedItems
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          OutItems                       (Parm, OutParm, ZeroConstructor)

void AMATeamState::FilterRestrictedItems(TArray<class UClass*>* InItems, TArray<class UClass*>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.FilterRestrictedItems");

	AMATeamState_FilterRestrictedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InItems != nullptr)
		*InItems = params.InItems;
	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function Midair.MATeamState.CheckAndHandleSpawnWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMATeamState::CheckAndHandleSpawnWeapon(class UClass* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.CheckAndHandleSpawnWeapon");

	AMATeamState_CheckAndHandleSpawnWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.CanSpawnWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMATeamState::CanSpawnWeapon(class UClass* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.CanSpawnWeapon");

	AMATeamState_CanSpawnWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATeamState.AdjustScore
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData)

void AMATeamState::AdjustScore(int ScoreAdjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.AdjustScore");

	AMATeamState_AdjustScore_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATeamState.AdjustJackpot
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData)

void AMATeamState::AdjustJackpot(int ScoreAdjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.AdjustJackpot");

	AMATeamState_AdjustJackpot_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATeamState.AddToTeam
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void AMATeamState::AddToTeam(class AMAPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATeamState.AddToTeam");

	AMATeamState_AddToTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATRFlag.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMATRFlag::OnStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRFlag.OnStop");

	AMATRFlag_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATRFlag.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMATRFlag::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRFlag.OnBounce");

	AMATRFlag_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MATRGameState.GetIsFlagHolder
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMATRGameState::GetIsFlagHolder(class AMAPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRGameState.GetIsFlagHolder");

	AMATRGameState_GetIsFlagHolder_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATRGameState.GetFlagStateName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AMATRGameState::GetFlagStateName(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRGameState.GetFlagStateName");

	AMATRGameState_GetFlagStateName_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATRGameState.GetFlagHolderTimer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMATRGameState::GetFlagHolderTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRGameState.GetFlagHolderTimer");

	AMATRGameState_GetFlagHolderTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATRGameState.GetFlagBase
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMATRFlagBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMATRFlagBase* AMATRGameState::GetFlagBase(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRGameState.GetFlagBase");

	AMATRGameState_GetFlagBase_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MATRGameState.GetCurrentHolder
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMATRGameState::GetCurrentHolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MATRGameState.GetCurrentHolder");

	AMATRGameState_GetCurrentHolder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.TookDamage
// (Native, Protected)

void UMAVitalsComponent::TookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.TookDamage");

	UMAVitalsComponent_TookDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.TakeDamage
// (Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.TakeDamage");

	UMAVitalsComponent_TakeDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.ShieldStatusChanged
// (Native, Protected)

void UMAVitalsComponent::ShieldStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.ShieldStatusChanged");

	UMAVitalsComponent_ShieldStatusChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.SetHitFlashMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UMeshComponent*>  Meshes                         (Parm, ZeroConstructor)

void UMAVitalsComponent::SetHitFlashMeshes(TArray<class UMeshComponent*> Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.SetHitFlashMeshes");

	UMAVitalsComponent_SetHitFlashMeshes_Params params;
	params.Meshes = Meshes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.RepairHealth
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          RequestedAmount                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::RepairHealth(float RequestedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.RepairHealth");

	UMAVitalsComponent_RepairHealth_Params params;
	params.RequestedAmount = RequestedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.Repair
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          EnergyUsed                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::Repair(float EnergyUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.Repair");

	UMAVitalsComponent_Repair_Params params;
	params.EnergyUsed = EnergyUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.OnRep_IsDead
// (Native, Protected)

void UMAVitalsComponent::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.OnRep_IsDead");

	UMAVitalsComponent_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.OnRep_Heat
// (Native, Protected)

void UMAVitalsComponent::OnRep_Heat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.OnRep_Heat");

	UMAVitalsComponent_OnRep_Heat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.OnRep_Health
// (Native, Protected)

void UMAVitalsComponent::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.OnRep_Health");

	UMAVitalsComponent_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.IsDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAVitalsComponent::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.IsDead");

	UMAVitalsComponent_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.HasLowHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAVitalsComponent::HasLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.HasLowHealth");

	UMAVitalsComponent_HasLowHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.HasFullHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAVitalsComponent::HasFullHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.HasFullHealth");

	UMAVitalsComponent_HasFullHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.GetHealthPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::GetHealthPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.GetHealthPct");

	UMAVitalsComponent_GetHealthPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.GetEnergyPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::GetEnergyPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.GetEnergyPct");

	UMAVitalsComponent_GetEnergyPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.ConsumeEnergy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          RequestedAmount                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReturnPct                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMAVitalsComponent::ConsumeEnergy(float RequestedAmount, bool bReturnPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.ConsumeEnergy");

	UMAVitalsComponent_ConsumeEnergy_Params params;
	params.RequestedAmount = RequestedAmount;
	params.bReturnPct = bReturnPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAVitalsComponent.ClientDisableEnergyRegen
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UMAVitalsComponent::ClientDisableEnergyRegen(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.ClientDisableEnergyRegen");

	UMAVitalsComponent_ClientDisableEnergyRegen_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAVitalsComponent.CanBeRepaired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMAVitalsComponent::CanBeRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAVitalsComponent.CanBeRepaired");

	UMAVitalsComponent_CanBeRepaired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.MAWeaponAttachment.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.SetOverrideMaterials");

	AMAWeaponAttachment_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeaponAttachment.SetChargeIndicator
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::SetChargeIndicator(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.SetChargeIndicator");

	AMAWeaponAttachment_SetChargeIndicator_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeaponAttachment.OnCharacterGrabAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::OnCharacterGrabAmmo(bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.OnCharacterGrabAmmo");

	AMAWeaponAttachment_OnCharacterGrabAmmo_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeaponAttachment.OnCharacterAttachAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::OnCharacterAttachAmmo(bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.OnCharacterAttachAmmo");

	AMAWeaponAttachment_OnCharacterAttachAmmo_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeaponAttachment.K2_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::K2_UpdateForClientPerspective(bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.K2_UpdateForClientPerspective");

	AMAWeaponAttachment_K2_UpdateForClientPerspective_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.MAWeaponAttachment.DetachFirstAmmoActor
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void AMAWeaponAttachment::DetachFirstAmmoActor(bool bInFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.MAWeaponAttachment.DetachFirstAmmoActor");

	AMAWeaponAttachment_DetachFirstAmmoActor_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectInfo.OnUnlockableRequirementsMet
// (Native, Public)

void UObjectInfo::OnUnlockableRequirementsMet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.OnUnlockableRequirementsMet");

	UObjectInfo_OnUnlockableRequirementsMet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectInfo.OnUnlock
// (Event, Public, BlueprintEvent)

void UObjectInfo::OnUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.OnUnlock");

	UObjectInfo_OnUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectInfo.IsUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectInfo::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.IsUnlocked");

	UObjectInfo_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.GetUnmetRequirements
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UObjectInfo::GetUnmetRequirements(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.GetUnmetRequirements");

	UObjectInfo_GetUnmetRequirements_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.GetUnlockableData_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUnlockableObjectNode   InObjectNode                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UObjectInfo::GetUnlockableData_BP(struct FUnlockableObjectNode* InObjectNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.GetUnlockableData_BP");

	UObjectInfo_GetUnlockableData_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InObjectNode != nullptr)
		*InObjectNode = params.InObjectNode;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.GetObjectInfoFromClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InObjectClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UObjectInfo::STATIC_GetObjectInfoFromClass(class UClass* InObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.GetObjectInfoFromClass");

	UObjectInfo_GetObjectInfoFromClass_Params params;
	params.InObjectClass = InObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.GetObjectInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObjectInfo* UObjectInfo::STATIC_GetObjectInfo(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.GetObjectInfo");

	UObjectInfo_GetObjectInfo_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.GetActionText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UObjectInfo::GetActionText(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.GetActionText");

	UObjectInfo_GetActionText_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectInfo.FilterObjectInfoArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Base                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          AppliedFilter                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          outResult                      (Parm, OutParm, ZeroConstructor)
// bool                           bReturnInBoth                  (Parm, ZeroConstructor, IsPlainOldData)

void UObjectInfo::STATIC_FilterObjectInfoArray(bool bReturnInBoth, TArray<class UClass*>* Base, TArray<class UClass*>* AppliedFilter, TArray<class UClass*>* outResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.FilterObjectInfoArray");

	UObjectInfo_FilterObjectInfoArray_Params params;
	params.bReturnInBoth = bReturnInBoth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base != nullptr)
		*Base = params.Base;
	if (AppliedFilter != nullptr)
		*AppliedFilter = params.AppliedFilter;
	if (outResult != nullptr)
		*outResult = params.outResult;
}


// Function Midair.ObjectInfo.ConvertObjectArrayToItemArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Objects                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          OutItems                       (Parm, OutParm, ZeroConstructor)

void UObjectInfo::STATIC_ConvertObjectArrayToItemArray(TArray<class UClass*>* Objects, TArray<class UClass*>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectInfo.ConvertObjectArrayToItemArray");

	UObjectInfo_ConvertObjectArrayToItemArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objects != nullptr)
		*Objects = params.Objects;
	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function Midair.WeaponInfo.GetStats
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponStatDetails      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FWeaponStatDetails UWeaponInfo::GetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.WeaponInfo.GetStats");

	UWeaponInfo_GetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.AugmentInfo.CanBeUsedWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentInfo*            AugmentInfo                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAugmentInfo::CanBeUsedWith(class UAugmentInfo* AugmentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.AugmentInfo.CanBeUsedWith");

	UAugmentInfo_CanBeUsedWith_Params params;
	params.AugmentInfo = AugmentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.BackpackInfo.GetAvailableSecondaryAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UBackpackInfo::GetAvailableSecondaryAugments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.BackpackInfo.GetAvailableSecondaryAugments");

	UBackpackInfo_GetAvailableSecondaryAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.BackpackInfo.GetAvailablePrimaryAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UBackpackInfo::GetAvailablePrimaryAugments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.BackpackInfo.GetAvailablePrimaryAugments");

	UBackpackInfo_GetAvailablePrimaryAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.IsWeaponAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInfo::IsWeaponAvailable(class UClass* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.IsWeaponAvailable");

	UCharacterInfo_IsWeaponAvailable_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.IsVoiceSetAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  VoiceSet                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInfo::IsVoiceSetAvailable(class UClass* VoiceSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.IsVoiceSetAvailable");

	UCharacterInfo_IsVoiceSetAvailable_Params params;
	params.VoiceSet = VoiceSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.IsThrowableAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Throwable                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInfo::IsThrowableAvailable(class UClass* Throwable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.IsThrowableAvailable");

	UCharacterInfo_IsThrowableAvailable_Params params;
	params.Throwable = Throwable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.IsBackpackAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Backpack                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInfo::IsBackpackAvailable(class UClass* Backpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.IsBackpackAvailable");

	UCharacterInfo_IsBackpackAvailable_Params params;
	params.Backpack = Backpack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.IsAugmentAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Augment                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInfo::IsAugmentAvailable(class UClass* Augment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.IsAugmentAvailable");

	UCharacterInfo_IsAugmentAvailable_Params params;
	params.Augment = Augment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetUnavailableAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetUnavailableAugments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetUnavailableAugments");

	UCharacterInfo_GetUnavailableAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetStats
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCharacterStatDetails   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FCharacterStatDetails UCharacterInfo::GetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetStats");

	UCharacterInfo_GetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetAvailableWeapons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetAvailableWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetAvailableWeapons");

	UCharacterInfo_GetAvailableWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetAvailableVoiceSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetAvailableVoiceSets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetAvailableVoiceSets");

	UCharacterInfo_GetAvailableVoiceSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetAvailableThrowables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetAvailableThrowables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetAvailableThrowables");

	UCharacterInfo_GetAvailableThrowables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetAvailableDeployables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetAvailableDeployables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetAvailableDeployables");

	UCharacterInfo_GetAvailableDeployables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.CharacterInfo.GetAvailableBackpacks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UCharacterInfo::GetAvailableBackpacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.CharacterInfo.GetAvailableBackpacks");

	UCharacterInfo_GetAvailableBackpacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleInfo.GetSeatCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UVehicleInfo::GetSeatCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleInfo.GetSeatCount");

	UVehicleInfo_GetSeatCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleInfo.GetMaxSeatableArmorSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EArmorSize                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EArmorSize UVehicleInfo::GetMaxSeatableArmorSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleInfo.GetMaxSeatableArmorSize");

	UVehicleInfo_GetMaxSeatableArmorSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ObjectivePrompt.UpdateExistingPrompt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMidairObjectiveInfo    DeltaObjectiveInfo             (Parm, OutParm)
// EObjectiveUpdateType           UpdateType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantsUpdate                   (Parm, ZeroConstructor, IsPlainOldData)

void UObjectivePrompt::UpdateExistingPrompt(EObjectiveUpdateType UpdateType, bool bWantsUpdate, struct FMidairObjectiveInfo* DeltaObjectiveInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectivePrompt.UpdateExistingPrompt");

	UObjectivePrompt_UpdateExistingPrompt_Params params;
	params.UpdateType = UpdateType;
	params.bWantsUpdate = bWantsUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaObjectiveInfo != nullptr)
		*DeltaObjectiveInfo = params.DeltaObjectiveInfo;
}


// Function Midair.ObjectivePrompt.SetPrompt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMidairObjectiveInfo    NewObjectiveInfo               (Parm, OutParm)

void UObjectivePrompt::SetPrompt(struct FMidairObjectiveInfo* NewObjectiveInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectivePrompt.SetPrompt");

	UObjectivePrompt_SetPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewObjectiveInfo != nullptr)
		*NewObjectiveInfo = params.NewObjectiveInfo;
}


// Function Midair.ObjectivePrompt.OnPromptChanged
// (Event, Public, BlueprintEvent)

void UObjectivePrompt::OnPromptChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectivePrompt.OnPromptChanged");

	UObjectivePrompt_OnPromptChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectivePrompt.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)

void UObjectivePrompt::OnObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectivePrompt.OnObjectiveCompleted");

	UObjectivePrompt_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectivePrompt.ClearPrompt
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCompleted                     (Parm, ZeroConstructor, IsPlainOldData)

void UObjectivePrompt::ClearPrompt(bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectivePrompt.ClearPrompt");

	UObjectivePrompt_ClearPrompt_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectiveVolume.OnOverlap
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BodyIndexbool                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AObjectiveVolume::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectiveVolume.OnOverlap");

	AObjectiveVolume_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndexbool = BodyIndexbool;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectiveVolume.EndOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AObjectiveVolume::EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectiveVolume.EndOverlap");

	AObjectiveVolume_EndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectLauncher.OnSpawnedActorDeath
// (Native, Public)

void AObjectLauncher::OnSpawnedActorDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectLauncher.OnSpawnedActorDeath");

	AObjectLauncher_OnSpawnedActorDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectLauncher.LaunchActor
// (Native, Public)

void AObjectLauncher::LaunchActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectLauncher.LaunchActor");

	AObjectLauncher_LaunchActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ObjectLauncher_Spline.SpawnActorToLaunch
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AObjectLauncher_Spline::SpawnActorToLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ObjectLauncher_Spline.SpawnActorToLaunch");

	AObjectLauncher_Spline_SpawnActorToLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ParticleConfiguration.SetParticlesOnComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AParticleConfiguration::SetParticlesOnComponent(class UParticleSystemComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ParticleConfiguration.SetParticlesOnComponent");

	AParticleConfiguration_SetParticlesOnComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.ParticleConfiguration.SetParticlesOnActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AParticleConfiguration::SetParticlesOnActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ParticleConfiguration.SetParticlesOnActor");

	AParticleConfiguration_SetParticlesOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.TryReload
// (Final, Native, Public)

void APassengerPawn::TryReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.TryReload");

	APassengerPawn_TryReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.ServerSetRelativeControlRotation
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint32_t                       NewControlPitchYaw             (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::ServerSetRelativeControlRotation(uint32_t NewControlPitchYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.ServerSetRelativeControlRotation");

	APassengerPawn_ServerSetRelativeControlRotation_Params params;
	params.NewControlPitchYaw = NewControlPitchYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.ServerReseatCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  NewSeatPosition                (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::ServerReseatCharacter(unsigned char NewSeatPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.ServerReseatCharacter");

	APassengerPawn_ServerReseatCharacter_Params params;
	params.NewSeatPosition = NewSeatPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.ServerReload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APassengerPawn::ServerReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.ServerReload");

	APassengerPawn_ServerReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.Server_SetCameraMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// ECameraMode                    NewCameraMode                  (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::Server_SetCameraMode(ECameraMode NewCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.Server_SetCameraMode");

	APassengerPawn_Server_SetCameraMode_Params params;
	params.NewCameraMode = NewCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.Server_SetActiveThirdAbility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::Server_SetActiveThirdAbility(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.Server_SetActiveThirdAbility");

	APassengerPawn_Server_SetActiveThirdAbility_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.Server_SetActiveSecondAbility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::Server_SetActiveSecondAbility(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.Server_SetActiveSecondAbility");

	APassengerPawn_Server_SetActiveSecondAbility_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.Server_SetActiveFirstAbility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void APassengerPawn::Server_SetActiveFirstAbility(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.Server_SetActiveFirstAbility");

	APassengerPawn_Server_SetActiveFirstAbility_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.RemoveCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APassengerPawn::RemoveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.RemoveCharacter");

	APassengerPawn_RemoveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PassengerPawn.OnRep_ControlPitchYaw
// (Native, Public)

void APassengerPawn::OnRep_ControlPitchYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PassengerPawn.OnRep_ControlPitchYaw");

	APassengerPawn_OnRep_ControlPitchYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PlayerLoadoutsSave.SetLastSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::SetLastSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.SetLastSelectedIndex");

	UPlayerLoadoutsSave_SetLastSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PlayerLoadoutsSave.SaveChanges
// (Final, Native, Public, BlueprintCallable)

void UPlayerLoadoutsSave::SaveChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.SaveChanges");

	UPlayerLoadoutsSave_SaveChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame
// (Final, Native, Public, BlueprintCallable)

void UPlayerLoadoutsSave::RestoreDefaultLoadoutsForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame");

	UPlayerLoadoutsSave_RestoreDefaultLoadoutsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_Weapon(int IndexAt, class UClass* DesiredWeapon, class UClass* DesiredSkin, bool bDoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Weapon_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;
	params.DesiredSkin = DesiredSkin;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredVoiceSet                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_VoiceSet(class UClass* DesiredVoiceSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet");

	UPlayerLoadoutsSave_ModifySelectedLoadout_VoiceSet_Params params;
	params.DesiredVoiceSet = DesiredVoiceSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_Throwable(int IndexAt, class UClass* DesiredThrowable, bool bDoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Throwable_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Pack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_Pack(class UClass* DesiredBackpack, bool bDoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Pack");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Pack_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectInfoClass                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredSkin                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_ObjectSkin(class UClass* ObjectInfoClass, class UClass* DesiredSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin");

	UPlayerLoadoutsSave_ModifySelectedLoadout_ObjectSkin_Params params;
	params.ObjectInfoClass = ObjectInfoClass;
	params.DesiredSkin = DesiredSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Name
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 DesiredName                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerLoadoutsSave::ModifySelectedLoadout_Name(struct FString* DesiredName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Name");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Name_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredName != nullptr)
		*DesiredName = params.DesiredName;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Character
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_Character(class UClass* DesiredCharacter, bool bDoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Character");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Character_Params params;
	params.DesiredCharacter = DesiredCharacter;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Augment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredAugment                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::ModifySelectedLoadout_Augment(int IndexAt, class UClass* DesiredAugment, bool bDoCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifySelectedLoadout_Augment");

	UPlayerLoadoutsSave_ModifySelectedLoadout_Augment_Params params;
	params.IndexAt = IndexAt;
	params.DesiredAugment = DesiredAugment;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ModifyNamedCosmeticSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Cosmetic                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::ModifyNamedCosmeticSelection(const struct FName& Name, class UClass* Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ModifyNamedCosmeticSelection");

	UPlayerLoadoutsSave_ModifyNamedCosmeticSelection_Params params;
	params.Name = Name;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PlayerLoadoutsSave.GetVoiceIdent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPlayerLoadoutsSave::STATIC_GetVoiceIdent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetVoiceIdent");

	UPlayerLoadoutsSave_GetVoiceIdent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetSprayIdent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPlayerLoadoutsSave::STATIC_GetSprayIdent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetSprayIdent");

	UPlayerLoadoutsSave_GetSprayIdent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetSavedGamemodes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> UPlayerLoadoutsSave::GetSavedGamemodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetSavedGamemodes");

	UPlayerLoadoutsSave_GetSavedGamemodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetNamedCosmeticSelection
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UPlayerLoadoutsSave::GetNamedCosmeticSelection(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetNamedCosmeticSelection");

	UPlayerLoadoutsSave_GetNamedCosmeticSelection_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutWeapons
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          OutWeapons                     (Parm, OutParm, ZeroConstructor)

void UPlayerLoadoutsSave::STATIC_GetLoadoutWeapons(TArray<class UClass*>* OutWeapons)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutWeapons");

	UPlayerLoadoutsSave_GetLoadoutWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWeapons != nullptr)
		*OutWeapons = params.OutWeapons;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutThrowables
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          OutThrowables                  (Parm, OutParm, ZeroConstructor)

void UPlayerLoadoutsSave::STATIC_GetLoadoutThrowables(TArray<class UClass*>* OutThrowables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutThrowables");

	UPlayerLoadoutsSave_GetLoadoutThrowables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutThrowables != nullptr)
		*OutThrowables = params.OutThrowables;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutsForGamemode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMALoadout>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMALoadout> UPlayerLoadoutsSave::GetLoadoutsForGamemode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutsForGamemode");

	UPlayerLoadoutsSave_GetLoadoutsForGamemode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMALoadout              Loadout                        (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerLoadoutsSave::GetLoadoutIndex(struct FMALoadout* Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutIndex");

	UPlayerLoadoutsSave_GetLoadoutIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutCurrentlyAvailableAugments
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bPrimary                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          OutAugments                    (Parm, OutParm, ZeroConstructor)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::GetLoadoutCurrentlyAvailableAugments(bool bPrimary, bool bDoCheck, TArray<class UClass*>* OutAugments)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutCurrentlyAvailableAugments");

	UPlayerLoadoutsSave_GetLoadoutCurrentlyAvailableAugments_Params params;
	params.bPrimary = bPrimary;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAugments != nullptr)
		*OutAugments = params.OutAugments;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutCharacterInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCharacterInfo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCharacterInfo* UPlayerLoadoutsSave::STATIC_GetLoadoutCharacterInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutCharacterInfo");

	UPlayerLoadoutsSave_GetLoadoutCharacterInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutCharacter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  OutCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::STATIC_GetLoadoutCharacter(class UClass** OutCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutCharacter");

	UPlayerLoadoutsSave_GetLoadoutCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacter != nullptr)
		*OutCharacter = params.OutCharacter;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutBackpackInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBackpackInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackInfo* UPlayerLoadoutsSave::STATIC_GetLoadoutBackpackInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutBackpackInfo");

	UPlayerLoadoutsSave_GetLoadoutBackpackInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutBackpack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  OutBackpack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::STATIC_GetLoadoutBackpack(class UClass** OutBackpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutBackpack");

	UPlayerLoadoutsSave_GetLoadoutBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBackpack != nullptr)
		*OutBackpack = params.OutBackpack;
}


// Function Midair.PlayerLoadoutsSave.GetLoadoutAugments
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bPrimary                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          OutAugments                    (Parm, OutParm, ZeroConstructor)
// bool                           bEvenInvalid                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::STATIC_GetLoadoutAugments(bool bPrimary, bool bEvenInvalid, TArray<class UClass*>* OutAugments)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLoadoutAugments");

	UPlayerLoadoutsSave_GetLoadoutAugments_Params params;
	params.bPrimary = bPrimary;
	params.bEvenInvalid = bEvenInvalid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAugments != nullptr)
		*OutAugments = params.OutAugments;
}


// Function Midair.PlayerLoadoutsSave.GetLastSelectedLoadout
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMALoadout              outLoadout                     (Parm, OutParm)

void UPlayerLoadoutsSave::GetLastSelectedLoadout(struct FMALoadout* outLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLastSelectedLoadout");

	UPlayerLoadoutsSave_GetLastSelectedLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoadout != nullptr)
		*outLoadout = params.outLoadout;
}


// Function Midair.PlayerLoadoutsSave.GetLastSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerLoadoutsSave::GetLastSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetLastSelectedIndex");

	UPlayerLoadoutsSave_GetLastSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetGlobalLoadoutsSave
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bForceNew                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerLoadoutsSave*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerLoadoutsSave* UPlayerLoadoutsSave::STATIC_GetGlobalLoadoutsSave(bool bForceNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetGlobalLoadoutsSave");

	UPlayerLoadoutsSave_GetGlobalLoadoutsSave_Params params;
	params.bForceNew = bForceNew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetCustomLoadoutsSave
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bForceNew                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerLoadoutsSave*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerLoadoutsSave* UPlayerLoadoutsSave::STATIC_GetCustomLoadoutsSave(bool bForceNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetCustomLoadoutsSave");

	UPlayerLoadoutsSave_GetCustomLoadoutsSave_Params params;
	params.bForceNew = bForceNew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemodeInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAGameMode*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAGameMode* UPlayerLoadoutsSave::STATIC_GetCurrentLoadoutGamemodeInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemodeInstance");

	UPlayerLoadoutsSave_GetCurrentLoadoutGamemodeInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemode
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  OutGamemode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::STATIC_GetCurrentLoadoutGamemode(class UClass** OutGamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetCurrentLoadoutGamemode");

	UPlayerLoadoutsSave_GetCurrentLoadoutGamemode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGamemode != nullptr)
		*OutGamemode = params.OutGamemode;
}


// Function Midair.PlayerLoadoutsSave.GetCachedGamemode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UPlayerLoadoutsSave::GetCachedGamemode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.GetCachedGamemode");

	UPlayerLoadoutsSave_GetCachedGamemode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckWeaponForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              UseLoadout                     (Parm)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckWeaponForLoadout(int IndexAt, class UClass* DesiredWeapon, const struct FMALoadout& UseLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckWeaponForLoadout");

	UPlayerLoadoutsSave_CheckWeaponForLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckWeaponForCurrentLoadout(int IndexAt, class UClass* DesiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout");

	UPlayerLoadoutsSave_CheckWeaponForCurrentLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckThrowableForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              UseLoadout                     (Parm)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckThrowableForLoadout(int IndexAt, class UClass* DesiredThrowable, const struct FMALoadout& UseLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckThrowableForLoadout");

	UPlayerLoadoutsSave_CheckThrowableForLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckThrowableForCurrentLoadout(int IndexAt, class UClass* DesiredThrowable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout");

	UPlayerLoadoutsSave_CheckThrowableForCurrentLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckPackForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              UseLoadout                     (Parm)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckPackForLoadout(class UClass* DesiredBackpack, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckPackForLoadout");

	UPlayerLoadoutsSave_CheckPackForLoadout_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.UseLoadout = UseLoadout;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckPackForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckPackForCurrentLoadout(class UClass* DesiredBackpack, class UClass* OverrideComparisonCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckPackForCurrentLoadout");

	UPlayerLoadoutsSave_CheckPackForCurrentLoadout_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckLoadoutNameUnique
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 DesiredName                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerLoadoutsSave::CheckLoadoutNameUnique(struct FString* DesiredName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckLoadoutNameUnique");

	UPlayerLoadoutsSave_CheckLoadoutNameUnique_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredName != nullptr)
		*DesiredName = params.DesiredName;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckCharacterForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              UseLoadout                     (Parm)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckCharacterForLoadout(class UClass* DesiredCharacter, const struct FMALoadout& UseLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckCharacterForLoadout");

	UPlayerLoadoutsSave_CheckCharacterForLoadout_Params params;
	params.DesiredCharacter = DesiredCharacter;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckCharacterForCurrentLoadout(class UClass* DesiredCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout");

	UPlayerLoadoutsSave_CheckCharacterForCurrentLoadout_Params params;
	params.DesiredCharacter = DesiredCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckAugmentForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredAugment                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FMALoadout              UseLoadout                     (Parm)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonPack         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonPrimaryAugment (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckAugmentForLoadout(int IndexAt, class UClass* DesiredAugment, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter, class UClass* OverrideComparisonPack, class UClass* OverrideComparisonPrimaryAugment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckAugmentForLoadout");

	UPlayerLoadoutsSave_CheckAugmentForLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredAugment = DesiredAugment;
	params.UseLoadout = UseLoadout;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;
	params.OverrideComparisonPack = OverrideComparisonPack;
	params.OverrideComparisonPrimaryAugment = OverrideComparisonPrimaryAugment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CheckAugmentForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DesiredAugment                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonPack         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OverrideComparisonPrimaryAugment (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UPlayerLoadoutsSave::CheckAugmentForCurrentLoadout(int IndexAt, class UClass* DesiredAugment, class UClass* OverrideComparisonCharacter, class UClass* OverrideComparisonPack, class UClass* OverrideComparisonPrimaryAugment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CheckAugmentForCurrentLoadout");

	UPlayerLoadoutsSave_CheckAugmentForCurrentLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredAugment = DesiredAugment;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;
	params.OverrideComparisonPack = OverrideComparisonPack;
	params.OverrideComparisonPrimaryAugment = OverrideComparisonPrimaryAugment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.ChangeSelectedLoadout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMALoadout              Loadout                        (Parm, OutParm, ReferenceParm)

void UPlayerLoadoutsSave::ChangeSelectedLoadout(struct FMALoadout* Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.ChangeSelectedLoadout");

	UPlayerLoadoutsSave_ChangeSelectedLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;
}


// Function Midair.PlayerLoadoutsSave.CacheGamemodeClassAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UPlayerLoadoutsSave::CacheGamemodeClassAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CacheGamemodeClassAtIndex");

	UPlayerLoadoutsSave_CacheGamemodeClassAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PlayerLoadoutsSave.CacheGamemodeClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameModeClass                  (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerLoadoutsSave::CacheGamemodeClass(class UClass* GameModeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PlayerLoadoutsSave.CacheGamemodeClass");

	UPlayerLoadoutsSave_CacheGamemodeClass_Params params;
	params.GameModeClass = GameModeClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TutorialDialougeManager.TryAddSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTutorialDialougeDetails NewSound                       (Parm)

void UTutorialDialougeManager::TryAddSound(const struct FTutorialDialougeDetails& NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TutorialDialougeManager.TryAddSound");

	UTutorialDialougeManager_TryAddSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TutorialDialougeManager.StartNewDialouge
// (Final, Native, Public)

void UTutorialDialougeManager::StartNewDialouge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TutorialDialougeManager.StartNewDialouge");

	UTutorialDialougeManager_StartNewDialouge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TutorialDialougeManager.NewDialougeManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTutorialDialougeManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTutorialDialougeManager* UTutorialDialougeManager::STATIC_NewDialougeManager(class UObject* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TutorialDialougeManager.NewDialougeManager");

	UTutorialDialougeManager_NewDialougeManager_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.TutorialDialougeManager.DialougeFinished
// (Final, Native, Public)

void UTutorialDialougeManager::DialougeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TutorialDialougeManager.DialougeFinished");

	UTutorialDialougeManager_DialougeFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TutorialDialougeManager.ClearAndStopAllSounds
// (Final, Native, Public, BlueprintCallable)

void UTutorialDialougeManager::ClearAndStopAllSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TutorialDialougeManager.ClearAndStopAllSounds");

	UTutorialDialougeManager_ClearAndStopAllSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PRGameMode.OnTriggerEndLesson
// (Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APRGameMode::OnTriggerEndLesson(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.OnTriggerEndLesson");

	APRGameMode_OnTriggerEndLesson_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PRGameMode.OnTriggerBeginLesson
// (Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APRGameMode::OnTriggerBeginLesson(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.OnTriggerBeginLesson");

	APRGameMode_OnTriggerBeginLesson_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PRGameMode.GetCurrentLessonTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APRGameMode::GetCurrentLessonTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.GetCurrentLessonTag");

	APRGameMode_GetCurrentLessonTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PRGameMode.GetCurrentLesson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPracticeLessonDetails  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPracticeLessonDetails APRGameMode::GetCurrentLesson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.GetCurrentLesson");

	APRGameMode_GetCurrentLesson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.PRGameMode.AdvanceTrackingToLesson
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void APRGameMode::AdvanceTrackingToLesson(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.AdvanceTrackingToLesson");

	APRGameMode_AdvanceTrackingToLesson_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.PRGameMode.AdvanceToNextLesson
// (Native, Public, BlueprintCallable)

void APRGameMode::AdvanceToNextLesson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.PRGameMode.AdvanceToNextLesson");

	APRGameMode_AdvanceToNextLesson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SensorNetworkComponent.SetSensorChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  NewChannel                     (Parm, ZeroConstructor, IsPlainOldData)

void USensorNetworkComponent::SetSensorChannel(unsigned char NewChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SensorNetworkComponent.SetSensorChannel");

	USensorNetworkComponent_SetSensorChannel_Params params;
	params.NewChannel = NewChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SensorNetworkComponent.Reactivate
// (Native, Public)

void USensorNetworkComponent::Reactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SensorNetworkComponent.Reactivate");

	USensorNetworkComponent_Reactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SensorNetworkComponent.HasDetectedTarget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetComponent*        TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USensorNetworkComponent::HasDetectedTarget(class UTargetComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SensorNetworkComponent.HasDetectedTarget");

	USensorNetworkComponent_HasDetectedTarget_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SensorNetworkComponent.GetSensorChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char USensorNetworkComponent::GetSensorChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SensorNetworkComponent.GetSensorChannel");

	USensorNetworkComponent_GetSensorChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ServiceBlueprintLibrary.IsSameDemoVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DemoVersion                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceBlueprintLibrary::STATIC_IsSameDemoVersion(const struct FString& DemoVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ServiceBlueprintLibrary.IsSameDemoVersion");

	UServiceBlueprintLibrary_IsSameDemoVersion_Params params;
	params.DemoVersion = DemoVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ServiceBlueprintLibrary.IsDownloadedDemo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 DemoId                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceBlueprintLibrary::STATIC_IsDownloadedDemo(const struct FString& DemoId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ServiceBlueprintLibrary.IsDownloadedDemo");

	UServiceBlueprintLibrary_IsDownloadedDemo_Params params;
	params.DemoId = DemoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ServiceBlueprintLibrary.GetDemoProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UServiceBlueprintLibrary::STATIC_GetDemoProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ServiceBlueprintLibrary.GetDemoProgress");

	UServiceBlueprintLibrary_GetDemoProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.ServiceBlueprintLibrary.CancelGetDemo
// (Final, Native, Static, Public, BlueprintCallable)

void UServiceBlueprintLibrary::STATIC_CancelGetDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.ServiceBlueprintLibrary.CancelGetDemo");

	UServiceBlueprintLibrary_CancelGetDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.StopMatchMaking
// (Final, Native, Static, Public, BlueprintCallable)

void USteamMatchMakingBlueprintLibrary::STATIC_StopMatchMaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.StopMatchMaking");

	USteamMatchMakingBlueprintLibrary_StopMatchMaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.StartMatchMaking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<TEnumAsByte<EMAMatchType>> MatchType                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           WaitingWarmupServer            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeNonOfficialServer       (Parm, ZeroConstructor, IsPlainOldData)

void USteamMatchMakingBlueprintLibrary::STATIC_StartMatchMaking(TArray<TEnumAsByte<EMAMatchType>> MatchType, bool WaitingWarmupServer, bool IncludeNonOfficialServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.StartMatchMaking");

	USteamMatchMakingBlueprintLibrary_StartMatchMaking_Params params;
	params.MatchType = MatchType;
	params.WaitingWarmupServer = WaitingWarmupServer;
	params.IncludeNonOfficialServer = IncludeNonOfficialServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.IsValidLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamMatchMakingBlueprintLibrary::STATIC_IsValidLobby(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.IsValidLobby");

	USteamMatchMakingBlueprintLibrary_IsValidLobby_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.IsLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamMatchMakingBlueprintLibrary::STATIC_IsLobbyOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.IsLobbyOwner");

	USteamMatchMakingBlueprintLibrary_IsLobbyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamMatchMakingBlueprintLibrary::STATIC_GetNumLobbyMembers(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers");

	USteamMatchMakingBlueprintLibrary_GetNumLobbyMembers_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerInfo             PlayerInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamMatchMakingBlueprintLibrary::STATIC_GetMyPlayerInfo(struct FPlayerInfo* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo");

	USteamMatchMakingBlueprintLibrary_GetMyPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimespan USteamMatchMakingBlueprintLibrary::STATIC_GetMatchMakingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime");

	USteamMatchMakingBlueprintLibrary_GetMatchMakingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EMAMatchLobbyStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EMAMatchLobbyStatus> USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyStatus");

	USteamMatchMakingBlueprintLibrary_GetLobbyStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerInfo>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerInfo> USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyPlayers(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers");

	USteamMatchMakingBlueprintLibrary_GetLobbyPlayers_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLobbyGameCreated       LobbyGameCreated               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyGameCreated(struct FLobbyGameCreated* LobbyGameCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated");

	USteamMatchMakingBlueprintLibrary_GetLobbyGameCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyGameCreated != nullptr)
		*LobbyGameCreated = params.LobbyGameCreated;

	return params.ReturnValue;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.EventTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USteamMatchMakingBlueprintLibrary::STATIC_EventTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.EventTick");

	USteamMatchMakingBlueprintLibrary_EventTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SteamMatchMakingBlueprintLibrary.Equal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId1                      (Parm)
// struct FUniqueNetIdRepl        UniqueId2                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamMatchMakingBlueprintLibrary::STATIC_Equal(const struct FUniqueNetIdRepl& UniqueId1, const struct FUniqueNetIdRepl& UniqueId2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SteamMatchMakingBlueprintLibrary.Equal");

	USteamMatchMakingBlueprintLibrary_Equal_Params params;
	params.UniqueId1 = UniqueId1;
	params.UniqueId2 = UniqueId2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.StickyProjectile.OnDeath
// (Final, Native, Protected)

void AStickyProjectile::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.StickyProjectile.OnDeath");

	AStickyProjectile_OnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.StickyProjectile.OnAttachParentDied
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DeadActor                      (Parm, ZeroConstructor, IsPlainOldData)

void AStickyProjectile::OnAttachParentDied(class AActor* DeadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.StickyProjectile.OnAttachParentDied");

	AStickyProjectile_OnAttachParentDied_Params params;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.SubmitUserReportAsyncTask.SubmitUserReport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Summary                        (Parm, ZeroConstructor)
// struct FString                 Description                    (Parm, ZeroConstructor)
// struct FString                 Reproduce                      (Parm, ZeroConstructor)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// class USubmitUserReportAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USubmitUserReportAsyncTask* USubmitUserReportAsyncTask::STATIC_SubmitUserReport(const struct FString& Summary, const struct FString& Description, const struct FString& Reproduce, int Severity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.SubmitUserReportAsyncTask.SubmitUserReport");

	USubmitUserReportAsyncTask_SubmitUserReport_Params params;
	params.Summary = Summary;
	params.Description = Description;
	params.Reproduce = Reproduce;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.TargetComponent.StopAllTargetting
// (Native, Protected)

void UTargetComponent::StopAllTargetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.StopAllTargetting");

	UTargetComponent_StopAllTargetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TargetComponent.SetSensorResolutionStrengthTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESensorResolutionStrength      Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UTargetComponent::SetSensorResolutionStrengthTime(ESensorResolutionStrength Strength, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.SetSensorResolutionStrengthTime");

	UTargetComponent_SetSensorResolutionStrengthTime_Params params;
	params.Strength = Strength;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TargetComponent.PushSensorModifiers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSensorTargetModifiers  Modifiers                      (ConstParm, Parm, OutParm, ReferenceParm)

void UTargetComponent::PushSensorModifiers(const struct FSensorTargetModifiers& Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.PushSensorModifiers");

	UTargetComponent_PushSensorModifiers_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TargetComponent.PopSensorModifiers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSensorTargetModifiers  Modifiers                      (ConstParm, Parm, OutParm, ReferenceParm)

void UTargetComponent::PopSensorModifiers(const struct FSensorTargetModifiers& Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.PopSensorModifiers");

	UTargetComponent_PopSensorModifiers_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TargetComponent.IsDetectedByChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  InChannel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetComponent::IsDetectedByChannel(unsigned char InChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.IsDetectedByChannel");

	UTargetComponent_IsDetectedByChannel_Params params;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.TargetComponent.GetHighestDetectedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDetectedState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDetectedState UTargetComponent::GetHighestDetectedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetComponent.GetHighestDetectedState");

	UTargetComponent_GetHighestDetectedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.TargetDummy.OnDied
// (Final, Native, Public)

void ATargetDummy::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetDummy.OnDied");

	ATargetDummy_OnDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.TargetDummy.GetTeamId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ATargetDummy::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetDummy.GetTeamId");

	ATargetDummy_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.TargetDummy.ForceKill
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ATargetDummy::ForceKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.TargetDummy.ForceKill");

	ATargetDummy_ForceKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.TryFire
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleWeaponComponent::TryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.TryFire");

	UVehicleWeaponComponent_TryFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleWeaponComponent.ServerTryReload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UVehicleWeaponComponent::ServerTryReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.ServerTryReload");

	UVehicleWeaponComponent_ServerTryReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.ServerSetTrigger
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bSet                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleWeaponComponent::ServerSetTrigger(bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.ServerSetTrigger");

	UVehicleWeaponComponent_ServerSetTrigger_Params params;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.ServerFireProjectiles
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  FireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleWeaponComponent::ServerFireProjectiles(unsigned char FireIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.ServerFireProjectiles");

	UVehicleWeaponComponent_ServerFireProjectiles_Params params;
	params.FireIndex = FireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.NM_StartReloadSound
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVehicleWeaponComponent::NM_StartReloadSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.NM_StartReloadSound");

	UVehicleWeaponComponent_NM_StartReloadSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.NM_FinishReloadSound
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVehicleWeaponComponent::NM_FinishReloadSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.NM_FinishReloadSound");

	UVehicleWeaponComponent_NM_FinishReloadSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleWeaponComponent.GetRemainingReload
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleWeaponComponent::GetRemainingReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.GetRemainingReload");

	UVehicleWeaponComponent_GetRemainingReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleWeaponComponent.CanFire
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleWeaponComponent::CanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleWeaponComponent.CanFire");

	UVehicleWeaponComponent_CanFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.SetAutoRoll
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewAutoRoll                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleMoveComponent::SetAutoRoll(bool bNewAutoRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.SetAutoRoll");

	UVehicleMoveComponent_SetAutoRoll_Params params;
	params.bNewAutoRoll = bNewAutoRoll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.ServerUpdateState
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FRepStickInput          StickInput                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FRepThrustInput         ThrustInput                    (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::ServerUpdateState(const struct FRepStickInput& StickInput, const struct FRepThrustInput& ThrustInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.ServerUpdateState");

	UVehicleMoveComponent_ServerUpdateState_Params params;
	params.StickInput = StickInput;
	params.ThrustInput = ThrustInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.IsUsingAfterburner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleMoveComponent::IsUsingAfterburner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.IsUsingAfterburner");

	UVehicleMoveComponent_IsUsingAfterburner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.HoverFactorForSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleMoveComponent::HoverFactorForSurface(TEnumAsByte<EPhysicalSurface> Surface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.HoverFactorForSurface");

	UVehicleMoveComponent_HoverFactorForSurface_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.GetSocketWorldRotation
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UVehicleMoveComponent::GetSocketWorldRotation(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.GetSocketWorldRotation");

	UVehicleMoveComponent_GetSocketWorldRotation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.GetSocketWorldLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVehicleMoveComponent::GetSocketWorldLocation(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.GetSocketWorldLocation");

	UVehicleMoveComponent_GetSocketWorldLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.GetSocketTransform
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVehicleMoveComponent::GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.GetSocketTransform");

	UVehicleMoveComponent_GetSocketTransform_Params params;
	params.InSocketName = InSocketName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.GetOrientationInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuat                   OutOrientationRotation         (Parm, OutParm, IsPlainOldData)
// float                          OutProgradeDot                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVehicleMoveComponent::GetOrientationInfo(struct FQuat* OutOrientationRotation, float* OutProgradeDot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.GetOrientationInfo");

	UVehicleMoveComponent_GetOrientationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOrientationRotation != nullptr)
		*OutOrientationRotation = params.OutOrientationRotation;
	if (OutProgradeDot != nullptr)
		*OutProgradeDot = params.OutProgradeDot;
}


// Function Midair.VehicleMoveComponent.GetFixedForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVehicleMoveComponent::GetFixedForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.GetFixedForwardVector");

	UVehicleMoveComponent_GetFixedForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleMoveComponent.AddFixedTorqueNonVelChange
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Torque                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedTorqueNonVelChange(const struct FVector& Torque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedTorqueNonVelChange");

	UVehicleMoveComponent_AddFixedTorqueNonVelChange_Params params;
	params.Torque = Torque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedTorque
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Torque                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedTorque(const struct FVector& Torque)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedTorque");

	UVehicleMoveComponent_AddFixedTorque_Params params;
	params.Torque = Torque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedImpulseAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedImpulseAtLocation");

	UVehicleMoveComponent_AddFixedImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedImpulse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedImpulse(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedImpulse");

	UVehicleMoveComponent_AddFixedImpulse_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedForceNonVelChange
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedForceNonVelChange(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedForceNonVelChange");

	UVehicleMoveComponent_AddFixedForceNonVelChange_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedForceAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedForceAtLocation(const struct FVector& Force, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedForceAtLocation");

	UVehicleMoveComponent_AddFixedForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedForce
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVehicleMoveComponent::AddFixedForce(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedForce");

	UVehicleMoveComponent_AddFixedForce_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleMoveComponent.AddFixedAngularImpulse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleMoveComponent::AddFixedAngularImpulse(const struct FVector& Impulse, bool bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleMoveComponent.AddFixedAngularImpulse");

	UVehicleMoveComponent_AddFixedAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSeatComponent.SetTrigger
// (Native, Public)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSeatComponent::SetTrigger(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.SetTrigger");

	UVehicleSeatComponent_SetTrigger_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSeatComponent.ServerSeatCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSeatComponent::ServerSeatCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.ServerSeatCharacter");

	UVehicleSeatComponent_ServerSeatCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSeatComponent.ServerReseatCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  NewSeatPosition                (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSeatComponent::ServerReseatCharacter(unsigned char NewSeatPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.ServerReseatCharacter");

	UVehicleSeatComponent_ServerReseatCharacter_Params params;
	params.NewSeatPosition = NewSeatPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSeatComponent.ServerRemoveCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UVehicleSeatComponent::ServerRemoveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.ServerRemoveCharacter");

	UVehicleSeatComponent_ServerRemoveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSeatComponent.SeatCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSeatComponent::SeatCharacter(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.SeatCharacter");

	UVehicleSeatComponent_SeatCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.RemoveCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEject                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSeatComponent::RemoveCharacter(bool bEject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.RemoveCharacter");

	UVehicleSeatComponent_RemoveCharacter_Params params;
	params.bEject = bEject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSeatComponent::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.IsEmpty");

	UVehicleSeatComponent_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.GetVehicleStateText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVehicleSeatComponent::GetVehicleStateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.GetVehicleStateText");

	UVehicleSeatComponent_GetVehicleStateText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.GetSecondaryWeapons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVehicleWeaponComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVehicleWeaponComponent*> UVehicleSeatComponent::GetSecondaryWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.GetSecondaryWeapons");

	UVehicleSeatComponent_GetSecondaryWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.GetSeatedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMAPlayerState* UVehicleSeatComponent::GetSeatedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.GetSeatedPlayer");

	UVehicleSeatComponent_GetSeatedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSeatComponent.CanSit
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSeatComponent::CanSit(class AMACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSeatComponent.CanSit");

	UVehicleSeatComponent_CanSit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSpawnPad.OnVehicleDied
// (Native, Public)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSpawnPad::OnVehicleDied(class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.OnVehicleDied");

	AVehicleSpawnPad_OnVehicleDied_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSpawnPad.OnRep_PadState
// (Final, Native, Public)

void AVehicleSpawnPad::OnRep_PadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.OnRep_PadState");

	AVehicleSpawnPad_OnRep_PadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSpawnPad.OnEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSpawnPad::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.OnEndOverlap");

	AVehicleSpawnPad_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSpawnPad.OnBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVehicleSpawnPad::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.OnBeginOverlap");

	AVehicleSpawnPad_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.VehicleSpawnPad.GetVehicleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AVehicleSpawnPad::GetVehicleCount(class UClass* VehicleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.GetVehicleCount");

	AVehicleSpawnPad_GetVehicleCount_Params params;
	params.VehicleClass = VehicleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSpawnPad.GetPadState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVehicleSpawnState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVehicleSpawnState AVehicleSpawnPad::GetPadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.GetPadState");

	AVehicleSpawnPad_GetPadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSpawnPad.GetMaxVehicleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AVehicleSpawnPad::GetMaxVehicleCount(class UClass* VehicleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.GetMaxVehicleCount");

	AVehicleSpawnPad_GetMaxVehicleCount_Params params;
	params.VehicleClass = VehicleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.VehicleSpawnPad.CanSpawnClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  VehicleClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehicleSpawnPad::CanSpawnClass(class UClass* VehicleClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.VehicleSpawnPad.CanSpawnClass");

	AVehicleSpawnPad_CanSpawnClass_Params params;
	params.VehicleClass = VehicleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.WardenWeapon.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AWardenWeapon::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.WardenWeapon.GetTarget");

	AWardenWeapon_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Midair.WeaponAmmoArt.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponAmmoArt::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.WeaponAmmoArt.SetOverrideMaterials");

	AWeaponAmmoArt_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.WeaponAmmoArt.SetChargeIndicator
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponAmmoArt::SetChargeIndicator(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.WeaponAmmoArt.SetChargeIndicator");

	AWeaponAmmoArt_SetChargeIndicator_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Midair.WeaponAmmoArt.OnComponentHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponAmmoArt::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Midair.WeaponAmmoArt.OnComponentHit");

	AWeaponAmmoArt_OnComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
