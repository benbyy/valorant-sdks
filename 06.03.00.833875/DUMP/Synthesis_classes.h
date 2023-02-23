// Class Synthesis.ModularSynthPresetBank
// Size: 0x40 (Inherited: 0x30)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x30(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x30 (Inherited: 0x30)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x2312480
};

// Class Synthesis.ModularSynthComponent
// Size: 0xe20 (Inherited: 0x760)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x760(0x04)
	char pad_764[0x6bc]; // 0x764(0x6bc)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2314aa0
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2314a20
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x23149a0
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2314920
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x23148a0
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2314820
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2314790
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x2314710
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x2314690
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2314610
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x2314590
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x2314510
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x2314490
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x23143c0
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x2314330
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x2314260
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x2314190
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x23140c0
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x2313ff0
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2313f20
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x2313e50
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x2313d80
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2313d00
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2313c80
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x2313c00
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2313b70
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2313af0
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2313a70
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x23139f0
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2313960
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x23138e0
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x2313810
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x2313740
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2313670
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x23135a0
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x23134d0
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x2313400
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2313330
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x23132b0
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x2313230
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x23131b0
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x2313130
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x23130b0
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2313030
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x2312fb0
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x2312f20
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x2312e90
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x2312e00
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x2312d30
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x2312ca0
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2312c20
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2312ba0
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x2312b20
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2312a90
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2312a10
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2312990
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x2312870
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x2312750
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23125f0
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0xf8 (Inherited: 0x70)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_70[0x58]; // 0x70(0x58)
	struct FSourceEffectBitCrusherSettings Settings; // 0xc8(0x30)

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2322040
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x2321fb0
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate // (Final|Native|Public|BlueprintCallable) // @ game+0x2321f30
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2321d80
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits // (Final|Native|Public|BlueprintCallable) // @ game+0x23218c0
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x2321830
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x188 (Inherited: 0x70)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_70[0xa0]; // 0x70(0xa0)
	struct FSourceEffectChorusSettings Settings; // 0x110(0x78)

	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x23226c0
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet // (Final|Native|Public|BlueprintCallable) // @ game+0x2322640
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x23225b0
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x2322530
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23220f0
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2321e30
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x2321cf0
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2321c70
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x2321be0
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x2321b60
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x2321ad0
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry // (Final|Native|Public|BlueprintCallable) // @ game+0x2321a50
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x23219c0
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2321940
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xe8 (Inherited: 0x70)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_70[0x50]; // 0x70(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0xc0(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23221a0
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0x108 (Inherited: 0xe8)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xb0 (Inherited: 0x70)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0xa4(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x2322750
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2322300
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x23217a0
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0xb8 (Inherited: 0x70)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSourceEffectEQSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2322250
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0xd8 (Inherited: 0x70)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_70[0x48]; // 0x70(0x48)
	struct FSourceEffectFilterSettings Settings; // 0xb8(0x20)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23223b0
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xb0 (Inherited: 0x70)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0xa4(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2322480
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232ba20
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectPannerSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bad0
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xb8 (Inherited: 0x70)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bb80
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xd8 (Inherited: 0x70)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_70[0x48]; // 0x70(0x48)
	struct FSourceEffectRingModulationSettings Settings; // 0xb8(0x20)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bc40
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xc8 (Inherited: 0x70)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_70[0x40]; // 0x70(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0xb0(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bce0
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_70[0x4c]; // 0x70(0x4c)
	struct FSourceEffectStereoDelaySettings Settings; // 0xbc(0x24)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bd90
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bad0
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x60 (Inherited: 0x30)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x30(0x10)
	int32_t NumChannels; // 0x40(0x04)
	int32_t SampleRate; // 0x44(0x04)
	float NormalizationVolumeDb; // 0x48(0x04)
	bool bTrueStereo; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<float> IRData; // 0x50(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xf8 (Inherited: 0x70)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x70(0x08)
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x78(0x28)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xa0(0x01)
	bool bEnableHardwareAcceleration; // 0xa1(0x01)
	char pad_A2[0x56]; // 0xa2(0x56)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232be60
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x232b910
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xc0 (Inherited: 0x70)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0xa4(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bf00
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x232b9a0
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x232b590
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x232b570
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xb0 (Inherited: 0x70)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0xa4(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bfc0
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x232b890
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x232b810
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x232b790
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x232b710
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x232b690
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x232b610
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xb8 (Inherited: 0x70)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232c070
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0xd8 (Inherited: 0x70)
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	char pad_70[0x48]; // 0x70(0x48)
	struct FSubmixEffectMultibandCompressorSettings Settings; // 0xb8(0x20)

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232c130
};

// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x4c]; // 0x70(0x4c)
	struct FSubmixEffectStereoDelaySettings Settings; // 0xbc(0x24)

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x232bd90
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x40]; // 0x70(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0xb0(0x18)
	char pad_C8[0x18]; // 0xc8(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2334c70
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23348f0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333f20
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x2332c90
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2332770
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2332690
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x20ca080
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23323a0
};

// Class Synthesis.Synth2DSlider
// Size: 0x4e8 (Inherited: 0x148)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x148(0x04)
	float ValueY; // 0x14c(0x04)
	struct FDelegate ValueXDelegate; // 0x150(0x14)
	struct FDelegate ValueYDelegate; // 0x164(0x14)
	struct FSynth2DSliderStyle WidgetStyle; // 0x178(0x2e0)
	struct FLinearColor SliderHandleColor; // 0x458(0x10)
	bool IndentHandle; // 0x468(0x01)
	bool Locked; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	float StepSize; // 0x46c(0x04)
	bool IsFocusable; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x478(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x488(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x498(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2334d50
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x2334ae0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x23349c0
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x2333fa0
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x2333e90
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2332820
};

// Class Synthesis.GranularSynth
// Size: 0xb20 (Inherited: 0x760)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x760(0x08)
	char pad_768[0x3b8]; // 0x768(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2334b60
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x2334a50
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2334860
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x23347e0
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2334130
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x23340b0
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2333d50
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x2333e10
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x2333cd0
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2333c10
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2333b50
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x2333ad0
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2333a10
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333140
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333140
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x23329f0
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x2332890
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2332860
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2332660
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2332430
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x178 (Inherited: 0x30)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x30(0x10)
	char bLockKeyframesToGridBool : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t LockKeyframesToGrid; // 0x44(0x04)
	int32_t WaveTableResolution; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x50(0x10)
	char bNormalizeWaveTables : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x117]; // 0x61(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xea0 (Inherited: 0x760)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x760(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x770(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x780(0x08)
	char pad_788[0x718]; // 0x788(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x2334dd0
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x2334be0
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x2334340
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x23342c0
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2334240
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2334760
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x23346e0
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2334650
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x23345d0
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2334550
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x23344c0
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2334440
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x23343c0
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x2334030
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x2333990
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x2333910
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2333890
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x2333790
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333710
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333810
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2333680
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2333600
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2333570
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x23334f0
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333470
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x2333360
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x2333290
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x23331c0
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x23330c0
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2333040
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2332fb0
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2332f30
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2332eb0
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x2332e20
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x2332da0
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2332d20
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x2332c00
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x2332be0
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x2332b10
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x2332970
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x2332630
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23325f0
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2332500
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x2332460
};

// Class Synthesis.SynthComponentToneGenerator
// Size: 0x780 (Inherited: 0x760)
struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x760(0x04)
	float Volume; // 0x764(0x04)
	char pad_768[0x18]; // 0x768(0x18)

	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x2338890
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x2338410
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x890 (Inherited: 0x760)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x760(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x768(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x778(0x10)
	char pad_788[0x108]; // 0x788(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x2338700
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x2338680
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x23385f0
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x2338520
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x23382f0
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23382c0
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2338260
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2337ed0
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2337ea0
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x23380b0
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2337f00
};

// Class Synthesis.SynthKnob
// Size: 0x468 (Inherited: 0x148)
struct USynthKnob : UWidget {
	float Value; // 0x148(0x04)
	float StepSize; // 0x14c(0x04)
	float MouseSpeed; // 0x150(0x04)
	float MouseFineTuneSpeed; // 0x154(0x04)
	char ShowTooltipInfo : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FText ParameterName; // 0x160(0x18)
	struct FText ParameterUnits; // 0x178(0x18)
	struct FDelegate ValueDelegate; // 0x190(0x14)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FSynthKnobStyle WidgetStyle; // 0x1a8(0x258)
	bool Locked; // 0x400(0x01)
	bool IsFocusable; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x448(0x10)
	char pad_458[0x10]; // 0x458(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x2338810
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x2338790
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x2338490
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2338290
};

