// BlueprintGeneratedClass InWorldTeamVisionActor.InWorldTeamVisionActor_C
// Size: 0x428 (Inherited: 0x3d0)
struct AInWorldTeamVisionActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct UParticleSystemComponent* PingEmitter; // 0x3e0(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x3e8(0x08)
	float StateTimer; // 0x3f0(0x04)
	bool bDestroyOnEnteringCooldownState; // 0x3f4(0x01)
	enum class InWorldTeamVisionActorState CurrentState; // 0x3f5(0x01)
	bool bDisplayDebug; // 0x3f6(0x01)
	char pad_3F7[0x1]; // 0x3f7(0x01)
	struct FVector PingLocation; // 0x3f8(0x0c)
	struct FRotator pingRotation; // 0x404(0x0c)
	float enterVisibilityTime; // 0x410(0x04)
	bool onEnterShouldRenderParticle; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct TArray<float> KilledAlliesThatHadTeamSightTimeStamps; // 0x418(0x10)

	void GetTimeSinceKilledEnemySawShooterCharacter(bool& IsValid, float& TimeInSeconds); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.GetTimeSinceKilledEnemySawShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void RefreshParticleLocation(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.RefreshParticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void TickDebug(float DeltaTime); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.TickDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SetCurrentState(enum class InWorldTeamVisionActorState NewState); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.SetCurrentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RefreshParticle(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.RefreshParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ShouldRenderParticle(bool& Return); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ShouldRenderParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnShooterCharacterExitedTeamVisibility(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnShooterCharacterExitedTeamVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveDestroyed(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnShooterCharacterEnteredTeamVisibility(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnShooterCharacterEnteredTeamVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnPlayerKill(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnPlayerKill // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_InWorldTeamVisionActor(int32_t EntryPoint); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ExecuteUbergraph_InWorldTeamVisionActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

