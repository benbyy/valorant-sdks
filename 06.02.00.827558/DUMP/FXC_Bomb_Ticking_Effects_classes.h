// BlueprintGeneratedClass FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C
// Size: 0x5c0 (Inherited: 0x540)
struct AFXC_Bomb_Ticking_Effects_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x550(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x558(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x560(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x568(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x570(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x578(0x08)
	float ; // 0x580(0x04)
	float ; // 0x584(0x04)
	float ; // 0x588(0x04)
	float ; // 0x58c(0x04)
	float ; // 0x590(0x04)
	float ; // 0x594(0x04)
	float ; // 0x598(0x04)
	float ; // 0x59c(0x04)
	struct FTimerHandle ; // 0x5a0(0x08)
	float ; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FTimerHandle ; // 0x5b0(0x08)
	float ; // 0x5b8(0x04)
	float ; // 0x5bc(0x04)

	void (float , float& ); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

