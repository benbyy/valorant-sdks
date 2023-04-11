// UserDefinedStruct MatchResultBombPlantEvent.MatchResultBombPlantEvent
// Size: 0x48 (Inherited: 0x00)
struct FMatchResultBombPlantEvent {
	int32_t round_2_9A093ED44DB3CAB2BBBD00A7060A6340; // 0x00(0x04)
	int32_t gameTime_4_2B8BA5F1485F20289107F4AF28C6FCCC; // 0x04(0x04)
	struct FString planter_10_CBBD5D7F4E61B20F0C499EAFD3CAA313; // 0x08(0x10)
	struct FMatchResultMapLocation plantLocation_13_77A7C4C3432EF2ED86E4E8B35B458AC0; // 0x18(0x08)
	int32_t roundTime_16_C99A336B40BEAEB2BD58CDA0B6BDD6BF; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMatchResultPlayerLocation> playerLocations_20_C05C692C4DCB734A4CA668AD4B47F435; // 0x28(0x10)
	struct FString plantSite_25_2A5B51B74DA537A1AA2B5A97161EB826; // 0x38(0x10)
};

