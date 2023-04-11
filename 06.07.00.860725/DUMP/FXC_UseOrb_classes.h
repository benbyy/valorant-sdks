// BlueprintGeneratedClass FXC_UseOrb.FXC_UseOrb_C
// Size: 0x574 (Inherited: 0x540)
struct AFXC_UseOrb_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x548(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct UParticleSystemComponent* OrbVFX; // 0x560(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x568(0x08)
	float UseTime; // 0x570(0x04)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_UseOrb.FXC_UseOrb_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_UseOrb.FXC_UseOrb_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ReceiveTick(float DeltaSeconds); // Function FXC_UseOrb.FXC_UseOrb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_FXC_UseOrb(int32_t EntryPoint); // Function FXC_UseOrb.FXC_UseOrb_C.ExecuteUbergraph_FXC_UseOrb // (Final|UbergraphFunction) // @ game+0x3367a20
};

