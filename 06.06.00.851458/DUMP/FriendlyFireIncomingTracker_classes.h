// BlueprintGeneratedClass FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C
// Size: 0x460 (Inherited: 0x450)
struct AFriendlyFireIncomingTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	float TotalDamageFromAllies; // 0x458(0x04)
	float DamageThreshold; // 0x45c(0x04)

	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BeginTracking(); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FriendlyFireIncomingTracker(int32_t EntryPoint); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.ExecuteUbergraph_FriendlyFireIncomingTracker // (Final|UbergraphFunction) // @ game+0x337bc90
};

