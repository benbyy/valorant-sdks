// BlueprintGeneratedClass Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C
// Size: 0x110 (Inherited: 0xe8)
struct UComp_GameState_OrbEvents_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnOrbCollected; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnOrbDestroyed; // 0x100(0x10)

	void Multicast Orb Collected(struct ABaseCollectableOrb_C* Orb, struct AShooterCharacter* Character); // Function Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C.Multicast Orb Collected // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void MulticastOrbDestroyed(struct ABaseCollectableOrb_C* Orb); // Function Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C.MulticastOrbDestroyed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_GameState_OrbEvents(int32_t EntryPoint); // Function Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C.ExecuteUbergraph_Comp_GameState_OrbEvents // (Final|UbergraphFunction) // @ game+0x337bc90
	void OnOrbDestroyed__DelegateSignature(struct ABaseCollectableOrb_C* Orb); // Function Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C.OnOrbDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnOrbCollected__DelegateSignature(struct ABaseCollectableOrb_C* Orb, struct AShooterCharacter* Character); // Function Comp_GameState_OrbEvents.Comp_GameState_OrbEvents_C.OnOrbCollected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

