// BlueprintGeneratedClass FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C
// Size: 0x56c (Inherited: 0x540)
struct AFXC_Bomb_While_Defusing_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct UMaterialInterface* OriginalMaterial; // 0x558(0x08)
	struct FTimerHandle AudioTimer; // 0x560(0x08)
	int32_t CurrentBombSection; // 0x568(0x04)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void PlayDefauseAudio(); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.PlayDefauseAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_FXC_Bomb_While_Defusing(int32_t EntryPoint); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.ExecuteUbergraph_FXC_Bomb_While_Defusing // (Final|UbergraphFunction|HasDefaults) // @ game+0x332feb0
};
