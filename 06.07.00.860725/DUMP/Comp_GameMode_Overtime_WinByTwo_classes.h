// BlueprintGeneratedClass Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C
// Size: 0xf8 (Inherited: 0xf0)
struct UComp_GameMode_Overtime_WinByTwo_C : UComp_GameMode_Overtime_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)

	void GetOvertimeNotifyText(struct FText& NotifyText); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetOvertimeNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void PerformRoundInitialization(struct ABombGameMode_C* BombGameMode); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.PerformRoundInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetNumPointsToWinGame(int32_t& NumPoints); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetNumPointsToWinGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetOvertimeRoundNumber(int32_t& RoundNumber); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetOvertimeRoundNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetOvertimePeriod(int32_t& OTPeriod); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetOvertimePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetNumOvertimeRoundsForScoreboard(int32_t& NumRounds); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetNumOvertimeRoundsForScoreboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	int32_t GetCheatSafeRoundNumber(); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.GetCheatSafeRoundNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void HasTeamWonOvertime(struct UBaseTeamComponent* Team, bool& HasTeamWon); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.HasTeamWonOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void ShouldSwitchSides(bool& ShouldSwitchSides); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void AuthSetupOvertimeRound(); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.AuthSetupOvertimeRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PlayOvertimeAnnouncementVO(); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.PlayOvertimeAnnouncementVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo(int32_t EntryPoint); // Function Comp_GameMode_Overtime_WinByTwo.Comp_GameMode_Overtime_WinByTwo_C.ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo // (Final|UbergraphFunction) // @ game+0x3367a20
};

