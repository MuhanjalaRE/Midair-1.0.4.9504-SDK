#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ConfirmWithMatchTimer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C
// 0x0000 (0x0290 - 0x0290)
class UWBP_ConfirmWithMatchTimer_C : public UWBP_ConfirmAction_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C");
		return ptr;
	}


	void GetDynamicText(struct FText* PromptText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
