// Class AudioMixer.SynthComponent
// Size: 0x760 (Inherited: 0x290)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x288(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x288(0x01)
	char bAllowSpatialization : 1; // 0x288(0x01)
	char bOverrideAttenuation : 1; // 0x288(0x01)
	char bOutputToBusOnly : 1; // 0x28c(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x290(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x298(0x3a8)
	struct USoundConcurrency* ConcurrencySettings; // 0x640(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x648(0x50)
	struct USoundClass* SoundClass; // 0x698(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x6a0(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x6a8(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x6b0(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x6c0(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x6d0(0x10)
	char bIsUISound : 1; // 0x6e0(0x01)
	char bIsPreviewSound : 1; // 0x6e0(0x01)
	char pad_6E0_7 : 1; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x6e4(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x6e8(0x04)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x6f0(0x10)
	char pad_700[0x20]; // 0x700(0x20)
	struct USynthSound* Synth; // 0x720(0x08)
	struct UAudioComponent* AudioComponent; // 0x728(0x08)
	char pad_730[0x30]; // 0x730(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x4783890
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x4783870
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x47837f0
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x4783720
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function AudioMixer.SynthComponent.SetLowPassFilterFrequency // (Native|Public|BlueprintCallable) // @ game+0x4783470
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function AudioMixer.SynthComponent.SetLowPassFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x47833e0
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47833b0
};

// Class AudioMixer.AudioGenerator
// Size: 0xb0 (Inherited: 0x30)
struct UAudioGenerator : UObject {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780810
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780380
	void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47802c0
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780200
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47800f0
	void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780030
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477fe10
	void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477f920
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477f2f0
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477f090
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477edc0
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477ecc0
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477ebc0
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477eac0
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477ea00
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477e920
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477e8a0
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477e7e0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x477e5a0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x477e3b0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x477e1c0
	bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477e0f0
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x477dd60
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477dc90
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x477da40
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d8e0
	void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d7d0
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d750
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d650
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d540
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x477d480
};

// Class AudioMixer.QuartzClockHandle
// Size: 0x1a0 (Inherited: 0x30)
struct UQuartzClockHandle : UObject {
	char pad_30[0x170]; // 0x30(0x170)

	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision // (Final|Native|Public|BlueprintCallable) // @ game+0x4780930
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions // (Final|Native|Public|BlueprintCallable) // @ game+0x47808a0
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct FDelegate& OnQuantizationEvent); // Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47806d0
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate& OnQuantizationEvent); // Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47805d0
	void SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, float TicksPerSecond); // Function AudioMixer.QuartzClockHandle.SetTicksPerSecond // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477fc70
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, float ThirtySecondsNotesPerMinute); // Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477fad0
	void SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, float SecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetSecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477f670
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, float MillisecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477f4d0
	void SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, float BeatsPerMinute); // Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477f150
	void ResumeClock(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.ResumeClock // (Final|Native|Public|BlueprintCallable) // @ game+0x477f000
	void ResetTransport(struct UObject* WorldContextObject, struct FDelegate& InDelegate); // Function AudioMixer.QuartzClockHandle.ResetTransport // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477ef00
	void PauseClock(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.PauseClock // (Final|Native|Public|BlueprintCallable) // @ game+0x477e750
	float GetTicksPerSecond(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetTicksPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x477e050
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x477dfb0
	float GetSecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetSecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x477df10
	float GetMillisecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x477dbf0
	float GetBeatsPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x477d9a0
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x138 (Inherited: 0x70)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_70[0x78]; // 0x70(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xe8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x477f810
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x477f440
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xb8 (Inherited: 0x70)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23ab2f0
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x118 (Inherited: 0x70)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_70[0x68]; // 0x70(0x68)
	struct FSubmixEffectReverbSettings Settings; // 0xd8(0x40)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x4783610
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4783500
};

// Class AudioMixer.QuartzSubsystem
// Size: 0x90 (Inherited: 0x38)
struct UQuartzSubsystem : UWorldSubsystem {
	char pad_38[0x58]; // 0x38(0x58)

	float GetRoundTripMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4783310
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4783270
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x47831d0
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.GetHandleForClock // (Final|Native|Public|BlueprintCallable) // @ game+0x47830d0
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4783030
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4783030
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4782f90
	float GetAudioRenderThreadToGameThreadMinLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4782f60
	float GetAudioRenderThreadToGameThreadMaxLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4782f30
	float GetAudioRenderThreadToGameThreadAverageLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x4782f00
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DoesClockExist // (Final|Native|Public|BlueprintCallable) // @ game+0x4782e10
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists); // Function AudioMixer.QuartzSubsystem.CreateNewClock // (Final|Native|Public|BlueprintCallable) // @ game+0x4782c50
};

// Class AudioMixer.SynthSound
// Size: 0x3f0 (Inherited: 0x3d0)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x3d0(0x08)
	char pad_3D8[0x18]; // 0x3d8(0x18)
};

