// BlueprintGeneratedClass BombGameStateDataModel.BombGameStateDataModel_C
// Size: 0x531 (Inherited: 0x528)
struct UBombGameStateDataModel_C : UShooterGameStateDataModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	enum class EAresBombStates BombState; // 0x530(0x01)

	void InitializeModel(struct AShooterGameState* InGameState); // Function BombGameStateDataModel.BombGameStateDataModel_C.InitializeModel // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnBombStateChanged(enum class EAresBombStates BombState); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombDefuseStart(struct AShooterCharacter* Defuser); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombDefuseStop(); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombPlantStart(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantStart // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombPlantCancelled(enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void OnBombCheckpointReached(struct AShooterCharacter* Defuser, int32_t CheckpointNumber, float DefuseProgress); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombCheckpointReached // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BombGameStateDataModel(int32_t EntryPoint); // Function BombGameStateDataModel.BombGameStateDataModel_C.ExecuteUbergraph_BombGameStateDataModel // (Final|UbergraphFunction) // @ game+0x337bc90
};

