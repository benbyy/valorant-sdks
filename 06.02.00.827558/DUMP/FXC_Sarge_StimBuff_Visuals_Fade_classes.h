// BlueprintGeneratedClass FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C
// Size: 0x598 (Inherited: 0x540)
struct AFXC_Sarge_StimBuff_Visuals_Fade_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* ; // 0x548(0x08)
	struct UComp_FXC_HUD_Particle_C* ; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	float ; // 0x560(0x04)
	float ; // 0x564(0x04)
	enum class ETimelineDirection ; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UTimelineComponent* ; // 0x570(0x08)
	float ; // 0x578(0x04)
	float ; // 0x57c(0x04)
	enum class ETimelineDirection ; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct UTimelineComponent* ; // 0x588(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x590(0x08)

	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x33d1d60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

