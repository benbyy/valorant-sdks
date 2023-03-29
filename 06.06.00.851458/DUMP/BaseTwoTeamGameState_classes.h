// BlueprintGeneratedClass BaseTwoTeamGameState.BaseTwoTeamGameState_C
// Size: 0xdc8 (Inherited: 0xd91)
struct ABaseTwoTeamGameState_C : ABaseGameState_C {
	char pad_D91[0x7]; // 0xd91(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd98(0x08)
	struct UBombTeamComponent* BlueTeam; // 0xda0(0x08)
	struct UBombTeamComponent* RedTeam; // 0xda8(0x08)
	int32_t CurrentStage; // 0xdb0(0x04)
	char pad_DB4[0x4]; // 0xdb4(0x04)
	struct FMulticastInlineDelegate OnStageAdvanced; // 0xdb8(0x10)

	void OnRep_CurrentStage(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.OnRep_CurrentStage // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool TeamsHaveSwitched(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.TeamsHaveSwitched // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BaseTwoTeamGameState(int32_t EntryPoint); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ExecuteUbergraph_BaseTwoTeamGameState // (Final|UbergraphFunction) // @ game+0x337bc90
	void OnStageAdvanced__DelegateSignature(int32_t NewStage); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.OnStageAdvanced__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

