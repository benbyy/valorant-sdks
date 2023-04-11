// BlueprintGeneratedClass BombGameMode.BombGameMode_C
// Size: 0xe64 (Inherited: 0xa88)
struct ABombGameMode_C : ABaseGameMode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa88(0x08)
	struct UTimeGameStateComponent* GameStateTimeoutCountdown; // 0xa90(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_TimeoutFreeze; // 0xa98(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutQueued; // 0xaa0(0x08)
	struct UTimeGameStateComponent* GameStateTimeout; // 0xaa8(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutInactive; // 0xab0(0x08)
	struct UStateMachineComponent* TimeoutStateMachine; // 0xab8(0x08)
	struct UComp_MatchResults_StayedInSpawn_C* Comp_MatchResults_StayedInSpawn; // 0xac0(0x08)
	struct UComp_BombRoundStateLog_C* Comp_BombRoundStateLog; // 0xac8(0x08)
	struct UGameStateVoteComponent_C* GameStateVoteComponent; // 0xad0(0x08)
	struct UComp_GameMode_OvertimeDrawVotes_C* Comp_GameMode_OvertimeDrawVotes; // 0xad8(0x08)
	struct UComp_GameMode_GrantPurchasables_C* Comp_GameMode_GrantPurchasables; // 0xae0(0x08)
	struct UComp_MatchResults_RoundCeremony_C* Comp_MatchResults_RoundCeremony; // 0xae8(0x08)
	struct UComp_MatchResults_PlayerScores_C* Comp_MatchResults_PlayerScores; // 0xaf0(0x08)
	struct UComp_MatchResults_Penalites_C* Comp_MatchResults_Penalites; // 0xaf8(0x08)
	struct UComp_MatchResults_Kill_C* Comp_MatchResults_Kill; // 0xb00(0x08)
	struct UComp_MatchResults_Economy_C* Comp_MatchResults_Economy; // 0xb08(0x08)
	struct UComp_MatchResults_Damage_C* Comp_MatchResults_Damage; // 0xb10(0x08)
	struct UComp_MatchResults_Bomb_C* Comp_MatchResults_Bomb; // 0xb18(0x08)
	struct UComp_MatchResults_Abilities_C* Comp_MatchResults_Abilities; // 0xb20(0x08)
	struct UTimeGameStateComponent* GameStateBuyPhase; // 0xb28(0x08)
	struct UTimeGameStateComponent* GameStateBombPlanted; // 0xb30(0x08)
	struct UBaseGameStateComponent* GameStateTeamSwitch; // 0xb38(0x08)
	struct UTimeGameStateComponent* GameStatePostRound; // 0xb40(0x08)
	struct UTimeGameStateComponent* GameStateRound; // 0xb48(0x08)
	struct FTransform BombSpawnTransform; // 0xb50(0x30)
	struct APlantedBomb_C* BombPlantedObject; // 0xb80(0x08)
	float MatchTimerWarning; // 0xb88(0x04)
	bool HasPlayedMatchTimerWarning; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	float BombPlantedMatchTimerWarning; // 0xb90(0x04)
	struct FAresGameRewardMultiplier BombPlantTeamMateMultiplier; // 0xb94(0x24)
	int32_t WinSpread; // 0xbb8(0x04)
	int32_t WinningDirection; // 0xbbc(0x04)
	struct TArray<float> CloseLossBonuses; // 0xbc0(0x10)
	struct UBaseTeamComponent* L_LosingTeam; // 0xbd0(0x08)
	float EscalatingMoney; // 0xbd8(0x04)
	float PerRoundEscalationMoney; // 0xbdc(0x04)
	struct FName L_RewardName; // 0xbe0(0x0c)
	float PerRoundEscalationEnergy; // 0xbec(0x04)
	float EscalatingEnergy; // 0xbf0(0x04)
	int32_t EscalatingWinEnergy; // 0xbf4(0x04)
	int32_t PerRoundWinEnergyEscalation; // 0xbf8(0x04)
	int32_t StartingEnergy; // 0xbfc(0x04)
	struct TArray<struct FRoundEndRewards> RoundEndRewards; // 0xc00(0x10)
	float KillMoneyEscalation; // 0xc10(0x04)
	char pad_C14[0x4]; // 0xc14(0x04)
	struct AActor* SensorTowerMarker; // 0xc18(0x08)
	int32_t UltimatePointsGrantedOnKill; // 0xc20(0x04)
	char pad_C24[0x4]; // 0xc24(0x04)
	struct TArray<struct AOwnerExclusivePlayerInfo*> RedPlayersWhoGotUltimate; // 0xc28(0x10)
	struct TArray<struct AOwnerExclusivePlayerInfo*> BluePlayersWhoGotUltimate; // 0xc38(0x10)
	int32_t UltimatePointsGrantedOnDeath; // 0xc48(0x04)
	int32_t DeadWinners; // 0xc4c(0x04)
	int32_t CloseLossKillBonus; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct TArray<struct FInsuranceRewards> InsuranceRewards; // 0xc58(0x10)
	struct FString Close Loss Reward Name; // 0xc68(0x10)
	int32_t ComputedUltimatePointsForKill; // 0xc78(0x04)
	char pad_C7C[0x4]; // 0xc7c(0x04)
	struct ABombDetonationActor_C* BombDetonationActor; // 0xc80(0x08)
	struct FMulticastInlineDelegate OnDefendersWipe; // 0xc88(0x10)
	struct FMulticastInlineDelegate OnAttackersWipe; // 0xc98(0x10)
	struct UAudBombGameModeVOComponent_C* AudBombGameModeVOComponent; // 0xca8(0x08)
	float InitialEquippableCooldownOnRoundStart; // 0xcb0(0x04)
	int32_t BombPlanterUltimatePointReward; // 0xcb4(0x04)
	int32_t BombDefuserUltimatePointReward; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct FMulticastInlineDelegate AuthSideSwitchEvent; // 0xcc0(0x10)
	float New Time Out Time; // 0xcd0(0x04)
	bool IsFirstRoundOnSide; // 0xcd4(0x01)
	bool IsGameserverLoggingEnabled; // 0xcd5(0x01)
	char pad_CD6[0x2]; // 0xcd6(0x02)
	struct UBaseAudioComponent_C* Aud_BombGameMode; // 0xcd8(0x08)
	struct TArray<struct AGameObject*> BuyDomes; // 0xce0(0x10)
	struct ABaseCeremony_C* AceCeremony; // 0xcf0(0x08)
	struct TSoftClassPtr<UObject> BasePistolClass; // 0xcf8(0x30)
	struct TArray<struct AAresItem*> DroppedBasePistols; // 0xd28(0x10)
	int32_t MaxOnGroundBasePistols; // 0xd38(0x04)
	char pad_D3C[0x4]; // 0xd3c(0x04)
	struct FClassInclusionExclusionFilter DeletableOnGroundEquippable; // 0xd40(0x50)
	struct FMulticastInlineDelegate BuyPhaseStarted; // 0xd90(0x10)
	char DefaultTickRate; // 0xda0(0x01)
	char PreRoundTickRate; // 0xda1(0x01)
	bool IsRedTeamAllAFK; // 0xda2(0x01)
	bool IsBlueTeamAllAFK; // 0xda3(0x01)
	char pad_DA4[0x4]; // 0xda4(0x04)
	struct TArray<struct AShooterPlayerState*> LightArmorGrantsForDisconnects; // 0xda8(0x10)
	struct TMap<struct UBaseTeamComponent*, int32_t> UltOrbGrantsForDisconnects; // 0xdb8(0x50)
	bool HasPendingDisconnectGrants; // 0xe08(0x01)
	bool BombPlantPhaseStarted; // 0xe09(0x01)
	bool IsStoreEnabled; // 0xe0a(0x01)
	bool ShouldSpawnBomb; // 0xe0b(0x01)
	bool ShouldTrackPistolDropsForDeletion; // 0xe0c(0x01)
	char pad_E0D[0x3]; // 0xe0d(0x03)
	float MatchTimeoutQueued; // 0xe10(0x04)
	char pad_E14[0x4]; // 0xe14(0x04)
	struct UBaseTeamComponent* LastRoundWinningTeam; // 0xe18(0x08)
	struct ABombEquippable_C* BombEquippableActor; // 0xe20(0x08)
	struct FMulticastInlineDelegate InitializeTimeoutStateMachine; // 0xe28(0x10)
	struct FMulticastInlineDelegate QueueTimeout; // 0xe38(0x10)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0xe48(0x08)
	struct FMulticastInlineDelegate CancelTimeout; // 0xe50(0x10)
	bool MatchTimeoutWasStoreEnabled; // 0xe60(0x01)
	bool NewVar_1; // 0xe61(0x01)
	bool SwitchingSide_VO; // 0xe62(0x01)
	bool MatchPoint_VO; // 0xe63(0x01)

	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BombGameMode.BombGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BombGameMode.BombGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void AuthCancelMatchTimeout(); // Function BombGameMode.BombGameMode_C.AuthCancelMatchTimeout // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BombGameMode.BombGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void GetBombGameState(struct ABombGameState_C*& BombGameState); // Function BombGameMode.BombGameMode_C.GetBombGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BombGameMode.BombGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool AuthStartMatchTimeout(float Duration, struct AShooterPlayerState* CallingPlayer); // Function BombGameMode.BombGameMode_C.AuthStartMatchTimeout // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void TriggerMatchPointVOIfNeeded(); // Function BombGameMode.BombGameMode_C.TriggerMatchPointVOIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantDeathUltimatePoints(struct AOwnerExclusivePlayerInfo* KillerInfo, struct AOwnerExclusivePlayerInfo* VictimInfo, struct UObject* VictimPawn); // Function BombGameMode.BombGameMode_C.GrantDeathUltimatePoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void IsNonBotTeam(struct TArray<struct AShooterPlayerState*>& ShooterPlayerStates, bool& Output); // Function BombGameMode.BombGameMode_C.IsNonBotTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantStartOfRoundCompensationForDisconnects(); // Function BombGameMode.BombGameMode_C.GrantStartOfRoundCompensationForDisconnects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheckAFKPlayersAndEndEarly(); // Function BombGameMode.BombGameMode_C.CheckAFKPlayersAndEndEarly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RedistributeDisconnectedMoneyForTeam(struct UBaseTeamComponent* Team); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedMoneyForTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Set Up Defuser Equippable(); // Function BombGameMode.BombGameMode_C.Set Up Defuser Equippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PerformEconomyReset(); // Function BombGameMode.BombGameMode_C.PerformEconomyReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ResetPlayerResources(struct AOwnerExclusivePlayerInfo* PlayerInfo); // Function BombGameMode.BombGameMode_C.ResetPlayerResources // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RemoveDamagedArmor(); // Function BombGameMode.BombGameMode_C.RemoveDamagedArmor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RemoveWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.RemoveWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ApplyWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.ApplyWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CleanBuyDomes(); // Function BombGameMode.BombGameMode_C.CleanBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SpawnBuyDomes(); // Function BombGameMode.BombGameMode_C.SpawnBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetRoundEndReason(enum class EBombRoundEndReason& BombRoundEndReason); // Function BombGameMode.BombGameMode_C.GetRoundEndReason // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetGameModeVOState(struct FString& RedTeamState_RoundStart, struct FString& BlueTeamState_RoundStart, struct FString& RedTeamState_BubbleDown, struct FString& BlueTeamState_BubbleDown, struct FString& RedTeamState_BubbleDown_New, struct FString& BlueTeamState_BubbleDown_New, struct TArray<struct FAkSwitch>& Attacker Bubble Down Ak Switches, struct TArray<struct FAkSwitch>& Defender BubbleDown Ak Switches); // Function BombGameMode.BombGameMode_C.GetGameModeVOState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	bool CanPlayOnKillEffects(struct AShooterCharacter* Victim); // Function BombGameMode.BombGameMode_C.CanPlayOnKillEffects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void GameserverLogMessage(struct FString Log String); // Function BombGameMode.BombGameMode_C.GameserverLogMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetTimeUntilPlantedBombExplodes(float TimeToExplode); // Function BombGameMode.BombGameMode_C.SetTimeUntilPlantedBombExplodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AdjustScoreKillStreak(struct AOwnerExclusivePlayerInfo* Killer); // Function BombGameMode.BombGameMode_C.AdjustScoreKillStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AdjustScoreForPlant(struct AShooterCharacter* Planting Character); // Function BombGameMode.BombGameMode_C.AdjustScoreForPlant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	bool IsSpawnpointValid(struct AShooterTeamStart* SpawnPoint, struct AShooterPlayerState* PlayerState); // Function BombGameMode.BombGameMode_C.IsSpawnpointValid // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void ConsumeUltimatePointsForAllPlayers(); // Function BombGameMode.BombGameMode_C.ConsumeUltimatePointsForAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantBombPlantReward(struct AShooterCharacter* Planting Character, enum class BombSiteEnum BombSite); // Function BombGameMode.BombGameMode_C.GrantBombPlantReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void PlaySideSwitchTransition(); // Function BombGameMode.BombGameMode_C.PlaySideSwitchTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthApplyMoveToGameObject(struct FVector EndPoint, float Time); // Function BombGameMode.BombGameMode_C.AuthApplyMoveToGameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBuyPhaseStarted(); // Function BombGameMode.BombGameMode_C.OnBuyPhaseStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnSideSwitch(); // Function BombGameMode.BombGameMode_C.OnSideSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandleWinningTeamRewards(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.HandleWinningTeamRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdatePerRoundEscalatingRewards(); // Function BombGameMode.BombGameMode_C.UpdatePerRoundEscalatingRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandleLosingTeamRewards(struct UBaseTeamComponent* LosingTeam); // Function BombGameMode.BombGameMode_C.HandleLosingTeamRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BombExplode_ShooterCharacters(); // Function BombGameMode.BombGameMode_C.BombExplode_ShooterCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GrantCloseLossBonus(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.GrantCloseLossBonus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BombExplode_WorldDynamic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldDynamic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BombExplode_WorldStatic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GiveUltimatePointsToLoser(struct UBaseTeamComponent* Losing Team); // Function BombGameMode.BombGameMode_C.GiveUltimatePointsToLoser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheatAutoHeal(struct AShooterPlayerController* ExecutingController); // Function BombGameMode.BombGameMode_C.CheatAutoHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameMode.BombGameMode_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthBombDefused(struct AShooterCharacter* Defuser); // Function BombGameMode.BombGameMode_C.AuthBombDefused // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombExploded(struct ABombDetonationActor_C* Detonation); // Function BombGameMode.BombGameMode_C.OnBombExploded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BombPlanted(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum Site, struct APlantedBomb_C* PlantedBomb); // Function BombGameMode.BombGameMode_C.BombPlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BombPickedUp(struct AShooterCharacter* PickupCharacter); // Function BombGameMode.BombGameMode_C.BombPickedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SetBombState(enum class EAresBombStates NewBombState); // Function BombGameMode.BombGameMode_C.SetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RoundTeardown(); // Function BombGameMode.BombGameMode_C.RoundTeardown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RoundSetup(); // Function BombGameMode.BombGameMode_C.RoundSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void InitializeTimeoutStateMachine_Event(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void TransitionToTimeout(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.TransitionToTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void QueueTimeout_Event(float Duration); // Function BombGameMode.BombGameMode_C.QueueTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Exit Timeout State(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.Exit Timeout State // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CancelTimeout_Event(); // Function BombGameMode.BombGameMode_C.CancelTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void Play Three Second Countdown Events(); // Function BombGameMode.BombGameMode_C.Play Three Second Countdown Events // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function BombGameMode.BombGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void OnGameRestart_Event_1(struct UBaseGameStateComponent* CurrentState); // Function BombGameMode.BombGameMode_C.OnGameRestart_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnDefendersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnAttackersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnTimeout_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void TurnOffBuying(); // Function BombGameMode.BombGameMode_C.TurnOffBuying // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GoingToPreGame(); // Function BombGameMode.BombGameMode_C.GoingToPreGame // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnAuthTookDamage_GameStateRound(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function BombGameMode.BombGameMode_C.OnAuthTookDamage_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnDefendersWipe_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnTimeout_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnPlayerKilled_Event_1(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameMode.BombGameMode_C.OnPlayerKilled_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandlePlayerSpawnInRound(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.HandlePlayerSpawnInRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BombGameMode.BombGameMode_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void FiveSecondsBeforeSetupEnds(); // Function BombGameMode.BombGameMode_C.FiveSecondsBeforeSetupEnds // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnter (GameStateBuyPhase)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnter (GameStateRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateExit (GameStateRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnter (GameStatePostRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateExit (GameStatePostRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnter (GameStateTeamSwitch)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateExit (GameStateTeamSwitch)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateEnter (GameStateBombPlanted)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateExit (GameStateBombPlanted)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateTick (GameStateBuyPhase)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateExit (GameStateBuyPhase)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ThreeSecCountdownEvent(); // Function BombGameMode.BombGameMode_C.ThreeSecCountdownEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnStateTick (GameStateRound)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameMode.BombGameMode_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombDefused_GameStateBombPlanted(struct AShooterCharacter* DefusingCharacter); // Function BombGameMode.BombGameMode_C.OnBombDefused_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ClearWinEvents(); // Function BombGameMode.BombGameMode_C.ClearWinEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void HandleAwayPenaltiesAndEndRound(bool PersistDuringReset); // Function BombGameMode.BombGameMode_C.HandleAwayPenaltiesAndEndRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void FinalizeEndOfGame(); // Function BombGameMode.BombGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void OnPlayerSpawned (BuyPhase)(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.OnPlayerSpawned (BuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ModifyRewards(); // Function BombGameMode.BombGameMode_C.ModifyRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3367a20
	void OnAuthWinRound(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.OnAuthWinRound // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void BroadcastErrorMessage(struct FString ErrorMessage); // Function BombGameMode.BombGameMode_C.BroadcastErrorMessage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AudSetupComponents(); // Function BombGameMode.BombGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnMatchTimerWarning(); // Function BombGameMode.BombGameMode_C.OnMatchTimerWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BeginTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.BeginTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void EndTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.EndTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthOnInventoryTransaction_Event_1(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BombGameMode.BombGameMode_C.AuthOnInventoryTransaction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void RedistributeDisconnectedPlayerMoney(); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedPlayerMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Aud On Bomb Carrier Killed(struct AShooterCharacter* OldCarrier); // Function BombGameMode.BombGameMode_C.Aud On Bomb Carrier Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheatSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Loss Streak Max); // Function BombGameMode.BombGameMode_C.CheatSetLossStreakSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheatSetGameReward(struct FName RewardName, int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetGameReward // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheatSetPlantReward(int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetPlantReward // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_BombGameMode(int32_t EntryPoint); // Function BombGameMode.BombGameMode_C.ExecuteUbergraph_BombGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
	void CancelTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.CancelTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void QueueTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.QueueTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void InitializeTimeoutStateMachine__DelegateSignature(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void BuyPhaseStarted__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BuyPhaseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthSideSwitchEvent__DelegateSignature(); // Function BombGameMode.BombGameMode_C.AuthSideSwitchEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnAttackersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnDefendersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

