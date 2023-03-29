// BlueprintGeneratedClass Aud_FunctionLibrary.Aud_FunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UAud_FunctionLibrary_C : UBlueprintFunctionLibrary {

	void VoiceLineFilterSplit_SpeakToChar_AddToList(struct TSet<struct FString>& LinesAlreadyPlayed, struct AShooterCharacter* ToCharacter, struct AShooterCharacter* SpeakingCharacter, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VoiceLineFilterSplit_SpeakToChar_AddToList // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void VoiceLineFilterSplit_SpeakToChar_CheckList(struct TSet<struct FString>& LinesAlreadyPlayed, struct AShooterCharacter* ToCharacter, struct AShooterCharacter* SpeakingCharacter, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VoiceLineFilterSplit_SpeakToChar_CheckList // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void VoiceLineFilterSplit_CheckList(struct TSet<struct FString>& LinesAlreadyPlayed, struct AShooterCharacter* Character, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VoiceLineFilterSplit_CheckList // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void VoiceLineFilterSplit_AddToList(struct TSet<struct FString>& LinesAlreadyPlayed, struct AShooterCharacter* Character, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VoiceLineFilterSplit_AddToList // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void VisualizeAttenuation(struct AActor* Owner, struct UAkAudioEvent* AkEvent, struct UAkComponent* AkComponent, enum class Enum_AttenuationVisualization VisualizationType, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VisualizeAttenuation // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void VoiceLineFilter(struct TSet<struct FString>& LinesAlreadyPlayed, struct AShooterCharacter* Character, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.VoiceLineFilter // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ShuffleCharacters(struct TArray<struct AShooterCharacter*>& shooter characters, struct UObject* __WorldContext, struct TArray<struct AShooterCharacter*>& Shuffled Characters); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.ShuffleCharacters // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void PickCharacterForVoiceLine_NoFilter(struct TArray<struct AShooterCharacter*>& CharactersToConsider, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.PickCharacterForVoiceLine_NoFilter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_RemoveFowRelevancy(int32_t Handle, struct UObject* Object, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_RemoveFowRelevancy // (Static|Private|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_SetStatusEffect(enum class Aud_StatusEffectsList Status_Effect, struct AActor* Actor, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_SetStatusEffect // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void DebugPrintFow(struct UObject* Event, struct UObject* Object, float Distance, float Duration, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.DebugPrintFow // (Static|Private|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddFowRelevancy(struct UAkAudioEvent* Event, struct UObject* Object, struct UObject* __WorldContext, int32_t& FowHandle); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.AddFowRelevancy // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void SwitchesToStringHelper(struct TArray<struct FAkSwitch>& Switches, struct UObject* __WorldContext, struct FString& SwitchConcat); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.SwitchesToStringHelper // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x337bc90
	void PickCharacterForVoiceLine(struct TSet<struct FString>& LinesAlreadyPlayed, struct TArray<struct AShooterCharacter*>& CharactersToConsider, struct TArray<struct FAkSwitch>& LineSelectionSwitches, struct UObject* __WorldContext, struct AShooterCharacter*& SelectedCharacter); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.PickCharacterForVoiceLine // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	int32_t Aud_StopAllOnAkComponent(struct UAkComponent* Ak Component, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_StopAllOnAkComponent // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayHitConfirm(struct AActor* Hit Actor, struct UAkAudioEvent* HitEvent, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, float FalloffMultiplier, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayHitConfirm // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	int32_t Aud_StopEvent(struct UAkComponent* Ak Component, struct UAkAudioEvent* Event, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_StopEvent // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayOnObjectWithPerspectiveAndTeamSwitch(struct UAkAudioEvent* Event, struct AActor* Actor, bool Post Immediately, bool EndOnOwnerDeath, enum class Enum_AttenuationVisualization AttenuationVisualization, bool EnableOcclusion, bool ContinuousOcclusion, struct UAresAudioComponent* ReuseAudioComponent, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent, int32_t& FowHandle, struct FString& PerspectiveOutput); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayOnObjectWithPerspectiveAndTeamSwitch // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_Mix_ClearAll(struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_Mix_ClearAll // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_SetLocalMix(struct UAkAudioEvent* AkEvent, struct AShooterCharacter* ShooterChar, bool Enabled?, bool DebugPrint?, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_SetLocalMix // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayAtLocationWithSwitch(struct UAkAudioEvent* Event, struct FVector& Location, struct AActor* WorldContext, struct FString SwitchGroup, struct FString SwitchState, bool bEnableOcclusion, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayAtLocationWithSwitch // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_ImpactDebris(struct AActor* Owner, enum class Aud_SizeSelector Selection, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_ImpactDebris // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayOnObjectWithRTPC(struct UAkAudioEvent* Event, struct AActor* Owner, enum class Aud_RTPC_Registry RTPC Type, float RTPC Value, int32_t InterpolationTimeMs, bool EndOnOwnerDeath, bool IsAttached, bool EnableOcclusion, bool ContinuousOcclusion, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayOnObjectWithRTPC // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayOnObjectWithSwitch(struct UAkAudioEvent* Event, struct AActor* Owner, struct FString SwitchGroup, struct FString SwitchState, bool EndOnOwnerDeath, bool IsAttached, bool Post Immediately, bool EnableOcclusion, bool ContinuousOcclusion, enum class Enum_AttenuationVisualization VisualizeAttenuation, struct UAresAudioComponent* ReuseAudioComponent, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent, int32_t& FowHandle); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayOnObjectWithSwitch // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	struct UAresAudioComponent* Aud_Play2dNoOwner(struct UAkAudioEvent* Event, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_Play2dNoOwner // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_DebugPrint(struct FString Text, struct UObject* __WorldContext); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_DebugPrint // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_Play2d(struct UAkAudioEvent* Event, struct AActor* Owner, bool PostImmediately, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent, int32_t& FowHandle); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_Play2d // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayAtLocation(struct UAkAudioEvent* Event, struct FVector Location, struct UObject* WorldContext, bool PostImmediately, struct FRotator Orientation, bool bEnableOcclusion, bool SimpleOcclusion, bool bContinuiousOcclusion, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent, int32_t& FowHandle); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayAtLocation // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Aud_PlayOnObject(struct UAkAudioEvent* Event, struct AActor* Owner, bool EndOnOwnerDeath, bool IsAttached, bool PostImmediately, struct FVector Offset, struct FName AttachPointName , bool EnableOcclusion, bool ContinuousOcclusion, bool SimpleOcclusion, enum class Enum_AttenuationVisualization VisualizeAttenuation, struct UAresAudioComponent* ReuseAudioComponent, struct UObject* __WorldContext, struct UAresAudioComponent*& AudioComponent, int32_t& FowHandle); // Function Aud_FunctionLibrary.Aud_FunctionLibrary_C.Aud_PlayOnObject // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

