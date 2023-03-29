// BlueprintGeneratedClass RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C
// Size: 0x120 (Inherited: 0x100)
struct URegenArmorCharacterHudComponent_C : UCharacterHudComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct FLinearColor armorTextColor; // 0x108(0x10)
	int32_t OutValue; // 0x118(0x04)
	int32_t MaxOutValue; // 0x11c(0x04)

	void SetMaxValue(float MaxValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetMaxValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SetCurrentValue(float CurrentValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetCurrentValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetCharacterHudDrawValues(struct FCharacterHudDrawValues& Out); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.GetCharacterHudDrawValues // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void SetCurrentValueRep(float CurrentValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetCurrentValueRep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SetMaxValueRep(float MaxValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetMaxValueRep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_RegenArmorCharacterHudComponent(int32_t EntryPoint); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.ExecuteUbergraph_RegenArmorCharacterHudComponent // (Final|UbergraphFunction) // @ game+0x337bc90
};

