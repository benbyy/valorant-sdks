// BlueprintGeneratedClass Interface_Widget_Timer.Interface_Widget_Timer_C
// Size: 0x30 (Inherited: 0x30)
struct UInterface_Widget_Timer_C : UInterface {

	void UnpauseAutomaticTimer(); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.UnpauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PauseAutomaticTimer(); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.PauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetTimerText(struct FText TimerText); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetupAutomaticTimer(float MaxTime, float CurrentTime, bool AutomaticallyRemove, struct FText TimerText, bool ShowExpireWarning, bool FillBar); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.SetupAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdateTimerPercent(float NewPercent); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

