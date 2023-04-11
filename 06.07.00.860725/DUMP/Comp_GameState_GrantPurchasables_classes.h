// BlueprintGeneratedClass Comp_GameState_GrantPurchasables.Comp_GameState_GrantPurchasables_C
// Size: 0x100 (Inherited: 0xe8)
struct UComp_GameState_GrantPurchasables_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnRoundLoadoutChosen; // 0xf0(0x10)

	void Multicast Round Loadout Chosen(struct AAresItem* Weapon, struct AAresItem* Armor); // Function Comp_GameState_GrantPurchasables.Comp_GameState_GrantPurchasables_C.Multicast Round Loadout Chosen // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_GameState_GrantPurchasables(int32_t EntryPoint); // Function Comp_GameState_GrantPurchasables.Comp_GameState_GrantPurchasables_C.ExecuteUbergraph_Comp_GameState_GrantPurchasables // (Final|UbergraphFunction) // @ game+0x3367a20
	void OnRoundLoadoutChosen__DelegateSignature(struct AAresItem* Weapon, struct AAresItem* Armor); // Function Comp_GameState_GrantPurchasables.Comp_GameState_GrantPurchasables_C.OnRoundLoadoutChosen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

