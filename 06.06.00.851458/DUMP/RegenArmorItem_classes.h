// BlueprintGeneratedClass RegenArmorItem.RegenArmorItem_C
// Size: 0x508 (Inherited: 0x461)
struct ARegenArmorItem_C : ABasicArmorItem_C {
	char pad_461[0x7]; // 0x461(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UShotBlockerArmorCharacterHudComponent_C* ShotBlockerArmorCharacterHudComponent; // 0x470(0x08)
	struct UJuggernautArmorAttachedDamageSection_C* JuggernautArmorAttachedDamageSection; // 0x478(0x08)
	struct URegenArmorCharacterHudComponent_C* RegenArmorCharacterHudComponent; // 0x480(0x08)
	struct AShooterCharacter* MyCharacter; // 0x488(0x08)
	float PersistedHealingPool; // 0x490(0x04)
	float InitialHealthReduction; // 0x494(0x04)
	float StartingHealPool; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FEffectID RegenEffectID; // 0x4a0(0x20)
	struct AEffectContainer* RegenActiveEffect; // 0x4c0(0x08)
	float DeltaSeconds; // 0x4c8(0x04)
	bool Healing; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	float LastTookDamageTime; // 0x4d0(0x04)
	float HealingPerSecond; // 0x4d4(0x04)
	float TimeBeforeHealing; // 0x4d8(0x04)
	bool ItemDestroyed; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	struct FEffectID PassiveFX; // 0x4e0(0x20)
	struct AShooterCharacter* PassiveEffectTarget; // 0x500(0x08)

	void AuthSetLifePool(float NewLifeValue); // Function RegenArmorItem.RegenArmorItem_C.AuthSetLifePool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetLifePool(float& Life); // Function RegenArmorItem.RegenArmorItem_C.GetLifePool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void GetCharacterHudComponent(struct UCharacterHudComponent*& CharacterHudComponent); // Function RegenArmorItem.RegenArmorItem_C.GetCharacterHudComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	int32_t GetSellPrice(int32_t BasePrice); // Function RegenArmorItem.RegenArmorItem_C.GetSellPrice // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function RegenArmorItem.RegenArmorItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function RegenArmorItem.RegenArmorItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void OnArmorBreak(struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function RegenArmorItem.RegenArmorItem_C.OnArmorBreak // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuthTookDamage_Event(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function RegenArmorItem.RegenArmorItem_C.OnAuthTookDamage_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnRoundEnd(int32_t RoundNumberEnding); // Function RegenArmorItem.RegenArmorItem_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void DestroyItem(); // Function RegenArmorItem.RegenArmorItem_C.DestroyItem // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void DisableItem(); // Function RegenArmorItem.RegenArmorItem_C.DisableItem // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void UpdateRegen(); // Function RegenArmorItem.RegenArmorItem_C.UpdateRegen // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void EnableItem(); // Function RegenArmorItem.RegenArmorItem_C.EnableItem // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void UpdatePassiveFX(bool Enable); // Function RegenArmorItem.RegenArmorItem_C.UpdatePassiveFX // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_2_OnSectionDamagedSignature__DelegateSignature(struct UDamageSectionComponent* Component, float LifeChange); // Function RegenArmorItem.RegenArmorItem_C.BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_2_OnSectionDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_1_OnSectionDamagedSignature__DelegateSignature(struct UDamageSectionComponent* Component, float LifeChange); // Function RegenArmorItem.RegenArmorItem_C.BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_1_OnSectionDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void OnCharacterDeath_Event(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function RegenArmorItem.RegenArmorItem_C.OnCharacterDeath_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_RegenArmorItem(int32_t EntryPoint); // Function RegenArmorItem.RegenArmorItem_C.ExecuteUbergraph_RegenArmorItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

