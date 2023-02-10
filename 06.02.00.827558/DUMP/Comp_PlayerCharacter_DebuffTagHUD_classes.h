// BlueprintGeneratedClass Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C
// Size: 0x148 (Inherited: 0xe8)
struct UComp_PlayerCharacter_DebuffTagHUD_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> ; // 0xf0(0x10)
	struct FMulticastInlineDelegate ; // 0x100(0x10)
	struct FMulticastInlineDelegate ; // 0x110(0x10)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> CharacterTrackedGameplayTags; // 0x120(0x10)
	struct UAresAbilitySystemComponent* ; // 0x130(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0x138(0x08)
	struct ABaseGameState_C* ; // 0x140(0x08)

	void (struct UAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool& ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d60
	void (struct TArray<struct FStruct_GameplayTagAndHUD_Info>& ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d60
	void (struct FGameplayTag InTag, bool& Success, struct FStruct_GameplayTagAndHUD_Info& , int32_t& ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FGameplayTag InTag, struct TArray<struct FStruct_GameplayTagAndHUD_Info>& , bool& Success, struct FStruct_GameplayTagAndHUD_Info& , int32_t& ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAresAbilitySystemComponent* , struct FGameplayTag GameplayTag, bool Active); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void (struct FStruct_GameplayTagAndHUD_Info ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FStruct_GameplayTagAndHUD_Info ); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

