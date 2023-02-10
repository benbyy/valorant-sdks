// BlueprintGeneratedClass Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C
// Size: 0x230 (Inherited: 0xe8)
struct UComp_PlayerCharacter_DebuffTagVisuals_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> BuffTagAndFXC; // 0xf0(0x50)
	struct TMap<struct FGameplayTag, struct FEffectID> ; // 0x140(0x50)
	struct TMap<struct FGameplayTag, struct FName> BuffTagAndParameterName; // 0x190(0x50)
	struct UStaticMeshComponent* ; // 0x1e0(0x08)
	struct UStaticMesh* ; // 0x1e8(0x08)
	struct UMaterialInterface* ; // 0x1f0(0x08)
	struct TArray<struct FGameplayTag> ; // 0x1f8(0x10)
	struct UCurveFloat* ; // 0x208(0x08)
	struct TArray<struct FGameplayTag> ; // 0x210(0x10)
	struct UAresAbilitySystemComponent* ; // 0x220(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0x228(0x08)

	void (); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FName ParamName, float ParamValue); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UStaticMeshComponent*& ); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FGameplayTag GameplayTag, bool Active); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (struct AShooterCharacter* Character); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
};

