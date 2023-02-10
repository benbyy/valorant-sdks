// BlueprintGeneratedClass BaseController.BaseController_C
// Size: 0xc98 (Inherited: 0xb80)
struct ABaseController_C : AShooterPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb80(0x08)
	struct UAresMovementToolingTuningComponent* ; // 0xb88(0x08)
	struct URateLimiterComponent* ; // 0xb90(0x08)
	struct URateLimiterComponent* ; // 0xb98(0x08)
	struct URateLimiterComponent* ; // 0xba0(0x08)
	struct UGameModeControllerData* GameModeControllerData; // 0xba8(0x08)
	struct UAresAimToolingTuningComponent* ; // 0xbb0(0x08)
	struct UPlayerNonverbalChatComponent_C* ; // 0xbb8(0x08)
	struct UThrottledMapPingComponent_C* ; // 0xbc0(0x08)
	struct UAud_Base_UI_Component_C* ; // 0xbc8(0x08)
	struct UAudioComponent* ; // 0xbd0(0x08)
	bool ; // 0xbd8(0x01)
	char pad_BD9[0x7]; // 0xbd9(0x07)
	struct FTimerHandle ; // 0xbe0(0x08)
	struct FMulticastInlineDelegate ; // 0xbe8(0x10)
	float ; // 0xbf8(0x04)
	bool ; // 0xbfc(0x01)
	bool ; // 0xbfd(0x01)
	bool ; // 0xbfe(0x01)
	bool ; // 0xbff(0x01)
	struct FText ; // 0xc00(0x18)
	struct FText ; // 0xc18(0x18)
	bool ; // 0xc30(0x01)
	bool ; // 0xc31(0x01)
	char pad_C32[0x2]; // 0xc32(0x02)
	float Adjustment; // 0xc34(0x04)
	struct ATextRenderActor* ; // 0xc38(0x08)
	struct FMulticastInlineDelegate ; // 0xc40(0x10)
	struct FMulticastInlineDelegate ; // 0xc50(0x10)
	enum class NonVerbalCommTypesEnum ; // 0xc60(0x01)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct FText CharacterName; // 0xc68(0x18)
	int32_t ; // 0xc80(0x04)
	bool ; // 0xc84(0x01)
	char pad_C85[0x3]; // 0xc85(0x03)
	struct FMulticastInlineDelegate ; // 0xc88(0x10)

	void (bool ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FText , struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum , struct FText& ); // Function BaseController.BaseController_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool Up, bool ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FText , struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BaseController.BaseController_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (float ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	float GetSmokeOverlay(); // Function BaseController.BaseController_C.GetSmokeOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33d1d60
	void AudSetupComponents(); // Function BaseController.BaseController_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AShooterCharacter* ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AShooterCharacter* ShooterCharacter, struct AActor* OtherActor, float& Distance); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33d1d60
	void (struct AShooterCharacter*& ); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33d1d60
	void AuthToggleAutoHeal(); // Function BaseController.BaseController_C.AuthToggleAutoHeal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct FKey Key); // Function BaseController.BaseController_C._1 // (BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function BaseController.BaseController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void NewRound(int32_t RoundNumberBeginning); // Function BaseController.BaseController_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FVector Location, bool ); // Function BaseController.BaseController_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AAresOnGroundEquippable* Equippable, struct FEffectData MarkerData); // Function BaseController.BaseController_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool Up, bool ); // Function BaseController.BaseController_C. // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnMapToggle(bool bOpen); // Function BaseController.BaseController_C.OnMapToggle // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* Orb); // Function BaseController.BaseController_C. // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(bool TransitionActive); // Function BaseController.BaseController_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct APlayerState* , struct APlayerState* , struct FText Msg); // Function BaseController.BaseController_C. // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool Visible); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool IsVisible); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveTick(float DeltaSeconds); // Function BaseController.BaseController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (bool ); // Function BaseController.BaseController_C. // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void TryInspectWeapon(); // Function BaseController.BaseController_C.TryInspectWeapon // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function BaseController.BaseController_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void (bool IsVisible); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool Open); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FVector Location, bool ); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

