// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreboardSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScoreboardSlot.WBP_ScoreboardSlot_C.Update Info (New)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMAPlayerState*          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreboardSlot_C::Update_Info__New_(class UTexture2D* Icon, int Rank, class AMAPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardSlot.WBP_ScoreboardSlot_C.Update Info (New)");

	UWBP_ScoreboardSlot_C_Update_Info__New__Params params;
	params.Icon = Icon;
	params.Rank = Rank;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
