#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Blink_Art_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Blink_Art.BP_Blink_Art_C
// 0x0020 (0x0110 - 0x00F0)
class UBP_Blink_Art_C : public UAugment_Blink_Art
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     StartLocation;                                            // 0x00F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0104(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Blink_Art.BP_Blink_Art_C");
		return ptr;
	}


	void StartBlink(struct FVector* Location);
	void StopBlink(struct FVector* Location);
	void ExecuteUbergraph_BP_Blink_Art(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
