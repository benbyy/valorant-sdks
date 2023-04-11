// BlueprintGeneratedClass BaseTwoTeamGameState.BaseTwoTeamGameState_C
// Size: 0xdc0 (Inherited: 0xd89)
struct ABaseTwoTeamGameState_C : ABaseGameState_C {
	char pad_D89[0x7]; // 0xd89(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd90(0x08)
	struct UBombTeamComponent* BlueTeam; // 0xd98(0x08)
	struct UBombTeamComponent* RedTeam; // 0xda0(0x08)
	int32_t CurrentStage; // 0xda8(0x04)
	char pad_DAC[0x4]; // 0xdac(0x04)
	struct FMulticastInlineDelegate OnStageAdvanced; // 0xdb0(0x10)

	void OnRep_CurrentStage(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.OnRep_CurrentStage // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool TeamsHaveSwitched(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.TeamsHaveSwitched // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_BaseTwoTeamGameState(int32_t EntryPoint); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ExecuteUbergraph_BaseTwoTeamGameState // (Final|UbergraphFunction) // @ game+0x3367a20
	void OnStageAdvanced__DelegateSignature(int32_t NewStage); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.OnStageAdvanced__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

