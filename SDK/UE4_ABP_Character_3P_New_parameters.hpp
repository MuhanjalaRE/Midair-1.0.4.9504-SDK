#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Character_3P_New_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Get Weapon Scale
struct UABP_Character_3P_New_C_Get_Weapon_Scale_Params
{
	class AMAWeaponAttachment*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weapon_Scale;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Update Foot IK
struct UABP_Character_3P_New_C_Update_Foot_IK_Params
{
	struct FName                                       FootIKBoneName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KneeTargetName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Debug_Surface_Offset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     KneeTarget;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               Found_Surface;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Surface_Normal;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_285C2AAC4D4AEA6053E3B2B17B619E83
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_285C2AAC4D4AEA6053E3B2B17B619E83_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_B2E1A03D427DA2376BE6758930A65329
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_B2E1A03D427DA2376BE6758930A65329_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_AD155DB043A292D52989FEAB02039135
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_AD155DB043A292D52989FEAB02039135_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_FD2A4ACD43617AA7DA415FBB471B3D7B
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_FD2A4ACD43617AA7DA415FBB471B3D7B_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_F190A4984A98244DBE82C3A19FDA6304
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_F190A4984A98244DBE82C3A19FDA6304_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_C7935E9F4E31FD44AD65DD91A2E136D6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_C7935E9F4E31FD44AD65DD91A2E136D6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_86C213D7419CA62BB6AEF3B4DC4F399C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_86C213D7419CA62BB6AEF3B4DC4F399C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_54365FF74E01425AEF9212BAE6634C1A
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_54365FF74E01425AEF9212BAE6634C1A_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_668CDA7B4E584DF17319E0826B702398
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_668CDA7B4E584DF17319E0826B702398_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6A949A6447C1CB9E4FF69B969D55308F
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6A949A6447C1CB9E4FF69B969D55308F_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_F114286C4DB99F07387375BF73BB6D3E
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_F114286C4DB99F07387375BF73BB6D3E_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.BlueprintUpdateAnimation
struct UABP_Character_3P_New_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.BlueprintInitializeAnimation
struct UABP_Character_3P_New_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Play Debug Montage
struct UABP_Character_3P_New_C_Play_Debug_Montage_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnGrabAmmo
struct UABP_Character_3P_New_C_AnimNotify_OnGrabAmmo_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnReleaseAmmo
struct UABP_Character_3P_New_C_AnimNotify_OnReleaseAmmo_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnFootStep
struct UABP_Character_3P_New_C_AnimNotify_OnFootStep_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.ExecuteUbergraph_ABP_Character_3P_New
struct UABP_Character_3P_New_C_ExecuteUbergraph_ABP_Character_3P_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
