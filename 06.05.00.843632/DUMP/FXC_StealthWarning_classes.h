// BlueprintGeneratedClass FXC_StealthWarning.FXC_StealthWarning_C
// Size: 0x558 (Inherited: 0x540)
struct AFXC_StealthWarning_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_StealthWarning.FXC_StealthWarning_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_StealthWarning.FXC_StealthWarning_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_FXC_StealthWarning(int32_t EntryPoint); // Function FXC_StealthWarning.FXC_StealthWarning_C.ExecuteUbergraph_FXC_StealthWarning // (Final|UbergraphFunction) // @ game+0x332feb0
};

