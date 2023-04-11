// WidgetBlueprintGeneratedClass JanusLineWidget.JanusLineWidget_C
// Size: 0x340 (Inherited: 0x2c8)
struct UJanusLineWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher_1751; // 0x2d0(0x08)
	struct UTextBlock* CurrentTime; // 0x2d8(0x08)
	struct UTextBlock* CurrentTime_2; // 0x2e0(0x08)
	struct UButton* EscapeButton; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image_3; // 0x2f8(0x08)
	struct UImage* Image_158; // 0x300(0x08)
	struct UButton* PauseButton; // 0x308(0x08)
	struct UImage* PlayIcon; // 0x310(0x08)
	struct UTextBlock* ReplaySpeed; // 0x318(0x08)
	struct UTextBlock* TotalTime; // 0x320(0x08)
	struct USlider* ValueSlider; // 0x328(0x08)
	float ScrubToTime; // 0x330(0x04)
	bool bIsScrubbing; // 0x334(0x01)
	bool bHasCatchUpBegun; // 0x335(0x01)
	char pad_336[0x2]; // 0x336(0x02)
	float ScrubBufferTime; // 0x338(0x04)
	float ReplayCatchUpSpeed; // 0x33c(0x04)

	void UpdateReplaySpeedText(); // Function JanusLineWidget.JanusLineWidget_C.UpdateReplaySpeedText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdatePausePlaySwitcher(); // Function JanusLineWidget.JanusLineWidget_C.UpdatePausePlaySwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool Get_PauseButton_bIsEnabled_1(); // Function JanusLineWidget.JanusLineWidget_C.Get_PauseButton_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	struct FText GetReplaySpdText(); // Function JanusLineWidget.JanusLineWidget_C.GetReplaySpdText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	bool Get_ValueSlider_bIsEnabled_1(); // Function JanusLineWidget.JanusLineWidget_C.Get_ValueSlider_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	struct FText FloatToTimeText(float Time); // Function JanusLineWidget.JanusLineWidget_C.FloatToTimeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	struct FText GetTotalTimeText(); // Function JanusLineWidget.JanusLineWidget_C.GetTotalTimeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	struct FText GetCurrentTimeText(); // Function JanusLineWidget.JanusLineWidget_C.GetCurrentTimeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature(); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature(); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void Construct(); // Function JanusLineWidget.JanusLineWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnCinemtaticModeChanged(); // Function JanusLineWidget.JanusLineWidget_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function JanusLineWidget.JanusLineWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function JanusLineWidget.JanusLineWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_JanusLineWidget(int32_t EntryPoint); // Function JanusLineWidget.JanusLineWidget_C.ExecuteUbergraph_JanusLineWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

