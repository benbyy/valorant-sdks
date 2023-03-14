// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x5f4 (Inherited: 0x540)
struct AFXC_Finisher_Base_Victim_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCameraComponent* Camera; // 0x548(0x08)
	struct USpringArmComponent* SpringArm; // 0x550(0x08)
	struct UComp_FXC_DeathCameraOverride_C* Comp_FXC_DeathCameraOverride; // 0x558(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x560(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* VictimAnimation; // 0x568(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x570(0x08)
	float Timeline_0_NewTrack_0_35A2F18E452393472F3A5E82F9C77AD4; // 0x578(0x04)
	enum class ETimelineDirection Timeline_0__Direction_35A2F18E452393472F3A5E82F9C77AD4; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x580(0x08)
	struct TArray<struct FGunSkinParticleInfo> Particle System; // 0x588(0x10)
	float AdditionalDeathSwapDelay; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TArray<struct UParticleSystemComponent*> SpawnedPartciles; // 0x5a0(0x10)
	bool HideCorpse; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	float HideCorpseTime; // 0x5b4(0x04)
	struct FTimerHandle Hide Corpse Timer; // 0x5b8(0x08)
	struct FTimerHandle Hide Body Timer; // 0x5c0(0x08)
	struct ABasePawn_C* Victim Player; // 0x5c8(0x08)
	struct AShooterCharacter* Triggering Player; // 0x5d0(0x08)
	float Min Camera Distance; // 0x5d8(0x04)
	float Max Camera Distance; // 0x5dc(0x04)
	float Relative Distance Between Targets; // 0x5e0(0x04)
	bool CameraRotationDirection; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	float Camera Rotation Speed; // 0x5e8(0x04)
	bool Reverse Camera Direction; // 0x5ec(0x01)
	char pad_5ED[0x3]; // 0x5ed(0x03)
	float Victim Player Yaw Rotation; // 0x5f0(0x04)

	bool GetCameraRotationDirection(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetCameraRotationDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x332feb0
	void FeedVictimLocationToMPC(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.FeedVictimLocationToMPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void OverrideVariantColor(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.OverrideVariantColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void GetPreloadAssetPathsOnContainer(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetPreloadAssetPathsOnContainer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void Timeline_0__FinishedFunc(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x332feb0
	void Timeline_0__UpdateFunc(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x332feb0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void Hide Character(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide Character // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void Hide CorpseReplace(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide CorpseReplace // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ReceiveBeginPlay(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void Start Rotation(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Start Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void Stop Timeline(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Stop Timeline // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void Initiate Deathcam(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Initiate Deathcam // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_FXC_Finisher_Base_Victim(int32_t EntryPoint); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ExecuteUbergraph_FXC_Finisher_Base_Victim // (Final|UbergraphFunction|HasDefaults) // @ game+0x332feb0
};

