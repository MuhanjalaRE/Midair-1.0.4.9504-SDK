#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Character_3P_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_3P_New.ABP_Character_3P_New_C
// 0x4B42 (0x4EBA - 0x0378)
class UABP_Character_3P_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_25C59CDC4ECE414AD941DE80A94480C0;  // 0x0380(0x00A8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961;// 0x0428(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65D87CF440AC6E18F7B5C88AD2535965;// 0x04A0(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2;// 0x04F0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_727144E142FB519DD537779377B60F2C;// 0x0568(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AE3C9AFB43A05EC8FBA067943A21A861;// 0x0610(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BDD4601A454BF6C2DCE68A8D4E23919B;// 0x06B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FBD8E7524C40B98CA937AE92B6873B20;// 0x0708(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93FC29AF40B3BC59B0B7FAB64D9AB2E0;// 0x0758(0x0050)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_F114286C4DB99F07387375BF73BB6D3E;// 0x07A8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0EAAA6EF446CE994603FD8ABB755509E;// 0x0878(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B8051EAC453D503179C56A924B16B918;// 0x0920(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17F8B31F481DEBE08876EB85786A43F4;// 0x0970(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9E5B989B45238F47FB623DA7EB9FBDF5;// 0x0A18(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6848086E4572B3E9A37B38A79CBCE6C9;// 0x0A68(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_78BE07584DB9FC3157C8F8A92D6E561C;  // 0x0B48(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0FA47248473286EFD9E78EA274EB1751;// 0x0BF0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0F5AE6874465D0BF0154A69F5FF00CCA;// 0x0C38(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1208411C4BB89596BC57BD95A1E97740;// 0x0C80(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_EFAF0852402F2267071574A3E83DC7C7;// 0x0D60(0x0038)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE;// 0x0D98(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B;// 0x0E10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6;// 0x0E90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802;// 0x0F10(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6A949A6447C1CB9E4FF69B969D55308F;// 0x0F90(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6DA6179044D719D306E27EAFDEBE454E;// 0x10B8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF;// 0x1100(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5B0E639B4B64B48D55D4A38F58DF4916;// 0x1228(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA2D8D13419C173F5175968D4754EA32;// 0x1270(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5170890D485359890357F08D2F943C6F;// 0x12E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_487C7B4F41E1FFBAA39F05A83B4FF51C;// 0x1328(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57FCCA124EF954553D1A0284CB8572D4;// 0x1400(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C;// 0x1450(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FEC74222492E658F452963A6DE6CF279;// 0x14C8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B110BD3F43267AA0325782AB30CE4284;// 0x1570(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5C6D204549B020315FF8829CA5A5798B;// 0x15B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4;// 0x1600(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_052FDCDB4E49D14B54C7F9A1A6A3800F;// 0x16B8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436;// 0x1700(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58;// 0x17E0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94;// 0x18C0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C4EC14E40AE492F8EEA88920D7A8BFD;// 0x19A0(0x0070)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A88EBED242609261D8F94A9933A620F7;  // 0x1A10(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BE055D124A4ECA5D9FE29A8869CA32FF;  // 0x1AB8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_785D9F914FC961A061AAF5B4442F9111;  // 0x1B60(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6EE48A8F4C14F693AF39018E2C2380E5;  // 0x1C08(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7ABAF22B47EAFB9CEEE993BBEC0B195C;// 0x1CB0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE078CA24B1F05912306D7AA870CB640;// 0x1D00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0A70598E4CE82859A112F7A208A9BB72;// 0x1D50(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_03B3DD87493250ACD3A7E880F2ABB675;// 0x1DA0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7CE2135342B91882D46124BC187AC27E;      // 0x1DF0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E495FA724E42F5D253C91CB2C7ED8AF8;// 0x1E50(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31C77E2A4932919A946520B3594CE7FF;// 0x1EF8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AC6DF7A440A47318E0E07808B750E20;// 0x1F48(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BA43D0848F2DA481C8386B752D45DAF;// 0x1F98(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF426D29484DC36465827BA9761A0641;// 0x1FE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DE3977FB43B7A24E311E0688E7B1581E;// 0x2038(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E704ABD425385FCD2CC2FAE03BF4385;      // 0x2088(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C;// 0x20E8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CEDCDD0A48090E1FD7B1E49DA9E67CAA;// 0x21A0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C3D37F8D42CB8AE84E3445B174E36421;// 0x21E8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3DB1C91E4162CCA39A682E8426AD1D53;// 0x2290(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_641BE9E949139FFB76A6D69771AF5B92; // 0x22D8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_83E33726409462CF874D80B429B1DC41;// 0x23B8(0x00A8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC;// 0x2460(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE;// 0x25B8(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F1571A6840F50EFC6FC6539D20A526C7;      // 0x2688(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_936D050A4A467BD00381188D50F402BD;// 0x26E8(0x00A8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE;// 0x2790(0x0158)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F38B1FB149AEE1CC0676BDA9CAF43DED;// 0x28E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C9E451D40B5B674FFFAE1BAFBBB3AEE;// 0x2958(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37098F8F477007F3D60F7188FA23987F;// 0x29C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B7330234128D3865EA9D3AE91386B1B;// 0x2A38(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39832ED74D48836EAF3CEE930D683309;// 0x2AA8(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6;// 0x2B18(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860;// 0x2BD0(0x00D0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387;// 0x2CA0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_305C30A745CF5578E459EAA1F2348997;// 0x2D70(0x00A8)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB;// 0x2E18(0x0060)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931;// 0x2E78(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE883371428EB344CBACD4838F72EC0E;// 0x2EF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51A219844EF1E9AE5F4243B504D4B965;// 0x2F60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5F15BE98438EE42B9B21A3BB98FC753C;// 0x2FA8(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BC6561A4F86B7987DE82DB1B2D32EBC;// 0x3080(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23;// 0x30F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB;// 0x3170(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67;// 0x31F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2;// 0x3270(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D;// 0x32F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F;// 0x3370(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C;// 0x33F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C422851491FDBC533204EBA79E7A9A5;// 0x3470(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_285C2AAC4D4AEA6053E3B2B17B619E83;// 0x34F0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EC3295C64E6CB381D9B55D998E5B07C3;// 0x3618(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65EAAD0E40ACA26C1A3D35B69F64C224;// 0x3660(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_973ECD29415C9E17556950A246FE6659;// 0x36D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_558002EC42C2E5DDAAF726A6B04F9C93;// 0x3718(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_B2E1A03D427DA2376BE6758930A65329;// 0x3788(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AD155DB043A292D52989FEAB02039135;// 0x3800(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD2A4ACD43617AA7DA415FBB471B3D7B;// 0x3928(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6;// 0x39F8(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7217DD944855C40A05282281A63063D8;// 0x3B20(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C10A9C84B5A18902CDFC9AD56C27EB6;// 0x3B98(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F190A4984A98244DBE82C3A19FDA6304;// 0x3C08(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C7935E9F4E31FD44AD65DD91A2E136D6;// 0x3C80(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_671B028844E2BE509181E5AE1A6A890C;// 0x3DA8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_86C213D7419CA62BB6AEF3B4DC4F399C;// 0x3DF0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5BC6E3FA4199697CDD7469A377FFA9DA;// 0x3F18(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1;// 0x3F60(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ED61E9A5457AD6D623D2BA98F7FC51AE;// 0x4088(0x0048)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_EE7325DB4D82FB4EDB2E4D87542C0768;// 0x40D0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CB76DCE4F3A128E4F0FF1AD2B6E9A14;// 0x4148(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D6062FC14BE8FD5CA23B97809C86FDD6;// 0x41B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FFB591C488FBA05E0F7B8B800806779;// 0x4228(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_671279874F6D51F6C5630FBFF86DCC58;// 0x4270(0x00D8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_54365FF74E01425AEF9212BAE6634C1A; // 0x4348(0x00E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_668CDA7B4E584DF17319E0826B702398; // 0x4428(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4F2E511D480550A82069C6AD7147488B;// 0x4508(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083;// 0x4550(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_09A2B8A342A53D289CE96A8F79C57824;      // 0x4608(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4AECB23545608421A01AE59E5BEA09FE;// 0x4668(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F08B469041057DB6127AA8A3807580B0;// 0x4748(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA;// 0x4780(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D;// 0x4838(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC;// 0x48F0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_828F66F9411A587B9B8F56904F77B2F9;// 0x49C0(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62;// 0x4A10(0x0158)
	struct FAnimNode_Root                              AnimGraphNode_Root_CA259F134F69785289D7F383EFACB186;      // 0x4B68(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_060BBDF641BB819CECFD32BDF8BA11A5;// 0x4BB0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_895FAEF44DC7382DF4FC38A53169FDBB;// 0x4C00(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F165B6149B7E85D36369EB017B54E73;// 0x4C70(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_375A2FC547E96B03C7E25898CADDE84A;// 0x4CE0(0x0070)
	int                                                MovementState;                                            // 0x4D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimUp;                                                    // 0x4D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OwnerVelocity;                                            // 0x4D58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OwnerRotation;                                            // 0x4D64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponPose;                                               // 0x4D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponScale;                                              // 0x4D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationYaw;                                          // 0x4D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingJets;                                                // 0x4D7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x4D7D(0x0003) MISSED OFFSET
	float                                              MaxIKFootOffset;                                          // 0x4D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxIKPelvisOffset;                                        // 0x4D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation;                                // 0x4D88(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x4D94(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightKneeTarget;                                          // 0x4DA0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftKneeTarget;                                           // 0x4DAC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAnimSkateSpeed;                                        // 0x4DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OwnerSpeed;                                               // 0x4DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedPct;                                                 // 0x4DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x4DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxJetSpeed;                                              // 0x4DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugRootRot;                                             // 0x4DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMACharacter*                                Owner;                                                    // 0x4DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootTargetOffsetZ;                                   // 0x4DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftFootTargetOffsetZ;                                    // 0x4DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftElbowTarget;                                          // 0x4DE0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta_TIme;                                               // 0x4DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeMoveDir;                                          // 0x4DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FinalMovementState;                                       // 0x4DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityDir;                                              // 0x4DF8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalDir;                                              // 0x4E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustedYaw;                                              // 0x4E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Root_Rot;                                                 // 0x4E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkateRootRotInterpSpeed;                                  // 0x4E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x4E14(0x0004) MISSED OFFSET
	class UAnimMontage*                                DebugMontage;                                             // 0x4E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugMontageDelay;                                        // 0x4E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootSize;                                                 // 0x4E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocityBeforeLanding;                                // 0x4E28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLandingSpeed;                                          // 0x4E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastMovementState;                                        // 0x4E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingScale;                                             // 0x4E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pelvis_Height;                                            // 0x4E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Foot_IK_Scale;                                            // 0x4E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AdditiveLocomotion;                                       // 0x4E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HandIK;                                                   // 0x4E49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x4E4A(0x0002) MISSED OFFSET
	float                                              Run_Play_Rate;                                            // 0x4E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Override_Run_Backwards_Angle;                             // 0x4E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoSetMoveState;                                         // 0x4E54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x4E55(0x0003) MISSED OFFSET
	float                                              Character_Pelvis_Offset;                                  // 0x4E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JettingHorizontally;                                      // 0x4E5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x4E5D(0x0003) MISSED OFFSET
	struct FRotator                                    LastRotationBeforeStopping;                               // 0x4E60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchToRinglauncher;                                     // 0x4E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchToMortar;                                           // 0x4E6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAdditiveWeaponLayer;                                   // 0x4E6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x4E6F(0x0001) MISSED OFFSET
	struct FRotator                                    Blaster_Rotation_Hack;                                    // 0x4E70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseBlasterAdditiveLayerHack;                              // 0x4E7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x4E7D(0x0003) MISSED OFFSET
	float                                              Max_Pelvis_Offset;                                        // 0x4E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Pelvis_Offset;                                        // 0x4E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinIKFootOffset;                                          // 0x4E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Left_Foot_Surface_Debug;                                  // 0x4E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right_Foot_Surface_Debug;                                 // 0x4E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Left_Foot_Found_Surface;                                  // 0x4E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Right_Foot_Found_Surface;                                 // 0x4E95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x4E96(0x0002) MISSED OFFSET
	float                                              Left_Foot_IK_Alpha;                                       // 0x4E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right_Foot_IK_Alpha;                                      // 0x4E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Left_Foot_Surface_Normal;                                 // 0x4EA0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Right_Foot_Surface_Normal;                                // 0x4EAC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Simplify_Computations;                                    // 0x4EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Owner;                                                // 0x4EB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Character_3P_New.ABP_Character_3P_New_C");
		return ptr;
	}


	void Get_Weapon_Scale(class AMAWeaponAttachment* Weapon, float* Weapon_Scale);
	void Update_Foot_IK(const struct FName& FootIKBoneName, const struct FName& KneeTargetName, float Debug_Surface_Offset, struct FVector* EffectorLocation, struct FVector* KneeTarget, bool* Found_Surface, struct FVector* Surface_Normal);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_285C2AAC4D4AEA6053E3B2B17B619E83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_B2E1A03D427DA2376BE6758930A65329();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_AD155DB043A292D52989FEAB02039135();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_FD2A4ACD43617AA7DA415FBB471B3D7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_F190A4984A98244DBE82C3A19FDA6304();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_C7935E9F4E31FD44AD65DD91A2E136D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_86C213D7419CA62BB6AEF3B4DC4F399C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_54365FF74E01425AEF9212BAE6634C1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoBoneIK_668CDA7B4E584DF17319E0826B702398();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6A949A6447C1CB9E4FF69B969D55308F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_F114286C4DB99F07387375BF73BB6D3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void Play_Debug_Montage();
	void AnimNotify_OnGrabAmmo();
	void AnimNotify_OnReleaseAmmo();
	void AnimNotify_OnFootStep();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94();
	void ExecuteUbergraph_ABP_Character_3P_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
