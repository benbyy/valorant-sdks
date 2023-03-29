// BlueprintGeneratedClass Comp_MatchResults_Damage.Comp_MatchResults_Damage_C
// Size: 0x10c (Inherited: 0xf4)
struct UComp_MatchResults_Damage_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName DamageEventType; // 0x100(0x0c)

	void AddDamageEventsFromCombatReports(int32_t Round); // Function Comp_MatchResults_Damage.Comp_MatchResults_Damage_C.AddDamageEventsFromCombatReports // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RegisterDamageEvent(); // Function Comp_MatchResults_Damage.Comp_MatchResults_Damage_C.RegisterDamageEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Damage.Comp_MatchResults_Damage_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnMatchResultsCollected(); // Function Comp_MatchResults_Damage.Comp_MatchResults_Damage_C.OnMatchResultsCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_MatchResults_Damage(int32_t EntryPoint); // Function Comp_MatchResults_Damage.Comp_MatchResults_Damage_C.ExecuteUbergraph_Comp_MatchResults_Damage // (Final|UbergraphFunction) // @ game+0x337bc90
};

