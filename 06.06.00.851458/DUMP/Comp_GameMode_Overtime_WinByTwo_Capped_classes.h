// BlueprintGeneratedClass Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C
// Size: 0x104 (Inherited: 0xf8)
struct UComp_GameMode_Overtime_WinByTwo_Capped_C : UComp_GameMode_Overtime_WinByTwo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	int32_t MaxOvertimeRoundsCapped_Default; // 0x100(0x04)

	void IsOvertimeAtMaxRounds(bool& AtMaxRounds); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.IsOvertimeAtMaxRounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void GetNumPointsToWinGame(int32_t& NumPoints); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.GetNumPointsToWinGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void HasTeamWonOvertime(struct UBaseTeamComponent* Team, bool& HasTeamWon); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.HasTeamWonOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void PlayOvertimeAnnouncementVO(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.PlayOvertimeAnnouncementVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo_Capped(int32_t EntryPoint); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo_Capped // (Final|UbergraphFunction) // @ game+0x337bc90
};

