// BlueprintGeneratedClass FXC_ObserverSightLines.FXC_ObserverSightLines_C
// Size: 0x56c (Inherited: 0x540)
struct AFXC_ObserverSightLines_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UParticleSystemComponent* EndPoint; // 0x548(0x08)
	struct UParticleSystemComponent* Beam; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct FVector BeamEnd; // 0x560(0x0c)

	void LineShouldBeVisible(bool& Visible); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.LineShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveTick(float DeltaSeconds); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_ObserverSightLines(int32_t EntryPoint); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.ExecuteUbergraph_FXC_ObserverSightLines // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

