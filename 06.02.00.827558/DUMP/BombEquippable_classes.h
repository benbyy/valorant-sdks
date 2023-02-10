// BlueprintGeneratedClass BombEquippable.BombEquippable_C
// Size: 0xfc0 (Inherited: 0xef0)
struct ABombEquippable_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UUsableUnequipStateComponent_C* ; // 0xef8(0x08)
	struct UUsableUnequipStateComponent_C* ; // 0xf00(0x08)
	struct UTestBranch_EffectsActive_StateComponent_C* ; // 0xf08(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xf10(0x08)
	struct USphereComponent* CalloutCollider; // 0xf18(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0xf20(0x08)
	struct UTeamRoleComponent* TeamRole; // 0xf28(0x08)
	struct URespondToEventStateComponent* ; // 0xf30(0x08)
	struct URespondToEventStateComponent* ; // 0xf38(0x08)
	struct UScriptStateComponent* IdleState; // 0xf40(0x08)
	struct UEquippableStateMachineComponent* ; // 0xf48(0x08)
	struct UWaitForUsingUsableStateComponent* ; // 0xf50(0x08)
	struct UWhileUsingUsableStateComponent* ; // 0xf58(0x08)
	struct UBombMinimapComponent_C* BombMinimapComponent; // 0xf60(0x08)
	struct UEquippableVisibilityComponent* ; // 0xf68(0x08)
	struct UBombEquippableVOComponent_C* ; // 0xf70(0x08)
	struct UCapsuleComponent* ; // 0xf78(0x08)
	struct UEquipStateComponent* EquipState; // 0xf80(0x08)
	struct UAresOutlineComponent* ; // 0xf88(0x08)
	struct UAresOutlineComponent* Outline3P; // 0xf90(0x08)
	struct UAresOutlineComponent* Outline1P; // 0xf98(0x08)
	struct FMulticastInlineDelegate OnBombPickedUp; // 0xfa0(0x10)
	struct FMulticastInlineDelegate OnBombDropped; // 0xfb0(0x10)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function BombEquippable.BombEquippable_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33d1d60
	void (bool& ); // Function BombEquippable.BombEquippable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d60
	void (); // Function BombEquippable.BombEquippable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BombEquippable.BombEquippable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	bool AllowPickup(struct AShooterCharacter* TargetCharacter); // Function BombEquippable.BombEquippable_C.AllowPickup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function BombEquippable.BombEquippable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BombEquippable.BombEquippable_C. // (BlueprintEvent) // @ game+0x33d1d60
	void (struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombEquippable.BombEquippable_C. // (BlueprintEvent) // @ game+0x33d1d60
	void ClientItemEquipped(); // Function BombEquippable.BombEquippable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void AuthOnEquipped(); // Function BombEquippable.BombEquippable_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (struct AShooterCharacter* NewCharacter); // Function BombEquippable.BombEquippable_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function BombEquippable.BombEquippable_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void OnBombDropped__DelegateSignature(struct AShooterCharacter* OldCharacter); // Function BombEquippable.BombEquippable_C.OnBombDropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnBombPickedUp__DelegateSignature(struct AShooterCharacter* Character); // Function BombEquippable.BombEquippable_C.OnBombPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

