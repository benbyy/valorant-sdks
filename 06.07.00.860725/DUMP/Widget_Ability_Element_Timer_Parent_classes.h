// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C
// Size: 0x314 (Inherited: 0x2c8)
struct UWidget_Ability_Element_Timer_Parent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	bool AutomaticTimerSet; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MaxTime; // 0x2d4(0x04)
	float StartingTime; // 0x2d8(0x04)
	bool AutoRemove; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float TimeRemaining; // 0x2e0(0x04)
	bool ExpireWarningActived; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FMulticastInlineDelegate ExpireWarningActive; // 0x2e8(0x10)
	struct FMulticastInlineDelegate TimerComplete; // 0x2f8(0x10)
	bool ShowExpireWarning; // 0x308(0x01)
	bool FillBar; // 0x309(0x01)
	bool IsPausedForMatchTimeout; // 0x30a(0x01)
	bool AutomaticTimerIsPaused; // 0x30b(0x01)
	float PauseStartTime; // 0x30c(0x04)
	float TotalPauseTime; // 0x310(0x04)

	bool CheckExpiring(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.CheckExpiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void SetTimeRemaining(float TimeRemaining); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	struct FText GetTimeRemainingText(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.GetTimeRemainingText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	float GetProgressBarPercent(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.GetProgressBarPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void UpdateTimerPercent(float NewPercent); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetTimerText(struct FText TimerText); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetupAutomaticTimer(float MaxTime, float CurrentTime, bool AutomaticallyRemove, struct FText TimerText, bool ShowExpireWarning, bool FillBar); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetupAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void Destruct(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExpireWarningActivated(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExpireWarningActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnCinemtaticModeChanged(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Construct(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void Handle Timeout State Changed(enum class EAresMatchTimeoutState TimeoutState, float Duration); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Handle Timeout State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnInitialized(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void UnpauseAutomaticTimer(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.UnpauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PauseAutomaticTimer(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.PauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Widget_Ability_Element_Timer_Parent(int32_t EntryPoint); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExecuteUbergraph_Widget_Ability_Element_Timer_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
	void TimerComplete__DelegateSignature(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.TimerComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExpireWarningActive__DelegateSignature(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExpireWarningActive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

