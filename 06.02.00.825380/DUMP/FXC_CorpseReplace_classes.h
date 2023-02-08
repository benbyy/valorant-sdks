// BlueprintGeneratedClass FXC_CorpseReplace.FXC_CorpseReplace_C
// Size: 0x5bc (Inherited: 0x540)
struct AFXC_CorpseReplace_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x548(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	float Timeline_0_FresnelFadeValue_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x560(0x04)
	float Timeline_0_FadeAmount_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x564(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UTimelineComponent* Timeline_1; // 0x570(0x08)
	float SwapDelay; // 0x578(0x04)
	float EffectStartTime; // 0x57c(0x04)
	float MinimapPulseTime; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct UCurveFloat* minimapDeadIconPulseCurve ; // 0x588(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x590(0x08)
	float AliveFresnelIntensity; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FTimerHandle SwapCorpseTimer; // 0x5a0(0x08)
	float DefaultSwapDelay; // 0x5a8(0x04)
	float DifferenceFromDefaultSwapDelay; // 0x5ac(0x04)
	struct AShooterCharacter* NewVar_1; // 0x5b0(0x08)
	float AdditionalTimeOnSwap; // 0x5b8(0x04)

	void CheckForFinisherFXCs(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.CheckForFinisherFXCs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void UpdateTimer(float AdditionalTime); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void Timeline_0__FinishedFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x33d1d50
	void Timeline_0__UpdateFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x33d1d50
	void SwapCorpse(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.SwapCorpse // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void OnExploited_Event_1(struct UCorpseExploitationComponent* ExploitationComponent); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnExploited_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ReceiveTick(float DeltaSeconds); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ResetEffect(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void OnTeamChange(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnTeamChange // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_CorpseReplace(int32_t EntryPoint); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ExecuteUbergraph_FXC_CorpseReplace // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d50
};

