// BlueprintGeneratedClass FXC_RegenPassive.FXC_RegenPassive_C
// Size: 0x560 (Inherited: 0x540)
struct AFXC_RegenPassive_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UStaticMeshComponent* Sphere1P; // 0x548(0x08)
	struct UStaticMeshComponent* Sphere3P; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_RegenPassive.FXC_RegenPassive_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_RegenPassive.FXC_RegenPassive_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_RegenPassive(int32_t EntryPoint); // Function FXC_RegenPassive.FXC_RegenPassive_C.ExecuteUbergraph_FXC_RegenPassive // (Final|UbergraphFunction) // @ game+0x337bc90
};

