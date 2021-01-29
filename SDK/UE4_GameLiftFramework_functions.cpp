// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GameLiftFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameLiftClient*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameLiftClient* UGameLiftGameInstance::GetGameLiftClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClient");

	UGameLiftGameInstance_GetGameLiftClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftPlayerController.ValidatePlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGameLiftPlayerController::ValidatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ValidatePlayer");

	AGameLiftPlayerController_ValidatePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 PlayerSessionId                (Parm, ZeroConstructor)

void AGameLiftPlayerController::ServerRemovePlayer(const struct FString& PlayerSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer");

	AGameLiftPlayerController_ServerRemovePlayer_Params params;
	params.PlayerSessionId = PlayerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 PlayerSessionId                (Parm, ZeroConstructor)

void AGameLiftPlayerController::ServerAcceptPlayer(const struct FString& PlayerSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer");

	AGameLiftPlayerController_ServerAcceptPlayer_Params params;
	params.PlayerSessionId = PlayerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftPlayerController.ClientRequestPlayerId
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FString                 Region                         (Parm, ZeroConstructor)

void AGameLiftPlayerController::ClientRequestPlayerId(const struct FString& SessionId, const struct FString& Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ClientRequestPlayerId");

	AGameLiftPlayerController_ClientRequestPlayerId_Params params;
	params.SessionId = SessionId;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameLiftGameSession    GameSession                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameLiftBPLibrary::STATIC_GetGameProperty(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession, const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty");

	UGameLiftBPLibrary_GetGameProperty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GameSession = GameSession;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameLiftGameSession    GameSession                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameLiftBPLibrary::STATIC_GetConnectHost(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost");

	UGameLiftBPLibrary_GetConnectHost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Host                           (Parm, ZeroConstructor)
// struct FString                 PlayerSessionId                (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameLiftBPLibrary::STATIC_GetConnectCommand(class UObject* WorldContextObject, const struct FString& Host, const struct FString& PlayerSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand");

	UGameLiftBPLibrary_GetConnectCommand_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Host = Host;
	params.PlayerSessionId = PlayerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftBPLibrary.Connect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Host                           (Parm, ZeroConstructor)
// struct FString                 PlayerSessionId                (Parm, ZeroConstructor)
// struct FString                 ExtraOptions                   (Parm, ZeroConstructor)

void UGameLiftBPLibrary::STATIC_Connect(class UObject* WorldContextObject, const struct FString& Host, const struct FString& PlayerSessionId, const struct FString& ExtraOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.Connect");

	UGameLiftBPLibrary_Connect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Host = Host;
	params.PlayerSessionId = PlayerSessionId;
	params.ExtraOptions = ExtraOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftClient.SetUpAwsClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGameLiftRegion                Region                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EGameLiftScheme                GameLiftScheme                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameLiftClient::SetUpAwsClient(EGameLiftRegion Region, EGameLiftScheme GameLiftScheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.SetUpAwsClient");

	UGameLiftClient_SetUpAwsClient_Params params;
	params.Region = Region;
	params.GameLiftScheme = GameLiftScheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftClient.SetTestPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InTestEndpoint                 (ConstParm, Parm, ZeroConstructor)

void UGameLiftClient::SetTestPoint(const struct FString& InTestEndpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.SetTestPoint");

	UGameLiftClient_SetTestPoint_Params params;
	params.InTestEndpoint = InTestEndpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftClient.SetLocalTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsLocalTest                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameLiftClient::SetLocalTest(bool IsLocalTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.SetLocalTest");

	UGameLiftClient_SetLocalTest_Params params;
	params.IsLocalTest = IsLocalTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiftFramework.GameLiftClient.SearchGameSessions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AliasId                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiftClient::SearchGameSessions(const struct FString& AliasId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.SearchGameSessions");

	UGameLiftClient_SearchGameSessions_Params params;
	params.AliasId = AliasId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftClient.GetLocalTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiftClient::GetLocalTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.GetLocalTest");

	UGameLiftClient_GetLocalTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftClient.GetGameSessionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameLiftClient::GetGameSessionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.GetGameSessionCount");

	UGameLiftClient_GetGameSessionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftClient.GetGameSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameLiftGameSession    GameSession                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiftClient::GetGameSession(int Index, struct FGameLiftGameSession* GameSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.GetGameSession");

	UGameLiftClient_GetGameSession_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameSession != nullptr)
		*GameSession = params.GameSession;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftClient.CreatePlayerSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FString                 PlayerId                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiftClient::CreatePlayerSession(const struct FString& SessionId, const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.CreatePlayerSession");

	UGameLiftClient_CreatePlayerSession_Params params;
	params.SessionId = SessionId;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiftFramework.GameLiftClient.CreateGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RoomName                       (Parm, ZeroConstructor)
// int                            MaxCount                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiftClient::CreateGameSession(const struct FString& RoomName, int MaxCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClient.CreateGameSession");

	UGameLiftClient_CreateGameSession_Params params;
	params.RoomName = RoomName;
	params.MaxCount = MaxCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
