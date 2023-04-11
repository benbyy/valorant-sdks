// BlueprintGeneratedClass GameStateVoteComponent.GameStateVoteComponent_C
// Size: 0x1e8 (Inherited: 0x1d0)
struct UGameStateVoteComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct AGameplayVoteBase_C* QueuedVote; // 0x1d8(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1e0(0x08)

	void Queue Phased Vote(struct AGameplayVoteBase_C* QueuedVote); // Function GameStateVoteComponent.GameStateVoteComponent_C.Queue Phased Vote // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnCurrentStateUpdated_Event_1(struct AGameplayVote* Vote, enum class EVoteState NewState); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnCurrentStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function GameStateVoteComponent.GameStateVoteComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnterImplementation(); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void OnStateExitImplementation(); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_GameStateVoteComponent(int32_t EntryPoint); // Function GameStateVoteComponent.GameStateVoteComponent_C.ExecuteUbergraph_GameStateVoteComponent // (Final|UbergraphFunction) // @ game+0x3367a20
};

