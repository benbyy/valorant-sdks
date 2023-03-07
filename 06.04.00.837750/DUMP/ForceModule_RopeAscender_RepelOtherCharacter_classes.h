// BlueprintGeneratedClass ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C
// Size: 0x1b0 (Inherited: 0x180)
struct UForceModule_RopeAscender_RepelOtherCharacter_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	float RepelRadiusSquared; // 0x188(0x04)
	float RepelRadius; // 0x18c(0x04)
	float RepelSpringiness; // 0x190(0x04)
	bool bRepelOtherHitCharacters; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	struct FForceModuleHandle SourceCharacterAscenderForceModule; // 0x198(0x08)
	float ForceModuleActiveRadius; // 0x1a0(0x04)
	float ForceModuleActiveRadiusSquared; // 0x1a4(0x04)
	bool bRepelForceIsActive; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	float SourceToTargetDistSquared; // 0x1ac(0x04)

	void GetSourceToTargetVector(struct FVector& GetSourceToTargetVector); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetSourceToTargetVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Initialize(); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x34b46f0
	void OnMovementBlocked(struct FHitResult& BlockingHit); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.OnMovementBlocked // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x34b46f0
	void ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter(int32_t EntryPoint); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x34b46f0
};

