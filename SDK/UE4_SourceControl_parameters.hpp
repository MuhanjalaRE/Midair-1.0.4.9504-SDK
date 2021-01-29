#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SourceControl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SourceControl.SourceControlHelpers.PackageFilenames
struct USourceControlHelpers_PackageFilenames_Params
{
	TArray<struct FString>                             InPackageNames;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SourceControl.SourceControlHelpers.PackageFilename
struct USourceControlHelpers_PackageFilename_Params
{
	struct FString                                     InPackageName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SourceControl.SourceControlHelpers.MarkFileForAdd
struct USourceControlHelpers_MarkFileForAdd_Params
{
	struct FString                                     InFile;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SourceControl.SourceControlHelpers.CopyFileUnderSourceControl
struct USourceControlHelpers_CopyFileUnderSourceControl_Params
{
	struct FString                                     InDestFile;                                               // (Parm, ZeroConstructor)
	struct FString                                     InSourceFile;                                             // (Parm, ZeroConstructor)
	struct FText                                       InFileDescription;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutFailReason;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SourceControl.SourceControlHelpers.CheckOutFile
struct USourceControlHelpers_CheckOutFile_Params
{
	struct FString                                     InFile;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SourceControl.SourceControlHelpers.AbsoluteFilenames
struct USourceControlHelpers_AbsoluteFilenames_Params
{
	TArray<struct FString>                             InFileNames;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
