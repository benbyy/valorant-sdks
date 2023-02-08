// BlueprintGeneratedClass BaseObserverController.BaseObserverController_C
// Size: 0xa5c (Inherited: 0xa38)
struct ABaseObserverController_C : AObserverPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa38(0x08)
	struct FMulticastInlineDelegate OnScoreboardUpdated; // 0xa40(0x10)
	bool IsScoreboardVisible; // 0xa50(0x01)
	char pad_A51[0x3]; // 0xa51(0x03)
	struct FColor BlueTeamColor; // 0xa54(0x04)
	struct FColor RedTeamColor; // 0xa58(0x04)

	void InpActEvt_TogglePlayerLoadoutVisibility_K2Node_InputActionEvent_1(struct FKey Key); // Function BaseObserverController.BaseObserverController_C.InpActEvt_TogglePlayerLoadoutVisibility_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x33d1d50
	void ReceiveBeginPlay(); // Function BaseObserverController.BaseObserverController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d50
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseObserverController.BaseObserverController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void OnScoreboardUpdatedEvent(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void UpdateOutlines(); // Function BaseObserverController.BaseObserverController_C.UpdateOutlines // (Event|Protected|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_BaseObserverController(int32_t EntryPoint); // Function BaseObserverController.BaseObserverController_C.ExecuteUbergraph_BaseObserverController // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d50
	void OnScoreboardUpdated__DelegateSignature(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
};

