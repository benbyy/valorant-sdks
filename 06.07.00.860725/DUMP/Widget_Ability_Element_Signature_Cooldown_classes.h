// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWidget_Ability_Element_Signature_Cooldown_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* SignatureCharge; // 0x3e8(0x08)
	struct UWidgetAnimation* Equipped; // 0x3f0(0x08)
	struct UWidgetAnimation* Ready; // 0x3f8(0x08)
	struct UWidgetAnimation* Normal; // 0x400(0x08)
	struct UTextBlock* CooldownSeconds; // 0x408(0x08)
	float CooldownUpdateRate; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FTimerHandle CooldownUpdateHandle; // 0x418(0x08)
	struct UActorComponent* CooldownInterface; // 0x420(0x08)

	void OnStartWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void Update Cooldown(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.Update Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnCooldownStarted(struct UEquippableEventBase* Event); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnCooldownStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown(int32_t EntryPoint); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

