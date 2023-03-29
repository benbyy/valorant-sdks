// BlueprintGeneratedClass AudBombGameModeVOComponent.AudBombGameModeVOComponent_C
// Size: 0x528 (Inherited: 0x188)
struct UAudBombGameModeVOComponent_C : UAudBaseGameModeVOComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x188(0x08)
	bool AnnouncementTriggered30sec; // 0x190(0x01)
	bool AnnouncementTriggered10sec; // 0x191(0x01)
	bool AnnouncementMatchPointTriggered; // 0x192(0x01)
	char pad_193[0x5]; // 0x193(0x05)
	struct AShooterCharacter* LastKillInsigator; // 0x198(0x08)
	struct AShooterCharacter* BombDefuser; // 0x1a0(0x08)
	struct AShooterCharacter* ClutchPlayCharacter; // 0x1a8(0x08)
	struct UAudBasePawnVOComponent_C* MyBasePawnVOComponent; // 0x1b0(0x08)
	struct TSet<struct FString> AttackerGSBubbleDownLimiter; // 0x1b8(0x50)
	struct TSet<struct FString> RoundStartLimiter; // 0x208(0x50)
	struct AShooterPlayerState* CeremonyAwardIdentity; // 0x258(0x08)
	struct TSet<struct FString> CeremonyLimiter; // 0x260(0x50)
	struct TArray<int32_t> RoundStartWon_RandomWeight; // 0x2b0(0x10)
	struct TArray<int32_t> BubbleDown_RandomWeight; // 0x2c0(0x10)
	struct TArray<int32_t> MatchStart_RandomWeight; // 0x2d0(0x10)
	struct FMulticastInlineDelegate PlayedRoundStartVO; // 0x2e0(0x10)
	struct TArray<int32_t> RoundStartCharSpecific_RandomWeight; // 0x2f0(0x10)
	struct TArray<int32_t> TEMP_RoundStartCharSpecific_RandomWeight; // 0x300(0x10)
	struct TArray<int32_t> TEMP_RoundStartWon_RandomWeight; // 0x310(0x10)
	struct TArray<int32_t> RoundStartGeneral_ThrottleWeight; // 0x320(0x10)
	struct TArray<struct AShooterCharacter*> RoundStartGenericCharacterArray; // 0x330(0x10)
	struct TArray<struct AShooterCharacter*> BubbleDownCharacterArray; // 0x340(0x10)
	bool IndexAndInputAreTheSame; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t RoundStartGenericCharacterIndex; // 0x354(0x04)
	int32_t BubbleDownCharacterIndex; // 0x358(0x04)
	enum class EAresAlliance AttackerRelationshipMatchStartAlliance; // 0x35c(0x01)
	enum class EAresAlliance AttackerRelationshipBubbleDownAlliance; // 0x35d(0x01)
	enum class EAresAlliance DefenderRelationshipMatchStartAlliance; // 0x35e(0x01)
	enum class EAresAlliance DefenderRelationshipBubbleDownAlliance; // 0x35f(0x01)
	struct TSet<struct FString> DefenderGSBubbleDownLimiter; // 0x360(0x50)
	struct TArray<int32_t> MapMatchWin_RandomWeight; // 0x3b0(0x10)
	struct TArray<int32_t> LastKillCharSpecific_RandomWeight; // 0x3c0(0x10)
	enum class CeremonyIdentifier PrevRoundCeremony; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct AShooterPlayerState* PrevRoundCeremonyChar; // 0x3d8(0x08)
	bool CommendLinePlayed; // 0x3e0(0x01)
	bool ShouldPlayBombEquippableVO; // 0x3e1(0x01)
	bool IsQuickMode; // 0x3e2(0x01)
	enum class CharacterRelationMatchVOEnum AttackerCharRelationMatchEnumPick; // 0x3e3(0x01)
	enum class CharacterRelationMatchVOEnum DefenderCharRelationMatchEnumPick; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct UAudBasePawnVOComponent_C* RoundStartRelationBPVOComp; // 0x3e8(0x08)
	struct AShooterCharacter* RoundStartRelationSelectedChar; // 0x3f0(0x08)
	enum class CharacterRelationMatchVOEnum AttackerTagMatchEnumPick; // 0x3f8(0x01)
	enum class CharacterRelationMatchVOEnum DefenderTagMatchEnumPick; // 0x3f9(0x01)
	enum class EAresAlliance AttackerTagMatchStartAlliance; // 0x3fa(0x01)
	enum class EAresAlliance DefenderTagMatchStartAlliance; // 0x3fb(0x01)
	enum class EAresAlliance AttackerTagBubbleDownAlliance; // 0x3fc(0x01)
	enum class EAresAlliance DefenderTagBubbleDownAlliance; // 0x3fd(0x01)
	enum class CharacterRelationBubbleDownVOEnum AttackerTagBubbleDownEnumPick; // 0x3fe(0x01)
	enum class CharacterRelationBubbleDownVOEnum DefenderTagBubbleDownEnumPick; // 0x3ff(0x01)
	enum class CharacterRelationBubbleDownVOEnum AttackerCharRelationBubbleDownEnum; // 0x400(0x01)
	enum class CharacterRelationBubbleDownVOEnum DefenderCharRelationBubbleDownEnum; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct TArray<int32_t> DefenderBubbleDownSpecific_RandomWeight; // 0x408(0x10)
	struct TArray<int32_t> AttackerBubbleDownSpecific_RandomWeight; // 0x418(0x10)
	struct TArray<int32_t> RoundStartTagCommend_RandomWeight; // 0x428(0x10)
	struct TArray<int32_t> TEMP_Attacker_MatchStart_RandomWeight; // 0x438(0x10)
	struct TArray<int32_t> TEMP_Defender_MatchStart_RandomWeight; // 0x448(0x10)
	float CarrierKilledDelay; // 0x458(0x04)
	enum class ECalloutSuperRegion CarrierKilledSuperRegion; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	float CarrierKilledCooldown; // 0x460(0x04)
	float CarrierKilledTimestamp; // 0x464(0x04)
	struct FVector CarrierKilledLocation; // 0x468(0x0c)
	float CarrierKilledDistThreshold; // 0x474(0x04)
	struct FVector CarrierKilledLocationPrev; // 0x478(0x0c)
	char pad_484[0x4]; // 0x484(0x04)
	struct TMap<enum class AnnouncerKillsVOEnum, struct UAkAudioEvent*> AnnouncerKillsVO; // 0x488(0x50)
	struct TMap<enum class AnnouncerMatchVOEnum, struct UAkAudioEvent*> AnnouncerMatchVO; // 0x4d8(0x50)

	void GetMatchVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMatchVOEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetMatchVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMatchVOCategoryOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Get KillsVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.Get KillsVOEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetKillsVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetKillsVOCategoryOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& Announcer VO Component); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void PlayAnnouncerLineHelper(struct UAkAudioEvent* EventToAttackers, struct UAkAudioEvent* EventToDefenders, enum class VOPriorityEnum Priority, float QueueTimeout); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.PlayAnnouncerLineHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GunSkinVOCheck(struct UAudBasePawnVOComponent_C* Character Component, struct UDamageResponse* Dmg Response, struct UDamageType* DmgType, struct UBaseGunSkinVOComponent_C*& Selected VO Component, struct UAudBasePawnVOComponent_C*& Play On Character); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GunSkinVOCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_ModeSpecificKill(struct AShooterCharacter* Victim Ref, struct AShooterCharacter* Base Pawn Ref, bool WasHeadshot, bool Was100OrMoreDmg, struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& WasLinePlayed); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ModeSpecificKill // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReallowMatchPointAnnouncement(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ReallowMatchPointAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_Overtime(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_Overtime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void InsertVOArray(struct TArray<struct AShooterCharacter*>& Array, struct AShooterCharacter* Character, int32_t Index, int32_t& ReturnIndex); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.InsertVOArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void IsEachIndexEqualToInput(struct TArray<struct AShooterCharacter*>& Array, struct AShooterCharacter* CharacterName, bool& ResultIsSame); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.IsEachIndexEqualToInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_ObjectivePlanted(struct AShooterCharacter* Shooter Char Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ObjectivePlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_SuddenDeath(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_SuddenDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void zz_GetCeremonyAwardIdentity(enum class CeremonyIdentifier CeremonyIdentifier, struct ABaseCeremony_C* BaseCeremonyObjectRef, struct AShooterPlayerState*& CeremonyAwardIdentity); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.zz_GetCeremonyAwardIdentity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_Ceremony(enum class CeremonyIdentifier Ceremony); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_Ceremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OtherTeamIsNotDead(struct AShooterCharacter* BasePawn, bool& TRUE); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OtherTeamIsNotDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_MatchWin(struct UBaseTeamComponent* WinningTeam, struct FString MapName); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_MatchWin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void GetPrevRoundWinningTeam(struct UBaseTeamComponent*& Winning Team); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetPrevRoundWinningTeam // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void FindRoundStartLineCharacter(struct UBaseTeamComponent* Team, struct FString LineName, struct UAudBasePawnVOComponent_C*& Base Pawn VO Component); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.FindRoundStartLineCharacter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_MatchStart(struct FString Map Name); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_MatchStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void DidLoseRoundX(struct TArray<struct FAresRoundResult>& Array, int32_t Index, struct UBaseTeamComponent* Team, bool& DidLose); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.DidLoseRoundX // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void OnAuth_Char_BubbleDown(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_BubbleDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_RoundStart_LastRoundInHalf(enum class EAresAlliance TeamAlliance, struct UBaseTeamComponent* MyTeam); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundStart_LastRoundInHalf // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_RoundStart(struct UBaseTeamComponent* Team); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_RoundEnd(struct UBaseTeamComponent* WinningTeam, enum class EBombRoundEndReason BombRoundEndReason, enum class CeremonyIdentifier CeremonyIdentifier, struct ABaseCeremony_C* BaseCeremonyObjectRef, struct AShooterCharacter* Victim, struct UDamageType* Dmg Type, struct AShooterCharacter* Killer, struct UDamageResponse* Dmg Response); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_KillStreak(struct AShooterCharacter* Killer); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_KillStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_MatchPoint(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_RoundEnd(struct UBaseTeamComponent* WinningTeam); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_RoundEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_ResetTriggers(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_ResetTriggers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_DefuseOutofTime(struct AShooterPlayerController* Current Defuser, float Plant Time); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_DefuseOutofTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_10n30SecLeft(enum class EAresBombStates Bomb State, struct AShooterGameMode* ShooterGameMode); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_10n30SecLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Char_ObjectiveDefused(struct AShooterCharacter* Shooter Char Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ObjectiveDefused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_ObjectivePlanted(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_ObjectivePlanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_OneEnemyLastStanding(struct AActor* Last Standing Ref, struct AActor* Killer Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_OneEnemyLastStanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_MatchTeamRedWin(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchTeamRedWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_MatchTeamBlueWin(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchTeamBlueWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_TeamSwitch(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_TeamSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_LastRoundInHalf(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_LastRoundInHalf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CallResponseVO(struct UAudBasePawnVOComponent_C* ResponseVOComp, enum class CharacterID StartConvoCharacterID, struct UBaseVOComponent_C* StartConvoVOComp); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.CallResponseVO // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnAuth_Announcer_SpikeCarrierKilled(struct AShooterCharacter* OldBombCarrier, struct ABombEquippable_C* Bomb); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_SpikeCarrierKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_AudBombGameModeVOComponent(int32_t EntryPoint); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ExecuteUbergraph_AudBombGameModeVOComponent // (Final|UbergraphFunction) // @ game+0x337bc90
	void PlayedRoundStartVO__DelegateSignature(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.PlayedRoundStartVO__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

