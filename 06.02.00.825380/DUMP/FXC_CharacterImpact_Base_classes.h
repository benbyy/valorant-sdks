// BlueprintGeneratedClass FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C
// Size: 0x978 (Inherited: 0x540)
struct AFXC_CharacterImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct FRotator ParticleRotation; // 0x558(0x0c)
	float ParticleScale; // 0x564(0x04)
	struct FCharacterImpactParticle Shooter Particles; // 0x568(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x5f8(0x90)
	struct FCharacterImpactParticle Non-Blood 3P Particles; // 0x688(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x718(0x90)
	float SplatterDistance; // 0x7a8(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
	struct FCharacterImpactParticle Non Human Particles; // 0x7b0(0x90)
	struct FCharacterImpactParticle Non Blood Particles; // 0x840(0x90)
	bool bIsSpawnedAndLocallyControlled; // 0x8d0(0x01)
	bool TargetMakesBloodSplatters; // 0x8d1(0x01)
	bool TargetIsFirstPerson; // 0x8d2(0x01)
	char pad_8D3[0x5]; // 0x8d3(0x05)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x8d8(0x90)
	bool PlayAttachedVFX; // 0x968(0x01)
	char pad_969[0x7]; // 0x969(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0x970(0x08)

	void IsTransitioningToDeathCamera(struct AShooterCharacter* DamagedCharacter, bool& Output); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.IsTransitioningToDeathCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void MaybePlayFragileEffects(struct UDamageResponse* DamageResponse); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.MaybePlayFragileEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void SpawnParticle(struct FAresHitImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* Particle System); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SpawnParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void SelectParticle(struct FCharacterImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* ParticleSystem); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SelectParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void ResetEffect(); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void OnCharacterDeathEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void DetachFromCharacter(struct AShooterCharacter* Character); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.DetachFromCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void OnCharacterDestroyedEvent(struct AActor* DestroyedActor); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDestroyedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_CharacterImpact_Base(int32_t EntryPoint); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ExecuteUbergraph_FXC_CharacterImpact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d50
};

