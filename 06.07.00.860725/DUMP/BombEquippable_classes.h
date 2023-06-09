// BlueprintGeneratedClass BombEquippable.BombEquippable_C
// Size: 0xfd0 (Inherited: 0xf00)
struct ABombEquippable_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCompleteStateComponent; // 0xf08(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipOnCancelStateComponent; // 0xf10(0x08)
	struct UTestBranch_EffectsActive_StateComponent_C* TestBranch_EffectsActive_StateComponent; // 0xf18(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xf20(0x08)
	struct USphereComponent* CalloutCollider; // 0xf28(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0xf30(0x08)
	struct UTeamRoleComponent* TeamRole; // 0xf38(0x08)
	struct URespondToEventStateComponent* PlantBombWithClick; // 0xf40(0x08)
	struct URespondToEventStateComponent* WaitForPlantClick; // 0xf48(0x08)
	struct UScriptStateComponent* IdleState; // 0xf50(0x08)
	struct UEquippableStateMachineComponent* PlantByLeftClickStateMachine; // 0xf58(0x08)
	struct UWaitForUsingUsableStateComponent* WaitForUsingUsableState; // 0xf60(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0xf68(0x08)
	struct UBombMinimapComponent_C* BombMinimapComponent; // 0xf70(0x08)
	struct UEquippableVisibilityComponent* EquippableVisibility; // 0xf78(0x08)
	struct UBombEquippableVOComponent_C* BombEquippableVOTriggers; // 0xf80(0x08)
	struct UCapsuleComponent* Targeting Shape; // 0xf88(0x08)
	struct UEquipStateComponent* EquipState; // 0xf90(0x08)
	struct UAresOutlineComponent* Outline3P_TempBomb; // 0xf98(0x08)
	struct UAresOutlineComponent* Outline3P; // 0xfa0(0x08)
	struct UAresOutlineComponent* Outline1P; // 0xfa8(0x08)
	struct FMulticastInlineDelegate OnBombPickedUp; // 0xfb0(0x10)
	struct FMulticastInlineDelegate OnBombDropped; // 0xfc0(0x10)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function BombEquippable.BombEquippable_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void IsBombInInventory(bool& IsBombInInventory); // Function BombEquippable.BombEquippable_C.IsBombInInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetEquippableAnimationGroup(); // Function BombEquippable.BombEquippable_C.GetEquippableAnimationGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetEquippableAnimationType(); // Function BombEquippable.BombEquippable_C.GetEquippableAnimationType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool AllowPickup(struct AShooterCharacter* TargetCharacter); // Function BombEquippable.BombEquippable_C.AllowPickup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function BombEquippable.BombEquippable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__WhileUsingUsableState_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C.BndEvt__WhileUsingUsableState_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C.BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombEquippable.BombEquippable_C.BndEvt__PlantBombWithClick_K2Node_ComponentBoundEvent_4_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void ClientItemEquipped(); // Function BombEquippable.BombEquippable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void AuthOnEquipped(); // Function BombEquippable.BombEquippable_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void MulticastBombPickedUp(struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C.MulticastBombPickedUp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_BombEquippable(int32_t EntryPoint); // Function BombEquippable.BombEquippable_C.ExecuteUbergraph_BombEquippable // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
	void OnBombDropped__DelegateSignature(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.OnBombDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombPickedUp__DelegateSignature(struct AShooterCharacter* Character); // Function BombEquippable.BombEquippable_C.OnBombPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

