// BlueprintGeneratedClass ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C
// Size: 0x20c (Inherited: 0x170)
struct UForceModule_JumpLandSlow_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float JumpSlowIntensity; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FExplicitFloatCurve IntensityByFallDistance; // 0x180(0x88)
	float LandSlowDuration; // 0x208(0x04)

	void CalculateJumpIntensity(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.CalculateJumpIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	float GetAttributeModifier(enum class EForceModuleAttribute Type, float Time); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.GetAttributeModifier // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	bool TickForceModule(float DeltaTime); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void Initialize(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_ForceModule_JumpLandSlow(int32_t EntryPoint); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.ExecuteUbergraph_ForceModule_JumpLandSlow // (Final|UbergraphFunction) // @ game+0x33d1d50
};

