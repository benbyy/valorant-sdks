// BlueprintGeneratedClass Bomb_Defuser.Bomb_Defuser_C
// Size: 0xf38 (Inherited: 0xf00)
struct ABomb_Defuser_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipStateComponent; // 0xf08(0x08)
	struct UTimedStateComponent* CancelCommitState; // 0xf10(0x08)
	struct UTimedStateComponent* CompleteCommitState; // 0xf18(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0xf20(0x08)
	struct UEquipStateComponent* EquipState; // 0xf28(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0xf30(0x08)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Bomb_Defuser.Bomb_Defuser_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x332feb0
	void ReceiveBeginPlay(); // Function Bomb_Defuser.Bomb_Defuser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void ExecuteUbergraph_Bomb_Defuser(int32_t EntryPoint); // Function Bomb_Defuser.Bomb_Defuser_C.ExecuteUbergraph_Bomb_Defuser // (Final|UbergraphFunction) // @ game+0x332feb0
};

