#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_GameLiftFramework_classes.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_OnlineSubsystemUtils_classes.hpp"
#include "UE4_Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteamParty.ESteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	ESteamAvatarSize__AvatarSmall  = 0,
	ESteamAvatarSize__AvatarMedium = 1,
	ESteamAvatarSize__AvatarLarge  = 2,
	ESteamAvatarSize__ESteamAvatarSize_MAX = 3
};


// Enum SteamParty.EPartyStatus
enum class EPartyStatus : uint8_t
{
	EPartyStatus__PartyNone        = 0,
	EPartyStatus__PartyLeader      = 1,
	EPartyStatus__PartyMember      = 2,
	EPartyStatus__EPartyStatus_MAX = 3
};


// Enum SteamParty.ESteamPresenceState
enum class ESteamPresenceState : uint8_t
{
	ESteamPresenceState__Online    = 0,
	ESteamPresenceState__Offline   = 1,
	ESteamPresenceState__Away      = 2,
	ESteamPresenceState__ExtendedAway = 3,
	ESteamPresenceState__DoNotDisturb = 4,
	ESteamPresenceState__Chat      = 5,
	ESteamPresenceState__ESteamPresenceState_MAX = 6
};


// Enum SteamParty.EPartyChatType
enum class EPartyChatType : uint8_t
{
	EPartyChatType__Global         = 0,
	EPartyChatType__Whisper        = 1,
	EPartyChatType__EPartyChatType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamParty.SteamBeaconSessionResult
// 0x0108
struct FSteamBeaconSessionResult
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
	struct FString                                     SessionType;                                              // 0x00C0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     HostAddr;                                                 // 0x00D0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SteamP2PAddr;                                             // 0x00E0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SessionId;                                                // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsPresence;                                              // 0x0100(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLan;                                                   // 0x0101(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct SteamParty.PartyMessage
// 0x0060
struct FPartyMessage
{
	float                                              TimeSent;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SenderName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FUniqueNetIdRepl                            SenderId;                                                 // 0x0018(0x0018) (BlueprintVisible)
	struct FString                                     Message;                                                  // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	EPartyChatType                                     ChatType;                                                 // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FUniqueNetIdRepl                            ReceiverId;                                               // 0x0048(0x0018) (BlueprintVisible)
};

// ScriptStruct SteamParty.SteamFriendInfo
// 0x0040
struct FSteamFriendInfo
{
	struct FUniqueNetIdRepl                            UniqueNetId;                                              // 0x0000(0x0018) (BlueprintVisible)
	struct FString                                     DisplayName;                                              // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	ESteamPresenceState                                OnlineState;                                              // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnline;                                                // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x003A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingThisGame;                                       // 0x003B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoinable;                                              // 0x003C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasVoiceSupport;                                         // 0x003D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct SteamParty.PartySaveInfo
// 0x00C8
struct FPartySaveInfo
{
	bool                                               IsInParty;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPartyLeader;                                            // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC6];                                      // 0x0002(0x00C6) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
