// BlueprintGeneratedClass DamageParticipationOutgoing.DamageParticipationOutgoing_C
// Size: 0x45c (Inherited: 0x450)
struct ADamageParticipationOutgoing_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	float TotalDamageToEnemies; // 0x458(0x04)

	float CalculateFactor(enum class EMatchCompletionState CompletionState); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BeginTracking(); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_DamageParticipationOutgoing(int32_t EntryPoint); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.ExecuteUbergraph_DamageParticipationOutgoing // (Final|UbergraphFunction) // @ game+0x337bc90
};

