// BlueprintGeneratedClass FXC_CollectOrb.FXC_CollectOrb_C
// Size: 0x560 (Inherited: 0x540)
struct AFXC_CollectOrb_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CollectOrb.FXC_CollectOrb_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_FXC_CollectOrb(int32_t EntryPoint); // Function FXC_CollectOrb.FXC_CollectOrb_C.ExecuteUbergraph_FXC_CollectOrb // (Final|UbergraphFunction) // @ game+0x3367a20
};

