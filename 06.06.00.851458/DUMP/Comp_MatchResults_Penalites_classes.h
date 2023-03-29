// BlueprintGeneratedClass Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C
// Size: 0x10d (Inherited: 0xf4)
struct UComp_MatchResults_Penalites_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName PenaltyRoundEventType; // 0x100(0x0c)
	bool CheckAtRoundStart; // 0x10c(0x01)

	void AddPenaltyGameEndEvents(); // Function Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C.AddPenaltyGameEndEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddPenaltyRoundEvents(int32_t RoundNum); // Function Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C.AddPenaltyRoundEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RegisterPenaltyRoundEvent(); // Function Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C.RegisterPenaltyRoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_MatchResults_Penalites(int32_t EntryPoint); // Function Comp_MatchResults_Penalites.Comp_MatchResults_Penalites_C.ExecuteUbergraph_Comp_MatchResults_Penalites // (Final|UbergraphFunction) // @ game+0x337bc90
};

