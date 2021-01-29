#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Character_3P_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ABP_Character_3P.ABP_Character_3P_C.Determine Is Floating
struct UABP_Character_3P_C_Determine_Is_Floating_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Determine Is Skating
struct UABP_Character_3P_C_Determine_Is_Skating_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Setup Foot IK
struct UABP_Character_3P_C_Setup_Foot_IK_Params
{
	struct FName                                       FootIKBoneName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       KneeTargetName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     KneeTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z_Offset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P.ABP_Character_3P_C.Get Foot Size
struct UABP_Character_3P_C_Get_Foot_Size_Params
{
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P.ABP_Character_3P_C.Get Weapon Scale
struct UABP_Character_3P_C_Get_Weapon_Scale_Params
{
	class AMAWeaponAttachment*                         Weapon_Attachment;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_FD758BB84D5D5FC3BD76DC8B0CD00503
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_FD758BB84D5D5FC3BD76DC8B0CD00503_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_078D7ED64A8CCD733B892E900F263E24
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_078D7ED64A8CCD733B892E900F263E24_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_B702EAF148E22F2CB3B605978C5E5ECC
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_B702EAF148E22F2CB3B605978C5E5ECC_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E911D31149991171E8272AA657FD88AB
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E911D31149991171E8272AA657FD88AB_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_9C1FAF84429FAA2B648FD18372F31EE9
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_9C1FAF84429FAA2B648FD18372F31EE9_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB01D62A418C6EF548EF33A470DF7DDC
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB01D62A418C6EF548EF33A470DF7DDC_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_AEC7F42E413837F8D1C7DCB1AB08C081
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_AEC7F42E413837F8D1C7DCB1AB08C081_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB880D0B4A40081A78E07AB858B0F745
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_BB880D0B4A40081A78E07AB858B0F745_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_19CF0DBC4E8BE8853463A682E223A607
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_19CF0DBC4E8BE8853463A682E223A607_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_804CD0624E42103F7740C2A4E22E7666
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_804CD0624E42103F7740C2A4E22E7666_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_E530245F4EBBC04840BB39ACBC11AD63
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_E530245F4EBBC04840BB39ACBC11AD63_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D47B73B847B2DDC870B4A8B96C5AE41E
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D47B73B847B2DDC870B4A8B96C5AE41E_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_837249B84702CAABBB1F18A549C1B233
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_837249B84702CAABBB1F18A549C1B233_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_54CF005D48A57BD43F73459B65840066
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_54CF005D48A57BD43F73459B65840066_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_DE366D114BA9C43FEC7B97A9A3D2638B
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_DE366D114BA9C43FEC7B97A9A3D2638B_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_0C8F580943010BF758D24A970CDFE73F
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_0C8F580943010BF758D24A970CDFE73F_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_961B4A444E58FC052CB0DFA8DA8B294B
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_961B4A444E58FC052CB0DFA8DA8B294B_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_CE7013304F4A94684C13968CD91C2A07
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_CE7013304F4A94684C13968CD91C2A07_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_1C6524514280B1750C67869780854D19
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_1C6524514280B1750C67869780854D19_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5E9C872F4DCDB82C2696B1B6AC5DD8B1
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5E9C872F4DCDB82C2696B1B6AC5DD8B1_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_6759B03545439BC2D285CB9F2A81F4D2
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_6759B03545439BC2D285CB9F2A81F4D2_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_2EDD14494DC9F6A42D83CD84C628B450
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_2EDD14494DC9F6A42D83CD84C628B450_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5FA2EEE2487DBDE63B917EA518D550E0
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5FA2EEE2487DBDE63B917EA518D550E0_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.BlueprintUpdateAnimation
struct UABP_Character_3P_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P.ABP_Character_3P_C.BlueprintInitializeAnimation
struct UABP_Character_3P_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.AnimNotify_OnFootStep
struct UABP_Character_3P_C_AnimNotify_OnFootStep_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Hit
struct UABP_Character_3P_C_Hit_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_CFE1ABF4454AE35FBF534B8E3EFABF9E
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_CFE1ABF4454AE35FBF534B8E3EFABF9E_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Player State Received
struct UABP_Character_3P_C_Player_State_Received_Params
{
	class APlayerState*                                Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_2191614B4FF090AB8AD08BB9E3B28FFD
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByInt_2191614B4FF090AB8AD08BB9E3B28FFD_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_61DC50C043FB6CC3F62D9C8EF69101BC
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_61DC50C043FB6CC3F62D9C8EF69101BC_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5ABC878C45929C568512F6A757148A2A
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5ABC878C45929C568512F6A757148A2A_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.ExecuteUbergraph_ABP_Character_3P
struct UABP_Character_3P_C_ExecuteUbergraph_ABP_Character_3P_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
