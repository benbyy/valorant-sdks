// BlueprintGeneratedClass TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C
// Size: 0x332 (Inherited: 0x308)
struct UTestBranch_EffectsActive_StateComponent_C : UTestBranch_StateComponent_C {
	struct TArray<struct UGameplayEffect*> RequiredEffects; // 0x308(0x10)
	bool RequireAllEffects; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TArray<struct UGameplayEffect*> ForceFailEffects; // 0x320(0x10)
	bool bMustBeValidAndAlive; // 0x330(0x01)
	bool bIncludeDerivedEffectTypes; // 0x331(0x01)

	void TryGetTargetActor(struct UStateTransitionContext* TransitionContext, struct AActor*& Actor); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.TryGetTargetActor // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool HasEffect(struct UGameplayEffect* InputPin, struct AActor* Target); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.HasEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void CheckFailEffects(struct AActor* TargetActor, bool& NoFailEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckFailEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void CheckRequiredEffects(struct AActor* TargetActor, bool& HasRequiredEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckRequiredEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	bool StateTest(struct UStateTransitionContext* StateTransitionContext); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.StateTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
};

