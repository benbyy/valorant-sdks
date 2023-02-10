// BlueprintGeneratedClass BasePlayerCharacter.BasePlayerCharacter_C
// Size: 0x13c1 (Inherited: 0x1230)
struct ABasePlayerCharacter_C : ABasePawn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1230(0x08)
	struct UTotemSelectorComponent_C* ; // 0x1238(0x08)
	struct UPMAimToolingSkeletalTargetComponent* PMAimToolingTarget; // 0x1240(0x08)
	struct UComp_PlayerCharacter_DebuffTagVisuals_C* ; // 0x1248(0x08)
	struct UCapsuleComponent* ; // 0x1250(0x08)
	struct UDisarmedComponent* Disarmed; // 0x1258(0x08)
	struct UAresWidgetComponent* ; // 0x1260(0x08)
	struct UAssistTrackingComponent* ; // 0x1268(0x08)
	struct UComp_PlayerCharacter_HealingTracker_C* ; // 0x1270(0x08)
	struct UShooterCharacterAudioAttenuationComponent_C* ; // 0x1278(0x08)
	struct UComp_PlayerCharacter_NearsightManager_C* ; // 0x1280(0x08)
	struct UComp_AbilityStatisticsReplicator_C* ; // 0x1288(0x08)
	struct UComp_PlayerCharacter_DebuffTagHUD_C* ; // 0x1290(0x08)
	struct UComp_PlayerCharacter_SmokeOverlays_C* ; // 0x1298(0x08)
	struct UEnemySpottedVOComponent_C* ; // 0x12a0(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x12a8(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x12b0(0x08)
	struct USpringArmComponent* ; // 0x12b8(0x08)
	struct UFootstepsComponent* ; // 0x12c0(0x08)
	struct UCameraComponent* ; // 0x12c8(0x08)
	struct UInteractableUserComponent* ; // 0x12d0(0x08)
	struct UWidgetComponent* ; // 0x12d8(0x08)
	struct UAnimationStateComponent* AnimationState; // 0x12e0(0x08)
	struct UCorpseExploitationComponent* ; // 0x12e8(0x08)
	struct FEffectID ; // 0x12f0(0x20)
	struct TMap<enum class NonVerbalCommTypesEnum, int32_t> ; // 0x1310(0x50)
	struct FEffectID ; // 0x1360(0x20)
	struct FMulticastInlineDelegate ; // 0x1380(0x10)
	struct FMulticastInlineDelegate ; // 0x1390(0x10)
	struct FEffectID ; // 0x13a0(0x20)
	bool ; // 0x13c0(0x01)

	void HasAltDeathReaction(bool& Result); // Function BasePlayerCharacter.BasePlayerCharacter_C.HasAltDeathReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	bool ScriptCanAutoPickupEquippable(struct AAresEquippable* TargetEquippable); // Function BasePlayerCharacter.BasePlayerCharacter_C.ScriptCanAutoPickupEquippable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33d1d60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool HasBomb); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function BasePlayerCharacter.BasePlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AController* PC); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct AActor* Actor); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void InitializeForRespawn(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void NotifyOnPlayerState(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyOnPlayerState // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void _1(bool bCollisionEnabled); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UCorpseExploitationComponent* ExploitationComponent); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnBombDefused(); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnBombDefused // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void NotifyHandednessUpdated(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyHandednessUpdated // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class  ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

