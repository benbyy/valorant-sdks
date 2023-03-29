// BlueprintGeneratedClass FXC_RadianiteBombKill.FXC_RadianiteBombKill_C
// Size: 0x5a1 (Inherited: 0x540)
struct AFXC_RadianiteBombKill_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x548(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x550(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x558(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C* Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate; // 0x560(0x08)
	struct UParticleSystemComponent* HunterUlt_EnemyDestroyed_VFX; // 0x568(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x570(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x578(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x580(0x08)
	float MaxMaterialTime; // 0x588(0x04)
	float MinMaterialTime; // 0x58c(0x04)
	float LifeSpan; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct AShooterCharacter* Hunter; // 0x598(0x08)
	bool IsFirstPerson; // 0x5a0(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_RadianiteBombKill(int32_t EntryPoint); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.ExecuteUbergraph_FXC_RadianiteBombKill // (Final|UbergraphFunction) // @ game+0x337bc90
};

