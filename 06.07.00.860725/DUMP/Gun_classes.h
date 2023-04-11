// BlueprintGeneratedClass Gun.Gun_C
// Size: 0x123c (Inherited: 0xf00)
struct AGun_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UComp_Gun_PrototypeGamepadRecoilRecovery_C* Comp_Gun_PrototypeGamepadRecoilRecovery; // 0xf08(0x08)
	struct UComp_Gun_FlaggedErrorCurve_C* Comp_Gun_FlaggedErrorCurve; // 0xf10(0x08)
	struct UAmmoResourceVisualizationComponent* AmmoResourceVisualization; // 0xf18(0x08)
	struct UStabilityComponent* Stability_Mobile; // 0xf20(0x08)
	struct UStabilityVisualizationComponent* StabilityVisualization_Mobile; // 0xf28(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability_Mobile; // 0xf30(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xf38(0x08)
	struct UStabilityComponent* FlaggedStability; // 0xf40(0x08)
	struct UStabilityVisualizationComponent* FlaggedStabilityVisualization; // 0xf48(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability; // 0xf50(0x08)
	struct UGunVOComponent_C* GunVOComponent; // 0xf58(0x08)
	struct UStaticMeshComponent* SecondaryMagazine_1P; // 0xf60(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0xf68(0x08)
	struct UAresOutlineComponent* OutlineCosmetic1P; // 0xf70(0x08)
	struct USkeletalMeshComponent* CosmeticMesh1P; // 0xf78(0x08)
	struct UPostProcessComponent* WeaponPostProcessComponent; // 0xf80(0x08)
	struct UEffectManagerComponent* EffectManager; // 0xf88(0x08)
	struct UCapsuleComponent* UsableAimingShape; // 0xf90(0x08)
	struct UEquipStateComponent* EquipState; // 0xf98(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0xfa0(0x08)
	struct UAresOutlineComponent* OutlineMagazine1P; // 0xfa8(0x08)
	struct UAresOutlineComponent* Outline1P; // 0xfb0(0x08)
	struct UAresOutlineComponent* Outline3P; // 0xfb8(0x08)
	struct UStaticMeshComponent* Magazine_1P; // 0xfc0(0x08)
	struct UBulletComponent_C* BulletComponent; // 0xfc8(0x08)
	struct UStabilityVisualizationManagerComponent* StabilityVisualizationManager; // 0xfd0(0x08)
	struct UEjectablesComponent* EjectableComponent; // 0xfd8(0x08)
	struct UEquippableAnimGraphComponent* EquippableAnimGraph; // 0xfe0(0x08)
	struct UAmmoComponent* ReserveAmmo; // 0xfe8(0x08)
	struct UAmmoComponent* MagazineAmmo; // 0xff0(0x08)
	struct UCrosshairComponent* CrosshairComponent; // 0xff8(0x08)
	struct UTaggingLevelComponent* TaggingLevel; // 0x1000(0x08)
	struct UStabilityVisualizationComponent* StabilityVisualization; // 0x1008(0x08)
	struct UStabilityComponent* Stability; // 0x1010(0x08)
	struct UReloadStateComponent* ReloadState; // 0x1018(0x08)
	struct UFiringStateComponent* FiringState; // 0x1020(0x08)
	struct UScriptStateComponent* IdleState; // 0x1028(0x08)
	float Timeline_0_Gradient_4FE0012341ACC25BAD5474AD60A43FDB; // 0x1030(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4FE0012341ACC25BAD5474AD60A43FDB; // 0x1034(0x01)
	char pad_1035[0x3]; // 0x1035(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1038(0x08)
	float RotateRoll; // 0x1040(0x04)
	float ResetDelaySeconds; // 0x1044(0x04)
	float TimeToRotate; // 0x1048(0x04)
	bool ResetDelay; // 0x104c(0x01)
	char pad_104D[0x3]; // 0x104d(0x03)
	struct FRotator HackRotator; // 0x1050(0x0c)
	struct FRotator DefaultRotator; // 0x105c(0x0c)
	float RotatePitch; // 0x1068(0x04)
	float RotateAngle; // 0x106c(0x04)
	struct UMaterialInstanceDynamic* WeaponDynamicMaterialInstance; // 0x1070(0x08)
	float GradientSubtract; // 0x1078(0x04)
	bool IntentionOn; // 0x107c(0x01)
	char pad_107D[0x3]; // 0x107d(0x03)
	struct FVector L_Hand_Offset_Hack; // 0x1080(0x0c)
	char pad_108C[0x4]; // 0x108c(0x04)
	struct UParticleSystemComponent* BeamFX; // 0x1090(0x08)
	struct USceneComponent* MeshToChoose; // 0x1098(0x08)
	struct FVector IntentionEndPointCheck; // 0x10a0(0x0c)
	char pad_10AC[0x4]; // 0x10ac(0x04)
	struct UAkAudioEvent* Gun_Bounce_Sound; // 0x10b0(0x08)
	struct UAkAudioEvent* Gun_Land_Sound; // 0x10b8(0x08)
	bool HasLastShotAnim; // 0x10c0(0x01)
	char pad_10C1[0x7]; // 0x10c1(0x07)
	struct UAnimMontage* FidgetAnim; // 0x10c8(0x08)
	struct UStaticMeshComponent* Magazine_3p; // 0x10d0(0x08)
	struct UMaterial* KillBannerMaterial; // 0x10d8(0x08)
	enum class EKillBannerAnimation KillBannerWidgetAnimation; // 0x10e0(0x01)
	char pad_10E1[0x3]; // 0x10e1(0x03)
	struct FLinearColor KillBannerChromaColor; // 0x10e4(0x10)
	bool KillBannerUseChromaColor; // 0x10f4(0x01)
	char pad_10F5[0x3]; // 0x10f5(0x03)
	struct FEffectID FXC_Equipped_ID; // 0x10f8(0x20)
	struct AEffectContainer* EquippedEffect; // 0x1118(0x08)
	struct FEffectData EffectData; // 0x1120(0x58)
	struct AEffectContainer* Weapon Inspect; // 0x1178(0x08)
	struct AEffectContainer* Idle Effect; // 0x1180(0x08)
	int32_t AudioNumLimit; // 0x1188(0x04)
	char pad_118C[0x4]; // 0x118c(0x04)
	struct UMaterialInstanceDynamic* LowAmmo_Instance; // 0x1190(0x08)
	struct UMaterialInterface* LowAmmo_Material; // 0x1198(0x08)
	struct UMaterialInterface* NewVar_1; // 0x11a0(0x08)
	bool CanDoAmmoCosmetics; // 0x11a8(0x01)
	char pad_11A9[0x7]; // 0x11a9(0x07)
	struct AEffectContainer* FXC_LowAmmo; // 0x11b0(0x08)
	struct FEffectID LowAmmo_ID; // 0x11b8(0x20)
	struct FVector Muzzle Location; // 0x11d8(0x0c)
	bool HasSilencer; // 0x11e4(0x01)
	char pad_11E5[0x3]; // 0x11e5(0x03)
	struct FEffectID InspectEffectID; // 0x11e8(0x20)
	enum class GunEjectableType ShellCasingEjectableType; // 0x1208(0x01)
	char pad_1209[0x3]; // 0x1209(0x03)
	int32_t AutomaticAndBurstShotsPerShellCasingEjectable; // 0x120c(0x04)
	int32_t NonAutomaticShotsPerShellCasingEjectable; // 0x1210(0x04)
	int32_t CurrentShotIndexForShellCasingEjectable; // 0x1214(0x04)
	float LastShotTimeStamp; // 0x1218(0x04)
	float CurrentShotIndexResetTimeDurationForNonAutomatics; // 0x121c(0x04)
	enum class TextureAssetType EjectableTextureType; // 0x1220(0x01)
	char pad_1221[0x7]; // 0x1221(0x07)
	struct AEffectContainer* BombDefusedEffect; // 0x1228(0x08)
	bool Auto Reload On Empty; // 0x1230(0x01)
	bool Inspect Animation Active; // 0x1231(0x01)
	char pad_1232[0x2]; // 0x1232(0x02)
	float AutoPrimaryRefireDelay; // 0x1234(0x04)
	int32_t Kill Number; // 0x1238(0x04)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Gun.Gun_C.GetMagazine3p // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Gun.Gun_C.GetMagazine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Gun.Gun_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Modify Reserve Ammo(bool InfiniteReserve, int32_t MaxReserveAmmo); // Function Gun.Gun_C.Modify Reserve Ammo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void DetermineRefireDelayFromVariable(float RefireDelayValue, float& AutoRefireDelay); // Function Gun.Gun_C.DetermineRefireDelayFromVariable // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetMobileAutoPrimaryRefireDelay(float& AutoRefireDelay); // Function Gun.Gun_C.GetMobileAutoPrimaryRefireDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void Play Bomb Defused Effect(); // Function Gun.Gun_C.Play Bomb Defused Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool HasAnyResources(); // Function Gun.Gun_C.HasAnyResources // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void TriggerShellCasingEveryFewShots(struct UFiringStateComponent* FiringState, int32_t ShotIndex, float TimeSinceLastShot); // Function Gun.Gun_C.TriggerShellCasingEveryFewShots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdateLowAmmoIndicator(bool ResetAmmo); // Function Gun.Gun_C.UpdateLowAmmoIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CanCycleZoom(bool& CanZoom); // Function Gun.Gun_C.CanCycleZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HideBulletMesh(); // Function Gun.Gun_C.HideBulletMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnRep_WeaponKills(); // Function Gun.Gun_C.OnRep_WeaponKills // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UnloadMagazine(bool ReplenishToReserve); // Function Gun.Gun_C.UnloadMagazine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetIdleReloadState(struct UReloadStateComponent*& ReloadState); // Function Gun.Gun_C.GetIdleReloadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GunSkinImpulse(float TimelineUpdate); // Function Gun.Gun_C.GunSkinImpulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ResetRotation(); // Function Gun.Gun_C.ResetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RotateLeftRight(float TimeToRotate); // Function Gun.Gun_C.RotateLeftRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RotateWeaponAroundCorner(float DeltaTime); // Function Gun.Gun_C.RotateWeaponAroundCorner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Gun.Gun_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTime); // Function Gun.Gun_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UserConstructionScript(); // Function Gun.Gun_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Timeline_0__FinishedFunc(); // Function Gun.Gun_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3367a20
	void Timeline_0__UpdateFunc(); // Function Gun.Gun_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3367a20
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Gun.Gun_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function Gun.Gun_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__IdleState_K2Node_ComponentBoundEvent_1_OnStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Gun.Gun_C.BndEvt__IdleState_K2Node_ComponentBoundEvent_1_OnStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function Gun.Gun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void EjectShellCasing(); // Function Gun.Gun_C.EjectShellCasing // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void EjectMagazine(); // Function Gun.Gun_C.EjectMagazine // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadAnimationComplete__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadAnimationComplete__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void ClientTickActiveForLocalPlayer(float DeltaSeconds); // Function Gun.Gun_C.ClientTickActiveForLocalPlayer // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnItemPickedUp(struct AShooterCharacter* NewOwner, bool bCurrentWasDropped); // Function Gun.Gun_C.OnItemPickedUp // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void GunInspect(enum class GunEmote Emote); // Function Gun.Gun_C.GunInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdateMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.UpdateMaterial // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnInactiveStateEnter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun.Gun_C.OnInactiveStateEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Custom_OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Gun.Gun_C.Custom_OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void On Ammo Loaded(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.On Ammo Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void On Reload Animation Complete(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.On Reload Animation Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ClientItemEquipped(); // Function Gun.Gun_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ClientItemUnEquipped(); // Function Gun.Gun_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void Evaluate Idle Transitions(); // Function Gun.Gun_C.Evaluate Idle Transitions // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void On Idle State Enter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun.Gun_C.On Idle State Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void On Firing State Ready To Fire This Frame(struct UFiringStateComponent* FiringState); // Function Gun.Gun_C.On Firing State Ready To Fire This Frame // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void On Resource Component Resource Changed(struct UResourceComponent* ResourceComponent); // Function Gun.Gun_C.On Resource Component Resource Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Gun.Gun_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Gun.Gun_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void TestingOverrides(); // Function Gun.Gun_C.TestingOverrides // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CancelInspect(); // Function Gun.Gun_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__IdleState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Gun.Gun_C.BndEvt__IdleState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void AuthOnUnEquipped(); // Function Gun.Gun_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Gun.Gun_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Gun.Gun_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Gun(int32_t EntryPoint); // Function Gun.Gun_C.ExecuteUbergraph_Gun // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

