#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MenuPartyPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C
// 0x0018 (0x0858 - 0x0840)
class ABP_MenuPartyPlayerController_C : public AMAPlayerControllerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UW_PartyPanel_C*                             UI_PartyPanel;                                            // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_PartyMainMenu_C*                        UI_MainMenu;                                              // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C");
		return ptr;
	}


	void DestroyPartyPanel();
	void CreatePartyPanel();
	void UserConstructionScript();
	void InpActEvt_Enter_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState** InPlayerStateLeft);
	void BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState** InPlayerBeaconStateChanged);
	void BPEvent_PartyOwnerChanged(struct FUniqueNetIdRepl* InUniqueId);
	void BPEvent_PartyStateChanged();
	void BPEvent_PartyJoiningGame();
	void BPEvent_ChatMessageReceived(struct FPartyMessage* InPartyMessage);
	void BPEvent_PartyHostConnectionFailure();
	void BPEvent_PartyInviteReceived(struct FString* FriendName);
	void BPEvent_PartyHostReconnecting();
	void BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState** InPlayerStateJoined);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MenuPartyPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
