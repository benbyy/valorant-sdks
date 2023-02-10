// BlueprintGeneratedClass Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C
// Size: 0x168 (Inherited: 0xe8)
struct UComp_PlayerCharacter_SmokeOverlays_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AActor*, struct F> ; // 0xf0(0x50)
	struct AShooterCharacter* OwningShooterCharacter; // 0x140(0x08)
	struct UStaticMesh* ; // 0x148(0x08)
	struct UStaticMeshComponent* ; // 0x150(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x158(0x08)
	struct UMaterialInterface* ; // 0x160(0x08)

	void (); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (float& , struct FLinearColor& , struct FLinearColor& ); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool& ); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UStaticMeshComponent*& , struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* Smoke, float Alpha, struct FLinearColor , struct FLinearColor ); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* Smoke); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct AActor* DestroyedActor); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

