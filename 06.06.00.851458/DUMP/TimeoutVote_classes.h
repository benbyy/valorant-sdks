// BlueprintGeneratedClass TimeoutVote.TimeoutVote_C
// Size: 0x570 (Inherited: 0x551)
struct ATimeoutVote_C : AGameplayVoteBase_C {
	char pad_551[0x7]; // 0x551(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UTimeoutYesOption_C* TimeoutYesOption; // 0x560(0x08)
	struct UTimeoutNoOption_C* TimeoutNoOption; // 0x568(0x08)

	void GetTimeoutGamePhaseText(int32_t Round, struct FText& Game Mode); // Function TimeoutVote.TimeoutVote_C.GetTimeoutGamePhaseText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void GetRoundHalf(int32_t Round, int32_t& half); // Function TimeoutVote.TimeoutVote_C.GetRoundHalf // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void AuthIsTimeoutAvailableForPlayer(struct AShooterGameState* Game State, struct UBaseTeamComponent* Team, bool& Timeout Is Available, struct FText& Reason); // Function TimeoutVote.TimeoutVote_C.AuthIsTimeoutAvailableForPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function TimeoutVote.TimeoutVote_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState); // Function TimeoutVote.TimeoutVote_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void AuthOnStarted(); // Function TimeoutVote.TimeoutVote_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_TimeoutVote(int32_t EntryPoint); // Function TimeoutVote.TimeoutVote_C.ExecuteUbergraph_TimeoutVote // (Final|UbergraphFunction) // @ game+0x337bc90
};

