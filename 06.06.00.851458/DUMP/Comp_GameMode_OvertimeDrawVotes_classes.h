// BlueprintGeneratedClass Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C
// Size: 0x110 (Inherited: 0xe8)
struct UComp_GameMode_OvertimeDrawVotes_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct AVote_Draw_Base_C*> VotesByOTRounds; // 0xf0(0x10)
	struct TArray<struct AVote_Draw_Base_C*> ActiveVotes; // 0x100(0x10)

	bool ShouldStartDrawVote(); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.ShouldStartDrawVote // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void IsInWinByTwoOvertime(bool& IsInWinByTwoOvertime, struct UComp_GameMode_Overtime_WinByTwo_C*& OvertimeComponent); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.IsInWinByTwoOvertime // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void InitiateDrawVotes(); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.InitiateDrawVotes // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetVoteForCurrentOT(struct AShooterPlayerState* Requester, struct UComp_GameMode_Overtime_WinByTwo_C* OvertimeComponent, struct AVote_Draw_Base_C*& Vote); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.GetVoteForCurrentOT // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool AreTeamsTied(); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.AreTeamsTied // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void AuthSideSwitchEvent_Event_1(); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.AuthSideSwitchEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_GameMode_OvertimeDrawVotes(int32_t EntryPoint); // Function Comp_GameMode_OvertimeDrawVotes.Comp_GameMode_OvertimeDrawVotes_C.ExecuteUbergraph_Comp_GameMode_OvertimeDrawVotes // (Final|UbergraphFunction) // @ game+0x337bc90
};

