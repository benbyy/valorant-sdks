// WidgetBlueprintGeneratedClass UltCriticalDangerHUD.UltCriticalDangerHUD_C
// Size: 0x330 (Inherited: 0x2c8)
struct UUltCriticalDangerHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* dangerRing; // 0x2d0(0x08)
	struct UInvalidationBox* InvalidationBox_UltDangerHud; // 0x2d8(0x08)
	struct FSlateColor CriticalDangerColor; // 0x2e0(0x28)
	struct FSlateColor DangerColor; // 0x308(0x28)

	void AdjustLayoutForDevice(); // Function UltCriticalDangerHUD.UltCriticalDangerHUD_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Construct(); // Function UltCriticalDangerHUD.UltCriticalDangerHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_UltCriticalDangerHUD(int32_t EntryPoint); // Function UltCriticalDangerHUD.UltCriticalDangerHUD_C.ExecuteUbergraph_UltCriticalDangerHUD // (Final|UbergraphFunction) // @ game+0x3367a20
};

