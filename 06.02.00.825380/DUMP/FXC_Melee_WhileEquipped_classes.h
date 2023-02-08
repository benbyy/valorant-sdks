// BlueprintGeneratedClass FXC_Melee_WhileEquipped.FXC_Melee_WhileEquipped_C
// Size: 0x579 (Inherited: 0x560)
struct AFXC_Melee_WhileEquipped_C : AFXC_Equippable_WhileEquipped_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UComp_FXC_CameraShake_C* Comp_FXC_CameraShake; // 0x568(0x08)
	struct UMelee_Skin_Base_C* Owned Melee Skin; // 0x570(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x578(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Melee_WhileEquipped.FXC_Melee_WhileEquipped_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_Melee_WhileEquipped(int32_t EntryPoint); // Function FXC_Melee_WhileEquipped.FXC_Melee_WhileEquipped_C.ExecuteUbergraph_FXC_Melee_WhileEquipped // (Final|UbergraphFunction) // @ game+0x33d1d50
};

