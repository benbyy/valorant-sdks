// BlueprintGeneratedClass Comp_MatchResults_Kill.Comp_MatchResults_Kill_C
// Size: 0x118 (Inherited: 0xf4)
struct UComp_MatchResults_Kill_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName Player Kill Event Type; // 0x100(0x0c)
	bool ShouldSendPlayerLocations; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct ABaseGameState_C* BaseGameState; // 0x110(0x08)

	void RegisterPlayerKillEvent(); // Function Comp_MatchResults_Kill.Comp_MatchResults_Kill_C.RegisterPlayerKillEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddPlayerKilledEvent(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* Killed Pawn, struct UDamageResponse* DamageResponse, struct TArray<struct FAresAssist>& Assistants, struct UDamageType* DamageType); // Function Comp_MatchResults_Kill.Comp_MatchResults_Kill_C.AddPlayerKilledEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Kill.Comp_MatchResults_Kill_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_MatchResults_Kill(int32_t EntryPoint); // Function Comp_MatchResults_Kill.Comp_MatchResults_Kill_C.ExecuteUbergraph_Comp_MatchResults_Kill // (Final|UbergraphFunction) // @ game+0x337bc90
};

