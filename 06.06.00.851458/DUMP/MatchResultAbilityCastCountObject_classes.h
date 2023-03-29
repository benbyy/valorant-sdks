// BlueprintGeneratedClass MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C
// Size: 0x50 (Inherited: 0x30)
struct UMatchResultAbilityCastCountObject_C : UObject {
	int32_t GrenadeCasts; // 0x30(0x04)
	int32_t Ability1Casts; // 0x34(0x04)
	int32_t Ability2Casts; // 0x38(0x04)
	int32_t UltCasts; // 0x3c(0x04)
	struct FString Subject; // 0x40(0x10)

	void ToStruct(struct FMatchResultAbilityCastCount& NewParam); // Function MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C.ToStruct // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void AddCast(enum class EAresItemSlot EquippableSlot); // Function MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C.AddCast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

