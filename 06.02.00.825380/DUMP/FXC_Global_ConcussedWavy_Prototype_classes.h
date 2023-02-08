// BlueprintGeneratedClass FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C
// Size: 0x759 (Inherited: 0x540)
struct AFXC_Global_ConcussedWavy_Prototype_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UPostProcessComponent* PostProcess; // 0x548(0x08)
	struct UStaticMeshComponent* Blind; // 0x550(0x08)
	struct UStaticMeshComponent* ConcussBorder; // 0x558(0x08)
	struct UComp_FXC_CameraShake_C* Comp_FXC_CameraShake; // 0x560(0x08)
	struct UParticleSystemComponent* 3P_Effect; // 0x568(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x570(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x578(0x08)
	struct TArray<struct UAresAudioComponent*> ActiveAudio; // 0x580(0x10)
	struct UParticleSystemComponent* HUDFX; // 0x590(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x598(0x08)
	struct AController* Controller; // 0x5a0(0x08)
	bool FirstPersonCosmeticsActive; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FExplicitFloatCurve BorderAmountCurve; // 0x5b0(0x88)
	struct FExplicitFloatCurve FullscreenAmountCurve; // 0x638(0x88)
	struct FExplicitFloatCurve BlindAmountCurve; // 0x6c0(0x88)
	struct UMaterialInstanceDynamic* PostProcessDynamicMaterial; // 0x748(0x08)
	struct UAresAudioComponent* SweepAudio; // 0x750(0x08)
	bool FadeOutAudioPlaying; // 0x758(0x01)

	void StopAllActiveAudio(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StopAllActiveAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void SetupDynamicMaterials(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.SetupDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void SetupMeshes(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.SetupMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void GetCurrentBuffLevel(float& BuffLevel); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.GetCurrentBuffLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d50
	void UpdateMaterialParameters(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdateMaterialParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void UpdatePerspective(bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdatePerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_Global_ConcussedWavy_Prototype(int32_t EntryPoint); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.ExecuteUbergraph_FXC_Global_ConcussedWavy_Prototype // (Final|UbergraphFunction) // @ game+0x33d1d50
};

