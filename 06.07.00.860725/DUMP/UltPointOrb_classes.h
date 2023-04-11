// BlueprintGeneratedClass UltPointOrb.UltPointOrb_C
// Size: 0x4cc (Inherited: 0x4c0)
struct AUltPointOrb_C : ABaseCollectableOrb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	int32_t PlayerUltimatePointsReward; // 0x4c8(0x04)

	void GrantOrbEffect(struct AShooterCharacter* ShooterCharacter); // Function UltPointOrb.UltPointOrb_C.GrantOrbEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_UltPointOrb(int32_t EntryPoint); // Function UltPointOrb.UltPointOrb_C.ExecuteUbergraph_UltPointOrb // (Final|UbergraphFunction) // @ game+0x3367a20
};

