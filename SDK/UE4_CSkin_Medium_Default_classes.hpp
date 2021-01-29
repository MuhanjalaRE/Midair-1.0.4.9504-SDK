#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CSkin_Medium_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CSkin_Medium_Default.CSkin_Medium_Default_C
// 0x0020 (0x0400 - 0x03E0)
class ACSkin_Medium_Default_C : public ACSkin_DefaultSetup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight1;                                              // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CSkin_Medium_Default.CSkin_Medium_Default_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CSkin_Medium_Default(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
