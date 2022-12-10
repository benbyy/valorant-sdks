// BlueprintGeneratedClass AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C
// Size: 0x188 (Inherited: 0x178)
struct UAudBaseGameModeVOComponent_C : UBaseVOComponent_C {
	struct TArray<int32_t> InRoundKill_RandomWeight; // 0x178(0x10)

	void GetMatchVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetMatchVOEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void GetMatchVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetMatchVOCategoryOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void Get KillsVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.Get KillsVOEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void GetKillsVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetKillsVOCategoryOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void PlayAnnouncerLineHelper(struct UAkAudioEvent* EventToAttackers, struct UAkAudioEvent* EventToDefenders, enum class VOPriorityEnum Priority, float QueueTimeout); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.PlayAnnouncerLineHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& Announcer VO Component); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	bool OnAuth_Char_ShouldPlayMultiKillLine(struct AShooterCharacter* Character); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_Char_ShouldPlayMultiKillLine // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void OnAuth_Char_ShouldPlayKillLine(struct AShooterCharacter* Victim Ref, struct AShooterCharacter* Base Pawn Ref, struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& ShouldPlayLine); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_Char_ShouldPlayKillLine // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void OnAuth_Char_ModeSpecificKill(struct AShooterCharacter* Victim Ref, struct AShooterCharacter* Base Pawn Ref, bool WasHeadshot, bool Was100OrMoreDmg, struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& WasLinePlayed); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_Char_ModeSpecificKill // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	int32_t GetKillstreakCount(struct AShooterCharacter* Character); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetKillstreakCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void AreAnyEnemiesAlive(struct UObject* Viewer, bool& IsAlive); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.AreAnyEnemiesAlive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void OnAuth_Char_Kill(struct AShooterCharacter* Victim Ref, struct AShooterCharacter* Base Pawn Ref, bool WasHeadshot, bool Was100OrMoreDmg, struct UDamageResponse* DamageResponse, struct UDamageType* DamageType); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_Char_Kill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void GetRandomCharacterForTeam(struct UObject* Viewer, struct AShooterCharacter*& SelectedCharacter, struct UAudBasePawnVOComponent_C*& VOComponent); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetRandomCharacterForTeam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void GetFirstTeam(struct UBaseTeamComponent*& Team); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetFirstTeam // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void GetFirstEnemyTeam(struct UBaseTeamComponent* AlliedTeam, struct UBaseTeamComponent*& EnemyTeam); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetFirstEnemyTeam // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void MatchWinningLosingTied(int32_t ScoreDifference, struct FAkSwitch& MatchStateAkSwitch, bool& BubbleDownFound); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.MatchWinningLosingTied // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void EarlyOrLateGame(struct TArray<struct FAresRoundResult>& RoundResults, struct FAkSwitch& MatchPhaseAkSwitches, bool& LateGame, struct TArray<struct FAresRoundResult>& Results); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.EarlyOrLateGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void GetBasePawnVOComponent(struct AShooterCharacter* Shooter Char, struct UAudBasePawnVOComponent_C*& Base Pawn VO Component, struct TArray<struct FAkSwitch>& SideAKSwitch); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetBasePawnVOComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322f00
	void OnAuth_VOGameState(struct UBaseTeamComponent* Team, struct TArray<struct FAkSwitch>& BubbleDownAkSwitches, bool& BubbleDownFound); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_VOGameState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
};
