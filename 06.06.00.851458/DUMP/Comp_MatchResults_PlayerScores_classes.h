// BlueprintGeneratedClass Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C
// Size: 0x160 (Inherited: 0xf4)
struct UComp_MatchResults_PlayerScores_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName PlayerScoresEventType; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TMap<struct FString, int32_t> LastPlayerScores; // 0x110(0x50)

	void UpdateLastPlayerScores(); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.UpdateLastPlayerScores // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddPlayerScoresEvent(int32_t Round); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.AddPlayerScoresEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RegisterPlayerScoresEvent(); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.RegisterPlayerScoresEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnGameEnd(); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.OnGameEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_MatchResults_PlayerScores(int32_t EntryPoint); // Function Comp_MatchResults_PlayerScores.Comp_MatchResults_PlayerScores_C.ExecuteUbergraph_Comp_MatchResults_PlayerScores // (Final|UbergraphFunction) // @ game+0x337bc90
};

