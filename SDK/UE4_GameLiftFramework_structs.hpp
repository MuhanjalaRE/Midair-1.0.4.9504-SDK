#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameLiftFramework.EGameLiftScheme
enum class EGameLiftScheme : uint8_t
{
	EGameLiftScheme__HTTP          = 0,
	EGameLiftScheme__HTTPS         = 1,
	EGameLiftScheme__EGameLiftScheme_MAX = 2
};


// Enum GameLiftFramework.EGameLiftRegion
enum class EGameLiftRegion : uint8_t
{
	EGameLiftRegion__US_EAST       = 0,
	EGameLiftRegion__US_WEST       = 1,
	EGameLiftRegion__US_WEST01     = 2,
	EGameLiftRegion__EU_WEST       = 3,
	EGameLiftRegion__EU_CENTRAL    = 4,
	EGameLiftRegion__AP_SOUTHEAST  = 5,
	EGameLiftRegion__AP_SOUTHEAST01 = 6,
	EGameLiftRegion__AP_NORTHEAST  = 7,
	EGameLiftRegion__AP_NORTHEAST01 = 8,
	EGameLiftRegion__SA_EAST       = 9,
	EGameLiftRegion__AP_SOUTH      = 10,
	EGameLiftRegion__EGameLiftRegion_MAX = 11
};


// Enum GameLiftFramework.EGameLiftPlayerSessionCreationPolicy
enum class EGameLiftPlayerSessionCreationPolicy : uint8_t
{
	EGameLiftPlayerSessionCreationPolicy__NOT_SET = 0,
	EGameLiftPlayerSessionCreationPolicy__AcceptAll = 1,
	EGameLiftPlayerSessionCreationPolicy__DenyAll = 2,
	EGameLiftPlayerSessionCreationPolicy__EGameLiftPlayerSessionCreationPolicy_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameLiftFramework.GameLiftProperty
// 0x0018
struct FGameLiftProperty
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GameLiftFramework.GameLiftGameSession
// 0x0050
struct FGameLiftGameSession
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameLiftProperty>                   Properties;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Players;                                                  // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     IpAddress;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGameLiftPlayerSessionCreationPolicy               PlayerSessionCreationPolicy;                              // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct GameLiftFramework.InstanceMetaData
// 0x0080
struct FInstanceMetaData
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Architecture;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     InstanceId;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     InstanceType;                                             // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     PendingTime;                                              // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     PrivateIp;                                                // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct GameLiftFramework.GameLiftFleet
// 0x0010
struct FGameLiftFleet
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlias;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGameLiftRegion                                    Region;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GameLiftFramework.GameLiftPlayerSession
// 0x0030
struct FGameLiftPlayerSession
{
	struct FString                                     PlayerSessionId;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameSessionId;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
