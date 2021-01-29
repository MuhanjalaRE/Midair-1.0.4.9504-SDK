#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SourceControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SourceControl.SourceControlHelpers
// 0x0000 (0x0028 - 0x0028)
class USourceControlHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SourceControl.SourceControlHelpers");
		return ptr;
	}


	TArray<struct FString> STATIC_PackageFilenames(TArray<struct FString> InPackageNames);
	struct FString STATIC_PackageFilename(const struct FString& InPackageName);
	bool STATIC_MarkFileForAdd(const struct FString& InFile);
	bool STATIC_CopyFileUnderSourceControl(const struct FString& InDestFile, const struct FString& InSourceFile, const struct FText& InFileDescription, struct FText* OutFailReason);
	bool STATIC_CheckOutFile(const struct FString& InFile);
	TArray<struct FString> STATIC_AbsoluteFilenames(TArray<struct FString> InFileNames);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
