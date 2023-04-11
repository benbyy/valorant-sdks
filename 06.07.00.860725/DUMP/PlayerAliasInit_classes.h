// WidgetBlueprintGeneratedClass PlayerAliasInit.PlayerAliasInit_C
// Size: 0x4f8 (Inherited: 0x2c8)
struct UPlayerAliasInit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* ErrorText; // 0x2d0(0x08)
	struct UEditableTextBox* GameNameInput; // 0x2d8(0x08)
	struct UTextBlock* GameNameTaglineSeparator; // 0x2e0(0x08)
	struct UImage* Image_59; // 0x2e8(0x08)
	struct UImage* Image_201; // 0x2f0(0x08)
	struct UImage* Image_203; // 0x2f8(0x08)
	struct UImage* PlayerAlias_SelectName_Logo; // 0x300(0x08)
	struct UImage* PlayerAliasFrame_bg; // 0x308(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x310(0x08)
	struct UEditableTextBox* TagLineInput; // 0x318(0x08)
	struct UTextBlock* TextBlock_255; // 0x320(0x08)
	struct UImage* ValidationIcon; // 0x328(0x08)
	float ValidationDelaySeconds; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FSlateBrush ValidationFailedIcon; // 0x338(0x90)
	struct FSlateBrush ValidationPassedIcon; // 0x3c8(0x90)
	struct FSlateBrush ValidationProcessingIcon; // 0x458(0x90)
	struct TArray<struct FString> ErrorList; // 0x4e8(0x10)

	void Set_TagLineInput_Visibility(bool IsVisible); // Function PlayerAliasInit.PlayerAliasInit_C.Set_TagLineInput_Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Clear_ValidationErrorText(); // Function PlayerAliasInit.PlayerAliasInit_C.Clear_ValidationErrorText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Set_ValidationErrorText(struct FText InText); // Function PlayerAliasInit.PlayerAliasInit_C.Set_ValidationErrorText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Set_ValidationIcon_Brush(struct FSlateBrush InBrush); // Function PlayerAliasInit.PlayerAliasInit_C.Set_ValidationIcon_Brush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheckLocalValidation(struct FPlayerAlias& PlayerAlias, bool& IsValid, struct FText& ValidationError); // Function PlayerAliasInit.PlayerAliasInit_C.CheckLocalValidation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	struct FText Get_LocalizedErrorText(enum class EPlayerAliasError PlayerAliasError); // Function PlayerAliasInit.PlayerAliasInit_C.Get_LocalizedErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void BndEvt__DisplayNameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function PlayerAliasInit.PlayerAliasInit_C.BndEvt__DisplayNameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3367a20
	void ValidateName(); // Function PlayerAliasInit.PlayerAliasInit_C.ValidateName // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnAliasValid(); // Function PlayerAliasInit.PlayerAliasInit_C.OnAliasValid // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnValidationError(enum class EPlayerAliasError Problem); // Function PlayerAliasInit.PlayerAliasInit_C.OnValidationError // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnInvalidOrError(enum class EPlayerAliasError Problem); // Function PlayerAliasInit.PlayerAliasInit_C.OnInvalidOrError // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PlayerAliasInit.PlayerAliasInit_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void Construct(); // Function PlayerAliasInit.PlayerAliasInit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnTagLineCustomizabilityChanged_Event(bool isCustomizable); // Function PlayerAliasInit.PlayerAliasInit_C.OnTagLineCustomizabilityChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_PlayerAliasInit(int32_t EntryPoint); // Function PlayerAliasInit.PlayerAliasInit_C.ExecuteUbergraph_PlayerAliasInit // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

