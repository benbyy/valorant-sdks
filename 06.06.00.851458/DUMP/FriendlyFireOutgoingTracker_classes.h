// BlueprintGeneratedClass FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C
// Size: 0x460 (Inherited: 0x450)
struct AFriendlyFireOutgoingTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	float TotalDamageToAllies; // 0x458(0x04)
	float TotalDamageToEnemies; // 0x45c(0x04)

	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BeginTracking(); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FriendlyFireOutgoingTracker(int32_t EntryPoint); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.ExecuteUbergraph_FriendlyFireOutgoingTracker // (Final|UbergraphFunction) // @ game+0x337bc90
};

