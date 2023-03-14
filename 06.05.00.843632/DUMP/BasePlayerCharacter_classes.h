// BlueprintGeneratedClass BasePlayerCharacter.BasePlayerCharacter_C
// Size: 0x13f1 (Inherited: 0x1250)
struct ABasePlayerCharacter_C : ABasePawn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1250(0x08)
	struct UComp_PlayerCharacter_GamepadInputEffect_C* Comp_PlayerCharacter_GamepadInputEffect; // 0x1258(0x08)
	struct URateLimiterComponent* GamepadInputEffectRateLimiter; // 0x1260(0x08)
	struct UTotemSelectorComponent_C* TotemSelectorComponent; // 0x1268(0x08)
	struct UAimToolingSkeletalTargetComponent* PMAimToolingTarget; // 0x1270(0x08)
	struct UComp_PlayerCharacter_DebuffTagVisuals_C* Comp_PlayerCharacter_DebuffTagVisuals; // 0x1278(0x08)
	struct UCapsuleComponent* HeadBoostBlockingCapsule; // 0x1280(0x08)
	struct UDisarmedComponent* Disarmed; // 0x1288(0x08)
	struct UAresWidgetComponent* InWorldCharacterWidget; // 0x1290(0x08)
	struct UAssistTrackingComponent* AssistTracking; // 0x1298(0x08)
	struct UComp_PlayerCharacter_HealingTracker_C* Comp_PlayerCharacter_HealingTracker; // 0x12a0(0x08)
	struct UShooterCharacterAudioAttenuationComponent_C* ShooterCharacterAudioAttenuationComponent; // 0x12a8(0x08)
	struct UComp_PlayerCharacter_NearsightManager_C* Comp_PlayerCharacter_NearsightManager; // 0x12b0(0x08)
	struct UComp_AbilityStatisticsReplicator_C* Comp_AbilityStatisticsReplicator; // 0x12b8(0x08)
	struct UComp_PlayerCharacter_DebuffTagHUD_C* Comp_PlayerCharacter_DebuffTagHUD; // 0x12c0(0x08)
	struct UComp_PlayerCharacter_SmokeOverlays_C* Comp_PlayerCharacter_SmokeOverlays; // 0x12c8(0x08)
	struct UEnemySpottedVOComponent_C* EnemySpottedVOComponent; // 0x12d0(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x12d8(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x12e0(0x08)
	struct USpringArmComponent* BuyPhaseCameraSpringArm; // 0x12e8(0x08)
	struct UFootstepsComponent* Footsteps; // 0x12f0(0x08)
	struct UCameraComponent* BuyPhaseCamera; // 0x12f8(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x1300(0x08)
	struct UWidgetComponent* PlayerWidget; // 0x1308(0x08)
	struct UAnimationStateComponent* AnimationState; // 0x1310(0x08)
	struct UCorpseExploitationComponent* CorpseExploitation; // 0x1318(0x08)
	struct FEffectID ActiveHaloEffectID; // 0x1320(0x20)
	struct TMap<enum class NonVerbalCommTypesEnum, int32_t> CommStringtoFXCTagInteger; // 0x1340(0x50)
	struct FEffectID ActiveVoiceHaloEffectID; // 0x1390(0x20)
	struct FMulticastInlineDelegate VoiceEventForMinimapDispatcher; // 0x13b0(0x10)
	struct FMulticastInlineDelegate CommEventForMinimapDispatcher; // 0x13c0(0x10)
	struct FEffectID ActiveLoadoutWidgetID; // 0x13d0(0x20)
	bool TotSelectorCreated; // 0x13f0(0x01)

	void GetGamepadInputEffectRateLimiter(struct URateLimiterComponent*& GamepadInputEffectRateLimiter); // Function BasePlayerCharacter.BasePlayerCharacter_C.GetGamepadInputEffectRateLimiter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void HasAltDeathReaction(bool& Result); // Function BasePlayerCharacter.BasePlayerCharacter_C.HasAltDeathReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	bool ScriptCanAutoPickupEquippable(struct AAresEquippable* TargetEquippable); // Function BasePlayerCharacter.BasePlayerCharacter_C.ScriptCanAutoPickupEquippable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x332feb0
	void StopLoadoutWidget(); // Function BasePlayerCharacter.BasePlayerCharacter_C.StopLoadoutWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void InitializeLoadoutWidgets(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeLoadoutWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void StopCommHalo(); // Function BasePlayerCharacter.BasePlayerCharacter_C.StopCommHalo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void UpdateHaloForBombPossession(bool HasBomb); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateHaloForBombPossession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void UpdateCommHalos(enum class NonVerbalCommTypesEnum CommActionEnum); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateCommHalos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void InitializeCommHalo(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeCommHalo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void OnGamePhaseChanged_Event_1(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnGamePhaseChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ReceiveBeginPlay(); // Function BasePlayerCharacter.BasePlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void UpdateHalosEvent(enum class NonVerbalCommTypesEnum CommActionEnum); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateHalosEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void BombPossessionEvent(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BasePlayerCharacter.BasePlayerCharacter_C.BombPossessionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ControllerReady(struct AController* PC); // Function BasePlayerCharacter.BasePlayerCharacter_C.ControllerReady // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void OnActorHiddenChanged_Event_1(struct AActor* Actor); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnActorHiddenChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void InitializeForRespawn(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void NotifyOnPlayerState(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyOnPlayerState // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void OnCollisionChangedFromDeath_Event_1(bool bCollisionEnabled); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnCollisionChangedFromDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void BndEvt__CorpseExploitation_K2Node_ComponentBoundEvent_0_ExploitationChanged__DelegateSignature(struct UCorpseExploitationComponent* ExploitationComponent); // Function BasePlayerCharacter.BasePlayerCharacter_C.BndEvt__CorpseExploitation_K2Node_ComponentBoundEvent_0_ExploitationChanged__DelegateSignature // (BlueprintEvent) // @ game+0x332feb0
	void Hide1PSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BasePlayerCharacter.BasePlayerCharacter_C.Hide1PSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void OnBombDefused(); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnBombDefused // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void NotifyHandednessUpdated(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyHandednessUpdated // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_BasePlayerCharacter(int32_t EntryPoint); // Function BasePlayerCharacter.BasePlayerCharacter_C.ExecuteUbergraph_BasePlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x332feb0
	void CommEventForMinimapDispatcher__DelegateSignature(enum class NonVerbalCommTypesEnum CommType); // Function BasePlayerCharacter.BasePlayerCharacter_C.CommEventForMinimapDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void VoiceEventForMinimapDispatcher__DelegateSignature(enum class SpeakingStates NewSpeakingState); // Function BasePlayerCharacter.BasePlayerCharacter_C.VoiceEventForMinimapDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
};

