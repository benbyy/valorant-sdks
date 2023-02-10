// BlueprintGeneratedClass Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C
// Size: 0x101 (Inherited: 0xe8)
struct UComp_AbilityStatisticsReplicator_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate ; // 0xf0(0x10)
	bool IsEnabled; // 0x100(0x01)

	void SetIsEnabled(bool IsEnabled); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct TArray<struct FCharacterAbilityCastInfo>& ); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t RoundNumber, struct TArray<struct FCharacterAbilityCastInfo>& ); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void _1(int32_t RoundNumberEnding); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t RoundNumber); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void (int32_t RoundNumber, struct TArray<struct FCharacterAbilityCastInfo>& ); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C. // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

