// BlueprintGeneratedClass BaseCollectableOrb.BaseCollectableOrb_C
// Size: 0x4c0 (Inherited: 0x410)
struct ABaseCollectableOrb_C : AOrb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct USimpleReplicationSleepComponent* SimpleReplicationSleep; // 0x418(0x08)
	struct USceneComponent* InWorldUsablePivot; // 0x420(0x08)
	struct USphereComponent* Sphere; // 0x428(0x08)
	struct UParticleSystemComponent* Amb_OrbEnergy_VFX; // 0x430(0x08)
	struct UUsableComponent* Usable; // 0x438(0x08)
	struct AEffectContainer* OrbCollectEffect; // 0x440(0x08)
	struct UParticleSystem* OrbDestroyedVFX; // 0x448(0x08)
	struct FName TelemtryLabel; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct AEffectContainer* CollectOrbEffect; // 0x460(0x08)
	struct FEffectID CollectOrbFriendlyID; // 0x468(0x20)
	struct FEffectID CollectOrbEnemyID; // 0x488(0x20)
	struct AActor* OrbUser; // 0x4a8(0x08)
	struct AEffectContainer* OrbDestroyedEffect; // 0x4b0(0x08)
	struct AEffectContainer* OrbCancelEffect; // 0x4b8(0x08)

	void CallCollectionEvent(struct AShooterCharacter* Character); // Function BaseCollectableOrb.BaseCollectableOrb_C.CallCollectionEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantOrbEffect(struct AShooterCharacter* ShooterCharacter); // Function BaseCollectableOrb.BaseCollectableOrb_C.GrantOrbEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_181_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_181_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void OnAuthRoundEnd(); // Function BaseCollectableOrb.BaseCollectableOrb_C.OnAuthRoundEnd // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BaseCollectableOrb.BaseCollectableOrb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void ReceiveDestroyed(); // Function BaseCollectableOrb.BaseCollectableOrb_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void Server Win Round Event(struct UBaseTeamComponent* Winning Team); // Function BaseCollectableOrb.BaseCollectableOrb_C.Server Win Round Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BaseCollectableOrb.BaseCollectableOrb_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BaseCollectableOrb(int32_t EntryPoint); // Function BaseCollectableOrb.BaseCollectableOrb_C.ExecuteUbergraph_BaseCollectableOrb // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

