// BlueprintGeneratedClass Comp_BombRoundStateLog.Comp_BombRoundStateLog_C
// Size: 0xf8 (Inherited: 0xf0)
struct UComp_BombRoundStateLog_C : URoundStateLogComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)

	struct FString AuthGetTeamLogName(struct FName RawTeamName); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.AuthGetTeamLogName // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void AuthAreSidesSwapped(bool& bOutSidesAreSwapped); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.AuthAreSidesSwapped // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnBuyPhaseStarted(); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.OnBuyPhaseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_Comp_BombRoundStateLog(int32_t EntryPoint); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.ExecuteUbergraph_Comp_BombRoundStateLog // (Final|UbergraphFunction) // @ game+0x3367a20
};

