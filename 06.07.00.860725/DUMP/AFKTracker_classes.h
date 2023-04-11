// BlueprintGeneratedClass AFKTracker.AFKTracker_C
// Size: 0x460 (Inherited: 0x450)
struct AAFKTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	int32_t NumAFKRounds; // 0x458(0x04)
	int32_t NumStayedInSpawnRounds; // 0x45c(0x04)

	float CalculateFactorForPlatform(); // Function AFKTracker.AFKTracker_C.CalculateFactorForPlatform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function AFKTracker.AFKTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BeginTracking(); // Function AFKTracker.AFKTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function AFKTracker.AFKTracker_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_AFKTracker(int32_t EntryPoint); // Function AFKTracker.AFKTracker_C.ExecuteUbergraph_AFKTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

