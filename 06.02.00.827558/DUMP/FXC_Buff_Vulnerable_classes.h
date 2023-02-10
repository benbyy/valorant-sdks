// BlueprintGeneratedClass FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C
// Size: 0x5a0 (Inherited: 0x540)
struct AFXC_Buff_Vulnerable_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x548(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x550(0x08)
	struct UComp_FXC_HUD_Particle_C* ; // 0x558(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x560(0x08)
	float ; // 0x568(0x04)
	enum class ETimelineDirection ; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x570(0x08)
	float ; // 0x578(0x04)
	enum class ETimelineDirection ; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x580(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x588(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ; // 0x590(0x10)

	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void Timeline_0__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x33d1d60
	void Timeline_0__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (BlueprintEvent) // @ game+0x33d1d60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct UDamageResponse* Response); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

