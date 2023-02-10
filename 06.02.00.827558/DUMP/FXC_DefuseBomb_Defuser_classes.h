// BlueprintGeneratedClass FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C
// Size: 0x580 (Inherited: 0x540)
struct AFXC_DefuseBomb_Defuser_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UStaticMeshComponent* ; // 0x548(0x08)
	struct UParticleSystemComponent* ; // 0x550(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* ; // 0x558(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x560(0x08)
	struct UMaterialInstanceDynamic* ; // 0x568(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x570(0x08)
	struct AAresEquippable* Equippable; // 0x578(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveTick(float DeltaSeconds); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
};

