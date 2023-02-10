// BlueprintGeneratedClass CharacterSprayComponent.CharacterSprayComponent_C
// Size: 0x104 (Inherited: 0xf0)
struct UCharacterSprayComponent_C : UCharacterSprayComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	float ; // 0xf8(0x04)
	float ; // 0xfc(0x04)
	float ; // 0x100(0x04)

	bool AuthCanCharacterSpray(); // Function CharacterSprayComponent.CharacterSprayComponent_C.AuthCanCharacterSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	bool AuthTraceSpray(struct FVector& TraceStart, struct FVector& TraceEnd, struct FHitResult& OutHit); // Function CharacterSprayComponent.CharacterSprayComponent_C.AuthTraceSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function CharacterSprayComponent.CharacterSprayComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function CharacterSprayComponent.CharacterSprayComponent_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

