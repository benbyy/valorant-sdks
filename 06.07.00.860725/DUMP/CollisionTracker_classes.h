// BlueprintGeneratedClass CollisionTracker.CollisionTracker_C
// Size: 0x464 (Inherited: 0x450)
struct ACollisionTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x458(0x08)
	float NumTimesBlocked; // 0x460(0x04)

	void UpdateShooterCharacter(); // Function CollisionTracker.CollisionTracker_C.UpdateShooterCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandleMoveBlocked(struct FHitResult BlockingHit); // Function CollisionTracker.CollisionTracker_C.HandleMoveBlocked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetShooterCharacter(struct AShooterCharacter* NewShooterCharacter); // Function CollisionTracker.CollisionTracker_C.SetShooterCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function CollisionTracker.CollisionTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BeginTracking(); // Function CollisionTracker.CollisionTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnCharacterChanged(struct AShooterCharacter* NewValue); // Function CollisionTracker.CollisionTracker_C.OnCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_CollisionTracker(int32_t EntryPoint); // Function CollisionTracker.CollisionTracker_C.ExecuteUbergraph_CollisionTracker // (Final|UbergraphFunction) // @ game+0x3367a20
};

