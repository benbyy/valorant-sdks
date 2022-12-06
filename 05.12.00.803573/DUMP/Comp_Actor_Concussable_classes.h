// BlueprintGeneratedClass Comp_Actor_Concussable.Comp_Actor_Concussable_C
// Size: 0x12c (Inherited: 0xf0)
struct UComp_Actor_Concussable_C : UBaseConcussComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct FStruct_ConcussRequest> ; // 0xf8(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x108(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x110(0x08)
	bool ; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ; // 0x11c(0x04)
	bool ; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ; // 0x124(0x04)
	float ; // 0x128(0x04)

	void (float Duration, struct AActor* Owner); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	float (struct FStruct_ConcussRequest& Struct_ConcussRequest); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FStruct_ConcussRequest& Concuss, bool& ); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};
