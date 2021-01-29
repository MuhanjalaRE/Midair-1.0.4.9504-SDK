#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AnimatedDoor_Cond_Armor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C
// 0x0014 (0x03F8 - 0x03E4)
class ABP_AnimatedDoor_Cond_Armor_C : public ABP_AnimatedDoor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Armor_Requirement;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBeginOverlapTrigger(class AActor** OverlappedActor, class AActor** OtherActor);
	void ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
