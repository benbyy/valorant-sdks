// BlueprintGeneratedClass FXC_DeathMontage.FXC_DeathMontage_C
// Size: 0x550 (Inherited: 0x540)
struct AFXC_DeathMontage_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_DeathMontage.FXC_DeathMontage_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_DeathMontage(int32_t EntryPoint); // Function FXC_DeathMontage.FXC_DeathMontage_C.ExecuteUbergraph_FXC_DeathMontage // (Final|UbergraphFunction) // @ game+0x337bc90
};

