// BlueprintGeneratedClass Vote_Draw_Base.Vote_Draw_Base_C
// Size: 0x578 (Inherited: 0x551)
struct AVote_Draw_Base_C : AGameplayVoteBase_C {
	char pad_551[0x7]; // 0x551(0x07)
	struct UVoteOption_Draw_DrawMatch_C* VoteOption_Draw_DrawMatch; // 0x558(0x08)
	struct UVoteOption_Draw_ContinueMatch_C* VoteOption_Draw_ContinueMatch; // 0x560(0x08)
	struct FMulticastInlineDelegate OnVotingPhaseComplete; // 0x568(0x10)

	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function Vote_Draw_Base.Vote_Draw_Base_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void OnVotingPhaseComplete__DelegateSignature(bool HasPassed); // Function Vote_Draw_Base.Vote_Draw_Base_C.OnVotingPhaseComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

