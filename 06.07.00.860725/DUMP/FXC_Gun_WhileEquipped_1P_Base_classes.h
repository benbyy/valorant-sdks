// BlueprintGeneratedClass FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C
// Size: 0x5a6 (Inherited: 0x560)
struct AFXC_Gun_WhileEquipped_1P_Base_C : AFXC_Equippable_WhileEquipped_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	float Timeline_0_Alpha_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x568(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x570(0x08)
	struct UParticleSystem* SmokeEffect; // 0x578(0x08)
	struct UParticleSystemComponent* ParticleEffect; // 0x580(0x08)
	bool CurrentlyFiring; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	float Stability Threshold; // 0x58c(0x04)
	float StopTimestamp; // 0x590(0x04)
	float StopDelay; // 0x594(0x04)
	struct FName AttachPoint; // 0x598(0x0c)
	bool Attach To VFX_Camera; // 0x5a4(0x01)
	enum class Variant_Color_Enum Variant Color; // 0x5a5(0x01)

	void Override Variant Color(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Override Variant Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Timeline_0__FinishedFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3367a20
	void Timeline_0__UpdateFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3367a20
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ReceiveTick(float DeltaSeconds); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void StartFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void StopFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void TickFiringEffect(float DeltaTime, struct AAresEquippable* Equippable); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.TickFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void FadeInEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.FadeInEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ResetEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base(int32_t EntryPoint); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

