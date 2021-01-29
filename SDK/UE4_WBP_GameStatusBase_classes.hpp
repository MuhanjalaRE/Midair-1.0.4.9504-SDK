#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatusBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_GameStatusBase.WBP_GameStatusBase_C
// 0x0011 (0x0241 - 0x0230)
class UWBP_GameStatusBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class AMAGameState*                                MAGameState;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TeamID;                                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameStatusBase.WBP_GameStatusBase_C");
		return ptr;
	}


	void Get_Visibility_for_Team_ID(unsigned char TeamID, ESlateVisibility* Out_Visibility);
	void Get_View_Target_Team_ID(unsigned char* TeamID);
	void Get_Time_Remaining_Text(struct FText* Text);
	void Get_FScore_as_Text(float Score, bool Round, struct FText* Text);
	void Get_Team_B_Score_Text(struct FText* Text);
	void Get_Team_A_Score_Text(struct FText* Text);
	void Get_Team_B_Score_Pct(float* Pct);
	void Get_Team_A_Score_Pct(float* Pct);
	void Get_Score_by_TeamID(unsigned char TeamID, float* Score);
	float Get_Score_Pct_by_TeamID(unsigned char TeamID);
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_GameStatusBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
