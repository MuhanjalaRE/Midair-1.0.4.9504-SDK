#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EditorStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditorStyle.EditorStyleSettings
// 0x0298 (0x02C0 - 0x0028)
class UEditorStyleSettings : public UObject
{
public:
	struct FLinearColor                                SelectionColor;                                           // 0x0028(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                PressedSelectionColor;                                    // 0x0038(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                InactiveSelectionColor;                                   // 0x0048(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                KeyboardFocusColor;                                       // 0x0058(0x0010) (Edit, Config, IsPlainOldData)
	TEnumAsByte<EColorVisionDeficiency>                ColorVisionDeficiencyPreviewType;                         // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FLinearColor                                EditorWindowBackgroundColor;                              // 0x006C(0x0010) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 EditorMainWindowBackgroundOverride;                       // 0x0080(0x0090) (Edit, Config)
	struct FSlateBrush                                 EditorChildWindowBackgroundOverride;                      // 0x0110(0x0090) (Edit, Config)
	bool                                               bResetEditorWindowBackgroundSettings;                     // 0x01A0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	unsigned char                                      bUseSmallToolBarIcons : 1;                                // 0x01A4(0x0001) (Edit, Config)
	unsigned char                                      bUseGrid : 1;                                             // 0x01A4(0x0001) (Edit, Config)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	struct FLinearColor                                RegularColor;                                             // 0x01A8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                RuleColor;                                                // 0x01B8(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                CenterColor;                                              // 0x01C8(0x0010) (Edit, Config, IsPlainOldData)
	uint32_t                                           GridSnapSize;                                             // 0x01D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableWindowAnimations : 1;                              // 0x01DC(0x0001) (Edit, Config)
	unsigned char                                      bShowFriendlyNames : 1;                                   // 0x01DC(0x0001) (Edit, Config)
	unsigned char                                      bExpandConfigurationMenus : 1;                            // 0x01DC(0x0001) (Edit, Config)
	unsigned char                                      bShowProjectMenus : 1;                                    // 0x01DC(0x0001) (Config)
	unsigned char                                      bShowLaunchMenus : 1;                                     // 0x01DC(0x0001) (Config)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	struct FLinearColor                                LogBackgroundColor;                                       // 0x01E0(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogSelectionBackgroundColor;                              // 0x01F0(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogNormalColor;                                           // 0x0200(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogCommandColor;                                          // 0x0210(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogWarningColor;                                          // 0x0220(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                LogErrorColor;                                            // 0x0230(0x0010) (Edit, Config, IsPlainOldData)
	unsigned char                                      bShowAllAdvancedDetails : 1;                              // 0x0240(0x0001) (Config)
	unsigned char                                      bShowHiddenPropertiesWhilePlaying : 1;                    // 0x0240(0x0001) (Config)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	int                                                LogFontSize;                                              // 0x0244(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ELogTimes>                             LogTimestampMode;                                         // 0x0248(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPromoteOutputLogWarningsDuringPIE;                       // 0x0249(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EAssetEditorOpenLocation                           AssetEditorOpenLocation;                                  // 0x024A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x024B(0x0001) MISSED OFFSET
	unsigned char                                      bEnableColorizedEditorTabs : 1;                           // 0x024C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData07[0x73];                                      // 0x024D(0x0073) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
