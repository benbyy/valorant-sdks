// BlueprintGeneratedClass Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C
// Size: 0x210 (Inherited: 0xe8)
struct UComp_GameMode_GrantPurchasables_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABaseGameMode_C* OwnerGameMode; // 0xf0(0x08)
	int32_t MaxPurchaseCharges; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct AAresItem*> GrantedPurchasables; // 0x100(0x10)
	bool ShouldGrantBasicAbilities; // 0x110(0x01)
	bool ShouldClearPreviousRoundPurchases; // 0x111(0x01)
	bool ShouldClearPreviousRoundWeaponsOnly; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
	struct TArray<struct FSiteRushWeaponPool> GrantedWeaponPoolsByRound; // 0x118(0x10)
	int32_t PreviousRoundNumber; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct AAresItem* CurrentRoundArmor; // 0x130(0x08)
	struct AAresItem* CurrentRoundWeapon; // 0x138(0x08)
	bool ShouldRefreshAbilitiesOnSpawn; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TArray<enum class EAresItemSlot> AbilitiesToRefreshOnSpawn; // 0x148(0x10)
	struct TArray<struct UAresPurchasable*> DefaultPurchasables; // 0x158(0x10)
	struct FMulticastInlineDelegate OnCurrentRoundLoadoutChosen; // 0x168(0x10)
	bool ShouldGrantToAllTeams; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct TArray<enum class EAresTeamRole> TeamRoles; // 0x180(0x10)
	bool OnlyGrantOncePerRound; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TArray<struct APlayerState*> PlayerStatesGrantedToThisRound; // 0x198(0x10)
	struct TArray<struct AAresItem*> WeaponNeverRemoveFromPool; // 0x1a8(0x10)
	bool NeverRemoveAnyWeaponsFromPool; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TMap<struct TSoftClassPtr<UObject>, int32_t> MaxChargeOverrides; // 0x1c0(0x50)

	bool ShouldGrantToPlayer(struct APawn* SourcePawn); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ShouldGrantToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void SetPersistenceToDestroyIfDesired(struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.SetPersistenceToDestroyIfDesired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RecoverArmorIfPossible(struct UAresInventory* Inventory, enum class EInventoryTransaction Transaction, struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.RecoverArmorIfPossible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetCurrentRoundWeapon(struct AAresItem*& CurrentRoundWeapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GetCurrentRoundWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ResetAbilityChargeMechanics(struct AActor* Equippable); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ResetAbilityChargeMechanics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantDefaultPurchasables(struct AShooterPlayerState* PlayerState); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantDefaultPurchasables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReplenishChargesForAbilitySlot(struct AShooterCharacter* Character, enum class EAresItemSlot Slot); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ReplenishChargesForAbilitySlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RemoveWeaponFromAllPools(struct AAresItem* Weapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.RemoveWeaponFromAllPools // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AddPurchasableToArrayIfValid(struct AShooterPlayerState* PlayerState, struct TArray<struct UAresPurchasable*>& TargetArray, struct AAresItem* ItemClass); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.AddPurchasableToArrayIfValid // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdateRoundWeaponIfNeeded(); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.UpdateRoundWeaponIfNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void MarkPurchasablesForDestroy(struct AShooterPlayerState* PlayerState); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.MarkPurchasablesForDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantAllPurchasables(struct AShooterPlayerState* PlayerState); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantAllPurchasables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantPurchasable(struct AShooterPlayerState* PlayerState, struct UAresPurchasable* PurchasableClass); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantPurchasable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetPurchasablesToGrant(struct AShooterPlayerState* PlayerState, struct AAresItem* CurrentRoundWeapon, struct TArray<struct UAresPurchasable*>& Purchasables); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GetPurchasablesToGrant // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnPlayerSpawned(struct APawn* SpawnedPawn); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantPurchasables(struct AShooterCharacter* ShooterCharacter); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.GrantPurchasables // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnInventoryTransaction(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnInventoryTransaction // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnPhaseChange(enum class EAresGamePhase NewPhase); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnPhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnRoundEnd(int32_t RoundNumberEnding); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandleDefaultWeaponChanged(struct UAresPurchasable* NewDefaultWeapon); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.HandleDefaultWeaponChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_GameMode_GrantPurchasables(int32_t EntryPoint); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.ExecuteUbergraph_Comp_GameMode_GrantPurchasables // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
	void OnCurrentRoundLoadoutChosen__DelegateSignature(struct AAresItem* Weapon, struct AAresItem* Armor); // Function Comp_GameMode_GrantPurchasables.Comp_GameMode_GrantPurchasables_C.OnCurrentRoundLoadoutChosen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

