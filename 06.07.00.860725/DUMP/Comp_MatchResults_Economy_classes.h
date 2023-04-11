// BlueprintGeneratedClass Comp_MatchResults_Economy.Comp_MatchResults_Economy_C
// Size: 0x160 (Inherited: 0xf4)
struct UComp_MatchResults_Economy_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName RoundEconomyEventType; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TMap<struct FString, int32_t> PlayerMonies; // 0x110(0x50)

	void ExchangePlayerMoney(struct FString Source, struct FString Sink, int32_t Amount); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.ExchangePlayerMoney // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdatePlayerMoneys(); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.UpdatePlayerMoneys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AddRoundEconomyEvent(); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.AddRoundEconomyEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RegisterRoundEconomyEvent(); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.RegisterRoundEconomyEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnPhaseChange(enum class EAresGamePhase NewPhase); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.OnPhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnPlayerSpawned(struct APawn* SpawnedPawn); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnRequestFulfilled(struct AOwnerExclusivePlayerInfo* Fulfilled, struct AOwnerExclusivePlayerInfo* Fulfiller, int32_t Cost); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.OnRequestFulfilled // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnRequestRefunded(struct AOwnerExclusivePlayerInfo* Recipient, struct AOwnerExclusivePlayerInfo* Refunder, int32_t Cost); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.OnRequestRefunded // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_MatchResults_Economy(int32_t EntryPoint); // Function Comp_MatchResults_Economy.Comp_MatchResults_Economy_C.ExecuteUbergraph_Comp_MatchResults_Economy // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};

