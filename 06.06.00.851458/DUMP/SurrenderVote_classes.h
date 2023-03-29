// BlueprintGeneratedClass SurrenderVote.SurrenderVote_C
// Size: 0x580 (Inherited: 0x551)
struct ASurrenderVote_C : AGameplayVoteBase_C {
	char pad_551[0x7]; // 0x551(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct USurrenderYesOption_C* SurrenderYesOption; // 0x560(0x08)
	struct USurrenderNoOption_C* SurrenderNoOption; // 0x568(0x08)
	struct TArray<bool> TeamHasAttemptedSurrender; // 0x570(0x10)

	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function SurrenderVote.SurrenderVote_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState); // Function SurrenderVote.SurrenderVote_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function SurrenderVote.SurrenderVote_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void AuthOnStarted(); // Function SurrenderVote.SurrenderVote_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_SurrenderVote(int32_t EntryPoint); // Function SurrenderVote.SurrenderVote_C.ExecuteUbergraph_SurrenderVote // (Final|UbergraphFunction) // @ game+0x337bc90
};

