// BlueprintGeneratedClass CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C
// Size: 0x551 (Inherited: 0x540)
struct UCharacterPortraitMinimapComponent_C : UShooterCharacterMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UTexture* CharacterIcon; // 0x548(0x08)
	bool Enable; // 0x550(0x01)

	void ReceiveBeginPlay(); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void _1(); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct AShooterPlayerState* ); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(int32_t RoundNumberEnded); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ExecuteUbergraph_CharacterPortraitMinimapComponent(int32_t EntryPoint); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.ExecuteUbergraph_CharacterPortraitMinimapComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
};

