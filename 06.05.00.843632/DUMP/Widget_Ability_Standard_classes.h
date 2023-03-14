// WidgetBlueprintGeneratedClass Widget_Ability_Standard.Widget_Ability_Standard_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UWidget_Ability_Standard_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* TimerExpiring; // 0x3e8(0x08)
	struct UNamedSlot* AbilityIconSlot; // 0x3f0(0x08)
	struct UImage* BackAnimIcon; // 0x3f8(0x08)
	struct UImage* FrontAnimIcon; // 0x400(0x08)
	struct UGamepadInputPromptSwitcher_C* GamepadInputPromptSwitcher; // 0x408(0x08)
	struct UBorder* GamepadPromptBorder; // 0x410(0x08)
	struct UHorizontalBox* InputPromptHolder; // 0x418(0x08)
	struct UOverlay* Main; // 0x420(0x08)
	struct UNamedSlot* OverImageSlot; // 0x428(0x08)
	struct UImage* RechargeAnimIcon_2; // 0x430(0x08)
	struct UImage* Spacer; // 0x438(0x08)
	struct UImage* ThreeHolder; // 0x440(0x08)
	struct UVerticalBox* TimerVerticalBox; // 0x448(0x08)
	struct UImage* TwoHolder; // 0x450(0x08)
	struct UWidget_Ability_Element_ChargeStandard_C* Widget_Ability_ChargeStandard; // 0x458(0x08)
	struct UWidget_Ability_Element_InputPrompt_C* Widget_Ability_Element_InputPrompt; // 0x460(0x08)
	struct UWidget_Ability_Element_Signature_Cooldown_C* Widget_Ability_Element_Signature_Cooldown; // 0x468(0x08)
	struct UWidget_Ability_Element_Timer_C* Widget_Ability_Element_Timer; // 0x470(0x08)
	struct UWidget_Ability_Element_Icon_C* Widget_Ability_Icon; // 0x478(0x08)
	struct UWidget_Ability_Element_Key_C* Widget_Ability_Key_1; // 0x480(0x08)
	float BackIconTimeUpdateSpeed_1; // 0x488(0x04)
	float FrontIconDuration_1; // 0x48c(0x04)
	float BackIconDuration_1; // 0x490(0x04)
	float RechargeIconDuration_1; // 0x494(0x04)
	struct FTimerHandle RechargeIconTimer_1; // 0x498(0x08)
	struct UMaterialInstance* Suppressed Icon Template; // 0x4a0(0x08)

	void OnStartWidget(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ExpireWarningActive_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExpireWarningActive_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void TimerComplete_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.TimerComplete_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void PreConstruct(bool IsDesignTime); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x332feb0
	void OnInitialized(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x332feb0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void InputPromptRemoved(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_Widget_Ability_Standard(int32_t EntryPoint); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExecuteUbergraph_Widget_Ability_Standard // (Final|UbergraphFunction|HasDefaults) // @ game+0x332feb0
};

