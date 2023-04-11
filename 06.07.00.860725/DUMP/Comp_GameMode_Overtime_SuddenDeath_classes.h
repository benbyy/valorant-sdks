// BlueprintGeneratedClass Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C
// Size: 0xf8 (Inherited: 0xf0)
struct UComp_GameMode_Overtime_SuddenDeath_C : UComp_GameMode_Overtime_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)

	void PerformRoundInitialization(struct ABombGameMode_C* BombGameMode); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.PerformRoundInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetOvertimeRoundNumber(int32_t& RoundNumber); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.GetOvertimeRoundNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetOvertimePeriod(int32_t& OTPeriod); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.GetOvertimePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void HasTeamWonOvertime(struct UBaseTeamComponent* Team, bool& HasTeamWon); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.HasTeamWonOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void AuthSetupOvertimeRound(); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.AuthSetupOvertimeRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PlayOvertimeAnnouncementVO(); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.PlayOvertimeAnnouncementVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_GameMode_Overtime_SuddenDeath(int32_t EntryPoint); // Function Comp_GameMode_Overtime_SuddenDeath.Comp_GameMode_Overtime_SuddenDeath_C.ExecuteUbergraph_Comp_GameMode_Overtime_SuddenDeath // (Final|UbergraphFunction) // @ game+0x3367a20
};

