// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C
// Size: 0x474 (Inherited: 0x3e0)
struct UWidget_Ability_Element_Signature_KillCounter_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* SignatureCharge; // 0x3e8(0x08)
	struct UWidgetAnimation* Equipped; // 0x3f0(0x08)
	struct UWidgetAnimation* Ready; // 0x3f8(0x08)
	struct UWidgetAnimation* Normal; // 0x400(0x08)
	struct USignatureKillHUDElement_C* SignatureElement1; // 0x408(0x08)
	struct USignatureKillHUDElement_C* SignatureElement2; // 0x410(0x08)
	struct USignatureKillHUDElement_C* SignatureElement3; // 0x418(0x08)
	struct USignatureKillHUDElement_C* SignatureElement4; // 0x420(0x08)
	struct FLinearColor EquippedTextColor; // 0x428(0x10)
	struct FLinearColor UnEquippedTextColor; // 0x438(0x10)
	struct FLinearColor disabledIconColor; // 0x448(0x10)
	struct UImage* BackgroundImage_1; // 0x458(0x08)
	struct TArray<struct USignatureKillHUDElement_C*> SignatureChargeArray; // 0x460(0x10)
	int32_t SignatureChargeAmount; // 0x470(0x04)

	void GetCurrentSignatureCharges(int32_t& Num); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GetCurrentSignatureCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void GetNumSignatureCharges(int32_t& Num); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GetNumSignatureCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void PlaySignatureChargeAnimations(bool Initialize); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.PlaySignatureChargeAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void UpdateSignatureChargeVisibility(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.UpdateSignatureChargeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantSignatureCharge(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GrantSignatureCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void UpdateSignatureCharges(bool Initialize); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.UpdateSignatureCharges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStartWidget(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Widget_Ability_Element_Signature_KillCounter(int32_t EntryPoint); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.ExecuteUbergraph_Widget_Ability_Element_Signature_KillCounter // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

