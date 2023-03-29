// BlueprintGeneratedClass FXC_Gun_Reload.FXC_Gun_Reload_C
// Size: 0x588 (Inherited: 0x540)
struct AFXC_Gun_Reload_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x548(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x550(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x558(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x560(0x08)
	int32_t NumReloadCycles; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x570(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x578(0x08)
	struct UReloadStateComponent* ReloadStateComponent; // 0x580(0x08)

	void Get Particle Component(struct UPlayerGun_Particle_Component_C*& Particle Component); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.Get Particle Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnReloadLoopComplete(); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.OnReloadLoopComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnVFXSpawned(); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.OnVFXSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_FXC_Gun_Reload(int32_t EntryPoint); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.ExecuteUbergraph_FXC_Gun_Reload // (Final|UbergraphFunction) // @ game+0x337bc90
};

