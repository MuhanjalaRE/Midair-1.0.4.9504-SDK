#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SteamParty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamParty.SteamBeaconGameInstance
// 0x0410 (0x05A0 - 0x0190)
class USteamBeaconGameInstance : public UGameLiftGameInstance
{
public:
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VoiceChatEnabled;                                         // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              PartyHostGameTravelDelay;                                 // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartyStatus                                       PartyStatus;                                              // 0x01A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	class ASteamBeaconHost*                            BeaconHostObject;                                         // 0x01A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconListener*                        BeaconHostListener;                                       // 0x01B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconClient*                          BeaconClient;                                             // 0x01B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x01C0(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCreateGameSessionCompleted;                             // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinGameSessionComplete;                                // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyPlayerStateChangedDelegate;                        // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyPlayerClearDelegate;                               // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyPlayerJoinDelegate;                                // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyPlayerLeftDelegate;                                // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x340];                                     // 0x0260(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameInstance");
		return ptr;
	}


	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState);
	void AcceptPartyInvite();
};


// Class SteamParty.SteamBeaconGameSession
// 0x03B0 (0x0760 - 0x03B0)
class ASteamBeaconGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x03B0(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameSession");
		return ptr;
	}

};


// Class SteamParty.SteamBeaconPlayerController
// 0x0058 (0x0740 - 0x06E8)
class ASteamBeaconPlayerController : public AGameLiftPlayerController
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                         // 0x06E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x06F0(0x0048) MISSED OFFSET
	bool                                               IsPushToTalk;                                             // 0x0738(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0739(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerController");
		return ptr;
	}


	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void ServerUpdateMatchMakingLobbySession(unsigned char MatchType, const struct FBlueprintSessionResult& SessionResult);
	void OnJoinMatchMakingLobbySession(unsigned char MatchType, const struct FBlueprintSessionResult& SessionResult);
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId);
	void BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged);
	void BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft);
	void BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined);
	void BPEvent_PartyStateChanged();
	void BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId);
	void BPEvent_PartyJoiningGame();
	void BPEvent_PartyInviteReceived(const struct FString& FriendName);
	void BPEvent_PartyHostReconnecting();
	void BPEvent_PartyHostConnectionFailure();
	void BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage);
};


// Class SteamParty.CreateSessionGameCallbackProxy
// 0x00D8 (0x0100 - 0x0028)
class UCreateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0048(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.CreateSessionGameCallbackProxy");
		return ptr;
	}


	class UCreateSessionGameCallbackProxy* STATIC_CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.DummyPlayerController
// 0x0000 (0x06E8 - 0x06E8)
class ADummyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.DummyPlayerController");
		return ptr;
	}

};


// Class SteamParty.FindSessionsGameCallbackProxy
// 0x00A8 (0x00D0 - 0x0028)
class UFindSessionsGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.FindSessionsGameCallbackProxy");
		return ptr;
	}


	struct FString STATIC_GetGameType(const struct FBlueprintSessionResult& Result);
	class UFindSessionsGameCallbackProxy* STATIC_FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};


// Class SteamParty.JoinSessionGameCallbackProxy
// 0x0138 (0x0160 - 0x0028)
class UJoinSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0048(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.JoinSessionGameCallbackProxy");
		return ptr;
	}


	class UJoinSessionGameCallbackProxy* STATIC_JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class SteamParty.SteamBeaconClient
// 0x0060 (0x0620 - 0x05C0)
class ASteamBeaconClient : public ALobbyBeaconClient
{
public:
	bool                                               bHasHandShakeCompleted;                                   // 0x05C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class ASteamBeaconState*                           BeaconLobbyState;                                         // 0x05C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // 0x05D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x05D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconClient");
		return ptr;
	}


	void ServerSetHandshakeComplete();
	void OnRep_PlayerState();
	void OnRep_LobbyState();
	void OnPartyDisbanded();
	void LeaveParty();
	void KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	class ASteamBeaconPlayerState* GetPlayerState();
	class ASteamBeaconState* GetPartyState();
	void ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void ClientJoinGameServer(const struct FString& GameServerURL);
	void ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer);
};


// Class SteamParty.SteamBeaconHost
// 0x0008 (0x03E8 - 0x03E0)
class ASteamBeaconHost : public ALobbyBeaconHost
{
public:
	bool                                               bIsDisbandingParty;                                       // 0x03E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoiningGame;                                           // 0x03E1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconHost");
		return ptr;
	}


	class ASteamBeaconState* GetPartyState();
	void DisbandParty();
};


// Class SteamParty.SteamBeaconListener
// 0x0000 (0x0468 - 0x0468)
class ASteamBeaconListener : public AOnlineBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconListener");
		return ptr;
	}

};


// Class SteamParty.SteamBeaconPlayerState
// 0x0090 (0x0550 - 0x04C0)
class ASteamBeaconPlayerState : public ALobbyBeaconPlayerState
{
public:
	int                                                PlayerProfileLevel;                                       // 0x04C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x04C4(0x007C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerTalkingStateChanged;                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerState");
		return ptr;
	}


	void ServerSetPlayerProfileLevel(int InPlayerProfileLevel);
	void ServerSendPartyMessage(const struct FPartyMessage& ChatMessage);
	void SendPartyMessage(const struct FPartyMessage& ChatMessage);
	void OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage);
	bool IsPlayerPartyLeader(class APlayerState* InPlayerState);
	bool IsPlayer(class APlayerState* InPlayerState);
	bool IsPartyLeader();
	struct FUniqueNetIdRepl GetPlayerUniqueId();
	struct FText GetDisplayName();
};


// Class SteamParty.SteamBeaconState
// 0x00F0 (0x0730 - 0x0640)
class ASteamBeaconState : public ALobbyBeaconState
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0640(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamBeaconState");
		return ptr;
	}


	void OnRep_PartyOwnerUniqueId();
	void OnLobbyStateInfoUpdated_NetRefresh();
	void OnLobbyStateInfoUpdated();
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId);
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};


// Class SteamParty.SteamGetFriendsCallbackProxy
// 0x0078 (0x00A0 - 0x0028)
class USteamGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamGetFriendsCallbackProxy");
		return ptr;
	}


	class USteamGetFriendsCallbackProxy* STATIC_RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class SteamParty.SteamPartyNetDriver
// 0x0000 (0x0430 - 0x0430)
class USteamPartyNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamParty.SteamPartyNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
