// BlueprintGeneratedClass EnemySpottedVOComponent.EnemySpottedVOComponent_C
// Size: 0x24c (Inherited: 0xe8)
struct UEnemySpottedVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct AActor*> ; // 0xf0(0x10)
	struct TMap<struct AActor*, enum class ECalloutSuperRegion> ; // 0x100(0x50)
	bool ; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float ; // 0x154(0x04)
	float ; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UShooterCharacterVisibilityComponent* VisibilityComponent; // 0x160(0x08)
	struct AShooterCharacter* ; // 0x168(0x08)
	float ; // 0x170(0x04)
	float ; // 0x174(0x04)
	struct FVector ; // 0x178(0x0c)
	int32_t ; // 0x184(0x04)
	enum class ECalloutSuperRegion ; // 0x188(0x01)
	bool ; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct TMap<enum class ECalloutSuperRegion, int32_t> ; // 0x190(0x50)
	struct TMap<enum class ECalloutSuperRegion, float> ; // 0x1e0(0x50)
	struct FText CharacterName; // 0x230(0x18)
	int32_t ; // 0x248(0x04)

	void (enum class ECalloutSuperRegion& SuperRegion); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	bool (); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d60
	void (enum class ECalloutSuperRegion , bool , struct FText& ); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void CleanupForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct AActor* Enemy); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OnOwnerExitedTeamSight(struct AActor* ActorThatExitedTeamSight); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerExitedTeamSight // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void InitializeForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UCharacterHandle* CharacterHandle); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void OneTimeInitialization(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
};

