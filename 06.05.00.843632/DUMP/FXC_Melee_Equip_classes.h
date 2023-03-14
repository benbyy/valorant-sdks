// BlueprintGeneratedClass FXC_Melee_Equip.FXC_Melee_Equip_C
// Size: 0x558 (Inherited: 0x540)
struct AFXC_Melee_Equip_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct AAresEquippable* Equippable; // 0x550(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Melee_Equip.FXC_Melee_Equip_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x332feb0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Melee_Equip.FXC_Melee_Equip_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_FXC_Melee_Equip(int32_t EntryPoint); // Function FXC_Melee_Equip.FXC_Melee_Equip_C.ExecuteUbergraph_FXC_Melee_Equip // (Final|UbergraphFunction) // @ game+0x332feb0
};

