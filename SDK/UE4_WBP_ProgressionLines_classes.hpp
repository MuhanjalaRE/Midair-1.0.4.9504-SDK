#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionLines_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ProgressionLines.WBP_ProgressionLines_C
// 0x0020 (0x0250 - 0x0230)
class UWBP_ProgressionLines_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	TArray<struct FProgressionLine>                    LinedNodes;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   Canvas_Half_Size;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionLines.WBP_ProgressionLines_C");
		return ptr;
	}


	void OnPaint(struct FPaintContext* Context);
	void Construct();
	void ExecuteUbergraph_WBP_ProgressionLines(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
