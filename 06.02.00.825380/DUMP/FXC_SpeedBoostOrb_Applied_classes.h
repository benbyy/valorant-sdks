// BlueprintGeneratedClass FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C
// Size: 0x570 (Inherited: 0x540)
struct AFXC_SpeedBoostOrb_Applied_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Expired; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Granted; // 0x550(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x558(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x560(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x568(0x08)

	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_SpeedBoostOrb_Applied(int32_t EntryPoint); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C.ExecuteUbergraph_FXC_SpeedBoostOrb_Applied // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d50
};

