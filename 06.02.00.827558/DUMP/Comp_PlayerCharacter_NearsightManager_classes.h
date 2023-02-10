// BlueprintGeneratedClass Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C
// Size: 0x208 (Inherited: 0xe8)
struct UComp_PlayerCharacter_NearsightManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UStaticMeshComponent* ; // 0xf0(0x08)
	struct UStaticMeshComponent* ; // 0xf8(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x100(0x08)
	struct UMaterialInterface* ; // 0x108(0x08)
	struct UStaticMesh* ; // 0x110(0x08)
	struct TMap<struct AActor*, struct F> ; // 0x118(0x50)
	float ; // 0x168(0x04)
	struct FVector CameraOffset; // 0x16c(0x0c)
	struct UMaterialInterface* ; // 0x178(0x08)
	struct UMaterialInstanceDynamic* ; // 0x180(0x08)
	struct TMap<struct AActor*, float> ; // 0x188(0x50)
	struct UMaterialInstanceDynamic* ; // 0x1d8(0x08)
	struct UMaterialInterface* ; // 0x1e0(0x08)
	struct UStaticMeshComponent* ; // 0x1e8(0x08)
	struct UMaterialInstanceDynamic* ; // 0x1f0(0x08)
	struct U* ; // 0x1f8(0x08)
	struct UStaticMeshComponent* ; // 0x200(0x08)

	void (struct USceneComponent* Mesh); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct F& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct F& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* , struct AActor* , bool& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* , struct AActor* , bool& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* , struct AActor* , bool& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct F& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UMaterialInterface* MaterialTemplate, struct UStaticMeshComponent*& StaticMesh, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor*& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	bool (); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d60
	void (); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor*& , struct F& ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void InitializeForRespawn(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct AActor* DestroyedActor); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(struct AShooterCharacter* Character); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(bool ); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void CleanupForRespawn(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnPlayerViewTargetChanged_Event_1(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OnPlayerViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OneTimeInitialization(); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

