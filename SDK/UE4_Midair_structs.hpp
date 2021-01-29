#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_SlateCore_classes.hpp"
#include "UE4_GameLiftFramework_classes.hpp"
#include "UE4_Slate_classes.hpp"
#include "UE4_UMG_classes.hpp"
#include "UE4_AIModule_classes.hpp"
#include "UE4_SteamParty_classes.hpp"
#include "UE4_OnlineSubsystemUtils_classes.hpp"
#include "UE4_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Midair.EMAChatMemberStateChange
enum class EMAChatMemberStateChange : uint8_t
{
	ChatMemberStateChangeEntered   = 0,
	ChatMemberStateChangeLeft      = 1,
	ChatMemberStateChangeDisconnected = 2,
	ChatMemberStateChangeKicked    = 3,
	ChatMemberStateChangeBanned    = 4,
	EMAChatMemberStateChange_MAX   = 5
};


// Enum Midair.EMAMatchType
enum class EMAMatchType : uint8_t
{
	Normal                         = 0,
	Warmup                         = 1,
	AR                             = 2,
	LCTF                           = 3,
	CTF                            = 4,
	InvalidMatchType               = 5,
	EMAMatchType_MAX               = 6
};


// Enum Midair.EMAMatchResultType
enum class EMAMatchResultType : uint8_t
{
	EMAMatchResultType__Lose       = 0,
	EMAMatchResultType__Win        = 1,
	EMAMatchResultType__Draw       = 2,
	EMAMatchResultType__EMAMatchResultType_MAX = 3
};


// Enum Midair.ETankMode
enum class ETankMode : uint8_t
{
	ETankMode__HoverMode           = 0,
	ETankMode__TransitionToHover   = 1,
	ETankMode__TransitionToSiege   = 2,
	ETankMode__SiegeMode           = 3,
	ETankMode__ETankMode_MAX       = 4
};


// Enum Midair.EDeployableUsageState
enum class EDeployableUsageState : uint8_t
{
	EDeployableUsageState__None    = 0,
	EDeployableUsageState__Added   = 1,
	EDeployableUsageState__Removed = 2,
	EDeployableUsageState__EDeployableUsageState_MAX = 3
};


// Enum Midair.EAugmentType
enum class EAugmentType : uint8_t
{
	EAugmentType__Passive          = 0,
	EAugmentType__Toggleable       = 1,
	EAugmentType__Triggerable      = 2,
	EAugmentType__EAugmentType_MAX = 3
};


// Enum Midair.EFindSessionsSortMethod
enum class EFindSessionsSortMethod : uint8_t
{
	EFindSessionsSortMethod__None  = 0,
	EFindSessionsSortMethod__Default = 1,
	EFindSessionsSortMethod__PingAscending = 2,
	EFindSessionsSortMethod__PlayerCountDescending = 3,
	EFindSessionsSortMethod__NameAscending = 4,
	EFindSessionsSortMethod__NameDescending = 5,
	EFindSessionsSortMethod__SmartPingAndPlayers = 6,
	EFindSessionsSortMethod__EFindSessionsSortMethod_MAX = 7
};


// Enum Midair.EPRMessage
enum class EPRMessage : uint8_t
{
	EPRMessage__Respawning         = 0,
	EPRMessage__Evacuating         = 1,
	EPRMessage__KilledSomething    = 2,
	EPRMessage__Progressed         = 3,
	EPRMessage__ProgressedWithTP   = 4,
	EPRMessage__SkippedToLesson    = 5,
	EPRMessage__Finished           = 6,
	EPRMessage__EPRMessage_MAX     = 7
};


// Enum Midair.ERBMessage
enum class ERBMessage : uint8_t
{
	ERBMessage__CarrotDropped      = 0,
	ERBMessage__CarrotReset        = 1,
	ERBMessage__CarrotTaken        = 2,
	ERBMessage__RabbitKilled       = 3,
	ERBMessage__SelfPassTimeout    = 4,
	ERBMessage__ERBMessage_MAX     = 5
};


// Enum Midair.EGameMessage
enum class EGameMessage : uint8_t
{
	EGameMessage__YouJoinedBlue    = 0,
	EGameMessage__YouJoinedRed     = 1,
	EGameMessage__GameStart        = 2,
	EGameMessage__GameOver         = 3,
	EGameMessage__GameOverSingle   = 4,
	EGameMessage__RoundOver        = 5,
	EGameMessage__LastManStanding  = 6,
	EGameMessage__MaxDeployables   = 7,
	EGameMessage__VoteStarted      = 8,
	EGameMessage__RebalanceSoon    = 9,
	EGameMessage__RebalanceStarted = 10,
	EGameMessage__RebalanceEnded   = 11,
	EGameMessage__FlagHeldTooLong  = 12,
	EGameMessage__HasRabbitFlag    = 13,
	EGameMessage__FlagReset        = 14,
	EGameMessage__FlagReturned     = 15,
	EGameMessage__FlagDropped      = 16,
	EGameMessage__FlagTaken        = 17,
	EGameMessage__TeamRabbitFlagTaken = 18,
	EGameMessage__FlagCarrierKilled = 19,
	EGameMessage__FlagCaptured     = 20,
	EGameMessage__StartOvertime    = 21,
	EGameMessage__GoalScored       = 22,
	EGameMessage__EGameMessage_MAX = 23
};


// Enum Midair.EMAAudioClasses
enum class EMAAudioClasses : uint8_t
{
	EMAAudioClasses__Master        = 0,
	EMAAudioClasses__Effects       = 1,
	EMAAudioClasses__Music         = 2,
	EMAAudioClasses__GameEvents    = 3,
	EMAAudioClasses__Voice         = 4,
	EMAAudioClasses__EMAAudioClasses_MAX = 5
};


// Enum Midair.EMappingPriority
enum class EMappingPriority : uint8_t
{
	EMappingPriority__None         = 0,
	EMappingPriority__Primary      = 1,
	EMappingPriority__Secondary    = 2,
	EMappingPriority__All          = 3,
	EMappingPriority__EMappingPriority_MAX = 4
};


// Enum Midair.EMappingConflictResolution
enum class EMappingConflictResolution : uint8_t
{
	EMappingConflictResolution__KeepOriginal = 0,
	EMappingConflictResolution__KeepNew = 1,
	EMappingConflictResolution__DiscardBoth = 2,
	EMappingConflictResolution__KeepBoth = 3,
	EMappingConflictResolution__EMappingConflictResolution_MAX = 4
};


// Enum Midair.EInventoryStationState
enum class EInventoryStationState : uint8_t
{
	EInventoryStationState__Available = 0,
	EInventoryStationState__LockingPlayer = 1,
	EInventoryStationState__ReplacingCharacter = 2,
	EInventoryStationState__Resetting = 3,
	EInventoryStationState__EInventoryStationState_MAX = 4
};


// Enum Midair.ESpectateMode
enum class ESpectateMode : uint8_t
{
	ESpectateMode__FreeCam         = 0,
	ESpectateMode__FollowPlayer    = 1,
	ESpectateMode__ESpectateMode_MAX = 2
};


// Enum Midair.EFuzeMode
enum class EFuzeMode : uint8_t
{
	EFuzeMode__Timed               = 0,
	EFuzeMode__Impact              = 1,
	EFuzeMode__Proximity           = 2,
	EFuzeMode__EFuzeMode_MAX       = 3
};


// Enum Midair.EMAServiceState
enum class EMAServiceState : uint8_t
{
	EMAServiceState__None          = 0,
	EMAServiceState__Authenticating = 1,
	EMAServiceState__Authenticated = 2,
	EMAServiceState__Retrying      = 3,
	EMAServiceState__FailedOSS     = 4,
	EMAServiceState__FailedService = 5,
	EMAServiceState__EMAServiceState_MAX = 6
};


// Enum Midair.EMAWeaponActivity
enum class EMAWeaponActivity : uint8_t
{
	EMAWeaponActivity__WEAP_None   = 0,
	EMAWeaponActivity__WEAP_TakeOut = 1,
	EMAWeaponActivity__WEAP_PowerUp = 2,
	EMAWeaponActivity__WEAP_Idle   = 3,
	EMAWeaponActivity__WEAP_DryFire = 4,
	EMAWeaponActivity__WEAP_Firing = 5,
	EMAWeaponActivity__WEAP_Overheated = 6,
	EMAWeaponActivity__WEAP_Reloading = 7,
	EMAWeaponActivity__WEAP_Charging = 8,
	EMAWeaponActivity__WEAP_Overcharged = 9,
	EMAWeaponActivity__WEAP_Overloaded = 10,
	EMAWeaponActivity__WEAP_Fizzle = 11,
	EMAWeaponActivity__WEAP_ThrowGrenade = 12,
	EMAWeaponActivity__WEAP_ThrowComplete = 13,
	EMAWeaponActivity__WEAP_Custom1 = 14,
	EMAWeaponActivity__WEAP_Custom2 = 15,
	EMAWeaponActivity__WEAP_Custom3 = 16,
	EMAWeaponActivity__WEAP_Custom4 = 17,
	EMAWeaponActivity__WEAP_MAX    = 18
};


// Enum Midair.ESliderPresentationStyle
enum class ESliderPresentationStyle : uint8_t
{
	ESliderPresentationStyle__DoNotDisplay = 0,
	ESliderPresentationStyle__DisplayAsInt = 1,
	ESliderPresentationStyle__DisplayAsFloat = 2,
	ESliderPresentationStyle__ESliderPresentationStyle_MAX = 3
};


// Enum Midair.EObjectiveUpdateType
enum class EObjectiveUpdateType : uint8_t
{
	EObjectiveUpdateType__Nothing  = 0,
	EObjectiveUpdateType__ClearAll = 1,
	EObjectiveUpdateType__ReplaceAll = 2,
	EObjectiveUpdateType__CompleteObjective = 3,
	EObjectiveUpdateType__CompleteObjectiveWithText = 4,
	EObjectiveUpdateType__Append   = 5,
	EObjectiveUpdateType__RemoveLine = 6,
	EObjectiveUpdateType__Replace  = 7,
	EObjectiveUpdateType__EObjectiveUpdateType_MAX = 8
};


// Enum Midair.EArmorSize
enum class EArmorSize : uint8_t
{
	EArmorSize__Light              = 0,
	EArmorSize__Medium             = 1,
	EArmorSize__Heavy              = 2,
	EArmorSize__Max                = 3,
	EArmorSize__EArmorSize_MAX     = 4
};


// Enum Midair.ESensorResolutionStrength
enum class ESensorResolutionStrength : uint8_t
{
	ESensorResolutionStrength__None = 0,
	ESensorResolutionStrength__Low = 1,
	ESensorResolutionStrength__Medium = 2,
	ESensorResolutionStrength__High = 3,
	ESensorResolutionStrength__ESensorResolutionStrength_MAX = 4
};


// Enum Midair.ESensorTrackingType
enum class ESensorTrackingType : uint8_t
{
	ESensorTrackingType__None      = 0,
	ESensorTrackingType__Radar     = 1,
	ESensorTrackingType__Motion    = 2,
	ESensorTrackingType__ESensorTrackingType_MAX = 3
};


// Enum Midair.EMapVoteOption
enum class EMapVoteOption : uint8_t
{
	EMapVoteOption__Map1           = 0,
	EMapVoteOption__Map2           = 1,
	EMapVoteOption__Map3           = 2,
	EMapVoteOption__Map4           = 3,
	EMapVoteOption__Map5           = 4,
	EMapVoteOption__Random         = 5,
	EMapVoteOption__Mode1          = 6,
	EMapVoteOption__Mode2          = 7,
	EMapVoteOption__Mode3          = 8,
	EMapVoteOption__Refresh        = 9,
	EMapVoteOption__Discard        = 10,
	EMapVoteOption__EMapVoteOption_MAX = 11
};


// Enum Midair.EMapVoteStage
enum class EMapVoteStage : uint8_t
{
	EMapVoteStage__NotVoting       = 0,
	EMapVoteStage__FirstRound      = 1,
	EMapVoteStage__SecondRound     = 2,
	EMapVoteStage__Taken           = 3,
	EMapVoteStage__EMapVoteStage_MAX = 4
};


// Enum Midair.ESimpleVote
enum class ESimpleVote : uint8_t
{
	ESimpleVote__Abstain           = 0,
	ESimpleVote__Yes               = 1,
	ESimpleVote__No                = 2,
	ESimpleVote__ESimpleVote_MAX   = 3
};


// Enum Midair.EPlayerVoiceState
enum class EPlayerVoiceState : uint8_t
{
	EPlayerVoiceState__Silent      = 0,
	EPlayerVoiceState__Talking     = 1,
	EPlayerVoiceState__Muted       = 2,
	EPlayerVoiceState__EPlayerVoiceState_MAX = 3
};


// Enum Midair.ECameraMode
enum class ECameraMode : uint8_t
{
	ECameraMode__None              = 0,
	ECameraMode__FirstPerson       = 1,
	ECameraMode__ShoulderCamera    = 2,
	ECameraMode__OrbitCamera       = 3,
	ECameraMode__Freelook          = 4,
	ECameraMode__ECameraMode_MAX   = 5
};


// Enum Midair.ELockState
enum class ELockState : uint8_t
{
	ELockState__Unlocked           = 0,
	ELockState__Locking            = 1,
	ELockState__Locked             = 2,
	ELockState__Tracking           = 3,
	ELockState__ELockState_MAX     = 4
};


// Enum Midair.EDetectedState
enum class EDetectedState : uint8_t
{
	EDetectedState__Undetected     = 0,
	EDetectedState__Jamming        = 1,
	EDetectedState__Sensed         = 2,
	EDetectedState__Detected       = 3,
	EDetectedState__EDetectedState_MAX = 4
};


// Enum Midair.ETeamAllegiance
enum class ETeamAllegiance : uint8_t
{
	ETeamAllegiance__Neutral       = 0,
	ETeamAllegiance__Friendly      = 1,
	ETeamAllegiance__Enemy         = 2,
	ETeamAllegiance__ETeamAllegiance_MAX = 3
};


// Enum Midair.ESteamDefinedItemType
enum class ESteamDefinedItemType : uint8_t
{
	ESteamDefinedItemType__Invalid = 0,
	ESteamDefinedItemType__Gameplay = 1,
	ESteamDefinedItemType__Bundles = 2,
	ESteamDefinedItemType__Generators = 3,
	ESteamDefinedItemType__ArmorSkins = 4,
	ESteamDefinedItemType__WeaponSkins = 5,
	ESteamDefinedItemType__VoicePacks = 6,
	ESteamDefinedItemType__JetTrails = 7,
	ESteamDefinedItemType__Accessories = 8,
	ESteamDefinedItemType__Sprays  = 9,
	ESteamDefinedItemType__Chests  = 10,
	ESteamDefinedItemType__ESteamDefinedItemType_MAX = 11
};


// Enum Midair.EPunishType
enum class EPunishType : uint8_t
{
	EPunishType__Kick              = 0,
	EPunishType__Ban               = 1,
	EPunishType__EPunishType_MAX   = 2
};


// Enum Midair.EShieldType
enum class EShieldType : uint8_t
{
	EShieldType__Subtractive       = 0,
	EShieldType__Overshield        = 1,
	EShieldType__EShieldType_MAX   = 2
};


// Enum Midair.ENetDeathType
enum class ENetDeathType : uint8_t
{
	ENetDeathType__TearOff         = 0,
	ENetDeathType__Revivable       = 1,
	ENetDeathType__None            = 2,
	ENetDeathType__ENetDeathType_MAX = 3
};


// Enum Midair.ELevelSymmetryMode
enum class ELevelSymmetryMode : uint8_t
{
	ELevelSymmetryMode__None       = 0,
	ELevelSymmetryMode__MirrorX    = 1,
	ELevelSymmetryMode__MirrorY    = 2,
	ELevelSymmetryMode__Rotate     = 3,
	ELevelSymmetryMode__ELevelSymmetryMode_MAX = 4
};


// Enum Midair.EMissileLauncherActivity
enum class EMissileLauncherActivity : uint8_t
{
	EMissileLauncherActivity__Idle = 0,
	EMissileLauncherActivity__Locking = 1,
	EMissileLauncherActivity__Locked = 2,
	EMissileLauncherActivity__EMissileLauncherActivity_MAX = 3
};


// Enum Midair.ESplineFinishAction
enum class ESplineFinishAction : uint8_t
{
	ESplineFinishAction__DestroyActor = 0,
	ESplineFinishAction__SwitchDirection = 1,
	ESplineFinishAction__ESplineFinishAction_MAX = 2
};


// Enum Midair.EFunctionSuccess
enum class EFunctionSuccess : uint8_t
{
	EFunctionSuccess__Success      = 0,
	EFunctionSuccess__Fail         = 1,
	EFunctionSuccess__EFunctionSuccess_MAX = 2
};


// Enum Midair.ELessonWinCondition
enum class ELessonWinCondition : uint8_t
{
	ELessonWinCondition__Kills     = 0,
	ELessonWinCondition__Score     = 1,
	ELessonWinCondition__MidairHits = 2,
	ELessonWinCondition__ReachedActor = 3,
	ELessonWinCondition__ELessonWinCondition_MAX = 4
};


// Enum Midair.ELessonEndAction
enum class ELessonEndAction : uint8_t
{
	ELessonEndAction__None         = 0,
	ELessonEndAction__MovePlayerToLessonStart = 1,
	ELessonEndAction__MovePlayerToNextLesson = 2,
	ELessonEndAction__MovePlayerToCustomLesson = 3,
	ELessonEndAction__EndSection   = 4,
	ELessonEndAction__ELessonEndAction_MAX = 5
};


// Enum Midair.EDialougeStackingRules
enum class EDialougeStackingRules : uint8_t
{
	EDialougeStackingRules__DontStack = 0,
	EDialougeStackingRules__Replace_leq_Priority = 1,
	EDialougeStackingRules__ReplaceAll = 2,
	EDialougeStackingRules__Enqueue = 3,
	EDialougeStackingRules__EDialougeStackingRules_MAX = 4
};


// Enum Midair.EComplexStatusBarFillType
enum class EComplexStatusBarFillType : uint8_t
{
	EComplexStatusBarFillType__AdditionalValue = 0,
	EComplexStatusBarFillType__SubValue = 1,
	EComplexStatusBarFillType__EComplexStatusBarFillType_MAX = 2
};


// Enum Midair.EMALeaderboardFormat
enum class EMALeaderboardFormat : uint8_t
{
	Number                         = 0,
	Seconds                        = 1,
	Milliseconds                   = 2,
	EMALeaderboardFormat_MAX       = 3
};


// Enum Midair.EMALeaderboardSort
enum class EMALeaderboardSort : uint8_t
{
	None                           = 0,
	Ascending                      = 1,
	Descending                     = 2,
	EMALeaderboardSort_MAX         = 3
};


// Enum Midair.EMALeaderboardUploadMethod
enum class EMALeaderboardUploadMethod : uint8_t
{
	KeepBest                       = 0,
	ForceUpdate                    = 1,
	EMALeaderboardUploadMethod_MAX = 2
};


// Enum Midair.EMALeaderboardRequest
enum class EMALeaderboardRequest : uint8_t
{
	Global                         = 0,
	GlobalAroundUser               = 1,
	Friends                        = 2,
	Users                          = 3,
	EMALeaderboardRequest_MAX      = 4
};


// Enum Midair.EMAMatchLobbyStatus
enum class EMAMatchLobbyStatus : uint8_t
{
	Stop                           = 0,
	Waiting                        = 1,
	Joining                        = 2,
	Started                        = 3,
	EMAMatchLobbyStatus_MAX        = 4
};


// Enum Midair.EMAMatchServerStatus
enum class EMAMatchServerStatus : uint8_t
{
	Queuing                        = 0,
	Reserved                       = 1,
	Playing                        = 2,
	EMAMatchServerStatus_MAX       = 3
};


// Enum Midair.EStatsType
enum class EStatsType : uint8_t
{
	EStatsType__Int32              = 0,
	EStatsType__Float              = 1,
	EStatsType__EStatsType_MAX     = 2
};


// Enum Midair.EEdgeLockBehavior
enum class EEdgeLockBehavior : uint8_t
{
	Never                          = 0,
	Always                         = 1,
	Timed                          = 2,
	EEdgeLockBehavior_MAX          = 3
};


// Enum Midair.ETargetPlacement
enum class ETargetPlacement : uint8_t
{
	ETargetPlacement__Above        = 0,
	ETargetPlacement__Centered     = 1,
	ETargetPlacement__Below        = 2,
	ETargetPlacement__ETargetPlacement_MAX = 3
};


// Enum Midair.ESeatType
enum class ESeatType : uint8_t
{
	ESeatType__Passenger           = 0,
	ESeatType__Gunner              = 1,
	ESeatType__Pilot               = 2,
	ESeatType__ESeatType_MAX       = 3
};


// Enum Midair.EVehicleSpawnState
enum class EVehicleSpawnState : uint8_t
{
	EVehicleSpawnState__Selecting  = 0,
	EVehicleSpawnState__Charging   = 1,
	EVehicleSpawnState__Spawned    = 2,
	EVehicleSpawnState__Resetting  = 3,
	EVehicleSpawnState__Unpowered  = 4,
	EVehicleSpawnState__EVehicleSpawnState_MAX = 5
};


// Enum Midair.EVWC_InterpType
enum class EVWC_InterpType : uint8_t
{
	EVWC_InterpType__None          = 0,
	EVWC_InterpType__Determined    = 1,
	EVWC_InterpType__TurretOnly    = 2,
	EVWC_InterpType__ScreenOnly    = 3,
	EVWC_InterpType__Both          = 4,
	EVWC_InterpType__EVWC_MAX      = 5
};


// Enum Midair.EVWC_MeshHandling
enum class EVWC_MeshHandling : uint8_t
{
	EVWC_MeshHandling__None        = 0,
	EVWC_MeshHandling__Distinct    = 1,
	EVWC_MeshHandling__FixedP      = 2,
	EVWC_MeshHandling__FixedY      = 3,
	EVWC_MeshHandling__EVWC_MAX    = 4
};


// Enum Midair.EAttachPerspective
enum class EAttachPerspective : uint8_t
{
	EAttachPerspective__Both       = 0,
	EAttachPerspective__FirstPerson = 1,
	EAttachPerspective__ThirdPerson = 2,
	EAttachPerspective__EAttachPerspective_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Midair.SurfaceTypeParticles
// 0x0078
struct FSurfaceTypeParticles
{
	class UParticleSystem*                             Default;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Flesh;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Shields;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Dirt;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Grass;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Sand;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Rock;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Snow;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Ice;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Wood;                                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Concrete;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Metal;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Glass;                                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Water;                                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Lava;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.SurfaceTypeSounds
// 0x0078
struct FSurfaceTypeSounds
{
	class USoundBase*                                  Default;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Flesh;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Shields;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Dirt;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Grass;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sand;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Rock;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Snow;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Ice;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Wood;                                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Concrete;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Metal;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Glass;                                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Water;                                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Lava;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.ImpactEffect
// 0x0108
struct FImpactEffect
{
	struct FSurfaceTypeParticles                       Particles;                                                // 0x0000(0x0078) (Edit, IsPlainOldData)
	struct FSurfaceTypeSounds                          Sounds;                                                   // 0x0078(0x0078) (Edit, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DecalSize;                                                // 0x00F8(0x0008) (Edit, IsPlainOldData)
	float                                              DecalLifeSpan;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.RegenProperties
// 0x0008
struct FRegenProperties
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.GameModeSimpleScore
// 0x000C
struct FGameModeSimpleScore
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.GameModeComplexScore
// 0x0018
struct FGameModeComplexScore
{
	struct FGameModeSimpleScore                        Regular;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameModeSimpleScore                        Special_;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Midair.MALoadout
// 0x0098
struct FMALoadout
{
	struct FString                                     LoadoutName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Character;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CharacterSkin;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      JetSkin;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Spray;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Weapons;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              WeaponSkins;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              HandGrenades;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Backpack;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Augments;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      VoiceSet;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SteamSerializedItems;                                     // 0x0080(0x0010) (ZeroConstructor, Transient)
	bool                                               bSteamSerializesSkins;                                    // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.LoadoutSpawnPenalty
// 0x0010
struct FLoadoutSpawnPenalty
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpawnPenalty;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.LoadoutSpawnPenalties
// 0x0020
struct FLoadoutSpawnPenalties
{
	TArray<struct FLoadoutSpawnPenalty>                Penalties;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              FlatFullSpawnDelay;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenDown_FlatFullSpawnDelayModifier;                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenDown_LoadoutPenaltyModifier;                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.ObjectCount
// 0x0010
struct FObjectCount
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      Count;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.TeamConfigEntry
// 0x0028
struct FTeamConfigEntry
{
	struct FText                                       Name;                                                     // 0x0000(0x0018)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (IsPlainOldData)
};

// ScriptStruct Midair.ReplicatedSpawnedSpray
// 0x0020
struct FReplicatedSpawnedSpray
{
	class UClass*                                      SprayUsed;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (IsPlainOldData)
};

// ScriptStruct Midair.CauseHitInfo
// 0x0008
struct FCauseHitInfo
{
	float                                              Damage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCriticalHit : 1;                                         // 0x0004(0x0001)
	unsigned char                                      bMidairHit : 1;                                           // 0x0004(0x0001)
	unsigned char                                      bKill : 1;                                                // 0x0004(0x0001)
	unsigned char                                      bTeamHit : 1;                                             // 0x0004(0x0001)
	unsigned char                                      Rating;                                                   // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Midair.StatValue
// 0x0008
struct FStatValue
{
	int                                                Total;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Best;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Midair.MatchHistory
// 0x0098
struct FMatchHistory
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DemoId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     GameVersion;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EMAMatchResultType                                 ResultType;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                Time;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Rank;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Score1;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Score2;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FStatValue                                  Score;                                                    // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Kills;                                                    // 0x005C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Deaths;                                                   // 0x0064(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Assists;                                                  // 0x006C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Suicides;                                                 // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FDateTime                                   DateTime;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct Midair.PredictionMarkerInfo
// 0x0010
struct FPredictionMarkerInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bHitAsset;                                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Midair.FlatShieldVars
// 0x0014
struct FFlatShieldVars
{
	float                                              ShieldHealthMaxPool;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldRechargeRate;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldRechargeDelay;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldRechargeConversionFactor;                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldFlashDuration;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.TakeHitInfo
// 0x0020
struct FTakeHitInfo
{
	float                                              Damage;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RelHitDirectionPitch;                                     // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RelHitDirectionYaw;                                       // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              RelHitLocationDist;                                       // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShielded : 1;                                            // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      bFatal : 1;                                               // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.VehicleInputFloatRate
// 0x0008
struct FVehicleInputFloatRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.RepVehiclePhysics
// 0x0034
struct FRepVehiclePhysics
{
	struct FVector_NetQuantize10                       Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector_NetQuantize10                       LinearVel;                                                // 0x0018(0x000C)
	struct FVector_NetQuantize10                       AngularVel;                                               // 0x0024(0x000C)
	uint16_t                                           Frame;                                                    // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
};

// ScriptStruct Midair.RepStickInput
// 0x0010
struct FRepStickInput
{
	float                                              RollInput;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PitchInput;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              YawInput;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Frame;                                                    // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Midair.RepThrustInput
// 0x0014
struct FRepThrustInput
{
	float                                              ThrottleInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BreakInput;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizontalThrustInput;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VerticalThrustInput;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AfterBurnerInput;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0011(0x0001) MISSED OFFSET
	uint16_t                                           Frame;                                                    // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.BackpackArt
// 0x0020
struct FBackpackArt
{
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GlowMaterialIndex;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          GlowMaterialOverride;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PickupSound;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.DeployableRadialCategory
// 0x0048
struct FDeployableRadialCategory
{
	class UTexture2D*                                  CategoryIcon;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Deployables;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Midair.PredictionSmoothing
// 0x0070
struct FPredictionSmoothing
{
	class USceneComponent*                             TargetComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseLocationOffset;                                       // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       BaseRotationOffset;                                       // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0030(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FQuat                                       RotationOffset;                                           // 0x0040(0x0010) (Transient, IsPlainOldData)
	float                                              SmoothLocationTime;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothRotationTime;                                       // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSmoothUpdateDist;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoSmoothUpdateDist;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableSmoothing;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0061(0x000F) MISSED OFFSET
};

// ScriptStruct Midair.WorldCameraShakeParams
// 0x0014
struct FWorldCameraShakeParams
{
	float                                              InnerRadius;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Occlusion;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOrientShakeTowardsEpicenter : 1;                         // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.SurfaceImpactInfo
// 0x0030
struct FSurfaceImpactInfo
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	unsigned char                                      bWorldGeometry : 1;                                       // 0x0018(0x0001)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UClass*                                      InstigatorClass;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.RepStage
// 0x0008
struct FRepStage
{
	unsigned char                                      Stage;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StageTime;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.MASteamId
// 0x0008
struct FMASteamId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Midair.RepMAMovement
// 0x0028
struct FRepMAMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.CarriedObjectProperties
// 0x0010
struct FCarriedObjectProperties
{
	float                                              PickUpIgnoreTime;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSendHomeOnTeamTouch;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              TossSpeed;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AutoReturnTime;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.RepMACharMovement
// 0x0024
struct FRepMACharMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct Midair.CameraShakeInfo
// 0x0010
struct FCameraShakeInfo
{
	class UClass*                                      CameraShakeClass;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Scale;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserSpacePitch;                                           // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserSpaceYaw;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayInUserSpace : 1;                                     // 0x000B(0x0001)
	unsigned char                                      EnsureReplicationByte;                                    // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.ZoomInfo
// 0x0002
struct FZoomInfo
{
	unsigned char                                      Level;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0001(0x0001)
};

// ScriptStruct Midair.RepWeaponActivity
// 0x000C
struct FRepWeaponActivity
{
	unsigned char                                      Activity;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireMode;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.RepWeaponSpecial
// 0x0003
struct FRepWeaponSpecial
{
	unsigned char                                      Heat;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Charge;                                                   // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRepHeat : 1;                                             // 0x0002(0x0001)
	unsigned char                                      bRepCharge : 1;                                           // 0x0002(0x0001)
};

// ScriptStruct Midair.MAPackedMove
// 0x0030
struct FMAPackedMove
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CompressedFlags;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotator;                                              // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     LocalAccel;                                               // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AMAWeapon*                                   PendingWeapon;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.MAPackedMoveBundle
// 0x0038
struct FMAPackedMoveBundle
{
	TArray<struct FMAPackedMove>                       Moves;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector_NetQuantize                         ClientLoc;                                                // 0x0010(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         ClientMovementBase;                                       // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.PunishVote
// 0x0018
struct FPunishVote
{
	class AMAPlayerState*                              Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Target;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPunishType                                        Type;                                                     // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.MADamageProfileEntry
// 0x0018
struct FMADamageProfileEntry
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageModifier;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldDamageModifier;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyDamageModifier;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.LocalMessageData
// 0x0040
struct FLocalMessageData
{
	class UMALocalMessage*                             MessageObject;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              PlayerState1;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              PlayerState2;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              PlayerState3;                                             // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Midair.SimplePlayerStats
// 0x0008
struct FSimplePlayerStats
{
	int                                                TotalScore;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimePlayedSec;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.PlayerExpressionData
// 0x0090 (0x0098 - 0x0008)
struct FPlayerExpressionData : public FTableRowBase
{
	struct FText                                       Category;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LeaderKey;                                                // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MenuText;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ChatText;                                                 // 0x0050(0x0018) (Edit, BlueprintVisible)
	struct FText                                       CueName;                                                  // 0x0068(0x0018) (Edit, BlueprintVisible)
	bool                                               TeamOnly;                                                 // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0081(0x0017) MISSED OFFSET
};

// ScriptStruct Midair.LoadingScreenMapData
// 0x0038
struct FLoadingScreenMapData
{
	class UTexture2D*                                  Background;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LoadingMusic;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Lore;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Midair.LootboxInfo
// 0x0018
struct FLootboxInfo
{
	uint64_t                                           InstanceId;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ExchangeId;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      CrateConfiguration;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.CharacterItemAnims
// 0x0018
struct FCharacterItemAnims
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim1P;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim3P;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.TargetRenderModifiers
// 0x0078
struct FTargetRenderModifiers
{
	float                                              NearDistance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarDistance;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearScale;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarScale;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewCone;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GenericIconSize;                                          // 0x0018(0x0008) (Edit, IsPlainOldData)
	class UMaterialInterface*                          HealthbarMaterial;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HealthbarSize;                                            // 0x0028(0x0008) (Edit, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Team0Color;                                               // 0x0038(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                Team1Color;                                               // 0x0048(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x0058(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0068(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct Midair.DamageMarkerInfo
// 0x0028
struct FDamageMarkerInfo
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Highlight;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x000C(0x000C) (IsPlainOldData)
	unsigned char                                      bAlive : 1;                                               // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.HitMarkerInfo
// 0x0018
struct FHitMarkerInfo
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCriticalHit : 1;                                         // 0x0008(0x0001)
	unsigned char                                      bTeamHit : 1;                                             // 0x0008(0x0001)
	unsigned char                                      bAlive : 1;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.MidairInputMapping
// 0x00A0
struct FMidairInputMapping
{
	struct FName                                       BindName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TooltipText;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Category;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      PrimaryKey;                                               // 0x0040(0x0028) (Edit, BlueprintVisible)
	struct FInputActionKeyMapping                      SecondaryKey;                                             // 0x0068(0x0028) (Edit, BlueprintVisible)
	float                                              AxisValue;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConflictChannels;                                         // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCannotClear;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.MidairInputCategory
// 0x0040
struct FMidairInputCategory
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       CategoryName;                                             // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       CategoryTooltip;                                          // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	uint32_t                                           ConflictMask;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.BaseProgressionData
// 0x0058
struct FBaseProgressionData
{
	int                                                XP;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkillPoints;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasNewSkillpoints;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<class UClass*>                              UnlockedClasses;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               CompletedTutorials;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUsedProgressionPass;                                     // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ItemPresentationCache;                                    // 0x0038(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              NewUnlockedClasses;                                       // 0x0048(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Midair.MatchXPConversion
// 0x0028
struct FMatchXPConversion
{
	int                                                MinMinutesMatchPlayed;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MatchPlayedXP;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WinXP;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinutePlayedXP;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScoreXP;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPlayersForTop2Team;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Top2TeamXP;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPlayersForTop3;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Top3MatchXP;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StarsEarnedXP;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.RepInputSettings
// 0x0002
struct FRepInputSettings
{
	bool                                               bJumpThenSkate;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAnnouncer;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.RepGenSettings
// 0x0002
struct FRepGenSettings
{
	bool                                               bSpectateStayWithOnePlayer;                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bScorePointsShownToPlayer;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.DeathMessageData
// 0x0028
struct FDeathMessageData
{
	class AMAPlayerState*                              Killer;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Victim;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMAPlayerState*                              Assist;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SkillRating;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.KillAssistInfo
// 0x0010
struct FKillAssistInfo
{
	class AMAPlayerState*                              PlayerState;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastDamageTime;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.UnlockableObjectNode
// 0x0090
struct FUnlockableObjectNode
{
	int                                                MinSkillsUnlocked;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinLevel;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkillPointCost;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BonusUnlocks;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      LeadParent;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresBothParentsToUnlock;                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDetachedImplicitUnlock;                                // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                GridX;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GridY;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AdditionalRequirements;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUnlocked;                                                // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRequirementsMet;                                         // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<class UObjectInfo*>                         Parents;                                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UObjectInfo*                                 FosterParent;                                             // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              Children;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              ChildGridScale;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x007C(0x0014) MISSED OFFSET
};

// ScriptStruct Midair.WeaponStatDetails
// 0x0010
struct FWeaponStatDetails
{
	float                                              RelativeDamagePct;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RelativeRadiusPct;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RelativeFireRatePct;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RelativeClipSizePct;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.CharacterStatDetails
// 0x0008
struct FCharacterStatDetails
{
	float                                              Health;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.PracticeCourseInfo
// 0x0030
struct FPracticeCourseInfo
{
	struct FName                                       CourseTag;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit)
	TArray<struct FName>                               Lessons;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Midair.MidairObjectiveInfo
// 0x0078
struct FMidairObjectiveInfo
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ShortMessage;                                             // 0x0030(0x0018)
	struct FText                                       FullMessage;                                              // 0x0048(0x0018)
	struct FText                                       HighlightInfo;                                            // 0x0060(0x0018)
};

// ScriptStruct Midair.CustomLoadoutContainer
// 0x0010
struct FCustomLoadoutContainer
{
	TArray<struct FMALoadout>                          Loadouts;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Midair.TutorialDialougeDetails
// 0x0018
struct FTutorialDialougeDetails
{
	EDialougeStackingRules                             StackRules;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnterQueueIfCannotReplace;                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class USoundBase*                                  DialougeCue;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Midair.PracticeLessonDetails
// 0x00D0
struct FPracticeLessonDetails
{
	struct FName                                       LessonTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bTriggerTeleportOnStartTrigger;                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      StartTrigger;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AMAPlayerStart*                              AssociatedPlayerStart;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bWipeStatsOnComplete;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FMidairObjectiveInfo                        LessonInitialInfo;                                        // 0x0028(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	TArray<class AActor*>                              LessonActivatableActors;                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ELessonWinCondition                                WinCondition;                                             // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ELessonEndAction                                   EndAction;                                                // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                Goal;                                                     // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              TargetActors;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       NextLessonTag;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct Midair.PracticeLessonContainer
// 0x0018
struct FPracticeLessonContainer
{
	struct FName                                       CourseName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FPracticeLessonDetails>              Lessons;                                                  // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Midair.PlayerInfo
// 0x0030
struct FPlayerInfo
{
	struct FUniqueNetIdRepl                            SteamId;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DisplayName;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               LobbyOwner;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.LobbyGameCreated
// 0x0020
struct FLobbyGameCreated
{
	bool                                               LobbyCreated;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct Midair.DetectionCache
// 0x0010
struct FDetectionCache
{
	class APlayerState*                                ResponsiblePlayer;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Midair.SensorTargetModifiers
// 0x0008
struct FSensorTargetModifiers
{
	float                                              MotionSensorRangeModifier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadarSensorRangeModifier;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.VariationAdjustedProperty
// 0x001C
struct FVariationAdjustedProperty
{
	struct FVehicleInputFloatRate                      AdjustmentRate;                                           // 0x0000(0x0008) (Edit)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxIdealVariation;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFallWhenVariationAboveIdeal;                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.VehicleDragCharacteristics
// 0x0014
struct FVehicleDragCharacteristics
{
	float                                              SideArea;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrontArea;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TopArea;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Cd;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalDragFactor;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.PlayerStats
// 0x0040
struct FPlayerStats
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Matches;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FStatValue                                  Score;                                                    // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Kills;                                                    // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Deaths;                                                   // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Assists;                                                  // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FStatValue                                  Suicides;                                                 // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.SteamUGCHandle
// 0x0008
struct FSteamUGCHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Midair.SteamLeaderBoard
// 0x0040
struct FSteamLeaderBoard
{
	struct FName                                       PlayerName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMASteamId                                  SteamId;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible)
	TArray<int>                                        Details;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IconImage;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSteamUGCHandle                             HandleUGC;                                                // 0x0030(0x0008) (Edit, BlueprintVisible)
	bool                                               LocalPlayer;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.GameViewportInputState
// 0x0018
struct FGameViewportInputState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Midair.LoadingScreenTipData
// 0x0018 (0x0020 - 0x0008)
struct FLoadingScreenTipData : public FTableRowBase
{
	struct FText                                       Tip;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Midair.ProgressionLevelData
// 0x0020 (0x0028 - 0x0008)
struct FProgressionLevelData : public FTableRowBase
{
	int                                                NewXPRequired;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkillPointsGranted;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SteamItemDefsGranted;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Midair.MidairInputConflict
// 0x0048
struct FMidairInputConflict
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Midair.MatchAssignReq
// 0x0028
struct FMatchAssignReq
{
	int                                                MatchType;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IncludeNonOfficialServer;                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AssignRunningServer;                                      // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PlayerIDs;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Midair.MatchGameMode
// 0x0018
struct FMatchGameMode
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                MinPlayer;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxPlayer;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Midair.MatchServer
// 0x00E0
struct FMatchServer
{
	int                                                MatchType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Addr;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                GmsIndex;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                GamePort;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SpecPort;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     SteamId;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Name;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Appid;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Gamedir;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Version;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Product;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Reject;                                                   // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                Max;                                                      // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Players;                                                  // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Bots;                                                     // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Map;                                                      // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Secure;                                                   // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Dedicated;                                                // 0x00A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FString                                     Gamedata;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Gametype;                                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Proxy;                                                    // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Proxyonly;                                                // 0x00D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              Latitude;                                                 // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Longitude;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.MatchResults_Team
// 0x0004
struct FMatchResults_Team
{
	int                                                Score;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.MatchResults_Player
// 0x0040
struct FMatchResults_Player
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                ResultType;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Suicides;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Captures;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeHeld;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RabbitKills;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.MatchResults
// 0x0068
struct FMatchResults
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DemoId;                                                   // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     GameVersion;                                              // 0x0030(0x0010) (ZeroConstructor)
	int                                                Time;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FMatchResults_Team>                  Teams;                                                    // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FMatchResults_Player>                Players;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Midair.UserReport
// 0x0048
struct FUserReport
{
	int                                                Severity;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Summary;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Description;                                              // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Reproduce;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Midair.MAUser
// 0x0030
struct FMAUser
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            SteamId;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsDev;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Midair.MidairRadioOption
// 0x0038
struct FMidairRadioOption
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Tooltip;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible)
	float                                              TrueValue;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Midair.IntRange
// 0x0008
struct FIntRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.PostRepPassengerInput
// 0x0003
struct FPostRepPassengerInput
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Midair.VoiceSetData
// 0x0008 (0x0010 - 0x0008)
struct FVoiceSetData : public FTableRowBase
{
	class USoundCue*                                   SoundCue;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Midair.LobbyUpdateQueue
// 0x0038
struct FLobbyUpdateQueue
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Midair.LobbyInfo
// 0x0020
struct FLobbyInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Midair.SteamStats
// 0x0018
struct FSteamStats
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatsType                                         StatsType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Int32Value;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
