// BlueprintGeneratedClass BombGameState.BombGameState_C
// Size: 0xf59 (Inherited: 0xdc0)
struct ABombGameState_C : ABaseTwoTeamGameState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdc0(0x08)
	struct URoundRestoreManagerComponent* RoundRestoreManager; // 0xdc8(0x08)
	struct UBombCinematicsManagerComponent_C* BombCinematicsManagerComponent; // 0xdd0(0x08)
	struct UComp_GameMode_Overtime_SuddenDeath_C* Comp_GameMode_Overtime_SuddenDeath; // 0xdd8(0x08)
	struct UComp_BombEvents_C* Comp_BombEvents; // 0xde0(0x08)
	struct UAnnouncerVOComponent_C* AttackerAnnouncer; // 0xde8(0x08)
	struct UAnnouncerVOComponent_C* DefenderAnnouncer; // 0xdf0(0x08)
	enum class EAresBombStates BombState; // 0xdf8(0x01)
	bool ShouldOverrideMatchTimer; // 0xdf9(0x01)
	char pad_DFA[0x6]; // 0xdfa(0x06)
	struct APlantedBomb_C* PlantedBomb; // 0xe00(0x08)
	struct FText OverrideMatchTimerText; // 0xe08(0x18)
	struct TArray<int32_t> BombRewardStacksPerSite; // 0xe20(0x10)
	struct TArray<int32_t> BombRewardPerStacks; // 0xe30(0x10)
	enum class BombSiteEnum BombSiteRewardReset; // 0xe40(0x01)
	bool ShouldResetBombSiteReward; // 0xe41(0x01)
	char pad_E42[0x2]; // 0xe42(0x02)
	int32_t LostStreakMultiplier; // 0xe44(0x04)
	int32_t CurrentLossStreak; // 0xe48(0x04)
	int32_t MaxLossStreak; // 0xe4c(0x04)
	struct UBaseTeamComponent* LossStreakTeam; // 0xe50(0x08)
	struct FMulticastInlineDelegate OnOrbPickedUp; // 0xe58(0x10)
	bool bDebugInWorldTeamVision; // 0xe68(0x01)
	bool bVerboseDebugInWorldTeamVision; // 0xe69(0x01)
	char pad_E6A[0x6]; // 0xe6a(0x06)
	struct TMap<struct AShooterCharacter*, struct AInWorldTeamVisionActor_C*> ShooterCharacterToInWorldTeamVisionActor; // 0xe70(0x50)
	struct AShooterCharacter* BombCarrier; // 0xec0(0x08)
	struct FDateTime CarrierSpottedTimestamp; // 0xec8(0x08)
	bool enableInWorldTeamVision; // 0xed0(0x01)
	char pad_ED1[0x7]; // 0xed1(0x07)
	struct FMulticastInlineDelegate EnemyEnteredVisibility; // 0xed8(0x10)
	struct FMulticastInlineDelegate EnemyExitVisibility; // 0xee8(0x10)
	struct TArray<struct ADangerCompassActor_C*> enemyLocationsToIndicate; // 0xef8(0x10)
	struct TArray<struct AShooterCharacter*> SpottedEnemies; // 0xf08(0x10)
	struct AShooterCharacter* LastKilledShooterCharacter; // 0xf18(0x08)
	struct TArray<struct AShooterCharacter*> SpottedEnemiesPlayer; // 0xf20(0x10)
	struct FMulticastInlineDelegate OnBuyPhaseUpdated; // 0xf30(0x10)
	bool IsBuyPhase; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	struct AShooterCharacter* BombDropper; // 0xf48(0x08)
	bool ShouldPlayBombCarrierEvents; // 0xf50(0x01)
	bool ShouldResetEconOnSideSwap; // 0xf51(0x01)
	char pad_F52[0x2]; // 0xf52(0x02)
	int32_t MinimumIncomeForLoss; // 0xf54(0x04)
	bool WillResetMoneyNextRound; // 0xf58(0x01)

	bool IsNextRoundOvertime(); // Function BombGameState.BombGameState_C.IsNextRoundOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void IsOnePointAwayFromMatchPoint(struct UBaseTeamComponent* Team, bool& Ret); // Function BombGameState.BombGameState_C.IsOnePointAwayFromMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void ShouldAnnouncerPlayForObserver(struct UAnnouncerVOComponent_C* Announcer Component, struct AObserverPlayerState*& Observer, bool& Should Play); // Function BombGameState.BombGameState_C.ShouldAnnouncerPlayForObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetDefuseProgress(float& CurProgress, float& MaxProgress); // Function BombGameState.BombGameState_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetPlantProgress(float& CurProgress, float& MaxProgress); // Function BombGameState.BombGameState_C.GetPlantProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetPlantInProgress(bool& InProgress); // Function BombGameState.BombGameState_C.GetPlantInProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameState.BombGameState_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ShouldPlayBombEvents(bool& ReturnVal); // Function BombGameState.BombGameState_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void Set Minimum Income Variables(int32_t MinimumIncomeForLoss, bool WillResetMoneyNextRound, int32_t IncomeForWin, int32_t IncomeForLossStreak); // Function BombGameState.BombGameState_C.Set Minimum Income Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CalculateNextRoundMinimumMoney(int32_t CurrentMoney, int32_t& MinimumMoney); // Function BombGameState.BombGameState_C.CalculateNextRoundMinimumMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void CalculateLossStreakBonusMoney(bool IsForNextRound, int32_t& Return Value); // Function BombGameState.BombGameState_C.CalculateLossStreakBonusMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void IsMinimumRoundRequirementMet(int32_t Current Round, bool& Has Played Minimum Rounds); // Function BombGameState.BombGameState_C.IsMinimumRoundRequirementMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void AuthResetCurrentLossStreak(); // Function BombGameState.BombGameState_C.AuthResetCurrentLossStreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthSetSwitchedTeamRoles(); // Function BombGameState.BombGameState_C.AuthSetSwitchedTeamRoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnRep_BombState(); // Function BombGameState.BombGameState_C.OnRep_BombState // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void MarkDroppedBombForAttackers(struct AAresOnGroundEquippable* DroppedBombActor, struct AShooterCharacter* BombDropper); // Function BombGameState.BombGameState_C.MarkDroppedBombForAttackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBuyPhaseUpdate(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheckVisibleEnemyAgainstMarkedLocations(struct AShooterCharacter* SpottedCharacter); // Function BombGameState.BombGameState_C.CheckVisibleEnemyAgainstMarkedLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ShouldSwitchSides(bool& Should Switch Sides); // Function BombGameState.BombGameState_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void IsMatchPoint(bool& Ret); // Function BombGameState.BombGameState_C.IsMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void HasTeamWon(struct UBaseTeamComponent* Team, bool& HasWon); // Function BombGameState.BombGameState_C.HasTeamWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void GetTeamByName(struct FName TeamName, struct UBaseTeamComponent*& Team); // Function BombGameState.BombGameState_C.GetTeamByName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ClearLossStreak(); // Function BombGameState.BombGameState_C.ClearLossStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetCurrentDefuser(struct AShooterCharacter*& Defuser); // Function BombGameState.BombGameState_C.GetCurrentDefuser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3367a20
	void OnUseCancelled(struct AShooterCharacter* User, enum class EUsableCancelReason Reason); // Function BombGameState.BombGameState_C.OnUseCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void CheckPlayerKill(struct AShooterCharacter* Player); // Function BombGameState.BombGameState_C.CheckPlayerKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& AnnouncerComponent); // Function BombGameState.BombGameState_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3367a20
	void CheckForLossStreaking(struct UBaseTeamComponent* Team); // Function BombGameState.BombGameState_C.CheckForLossStreaking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void FlagRewardResetForSite(enum class BombSiteEnum BombSite); // Function BombGameState.BombGameState_C.FlagRewardResetForSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GetBombRewardForSite(enum class BombSiteEnum BombSite, int32_t& BombReward, bool& IsValid, bool& IsMax); // Function BombGameState.BombGameState_C.GetBombRewardForSite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void UpdateBombRewardStacks(); // Function BombGameState.BombGameState_C.UpdateBombRewardStacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void InitializeBombRewardStacks(); // Function BombGameState.BombGameState_C.InitializeBombRewardStacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	int32_t GetPreRoundAddTime(int32_t RoundNumberIn); // Function BombGameState.BombGameState_C.GetPreRoundAddTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
	void SetOverrideMatchTimer(bool ShouldOverride, struct FText OverrideText); // Function BombGameState.BombGameState_C.SetOverrideMatchTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void TryOverrideMatchTimerText(bool& ShouldOverride, struct FText& OverrideText); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void TryOverrideMatchTimerColor(bool& ShouldOverride, struct FLinearColor& OverrideColor); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AuthSetBombState(enum class EAresBombStates NewState); // Function BombGameState.BombGameState_C.AuthSetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ClientRoundStart(); // Function BombGameState.BombGameState_C.ClientRoundStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ReceiveBeginPlay(); // Function BombGameState.BombGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void Auth Side Switch Event(); // Function BombGameState.BombGameState_C.Auth Side Switch Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Event Round Won(struct UBaseTeamComponent* Winning Team); // Function BombGameState.BombGameState_C.Event Round Won // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Multicast Side Switch Event(); // Function BombGameState.BombGameState_C.Multicast Side Switch Event // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnCharacterEnteredTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterEnteredTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void HandleEnemyEnteringVisibility(struct AShooterCharacter* EnemyShooterCharacter); // Function BombGameState.BombGameState_C.HandleEnemyEnteringVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnCharacterExitedTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterExitedTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameState.BombGameState_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ClientBuyPhaseEnd(); // Function BombGameState.BombGameState_C.ClientBuyPhaseEnd // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void AnnouncerVOCeremony(struct AAresCeremony* ChosenCeremony); // Function BombGameState.BombGameState_C.AnnouncerVOCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void SoundTheAlarm(struct TArray<struct AShooterCharacter*>& SpottedCharactersOnDeath, struct AShooterCharacter* CallingCharacter); // Function BombGameState.BombGameState_C.SoundTheAlarm // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ActorDestroyed(struct AActor* DestroyedActor); // Function BombGameState.BombGameState_C.ActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function BombGameState.BombGameState_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombDropped(struct AShooterCharacter* OldBombHolder); // Function BombGameState.BombGameState_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void Event Set Overtime Rules(); // Function BombGameState.BombGameState_C.Event Set Overtime Rules // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void GameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function BombGameState.BombGameState_C.GameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameState.BombGameState_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void EventRoundBegin(int32_t RoundNumberBeginning); // Function BombGameState.BombGameState_C.EventRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void MarkDroppedBombEvent(struct AEquippableGroundPickup_C* DroppedBombActor); // Function BombGameState.BombGameState_C.MarkDroppedBombEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OrbPickedUpRPC(struct AShooterCharacter* Orb Gatherer); // Function BombGameState.BombGameState_C.OrbPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void MulticastSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Max Loss Streak); // Function BombGameState.BombGameState_C.MulticastSetLossStreakSettings // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_BombGameState(int32_t EntryPoint); // Function BombGameState.BombGameState_C.ExecuteUbergraph_BombGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x3367a20
	void OnBuyPhaseUpdated__DelegateSignature(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void EnemyExitVisibility__DelegateSignature(struct AShooterCharacter* EnemyCharacter); // Function BombGameState.BombGameState_C.EnemyExitVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void EnemyEnteredVisibility__DelegateSignature(struct AShooterCharacter* NewParam); // Function BombGameState.BombGameState_C.EnemyEnteredVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void OnOrbPickedUp__DelegateSignature(struct AShooterCharacter* Orb Gatherer); // Function BombGameState.BombGameState_C.OnOrbPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
};

