#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MainMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0030 (0x03C0 - 0x0390)
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               BackgroundLevels;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LevelIndex;                                               // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class AAmbientSound*                               SC_Music_MainMenu_4_ExecuteUbergraph_MainMenu_RefProperty;// 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                CameraActor_2_ExecuteUbergraph_MainMenu_RefProperty;      // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void HorribleLoadoutsSaveHack();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Load_Next_Level();
	void ExecuteUbergraph_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
