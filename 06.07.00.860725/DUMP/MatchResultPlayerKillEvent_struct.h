// UserDefinedStruct MatchResultPlayerKillEvent.MatchResultPlayerKillEvent
// Size: 0x80 (Inherited: 0x00)
struct FMatchResultPlayerKillEvent {
	struct FString killer_10_1D83512740BB059095027EB9FEA7BF08; // 0x00(0x10)
	struct FString victim_11_B2E03FE841188A91B07D2BAC206FEA5A; // 0x10(0x10)
	struct TArray<struct FString> assistants_15_D6E0069C451067811525719D1898C41B; // 0x20(0x10)
	int32_t gameTime_13_BC7C5D36479D09DDC4A61B82015D3497; // 0x30(0x04)
	int32_t round_14_6ED19A8C4AC3EE8C1566B48D92BC8E38; // 0x34(0x04)
	int32_t roundTime_18_820ED55E450CC2F4A9D7D4B8A225A12C; // 0x38(0x04)
	struct FMatchResultMapLocation victimLocation_22_458A221F42643DF752E5508A28C1080F; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FMatchResultPlayerLocation> playerLocations_25_17996FD44BE99D1ED476A29835AE5E86; // 0x48(0x10)
	struct FMatchResultDamageInfo finishingDamage_29_FB25ABEE4AB9897002B4E5B7CE833A3F; // 0x58(0x28)
};

