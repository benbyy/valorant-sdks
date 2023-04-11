// BlueprintGeneratedClass GameStateSetupComponent.GameStateSetupComponent_C
// Size: 0x1e1 (Inherited: 0x1d0)
struct UGameStateSetupComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1d8(0x08)
	bool ShouldLockInLoadoutValues; // 0x1e0(0x01)

	void DestroyDisconnectedPlayerCharacters(); // Function GameStateSetupComponent.GameStateSetupComponent_C.DestroyDisconnectedPlayerCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function GameStateSetupComponent.GameStateSetupComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnStateExitImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void OnStateTickImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnterImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_GameStateSetupComponent(int32_t EntryPoint); // Function GameStateSetupComponent.GameStateSetupComponent_C.ExecuteUbergraph_GameStateSetupComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
};
