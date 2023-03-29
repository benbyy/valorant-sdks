// BlueprintGeneratedClass StayedInSpawnTracker.StayedInSpawnTracker_C
// Size: 0x460 (Inherited: 0x450)
struct AStayedInSpawnTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	int32_t NumAFKRounds; // 0x458(0x04)
	int32_t NumStayedInSpawnRounds; // 0x45c(0x04)

	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.CalculateFactor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BeginTracking(); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_StayedInSpawnTracker(int32_t EntryPoint); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.ExecuteUbergraph_StayedInSpawnTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
};

