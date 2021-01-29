#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GameLiftFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClient
struct UGameLiftGameInstance_GetGameLiftClient_Params
{
	class UGameLiftClient*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftPlayerController.ValidatePlayer
struct AGameLiftPlayerController_ValidatePlayer_Params
{
};

// Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer
struct AGameLiftPlayerController_ServerRemovePlayer_Params
{
	struct FString                                     PlayerSessionId;                                          // (Parm, ZeroConstructor)
};

// Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer
struct AGameLiftPlayerController_ServerAcceptPlayer_Params
{
	struct FString                                     PlayerSessionId;                                          // (Parm, ZeroConstructor)
};

// Function GameLiftFramework.GameLiftPlayerController.ClientRequestPlayerId
struct AGameLiftPlayerController_ClientRequestPlayerId_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty
struct UGameLiftBPLibrary_GetGameProperty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameLiftGameSession                        GameSession;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost
struct UGameLiftBPLibrary_GetConnectHost_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameLiftGameSession                        GameSession;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand
struct UGameLiftBPLibrary_GetConnectCommand_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	struct FString                                     PlayerSessionId;                                          // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameLiftFramework.GameLiftBPLibrary.Connect
struct UGameLiftBPLibrary_Connect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	struct FString                                     PlayerSessionId;                                          // (Parm, ZeroConstructor)
	struct FString                                     ExtraOptions;                                             // (Parm, ZeroConstructor)
};

// Function GameLiftFramework.GameLiftClient.SetUpAwsClient
struct UGameLiftClient_SetUpAwsClient_Params
{
	EGameLiftRegion                                    Region;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGameLiftScheme                                    GameLiftScheme;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.SetTestPoint
struct UGameLiftClient_SetTestPoint_Params
{
	struct FString                                     InTestEndpoint;                                           // (ConstParm, Parm, ZeroConstructor)
};

// Function GameLiftFramework.GameLiftClient.SetLocalTest
struct UGameLiftClient_SetLocalTest_Params
{
	bool                                               IsLocalTest;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.SearchGameSessions
struct UGameLiftClient_SearchGameSessions_Params
{
	struct FString                                     AliasId;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.GetLocalTest
struct UGameLiftClient_GetLocalTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.GetGameSessionCount
struct UGameLiftClient_GetGameSessionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.GetGameSession
struct UGameLiftClient_GetGameSession_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameLiftGameSession                        GameSession;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.CreatePlayerSession
struct UGameLiftClient_CreatePlayerSession_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiftFramework.GameLiftClient.CreateGameSession
struct UGameLiftClient_CreateGameSession_Params
{
	struct FString                                     RoomName;                                                 // (Parm, ZeroConstructor)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
