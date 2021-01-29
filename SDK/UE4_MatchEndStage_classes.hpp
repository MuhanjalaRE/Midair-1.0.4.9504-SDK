#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MatchEndStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchEndStage.MatchEndStage_C
// 0x0109 (0x0491 - 0x0388)
class AMatchEndStage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera1;                                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Player1;                                                  // 0x03A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Player2;                                                  // 0x03D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Player3;                                                  // 0x0400(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Player4;                                                  // 0x0430(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Player5;                                                  // 0x0460(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Primed;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MatchEndStage.MatchEndStage_C");
		return ptr;
	}


	void GetTop5Players();
	struct FRotator LookAtCamera(struct FVector* A);
	void SetUpPlayer(const struct FString& PlayerName, struct FTransform* A);
	void Showtime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MatchEndStage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
