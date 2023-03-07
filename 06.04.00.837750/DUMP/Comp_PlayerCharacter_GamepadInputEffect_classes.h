// BlueprintGeneratedClass Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C
// Size: 0x130 (Inherited: 0xe8)
struct UComp_PlayerCharacter_GamepadInputEffect_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool bSensitivityModifierPressed; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FEffectID CachedEffectID; // 0xf8(0x20)
	struct URateLimiterComponent* RateLimiter; // 0x118(0x08)
	struct ABasePlayerCharacter_C* CachedCharacter; // 0x120(0x08)
	struct AEffectContainer* SensitivityModifierFXC; // 0x128(0x08)

	void IsPlayingEffect(bool& HasFXC); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.IsPlayingEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void OnRep_bSensitivityModifierPressed(); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.OnRep_bSensitivityModifierPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.StopEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void StartEffect(); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.StartEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x34b46f0
	void OnSensitivityModifierPressed(); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.OnSensitivityModifierPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void OnSensitivityModifierReleased(); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.OnSensitivityModifierReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ServerToggleSensitivityModEffect(bool IsModifyingSensitivity); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.ServerToggleSensitivityModEffect // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ExecuteUbergraph_Comp_PlayerCharacter_GamepadInputEffect(int32_t EntryPoint); // Function Comp_PlayerCharacter_GamepadInputEffect.Comp_PlayerCharacter_GamepadInputEffect_C.ExecuteUbergraph_Comp_PlayerCharacter_GamepadInputEffect // (Final|UbergraphFunction) // @ game+0x34b46f0
};

