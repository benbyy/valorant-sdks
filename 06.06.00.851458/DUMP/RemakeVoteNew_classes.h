// BlueprintGeneratedClass RemakeVoteNew.RemakeVoteNew_C
// Size: 0x570 (Inherited: 0x551)
struct ARemakeVoteNew_C : AGameplayVoteBase_C {
	char pad_551[0x7]; // 0x551(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct URemakeYesOption_C* RemakeYesOption; // 0x560(0x08)
	struct URemakeNoOption_C* RemakeNoOption; // 0x568(0x08)

	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function RemakeVoteNew.RemakeVoteNew_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState); // Function RemakeVoteNew.RemakeVoteNew_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void AuthOnStarted(); // Function RemakeVoteNew.RemakeVoteNew_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_RemakeVoteNew(int32_t EntryPoint); // Function RemakeVoteNew.RemakeVoteNew_C.ExecuteUbergraph_RemakeVoteNew // (Final|UbergraphFunction) // @ game+0x337bc90
};

