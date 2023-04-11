// UserDefinedStruct MatchResultBombDefuseEvent.MatchResultBombDefuseEvent
// Size: 0x38 (Inherited: 0x00)
struct FMatchResultBombDefuseEvent {
	int32_t round_2_6C8303154E3E7F8560C50BB16173EAD7; // 0x00(0x04)
	int32_t gameTime_4_EEC6ABF94C0FEC900B323C92F0EFF8DB; // 0x04(0x04)
	struct FString defuser_7_28973B444CF82F918F9DCAAA2CA05F14; // 0x08(0x10)
	struct FMatchResultMapLocation defuseLocation_14_E101DACC412B55CF88A4A2B09DEAAD9F; // 0x18(0x08)
	int32_t roundTime_17_16CCB9F445D79D5D97735FBD0238EDAA; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMatchResultPlayerLocation> playerLocations_21_E9F3169444A22D8C043C88866BC6394D; // 0x28(0x10)
};

