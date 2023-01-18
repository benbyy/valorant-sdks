// BlueprintGeneratedClass Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C
// Size: 0x12c (Inherited: 0xf8)
struct UComp_FXC_DeathCameraOverride_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct USpringArmComponent* SpringArm; // 0x108(0x08)
	struct UCameraComponent* Camera; // 0x110(0x08)
	struct UCurveFloat* Curve; // 0x118(0x08)
	struct FAresDeathCameraTimings Timings; // 0x120(0x0c)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ResetEffect(); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x336ad10
	void ExecuteUbergraph_Comp_FXC_DeathCameraOverride(int32_t EntryPoint); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.ExecuteUbergraph_Comp_FXC_DeathCameraOverride // (Final|UbergraphFunction) // @ game+0x336ad10
};

