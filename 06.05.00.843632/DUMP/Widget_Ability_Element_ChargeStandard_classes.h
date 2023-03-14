// WidgetBlueprintGeneratedClass Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C
// Size: 0x4d8 (Inherited: 0x448)
struct UWidget_Ability_Element_ChargeStandard_C : UWidget_Ability_Element_Charge_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UImage* ChargeImage; // 0x450(0x08)
	struct UImage* ChargeImage_Extra; // 0x458(0x08)
	struct UTextBlock* ChargeNumberText; // 0x460(0x08)
	struct UImage* Image_73; // 0x468(0x08)
	struct UImage* Image_75; // 0x470(0x08)
	struct UImage* Image_76; // 0x478(0x08)
	struct UImage* Image_77; // 0x480(0x08)
	struct UImage* Image_78; // 0x488(0x08)
	struct UImage* Image_79; // 0x490(0x08)
	struct UImage* Image_80; // 0x498(0x08)
	struct UImage* Image_81; // 0x4a0(0x08)
	struct UImage* Image_82; // 0x4a8(0x08)
	struct UHorizontalBox* PipRectBox; // 0x4b0(0x08)
	struct UHorizontalBox* UltChargeBox; // 0x4b8(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget_1; // 0x4c0(0x10)
	struct UComp_Ability_CooldownComponent_C* CooldownComponent_1; // 0x4d0(0x08)

	void OnStartWidget(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_Widget_Ability_Element_ChargeStandard(int32_t EntryPoint); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ExecuteUbergraph_Widget_Ability_Element_ChargeStandard // (Final|UbergraphFunction) // @ game+0x332feb0
	void DispatchUpdateWidget_0__DelegateSignature(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.DispatchUpdateWidget_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
};

