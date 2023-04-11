// BlueprintGeneratedClass FXC_Gun_Equip.FXC_Gun_Equip_C
// Size: 0x580 (Inherited: 0x540)
struct AFXC_Gun_Equip_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x548(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x560(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x568(0x08)
	enum class EEquipSpeed CurrentVFXEquipSpeed; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UReadyingStateComponent* Readying State Component; // 0x578(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_FXC_Gun_Equip(int32_t EntryPoint); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.ExecuteUbergraph_FXC_Gun_Equip // (Final|UbergraphFunction) // @ game+0x3367a20
};

