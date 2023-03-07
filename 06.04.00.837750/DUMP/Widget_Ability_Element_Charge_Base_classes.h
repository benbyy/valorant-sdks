// WidgetBlueprintGeneratedClass Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C
// Size: 0x448 (Inherited: 0x358)
struct UWidget_Ability_Element_Charge_Base_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget; // 0x360(0x10)
	struct TArray<struct FStruct_AbilityChargeImages> ChargeImages; // 0x370(0x10)
	struct FSlateColor Suppressed Charge Tint; // 0x380(0x28)
	struct FSlateColor Base Charge Tint; // 0x3a8(0x28)
	struct FSlateColor BaseChargeTextureTint; // 0x3d0(0x28)
	struct TArray<struct FStruct_AbilityChargeImages> ChargeImagesRed; // 0x3f8(0x10)
	struct UProgressBar* UltProgressBar; // 0x408(0x08)
	struct UComp_Ability_CooldownComponent_C* CooldownComponent; // 0x410(0x08)
	struct UImage* Cached_ChargeImage; // 0x418(0x08)
	struct UImage* Cached_ChargeImage_Extra; // 0x420(0x08)
	struct UTextBlock* Cached_ChargeNumberText; // 0x428(0x08)
	struct UImage* Cached_ChargeTexture; // 0x430(0x08)
	struct UHorizontalBox* Cached_PipRectBox; // 0x438(0x08)
	struct UHorizontalBox* Cached_UltChargeBox; // 0x440(0x08)

	void CacheWidgetElements(struct UImage* ChargeImage, struct UImage* ChargeImage_Extra, struct UTextBlock* ChargeNumberText, struct UHorizontalBox* PipRectBox, struct UHorizontalBox* UltChargeBox); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.CacheWidgetElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetPipCost(int32_t& PipCost); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetPipCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void SetPipChargeInfo(int32_t PipCost, bool HasCharges); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.SetPipChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetCurrentDisplayCharges(int32_t& CurrentCharges); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetCurrentDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void GetMaxDisplayCharges(int32_t& MaxCharges); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetMaxDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void SetupDisabledUI(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.SetupDisabledUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	int32_t GetTempCharges(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetTempCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	int32_t GetPermanentCharges(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetPermanentCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void UpdateUltPoints(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.UpdateUltPoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void UpdateChargeInfo(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.UpdateChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void SetRegularChargeInfo(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.SetRegularChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void InputPromptRemoved(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void OnStartWidget(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x34b46f0
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void BuffAdded(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.BuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void BuffRemoved(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.BuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ExecuteUbergraph_Widget_Ability_Element_Charge_Base(int32_t EntryPoint); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.ExecuteUbergraph_Widget_Ability_Element_Charge_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x34b46f0
	void DispatchUpdateWidget__DelegateSignature(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.DispatchUpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
};

