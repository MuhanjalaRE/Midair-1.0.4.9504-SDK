// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LobbyPlayerRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              InAvatar                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbyPlayerRow_C::SetData(const struct FString& DisplayName, class UTexture2D* InAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C.SetData");

	UWBP_LobbyPlayerRow_C_SetData_Params params;
	params.DisplayName = DisplayName;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
