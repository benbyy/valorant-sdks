// BlueprintGeneratedClass GameplayVoteBase.GameplayVoteBase_C
// Size: 0x551 (Inherited: 0x538)
struct AGameplayVoteBase_C : AGameplayVote {
	struct FText YesVotesNeededText; // 0x538(0x18)
	enum class Enum_Vote_DisplayMode DisplayMode; // 0x550(0x01)

	void GetVoteResult(bool& HasVoteFinished, struct UGameplayVoteOptionComponent*& SelectedOption); // Function GameplayVoteBase.GameplayVoteBase_C.GetVoteResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthNotifyAllParticipants(struct FText NotificationText); // Function GameplayVoteBase.GameplayVoteBase_C.AuthNotifyAllParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState); // Function GameplayVoteBase.GameplayVoteBase_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
};

