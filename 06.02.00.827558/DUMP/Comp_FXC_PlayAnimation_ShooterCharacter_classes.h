// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C
// Size: 0x17e (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* ; // 0x100(0x08)
	struct UAnimMontage* ; // 0x108(0x08)
	struct UAnimMontage* ; // 0x110(0x08)
	struct UAnimMontage* ; // 0x118(0x08)
	bool ; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ; // 0x124(0x04)
	float ; // 0x128(0x04)
	float ; // 0x12c(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	float StartTime; // 0x138(0x04)
	float ; // 0x13c(0x04)
	bool ; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TArray<struct F> ; // 0x148(0x10)
	struct FMulticastInlineDelegate ; // 0x158(0x10)
	bool ; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct AAresEquippable* ; // 0x170(0x08)
	float ; // 0x178(0x04)
	bool ; // 0x17c(0x01)
	bool ; // 0x17d(0x01)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct FString SectionName); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void GetPlayRate(float , float , float& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void PlayAnimation(float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAnimInstance* Instance, struct UAnimMontage* Montage, float PlayRate, float StartTime); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UAnimationAsset* Anim); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
	void (); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
};

