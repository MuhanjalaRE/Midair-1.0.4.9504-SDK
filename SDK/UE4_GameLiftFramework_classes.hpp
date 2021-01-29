#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GameLiftFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameLiftFramework.GameLiftPlayerState
// 0x0010 (0x0428 - 0x0418)
class AGameLiftPlayerState : public APlayerState
{
public:
	struct FString                                     PlayerSessionId;                                          // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiftFramework.GameLiftPlayerState");
		return ptr;
	}

};


// Class GameLiftFramework.GameLiftGameInstance
// 0x0090 (0x0190 - 0x0100)
class UGameLiftGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0100(0x0078) MISSED OFFSET
	class UClass*                                      GameLiftClientClass;                                      // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGameLiftClient*                             GameLiftClient;                                           // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiftFramework.GameLiftGameInstance");
		return ptr;
	}


	class UGameLiftClient* GetGameLiftClient();
};


// Class GameLiftFramework.GameLiftPlayerController
// 0x0000 (0x06E8 - 0x06E8)
class AGameLiftPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiftFramework.GameLiftPlayerController");
		return ptr;
	}


	void ValidatePlayer();
	void ServerRemovePlayer(const struct FString& PlayerSessionId);
	void ServerAcceptPlayer(const struct FString& PlayerSessionId);
	void ClientRequestPlayerId(const struct FString& SessionId, const struct FString& Region);
};


// Class GameLiftFramework.GameLiftBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiftBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiftFramework.GameLiftBPLibrary");
		return ptr;
	}


	struct FString STATIC_GetGameProperty(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession, const struct FName& Key);
	struct FString STATIC_GetConnectHost(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession);
	struct FString STATIC_GetConnectCommand(class UObject* WorldContextObject, const struct FString& Host, const struct FString& PlayerSessionId);
	void STATIC_Connect(class UObject* WorldContextObject, const struct FString& Host, const struct FString& PlayerSessionId, const struct FString& ExtraOptions);
};


// Class GameLiftFramework.GameLiftClient
// 0x0098 (0x00C0 - 0x0028)
class UGameLiftClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiftFramework.GameLiftClient");
		return ptr;
	}


	void SetUpAwsClient(EGameLiftRegion Region, EGameLiftScheme GameLiftScheme);
	void SetTestPoint(const struct FString& InTestEndpoint);
	void SetLocalTest(bool IsLocalTest);
	bool SearchGameSessions(const struct FString& AliasId);
	bool GetLocalTest();
	int GetGameSessionCount();
	bool GetGameSession(int Index, struct FGameLiftGameSession* GameSession);
	bool CreatePlayerSession(const struct FString& SessionId, const struct FString& PlayerId);
	bool CreateGameSession(const struct FString& RoomName, int MaxCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
