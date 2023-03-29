// BlueprintGeneratedClass Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C
// Size: 0x119 (Inherited: 0xf4)
struct UComp_MatchResults_Bomb_C : UBaseMatchResults_C {
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FName BombDefusedEventType; // 0x100(0x0c)
	struct FName BombPlantedEventType; // 0x10c(0x0c)
	bool ShouldSendPlayerLocations; // 0x118(0x01)

	void AddBombPlantedEvent(struct FVector Plant Location, struct AShooterCharacter* Planter, enum class BombSiteEnum Plant Site); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.AddBombPlantedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RegisterBombPlantedEvent(); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.RegisterBombPlantedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddBombDefusedEvent(struct AShooterCharacter* Defuser); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.AddBombDefusedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RegisterBombDefusedEvent(); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.RegisterBombDefusedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_MatchResults_Bomb(int32_t EntryPoint); // Function Comp_MatchResults_Bomb.Comp_MatchResults_Bomb_C.ExecuteUbergraph_Comp_MatchResults_Bomb // (Final|UbergraphFunction) // @ game+0x337bc90
};

