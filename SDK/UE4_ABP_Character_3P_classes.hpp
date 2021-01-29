#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Character_3P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_3P.ABP_Character_3P_C
// 0x4AF2 (0x4E6A - 0x0378)
class UABP_Character_3P_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5FA2EEE2487DBDE63B917EA518D550E0;// 0x0380(0x0158)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B80C39454076E70F525EA1B623757A49;  // 0x04D8(0x00A8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C530EC214EFC1849CA991FAB0A266E39; // 0x0580(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_69807CB14EEA449D27CD698F6665EB79;// 0x0660(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2EDD14494DC9F6A42D83CD84C628B450;// 0x06A8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5D96C0F54FCFEC4DCE61CAB650D330C7;// 0x0778(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_96D35CAB4E7C93116BE53FA0A184B3EF;// 0x0820(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A89BDC84905BEE97FA5E0AFD673E5A4;// 0x08C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7782070D4E9D8565A92386A5F222CFA2;// 0x0918(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7B56A07043C67F475E335F9DDBBA813C;// 0x0968(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49E93801425B08D4A18A24A5458BD973;// 0x09B8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_73C8A78D4B87ABB8B0C0BA8E1E74C4DF;// 0x0A00(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D;// 0x0A48(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D8CEC33B41097E54C9D6E28F7A709052;// 0x0B00(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66B3AFC84272EF04B89E1F8BBCD3B95C;// 0x0BE0(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_6759B03545439BC2D285CB9F2A81F4D2;// 0x0C50(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5E9C872F4DCDB82C2696B1B6AC5DD8B1;// 0x0D20(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_1C6524514280B1750C67869780854D19;// 0x0E78(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CE7013304F4A94684C13968CD91C2A07;// 0x0FD0(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C6AE299E432B8A6245638589FE583E60;// 0x1128(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1CACF1AC43E6AFFB11A823A8AF2FF726;// 0x11D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A;// 0x1220(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30;// 0x12A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D;// 0x1320(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_961B4A444E58FC052CB0DFA8DA8B294B;// 0x13A0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DE366D114BA9C43FEC7B97A9A3D2638B;// 0x1420(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C8799E24F09B55EAEB2ABA5EB1BD473;// 0x1548(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_837249B84702CAABBB1F18A549C1B233;// 0x1590(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7B180455460498087FD087B5C329886D;// 0x16B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_86DB76244EA629864BBADB9223A27E47;// 0x1700(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_718514D44A760F9BB6EBA68C148104A3;// 0x1738(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E58AA4145E95585644E5CB3C63AA8D7;// 0x1780(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D47B73B847B2DDC870B4A8B96C5AE41E;// 0x1858(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8D13AD8C434567B430AA0DBE9BA17B2A;// 0x18D0(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E530245F4EBBC04840BB39ACBC11AD63;// 0x1978(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5;// 0x1A48(0x0158)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_804CD0624E42103F7740C2A4E22E7666;// 0x1BA0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19CF0DBC4E8BE8853463A682E223A607;// 0x1C00(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_657A85AF4986EF14662C9FBD1A782898;// 0x1CD0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4F633BB144AE56E0EA2BDEB412EA2F09;// 0x1D78(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_143046AA416D20FB7D6B4BA58F8CEF1E;// 0x1DC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AE845B24ECCB05171278E8145202B47;// 0x1E18(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F;// 0x1E68(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6632FE9045654A040B9EA29F25C54E02;// 0x1F38(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B882C13740AF66AF510D5A865A96E9B0;// 0x1FA8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_89DB9BA64FCAC1DC3C223FB2B08F162C;// 0x1FF8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_722332F445D482BA0BB8849CD8496A7A;// 0x20A0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_281B1E384B817D4744C4DE85F3C3FA39;// 0x20F0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_301E8D8B42446CE2142CA588CFBF9428;// 0x21D0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_811BB823422418E96B375DB42C5A3FE3;// 0x2220(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B3962A0C4C837A8C6B83E48F8D93471A;// 0x2300(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB880D0B4A40081A78E07AB858B0F745;// 0x23A8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_ADB9847D45DDC56329D1DB8C39411B53;// 0x2478(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A7A3BC69415EE329EAD4A2941200A459;// 0x2520(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CA1FA614368801729948A8CF3C2EFA3;// 0x2570(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3CF7E8141FE82D09D45DC9B01F9AD27;// 0x25C0(0x0050)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0; // 0x2610(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1217789D40A134264BA2868AA9E58782;// 0x26F0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72A009A7407AA41B7BCE2EBEC4969704;// 0x2738(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72;// 0x2780(0x00B8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B; // 0x2838(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CEC4407242C096460F2F6280E8E25B5A;// 0x2918(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AEC7F42E413837F8D1C7DCB1AB08C081;// 0x29C0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AAA6922D44E35B1D2EFA5A81FFC28E79;// 0x2A90(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8668A9534919039A868B26809AD0C0D7;// 0x2AE0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5BBC86864DF0ACBA5698E0B0EA2FEFEC;// 0x2B30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B4091A284E749EDB522E8CB3B0D3AB3E;// 0x2B80(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB01D62A418C6EF548EF33A470DF7DDC;// 0x2BD0(0x00D0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_BC7596344A09F62100480E9EF0AE0BB0;// 0x2CA0(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8DAF77554EECF56A2BC5738D039C0624;// 0x2D00(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9C1FAF84429FAA2B648FD18372F31EE9;// 0x2D78(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A2612D04DD7CBD273B05DB10B0E1B20;// 0x2EA0(0x0070)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F;// 0x2F10(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D56D8A64A24E58D1671FEBBE2EC1FF3;      // 0x2F70(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E911D31149991171E8272AA657FD88AB;// 0x2FD0(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FAF85E7C42F434FC7E10F0837AF410BD;// 0x30F8(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41;// 0x31A0(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FC9D48D4DE05E2934A1CF98606E0902;// 0x32C8(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B702EAF148E22F2CB3B605978C5E5ECC;// 0x3370(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52;// 0x3498(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CF7F4C74F46A4AE0D7169A6A4BE9DED;// 0x3510(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_078D7ED64A8CCD733B892E900F263E24;// 0x3560(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43B98F4547B67C71D901838023EA27B6;// 0x3630(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C2995624B9BE553A4D98DA78561C296;// 0x3680(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BE9C8435448941721C7A45A43B8FE6AD;// 0x36D0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C3EEE5874B100A3DEFF810AB5E694104;// 0x3778(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8CB873BF4F42FBD06B576D97EC845E06;// 0x37C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88D97F29468AEA22F3538EA61A1D8688;// 0x3818(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD758BB84D5D5FC3BD76DC8B0CD00503;// 0x3868(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_0C8F580943010BF758D24A970CDFE73F;// 0x3938(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD32552F4DC67E7AE2FFFB982FA46210;// 0x3A90(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44FF6E8342091046D9AFDB8E45B4475B;// 0x3B38(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ECE05ACD43622C5FE4E23BABF7C26530;// 0x3B88(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5ABC878C45929C568512F6A757148A2A;// 0x3BD8(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_689E85A44F4808B47A4EEA9974CD72E0;// 0x3D30(0x00A8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_61DC50C043FB6CC3F62D9C8EF69101BC;// 0x3DD8(0x0158)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2191614B4FF090AB8AD08BB9E3B28FFD;// 0x3F30(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81;// 0x4000(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EDC061A45DD8C663C7186A3E2283BCA;// 0x40B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D452542C4FC7CA08108BEF8D2FB5BFBD;// 0x4108(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2;// 0x4158(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BE26817406A775D9E4CA5BABBEC2589;// 0x42B0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D5431FCD45B4330519002EB8837EE943;// 0x4300(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFE1ABF4454AE35FBF534B8E3EFABF9E;// 0x43A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_939C264E4E18F74CF9DBE99999DC924D;// 0x4478(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78;// 0x44E8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4F0D90E24D48663BAFF0BD80F118C86C;// 0x45A0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6FE5846847AF1D904D81DC808F19C708;// 0x45E8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A;// 0x4630(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0;// 0x46E8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F8C7B0944528AE77197B07979FC7B3F0;// 0x47A0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20BE3645448EDD57D2F50296B48D1AED;// 0x47E8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F00F416B4A345D77A4177E9842E2F962;      // 0x48C8(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA;  // 0x4910(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_42B8434A4B4E508A8B5A828BC3D4AA20;// 0x49B8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BDB443564A2A1515AD6716BACD24B835;// 0x4A00(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2;  // 0x4A48(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54CF005D48A57BD43F73459B65840066;// 0x4AF0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2A3860D4E05319ECF20F48BCCFF689B;// 0x4BC0(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C28720CC417189B07E2D8E8D5D3EAE70;// 0x4C30(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5080D941465EC8ADB5C2DBB1F3CC3D43;// 0x4C78(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_98BF6E824DE24024D61721AB63E5CE6B;// 0x4D30(0x0048)
	class AMACharacter*                                Owner;                                                    // 0x4D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSeated;                                                 // 0x4D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseForegrip;                                              // 0x4D81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Test_IK;                                                  // 0x4D82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHeavy;                                                  // 0x4D83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stance;                                                   // 0x4D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorVelocity;                                            // 0x4D88(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // 0x4D94(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              JetDirection;                                             // 0x4DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Floating;                                              // 0x4DA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkating;                                                // 0x4DA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x4DA6(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x4DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Move_Direction;                                           // 0x4DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasHit;                                                   // 0x4DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x4DB1(0x0003) MISSED OFFSET
	float                                              AimUp;                                                    // 0x4DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForegripLocation;                                         // 0x4DB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftArmPoleVector;                                        // 0x4DC4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponScale;                                              // 0x4DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiRootRotation;                                          // 0x4DD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatRootRotation;                                        // 0x4DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDirection;                                             // 0x4DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Hit_Strength;                                             // 0x4DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Weapon_Offset;                                            // 0x4DE4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateAimYaw;                                              // 0x4DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatAimYaw;                                              // 0x4DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSkateSpeed;                                            // 0x4DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFloatSpeed;                                            // 0x4DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateDirection;                                           // 0x4E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatDirection;                                           // 0x4E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRightFootIK;                                           // 0x4E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLeftFootIK;                                            // 0x4E09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFootIK;                                                // 0x4E0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x4E0B(0x0001) MISSED OFFSET
	struct FVector                                     RightFootEffectorLocation;                                // 0x4E0C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightKneeTarget;                                          // 0x4E18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x4E24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftKneeTarget;                                           // 0x4E30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_IK_Foot_Offset;                                       // 0x4E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_IK_Pelvis_Offset;                                     // 0x4E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pelvis_Offset;                                            // 0x4E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateRotationInterpSpeed;                                 // 0x4E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftElbowTarget;                                          // 0x4E4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateBlendInTime;                                         // 0x4E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateBlendOutTime;                                        // 0x4E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadScale;                                                // 0x4E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeetScale;                                                // 0x4E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBigHead;                                                // 0x4E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShoeKid;                                                // 0x4E69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Character_3P.ABP_Character_3P_C");
		return ptr;
	}


	void Determine_Is_Floating();
	void Determine_Is_Skating();
	void Setup_Foot_IK(const struct FName& FootIKBoneName, const struct FName& KneeTargetName, struct FVector* EffectorLocation, struct FVector* KneeTarget, bool* Success, float* Z_Offset);
	void Get_Foot_Size(float* Size);
	void Get_Weapon_Scale(class AMAWeaponAttachment* Weapon_Attachment, float* Scale);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_FD758BB84D5D5FC3BD76DC8B0CD00503();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_078D7ED64A8CCD733B892E900F263E24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_B702EAF148E22F2CB3B605978C5E5ECC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E911D31149991171E8272AA657FD88AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_9C1FAF84429FAA2B648FD18372F31EE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB01D62A418C6EF548EF33A470DF7DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_AEC7F42E413837F8D1C7DCB1AB08C081();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB880D0B4A40081A78E07AB858B0F745();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_19CF0DBC4E8BE8853463A682E223A607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_804CD0624E42103F7740C2A4E22E7666();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_E530245F4EBBC04840BB39ACBC11AD63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D47B73B847B2DDC870B4A8B96C5AE41E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_837249B84702CAABBB1F18A549C1B233();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_54CF005D48A57BD43F73459B65840066();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_DE366D114BA9C43FEC7B97A9A3D2638B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_0C8F580943010BF758D24A970CDFE73F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_961B4A444E58FC052CB0DFA8DA8B294B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_CE7013304F4A94684C13968CD91C2A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_1C6524514280B1750C67869780854D19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5E9C872F4DCDB82C2696B1B6AC5DD8B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_6759B03545439BC2D285CB9F2A81F4D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_2EDD14494DC9F6A42D83CD84C628B450();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5FA2EEE2487DBDE63B917EA518D550E0();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_OnFootStep();
	void Hit();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_CFE1ABF4454AE35FBF534B8E3EFABF9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81();
	void Player_State_Received(class APlayerState* Player_State);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_2191614B4FF090AB8AD08BB9E3B28FFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_61DC50C043FB6CC3F62D9C8EF69101BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5ABC878C45929C568512F6A757148A2A();
	void ExecuteUbergraph_ABP_Character_3P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
