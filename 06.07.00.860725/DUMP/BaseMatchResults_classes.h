// BlueprintGeneratedClass BaseMatchResults.BaseMatchResults_C
// Size: 0xf4 (Inherited: 0xe8)
struct UBaseMatchResults_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	int32_t RoundStartTime; // 0xf0(0x04)

	struct FString GetWeaponID(struct AShooterPlayerState* NewParam); // Function BaseMatchResults.BaseMatchResults_C.GetWeaponID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	struct FString GetArmor(struct AShooterPlayerState* Target); // Function BaseMatchResults.BaseMatchResults_C.GetArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetRoundTime(int32_t& RoundTime); // Function BaseMatchResults.BaseMatchResults_C.GetRoundTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void IsGunInSecondaryFireMode(struct AOwnerExclusivePlayerInfo* Killer, bool& IsSecondaryFireMode); // Function BaseMatchResults.BaseMatchResults_C.IsGunInSecondaryFireMode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetDamageInfo(struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, struct AOwnerExclusivePlayerInfo* Killer, struct FMatchResultDamageInfo& DamageInfo); // Function BaseMatchResults.BaseMatchResults_C.GetDamageInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetPlayerLocations(struct AShooterPlayerState* ExcludedPlayer, struct TArray<struct FMatchResultPlayerLocation>& Player Locations); // Function BaseMatchResults.BaseMatchResults_C.GetPlayerLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void SecondsToMillis(float InSeconds, int32_t& OutMillis); // Function BaseMatchResults.BaseMatchResults_C.SecondsToMillis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetTimeInMillis(int32_t& TimeInMilliseconds); // Function BaseMatchResults.BaseMatchResults_C.GetTimeInMillis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function BaseMatchResults.BaseMatchResults_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void PhaseChange(enum class EAresGamePhase NewPhase); // Function BaseMatchResults.BaseMatchResults_C.PhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_BaseMatchResults(int32_t EntryPoint); // Function BaseMatchResults.BaseMatchResults_C.ExecuteUbergraph_BaseMatchResults // (Final|UbergraphFunction) // @ game+0x3367a20
};

