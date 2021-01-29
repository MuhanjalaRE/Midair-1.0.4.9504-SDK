// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SourceControl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SourceControl.SourceControlHelpers.PackageFilenames
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InPackageNames                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> USourceControlHelpers::STATIC_PackageFilenames(TArray<struct FString> InPackageNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.PackageFilenames");

	USourceControlHelpers_PackageFilenames_Params params;
	params.InPackageNames = InPackageNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.PackageFilename
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPackageName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USourceControlHelpers::STATIC_PackageFilename(const struct FString& InPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.PackageFilename");

	USourceControlHelpers_PackageFilename_Params params;
	params.InPackageName = InPackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.MarkFileForAdd
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USourceControlHelpers::STATIC_MarkFileForAdd(const struct FString& InFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.MarkFileForAdd");

	USourceControlHelpers_MarkFileForAdd_Params params;
	params.InFile = InFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CopyFileUnderSourceControl
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InDestFile                     (Parm, ZeroConstructor)
// struct FString                 InSourceFile                   (Parm, ZeroConstructor)
// struct FText                   InFileDescription              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   OutFailReason                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USourceControlHelpers::STATIC_CopyFileUnderSourceControl(const struct FString& InDestFile, const struct FString& InSourceFile, const struct FText& InFileDescription, struct FText* OutFailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CopyFileUnderSourceControl");

	USourceControlHelpers_CopyFileUnderSourceControl_Params params;
	params.InDestFile = InDestFile;
	params.InSourceFile = InSourceFile;
	params.InFileDescription = InFileDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFailReason != nullptr)
		*OutFailReason = params.OutFailReason;

	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckOutFile
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USourceControlHelpers::STATIC_CheckOutFile(const struct FString& InFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckOutFile");

	USourceControlHelpers_CheckOutFile_Params params;
	params.InFile = InFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.AbsoluteFilenames
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFileNames                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> USourceControlHelpers::STATIC_AbsoluteFilenames(TArray<struct FString> InFileNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.AbsoluteFilenames");

	USourceControlHelpers_AbsoluteFilenames_Params params;
	params.InFileNames = InFileNames;

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
