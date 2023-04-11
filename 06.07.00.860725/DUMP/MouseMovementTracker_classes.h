// BlueprintGeneratedClass MouseMovementTracker.MouseMovementTracker_C
// Size: 0x494 (Inherited: 0x450)
struct AMouseMovementTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct FRotator PrevRotator; // 0x458(0x0c)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<float> PitchDeltas; // 0x468(0x10)
	struct TArray<float> YawDeltas; // 0x478(0x10)
	int32_t CheckCount; // 0x488(0x04)
	float PitchTotal; // 0x48c(0x04)
	float YawTotal; // 0x490(0x04)

	void CalculateSD(struct TArray<float>& Values, float Total, int32_t N, float& StandardDeviation); // Function MouseMovementTracker.MouseMovementTracker_C.CalculateSD // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void CheckCameraPosition(); // Function MouseMovementTracker.MouseMovementTracker_C.CheckCameraPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function MouseMovementTracker.MouseMovementTracker_C.CalculateFactor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BeginTracking(); // Function MouseMovementTracker.MouseMovementTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_MouseMovementTracker(int32_t EntryPoint); // Function MouseMovementTracker.MouseMovementTracker_C.ExecuteUbergraph_MouseMovementTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

