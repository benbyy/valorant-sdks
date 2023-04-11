// BlueprintGeneratedClass DeathPing.DeathPing_C
// Size: 0x6f0 (Inherited: 0x6c8)
struct ADeathPing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c8(0x08)
	struct FLinearColor Timeline_0_0_Color_A2B3E1AA4565E82DDAAAA4B64E15BB6F; // 0x6d0(0x10)
	enum class ETimelineDirection Timeline_0_0__Direction_A2B3E1AA4565E82DDAAAA4B64E15BB6F; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x6e8(0x08)

	void Timeline_0_0__FinishedFunc(); // Function DeathPing.DeathPing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x3367a20
	void Timeline_0_0__UpdateFunc(); // Function DeathPing.DeathPing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_DeathPing(int32_t EntryPoint); // Function DeathPing.DeathPing_C.ExecuteUbergraph_DeathPing // (Final|UbergraphFunction) // @ game+0x3367a20
};

