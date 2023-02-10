// BlueprintGeneratedClass FXC_Bomb_Beeps.FXC_Bomb_Beeps_C
// Size: 0x568 (Inherited: 0x540)
struct AFXC_Bomb_Beeps_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* ; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct TArray<struct UParticleSystemComponent*> ; // 0x558(0x10)

	void ReceiveBeginPlay(); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

