// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// Size: 0xab8 (Inherited: 0x9a0)
struct ABasePlayerState_C : AShooterPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UComp_PlayerState_DownedState_C* Comp_PlayerState_DownedState; // 0x9a8(0x08)
	struct UComp_PlayerState_TimedVO_C* Comp_PlayerState_TimedVO; // 0x9b0(0x08)
	struct UPlayerSprayComponent_C* PlayerSprayComponent; // 0x9b8(0x08)
	struct UPlayerScoreCombatTrackerComponent_C* PlayerScoreCombatTrackerComponent; // 0x9c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x9c8(0x08)
	struct FMulticastInlineDelegate OnUltActiveChanged; // 0x9d0(0x10)
	bool UltActive; // 0x9e0(0x01)
	char pad_9E1[0x7]; // 0x9e1(0x07)
	struct FMulticastInlineDelegate intentionUpdated; // 0x9e8(0x10)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x9f8(0xb8)
	struct AActor* LastUsedSpawnPoint; // 0xab0(0x08)

	void PopulateParticipantMatchResults(struct FParticipantMatchResults& OutParticpantMatchResults); // Function BasePlayerState.BasePlayerState_C.PopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	bool ShouldPopulateParticipantMatchResults(); // Function BasePlayerState.BasePlayerState_C.ShouldPopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void AuthSetUltActive(bool UltActive); // Function BasePlayerState.BasePlayerState_C.AuthSetUltActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnRep_UltActive(); // Function BasePlayerState.BasePlayerState_C.OnRep_UltActive // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetUltActive(bool& UltActivated); // Function BasePlayerState.BasePlayerState_C.GetUltActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void OnMakeGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest); // Function BasePlayerState.BasePlayerState_C.OnMakeGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnFulfillGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer); // Function BasePlayerState.BasePlayerState_C.OnFulfillGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnPlayerConnectionStatusChanged_2(struct AAresPlayerStateBase* Player, enum class EConnectionStatus OldStatus, enum class EConnectionStatus NewStatus); // Function BasePlayerState.BasePlayerState_C.OnPlayerConnectionStatusChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BasePlayerState(int32_t EntryPoint); // Function BasePlayerState.BasePlayerState_C.ExecuteUbergraph_BasePlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
	void intentionUpdated__DelegateSignature(struct AShooterCharacter* Character, struct UStaticMeshComponent* intendedMeshComponent); // Function BasePlayerState.BasePlayerState_C.intentionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnUltActiveChanged__DelegateSignature(bool UltActive); // Function BasePlayerState.BasePlayerState_C.OnUltActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

