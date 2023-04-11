// BlueprintGeneratedClass ReinforcedSlingItem.ReinforcedSlingItem_C
// Size: 0x478 (Inherited: 0x461)
struct AReinforcedSlingItem_C : ABasicArmorItem_C {
	char pad_461[0x7]; // 0x461(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x470(0x08)

	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_ReinforcedSlingItem(int32_t EntryPoint); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ExecuteUbergraph_ReinforcedSlingItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

