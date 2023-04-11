// WidgetBlueprintGeneratedClass DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C
// Size: 0x38a (Inherited: 0x2c8)
struct UDirectionalIndicator_UpdateOwnerLocation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Loop; // 0x2d0(0x08)
	struct UWidgetAnimation* Outro; // 0x2d8(0x08)
	struct UWidgetAnimation* Intro; // 0x2e0(0x08)
	struct UImage* Indicator_EchoLine; // 0x2e8(0x08)
	struct UImage* Indicator_TrailLine1; // 0x2f0(0x08)
	struct UImage* Indicator_TrailLine2; // 0x2f8(0x08)
	struct UImage* IndicatorImage; // 0x300(0x08)
	struct UInvalidationBox* InvalidationBox_DirectionalIndicator_UpdateOwnerLocation; // 0x308(0x08)
	struct UOverlay* Overlay_Indicator; // 0x310(0x08)
	struct FLinearColor Color; // 0x318(0x10)
	struct FVector Location; // 0x328(0x0c)
	float DurationSeconds; // 0x334(0x04)
	float StartTime; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UCoordinatedHUDModel* HUDModel; // 0x340(0x08)
	struct FRotator ReverseDirectionRotator; // 0x348(0x0c)
	struct FVector2D Size; // 0x354(0x08)
	float RadialIndicatorDistance; // 0x35c(0x04)
	bool HideIfOffscreenSimple; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct AActor* TrackedActor; // 0x368(0x08)
	bool HadTrackedActor; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FVector LastTrackedActorLocatin; // 0x374(0x0c)
	struct FTimerHandle LoopingAnimTimer; // 0x380(0x08)
	bool Animate; // 0x388(0x01)
	bool IndicatorStopped; // 0x389(0x01)

	void GetIndicatorLocation(struct FVector& Location); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.GetIndicatorLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetMiddleOfScreen(float& X_MIddle, float& Y_Middle); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.GetMiddleOfScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void LocationProjectedIsOnScreen(struct FVector& WorldPosition, bool& ProjectedLocationIsOnScreen); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.LocationProjectedIsOnScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void Update Widget(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Update Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Construct(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3367a20
	void StopDirectionalIndicator(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.StopDirectionalIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RemoveDirectionalFromParent(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.RemoveDirectionalFromParent // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation(int32_t EntryPoint); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

