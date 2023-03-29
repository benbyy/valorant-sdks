// BlueprintGeneratedClass BombGameMode.BombGameMode_C
// Size: 0xe74 (Inherited: 0xa90)
struct ABombGameMode_C : ABaseGameMode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct UTimeGameStateComponent* GameStateTimeoutCountdown; // 0xa98(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_TimeoutFreeze; // 0xaa0(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutQueued; // 0xaa8(0x08)
	struct UTimeGameStateComponent* GameStateTimeout; // 0xab0(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutInactive; // 0xab8(0x08)
	struct UStateMachineComponent* TimeoutStateMachine; // 0xac0(0x08)
	struct UComp_MatchResults_StayedInSpawn_C* Comp_MatchResults_StayedInSpawn; // 0xac8(0x08)
	struct UComp_BombRoundStateLog_C* Comp_BombRoundStateLog; // 0xad0(0x08)
	struct UGameStateVoteComponent_C* GameStateVoteComponent; // 0xad8(0x08)
	struct UComp_GameMode_OvertimeDrawVotes_C* Comp_GameMode_OvertimeDrawVotes; // 0xae0(0x08)
	struct UComp_GameMode_GrantPurchasables_C* Comp_GameMode_GrantPurchasables; // 0xae8(0x08)
	struct UComp_MatchResults_RoundCeremony_C* Comp_MatchResults_RoundCeremony; // 0xaf0(0x08)
	struct UComp_MatchResults_PlayerScores_C* Comp_MatchResults_PlayerScores; // 0xaf8(0x08)
	struct UComp_MatchResults_Penalites_C* Comp_MatchResults_Penalites; // 0xb00(0x08)
	struct UComp_MatchResults_Kill_C* Comp_MatchResults_Kill; // 0xb08(0x08)
	struct UComp_MatchResults_Economy_C* Comp_MatchResults_Economy; // 0xb10(0x08)
	struct UComp_MatchResults_Damage_C* Comp_MatchResults_Damage; // 0xb18(0x08)
	struct UComp_MatchResults_Bomb_C* Comp_MatchResults_Bomb; // 0xb20(0x08)
	struct UComp_MatchResults_Abilities_C* Comp_MatchResults_Abilities; // 0xb28(0x08)
	struct UTimeGameStateComponent* GameStateBuyPhase; // 0xb30(0x08)
	struct UTimeGameStateComponent* GameStateBombPlanted; // 0xb38(0x08)
	struct UBaseGameStateComponent* GameStateTeamSwitch; // 0xb40(0x08)
	struct UTimeGameStateComponent* GameStatePostRound; // 0xb48(0x08)
	struct UTimeGameStateComponent* GameStateRound; // 0xb50(0x08)
	char pad_B58[0x8]; // 0xb58(0x08)
	struct FTransform BombSpawnTransform; // 0xb60(0x30)
	struct APlantedBomb_C* BombPlantedObject; // 0xb90(0x08)
	float MatchTimerWarning; // 0xb98(0x04)
	bool HasPlayedMatchTimerWarning; // 0xb9c(0x01)
	char pad_B9D[0x3]; // 0xb9d(0x03)
	float BombPlantedMatchTimerWarning; // 0xba0(0x04)
	struct FAresGameRewardMultiplier BombPlantTeamMateMultiplier; // 0xba4(0x24)
	int32_t WinSpread; // 0xbc8(0x04)
	int32_t WinningDirection; // 0xbcc(0x04)
	struct TArray<float> CloseLossBonuses; // 0xbd0(0x10)
	struct UBaseTeamComponent* L_LosingTeam; // 0xbe0(0x08)
	float EscalatingMoney; // 0xbe8(0x04)
	float PerRoundEscalationMoney; // 0xbec(0x04)
	struct FName L_RewardName; // 0xbf0(0x0c)
	float PerRoundEscalationEnergy; // 0xbfc(0x04)
	float EscalatingEnergy; // 0xc00(0x04)
	int32_t EscalatingWinEnergy; // 0xc04(0x04)
	int32_t PerRoundWinEnergyEscalation; // 0xc08(0x04)
	int32_t StartingEnergy; // 0xc0c(0x04)
	struct TArray<struct FRoundEndRewards> RoundEndRewards; // 0xc10(0x10)
	float KillMoneyEscalation; // 0xc20(0x04)
	char pad_C24[0x4]; // 0xc24(0x04)
	struct AActor* SensorTowerMarker; // 0xc28(0x08)
	int32_t UltimatePointsGrantedOnKill; // 0xc30(0x04)
	char pad_C34[0x4]; // 0xc34(0x04)
	struct TArray<struct AOwnerExclusivePlayerInfo*> RedPlayersWhoGotUltimate; // 0xc38(0x10)
	struct TArray<struct AOwnerExclusivePlayerInfo*> BluePlayersWhoGotUltimate; // 0xc48(0x10)
	int32_t UltimatePointsGrantedOnDeath; // 0xc58(0x04)
	int32_t DeadWinners; // 0xc5c(0x04)
	int32_t CloseLossKillBonus; // 0xc60(0x04)
	char pad_C64[0x4]; // 0xc64(0x04)
	struct TArray<struct FInsuranceRewards> InsuranceRewards; // 0xc68(0x10)
	struct FString Close Loss Reward Name; // 0xc78(0x10)
	int32_t ComputedUltimatePointsForKill; // 0xc88(0x04)
	char pad_C8C[0x4]; // 0xc8c(0x04)
	struct ABombDetonationActor_C* BombDetonationActor; // 0xc90(0x08)
	struct FMulticastInlineDelegate OnDefendersWipe; // 0xc98(0x10)
	struct FMulticastInlineDelegate OnAttackersWipe; // 0xca8(0x10)
	struct UAudBombGameModeVOComponent_C* AudBombGameModeVOComponent; // 0xcb8(0x08)
	float InitialEquippableCooldownOnRoundStart; // 0xcc0(0x04)
	int32_t BombPlanterUltimatePointReward; // 0xcc4(0x04)
	int32_t BombDefuserUltimatePointReward; // 0xcc8(0x04)
	char pad_CCC[0x4]; // 0xccc(0x04)
	struct FMulticastInlineDelegate AuthSideSwitchEvent; // 0xcd0(0x10)
	float New Time Out Time; // 0xce0(0x04)
	bool IsFirstRoundOnSide; // 0xce4(0x01)
	bool IsGameserverLoggingEnabled; // 0xce5(0x01)
	char pad_CE6[0x2]; // 0xce6(0x02)
	struct UBaseAudioComponent_C* Aud_BombGameMode; // 0xce8(0x08)
	struct TArray<struct AGameObject*> BuyDomes; // 0xcf0(0x10)
	struct ABaseCeremony_C* AceCeremony; // 0xd00(0x08)
	struct TSoftClassPtr<UObject> BasePistolClass; // 0xd08(0x30)
	struct TArray<struct AAresItem*> DroppedBasePistols; // 0xd38(0x10)
	int32_t MaxOnGroundBasePistols; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct FClassInclusionExclusionFilter DeletableOnGroundEquippable; // 0xd50(0x50)
	struct FMulticastInlineDelegate BuyPhaseStarted; // 0xda0(0x10)
	char DefaultTickRate; // 0xdb0(0x01)
	char PreRoundTickRate; // 0xdb1(0x01)
	bool IsRedTeamAllAFK; // 0xdb2(0x01)
	bool IsBlueTeamAllAFK; // 0xdb3(0x01)
	char pad_DB4[0x4]; // 0xdb4(0x04)
	struct TArray<struct AShooterPlayerState*> LightArmorGrantsForDisconnects; // 0xdb8(0x10)
	struct TMap<struct UBaseTeamComponent*, int32_t> UltOrbGrantsForDisconnects; // 0xdc8(0x50)
	bool HasPendingDisconnectGrants; // 0xe18(0x01)
	bool BombPlantPhaseStarted; // 0xe19(0x01)
	bool IsStoreEnabled; // 0xe1a(0x01)
	bool ShouldSpawnBomb; // 0xe1b(0x01)
	bool ShouldTrackPistolDropsForDeletion; // 0xe1c(0x01)
	char pad_E1D[0x3]; // 0xe1d(0x03)
	float MatchTimeoutQueued; // 0xe20(0x04)
	char pad_E24[0x4]; // 0xe24(0x04)
	struct UBaseTeamComponent* LastRoundWinningTeam; // 0xe28(0x08)
	struct ABombEquippable_C* BombEquippableActor; // 0xe30(0x08)
	struct FMulticastInlineDelegate InitializeTimeoutStateMachine; // 0xe38(0x10)
	struct FMulticastInlineDelegate QueueTimeout; // 0xe48(0x10)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0xe58(0x08)
	struct FMulticastInlineDelegate CancelTimeout; // 0xe60(0x10)
	bool MatchTimeoutWasStoreEnabled; // 0xe70(0x01)
	bool NewVar_1; // 0xe71(0x01)
	bool SwitchingSide_VO; // 0xe72(0x01)
	bool MatchPoint_VO; // 0xe73(0x01)

	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BombGameMode.BombGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BombGameMode.BombGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void AuthCancelMatchTimeout(); // Function BombGameMode.BombGameMode_C.AuthCancelMatchTimeout // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BombGameMode.BombGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void GetBombGameState(struct ABombGameState_C*& BombGameState); // Function BombGameMode.BombGameMode_C.GetBombGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BombGameMode.BombGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool AuthStartMatchTimeout(float Duration, struct AShooterPlayerState* CallingPlayer); // Function BombGameMode.BombGameMode_C.AuthStartMatchTimeout // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void TriggerMatchPointVOIfNeeded(); // Function BombGameMode.BombGameMode_C.TriggerMatchPointVOIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantDeathUltimatePoints(struct AOwnerExclusivePlayerInfo* KillerInfo, struct AOwnerExclusivePlayerInfo* VictimInfo, struct UObject* VictimPawn); // Function BombGameMode.BombGameMode_C.GrantDeathUltimatePoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void IsNonBotTeam(struct TArray<struct AShooterPlayerState*>& ShooterPlayerStates, bool& Output); // Function BombGameMode.BombGameMode_C.IsNonBotTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantStartOfRoundCompensationForDisconnects(); // Function BombGameMode.BombGameMode_C.GrantStartOfRoundCompensationForDisconnects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheckAFKPlayersAndEndEarly(); // Function BombGameMode.BombGameMode_C.CheckAFKPlayersAndEndEarly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RedistributeDisconnectedMoneyForTeam(struct UBaseTeamComponent* Team); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedMoneyForTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Set Up Defuser Equippable(); // Function BombGameMode.BombGameMode_C.Set Up Defuser Equippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void PerformEconomyReset(); // Function BombGameMode.BombGameMode_C.PerformEconomyReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ResetPlayerResources(struct AOwnerExclusivePlayerInfo* PlayerInfo); // Function BombGameMode.BombGameMode_C.ResetPlayerResources // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RemoveDamagedArmor(); // Function BombGameMode.BombGameMode_C.RemoveDamagedArmor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RemoveWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.RemoveWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ApplyWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.ApplyWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CleanBuyDomes(); // Function BombGameMode.BombGameMode_C.CleanBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SpawnBuyDomes(); // Function BombGameMode.BombGameMode_C.SpawnBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetRoundEndReason(enum class EBombRoundEndReason& BombRoundEndReason); // Function BombGameMode.BombGameMode_C.GetRoundEndReason // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetGameModeVOState(struct FString& RedTeamState_RoundStart, struct FString& BlueTeamState_RoundStart, struct FString& RedTeamState_BubbleDown, struct FString& BlueTeamState_BubbleDown, struct FString& RedTeamState_BubbleDown_New, struct FString& BlueTeamState_BubbleDown_New, struct TArray<struct FAkSwitch>& Attacker Bubble Down Ak Switches, struct TArray<struct FAkSwitch>& Defender BubbleDown Ak Switches); // Function BombGameMode.BombGameMode_C.GetGameModeVOState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	bool CanPlayOnKillEffects(struct AShooterCharacter* Victim); // Function BombGameMode.BombGameMode_C.CanPlayOnKillEffects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void GameserverLogMessage(struct FString Log String); // Function BombGameMode.BombGameMode_C.GameserverLogMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SetTimeUntilPlantedBombExplodes(float TimeToExplode); // Function BombGameMode.BombGameMode_C.SetTimeUntilPlantedBombExplodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AdjustScoreKillStreak(struct AOwnerExclusivePlayerInfo* Killer); // Function BombGameMode.BombGameMode_C.AdjustScoreKillStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AdjustScoreForPlant(struct AShooterCharacter* Planting Character); // Function BombGameMode.BombGameMode_C.AdjustScoreForPlant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool IsSpawnpointValid(struct AShooterTeamStart* SpawnPoint, struct AShooterPlayerState* PlayerState); // Function BombGameMode.BombGameMode_C.IsSpawnpointValid // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x337bc90
	void ConsumeUltimatePointsForAllPlayers(); // Function BombGameMode.BombGameMode_C.ConsumeUltimatePointsForAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantBombPlantReward(struct AShooterCharacter* Planting Character, enum class BombSiteEnum BombSite); // Function BombGameMode.BombGameMode_C.GrantBombPlantReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void PlaySideSwitchTransition(); // Function BombGameMode.BombGameMode_C.PlaySideSwitchTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AuthApplyMoveToGameObject(struct FVector EndPoint, float Time); // Function BombGameMode.BombGameMode_C.AuthApplyMoveToGameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBuyPhaseStarted(); // Function BombGameMode.BombGameMode_C.OnBuyPhaseStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnSideSwitch(); // Function BombGameMode.BombGameMode_C.OnSideSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void HandleWinningTeamRewards(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.HandleWinningTeamRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void UpdatePerRoundEscalatingRewards(); // Function BombGameMode.BombGameMode_C.UpdatePerRoundEscalatingRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void HandleLosingTeamRewards(struct UBaseTeamComponent* LosingTeam); // Function BombGameMode.BombGameMode_C.HandleLosingTeamRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BombExplode_ShooterCharacters(); // Function BombGameMode.BombGameMode_C.BombExplode_ShooterCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GrantCloseLossBonus(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.GrantCloseLossBonus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BombExplode_WorldDynamic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldDynamic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BombExplode_WorldStatic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GiveUltimatePointsToLoser(struct UBaseTeamComponent* Losing Team); // Function BombGameMode.BombGameMode_C.GiveUltimatePointsToLoser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheatAutoHeal(struct AShooterPlayerController* ExecutingController); // Function BombGameMode.BombGameMode_C.CheatAutoHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameMode.BombGameMode_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AuthBombDefused(struct AShooterCharacter* Defuser); // Function BombGameMode.BombGameMode_C.AuthBombDefused // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombExploded(struct ABombDetonationActor_C* Detonation); // Function BombGameMode.BombGameMode_C.OnBombExploded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BombPlanted(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum Site, struct APlantedBomb_C* PlantedBomb); // Function BombGameMode.BombGameMode_C.BombPlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BombPickedUp(struct AShooterCharacter* PickupCharacter); // Function BombGameMode.BombGameMode_C.BombPickedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SetBombState(enum class EAresBombStates NewBombState); // Function BombGameMode.BombGameMode_C.SetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RoundTeardown(); // Function BombGameMode.BombGameMode_C.RoundTeardown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RoundSetup(); // Function BombGameMode.BombGameMode_C.RoundSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void InitializeTimeoutStateMachine_Event(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void TransitionToTimeout(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.TransitionToTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void QueueTimeout_Event(float Duration); // Function BombGameMode.BombGameMode_C.QueueTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Exit Timeout State(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.Exit Timeout State // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CancelTimeout_Event(); // Function BombGameMode.BombGameMode_C.CancelTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void Play Three Second Countdown Events(); // Function BombGameMode.BombGameMode_C.Play Three Second Countdown Events // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BombGameMode.BombGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void OnGameRestart_Event_1(struct UBaseGameStateComponent* CurrentState); // Function BombGameMode.BombGameMode_C.OnGameRestart_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnDefendersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAttackersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnTimeout_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void TurnOffBuying(); // Function BombGameMode.BombGameMode_C.TurnOffBuying // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GoingToPreGame(); // Function BombGameMode.BombGameMode_C.GoingToPreGame // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuthTookDamage_GameStateRound(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function BombGameMode.BombGameMode_C.OnAuthTookDamage_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnDefendersWipe_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnTimeout_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnPlayerKilled_Event_1(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameMode.BombGameMode_C.OnPlayerKilled_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void HandlePlayerSpawnInRound(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.HandlePlayerSpawnInRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BombGameMode.BombGameMode_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void FiveSecondsBeforeSetupEnds(); // Function BombGameMode.BombGameMode_C.FiveSecondsBeforeSetupEnds // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateEnter (GameStateBuyPhase)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateEnter (GameStateRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateExit (GameStateRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateEnter (GameStatePostRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateExit (GameStatePostRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateEnter (GameStateTeamSwitch)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateExit (GameStateTeamSwitch)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateEnter (GameStateBombPlanted)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateExit (GameStateBombPlanted)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateTick (GameStateBuyPhase)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateExit (GameStateBuyPhase)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ThreeSecCountdownEvent(); // Function BombGameMode.BombGameMode_C.ThreeSecCountdownEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnStateTick (GameStateRound)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameMode.BombGameMode_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombDefused_GameStateBombPlanted(struct AShooterCharacter* DefusingCharacter); // Function BombGameMode.BombGameMode_C.OnBombDefused_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ClearWinEvents(); // Function BombGameMode.BombGameMode_C.ClearWinEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void HandleAwayPenaltiesAndEndRound(bool PersistDuringReset); // Function BombGameMode.BombGameMode_C.HandleAwayPenaltiesAndEndRound // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void FinalizeEndOfGame(); // Function BombGameMode.BombGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void OnPlayerSpawned (BuyPhase)(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.OnPlayerSpawned (BuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ModifyRewards(); // Function BombGameMode.BombGameMode_C.ModifyRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void OnAuthWinRound(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.OnAuthWinRound // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void BroadcastErrorMessage(struct FString ErrorMessage); // Function BombGameMode.BombGameMode_C.BroadcastErrorMessage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AudSetupComponents(); // Function BombGameMode.BombGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnMatchTimerWarning(); // Function BombGameMode.BombGameMode_C.OnMatchTimerWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BeginTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.BeginTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void EndTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.EndTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AuthOnInventoryTransaction_Event_1(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BombGameMode.BombGameMode_C.AuthOnInventoryTransaction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RedistributeDisconnectedPlayerMoney(); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedPlayerMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud On Bomb Carrier Killed(struct AShooterCharacter* OldCarrier); // Function BombGameMode.BombGameMode_C.Aud On Bomb Carrier Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheatSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Loss Streak Max); // Function BombGameMode.BombGameMode_C.CheatSetLossStreakSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheatSetGameReward(struct FName RewardName, int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetGameReward // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheatSetPlantReward(int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetPlantReward // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BombGameMode(int32_t EntryPoint); // Function BombGameMode.BombGameMode_C.ExecuteUbergraph_BombGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
	void CancelTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.CancelTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void QueueTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.QueueTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void InitializeTimeoutStateMachine__DelegateSignature(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BuyPhaseStarted__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BuyPhaseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AuthSideSwitchEvent__DelegateSignature(); // Function BombGameMode.BombGameMode_C.AuthSideSwitchEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAttackersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnDefendersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

