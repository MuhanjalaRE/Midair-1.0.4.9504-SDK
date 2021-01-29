#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Localization_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Localization.LocalizationSettings
// 0x0030 (0x0058 - 0x0028)
class ULocalizationSettings : public UObject
{
public:
	class ULocalizationTargetSet*                      EngineTargetSet;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLocalizationTargetSettings>         EngineTargetsSettings;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	class ULocalizationTargetSet*                      GameTargetSet;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLocalizationTargetSettings>         GameTargetsSettings;                                      // 0x0048(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Localization.LocalizationSettings");
		return ptr;
	}

};


// Class Localization.LocalizationTargetSet
// 0x0010 (0x0038 - 0x0028)
class ULocalizationTargetSet : public UObject
{
public:
	TArray<class ULocalizationTarget*>                 TargetObjects;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Localization.LocalizationTargetSet");
		return ptr;
	}

};


// Class Localization.LocalizationTarget
// 0x0170 (0x0198 - 0x0028)
class ULocalizationTarget : public UObject
{
public:
	struct FLocalizationTargetSettings                 Settings;                                                 // 0x0028(0x0170) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Localization.LocalizationTarget");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
