// BlueprintGeneratedClass FXC_CancelOrb_AtLocation.FXC_CancelOrb_AtLocation_C
// Size: 0x558 (Inherited: 0x540)
struct AFXC_CancelOrb_AtLocation_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CancelOrb_AtLocation.FXC_CancelOrb_AtLocation_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_CancelOrb_AtLocation(int32_t EntryPoint); // Function FXC_CancelOrb_AtLocation.FXC_CancelOrb_AtLocation_C.ExecuteUbergraph_FXC_CancelOrb_AtLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

