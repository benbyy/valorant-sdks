// BlueprintGeneratedClass FXC_Global_ViewTransition.FXC_Global_ViewTransition_C
// Size: 0x580 (Inherited: 0x540)
struct AFXC_Global_ViewTransition_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct AShooterPlayerController* OwningController; // 0x558(0x08)
	struct UParticleSystemComponent* HUD_Particle; // 0x560(0x08)
	float ObscuredTime; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct AShooterCharacter* GumshoeShooterCharacter; // 0x570(0x08)
	struct UMaterialInstanceDynamic* GlitchMaterial; // 0x578(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_Global_ViewTransition(int32_t EntryPoint); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.ExecuteUbergraph_FXC_Global_ViewTransition // (Final|UbergraphFunction) // @ game+0x33d1d50
};

