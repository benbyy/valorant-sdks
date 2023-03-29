// WidgetBlueprintGeneratedClass Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C
// Size: 0x404 (Inherited: 0x3e0)
struct UWidget_Ability_Signature_KillReset_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* Overlay_1; // 0x3e8(0x08)
	struct UWidget_Ability_Standard_C* Widget_Ability_Prototype_v2; // 0x3f0(0x08)
	struct UWidget_Ability_Element_Signature_KillCounter_C* Widget_Ability_Signature_KillCounter; // 0x3f8(0x08)
	int32_t SignatureChargeAmount; // 0x400(0x04)

	int32_t GetCurrentSignatureAmount(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.GetCurrentSignatureAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void OnStartWidget(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void InputPromptRemoved(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Widget_Ability_Signature_KillReset(int32_t EntryPoint); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.ExecuteUbergraph_Widget_Ability_Signature_KillReset // (Final|UbergraphFunction) // @ game+0x337bc90
};

