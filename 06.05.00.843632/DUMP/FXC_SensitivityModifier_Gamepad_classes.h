// BlueprintGeneratedClass FXC_SensitivityModifier_Gamepad.FXC_SensitivityModifier_Gamepad_C
// Size: 0x570 (Inherited: 0x540)
struct AFXC_SensitivityModifier_Gamepad_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Expired; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Granted; // 0x550(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x558(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x560(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x568(0x08)

	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_SensitivityModifier_Gamepad.FXC_SensitivityModifier_Gamepad_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_FXC_SensitivityModifier_Gamepad(int32_t EntryPoint); // Function FXC_SensitivityModifier_Gamepad.FXC_SensitivityModifier_Gamepad_C.ExecuteUbergraph_FXC_SensitivityModifier_Gamepad // (Final|UbergraphFunction) // @ game+0x332feb0
};

