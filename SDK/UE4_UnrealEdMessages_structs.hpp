#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealEdMessages.AssetEditorRequestOpenAsset
// 0x0010
struct FAssetEditorRequestOpenAsset
{
	struct FString                                     AssetName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UnrealEdMessages.FileServerReady
// 0x0020
struct FFileServerReady
{
	TArray<struct FString>                             AddressList;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0010(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
