// BlueprintGeneratedClass PlayParticle_Notify.PlayParticle_Notify_C
// Size: 0x61 (Inherited: 0x40)
struct UPlayParticle_Notify_C : UAnimNotify {
	struct TArray<struct FGunSkinParticleInfo> Particle Info; // 0x40(0x10)
	struct TArray<struct UParticleSystemComponent*> SpawnedParticles; // 0x50(0x10)
	bool KillParticlesOnMontageInterrupt; // 0x60(0x01)

	void State Interrupt(enum class EAresEquippableState State); // Function PlayParticle_Notify.PlayParticle_Notify_C.State Interrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void Zoom Interrupt(bool ZoomIn); // Function PlayParticle_Notify.PlayParticle_Notify_C.Zoom Interrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void DestroyParticlesOnInterrupt(); // Function PlayParticle_Notify.PlayParticle_Notify_C.DestroyParticlesOnInterrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayParticle_Notify.PlayParticle_Notify_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
};

