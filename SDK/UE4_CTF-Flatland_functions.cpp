// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CTF-Flatland_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CTF-Flatland.CTF-Flatland_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACTF_Flatland_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CTF-Flatland.CTF-Flatland_C.ReceiveBeginPlay");

	ACTF_Flatland_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CTF-Flatland.CTF-Flatland_C.ExecuteUbergraph_CTF-Flatland
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACTF_Flatland_C::ExecuteUbergraph_CTF_Flatland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CTF-Flatland.CTF-Flatland_C.ExecuteUbergraph_CTF-Flatland");

	ACTF_Flatland_C_ExecuteUbergraph_CTF_Flatland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
