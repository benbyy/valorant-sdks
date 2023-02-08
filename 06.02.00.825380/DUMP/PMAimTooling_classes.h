// Class PMAimTooling.PMAimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UPMAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class PMAimTooling.PMAimToolingComponent
// Size: 0x4d0 (Inherited: 0xe8)
struct UPMAimToolingComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x110(0x10)
	struct TArray<struct FPMAimToolingTargetFrictionFeatureTuningSet> TargetFrictionFeatureTuningSets; // 0x120(0x10)
	struct TMap<struct FString, struct FPMAimToolingTargetFrictionWeaponTuningSet> TargetFrictionWeaponTuningSets; // 0x130(0x50)
	struct TArray<struct FPMAimToolingStrafeAssistFeatureTuningSet> StrafeAssistFeatureTuningSets; // 0x180(0x10)
	struct TMap<struct FString, struct FPMAimToolingStrafeAssistWeaponTuningSet> StrafeAssistWeaponTuningSets; // 0x190(0x50)
	struct TArray<struct FPMAimToolingFrameOfReferenceFeatureTuningSet> FrameOfReferenceFeatureTuningSets; // 0x1e0(0x10)
	struct TMap<struct FString, struct FPMAimToolingFrameOfReferenceWeaponTuningSet> FrameOfReferenceWeaponTuningSets; // 0x1f0(0x50)
	struct TArray<struct FPMAimToolingPullToCenterFeatureTuningSet> PullToCenterFeatureTuningSets; // 0x240(0x10)
	struct TMap<struct FString, struct FPMAimToolingPullToCenterWeaponTuningSet> PullToCenterWeaponTuningSets; // 0x250(0x50)
	struct TArray<struct FPMAimToolingBendingFeatureTuningSet> BendingFeatureTuningSets; // 0x2a0(0x10)
	struct TMap<struct FString, struct FPMAimToolingBendingWeaponTuningSet> BendingWeaponTuningSets; // 0x2b0(0x50)
	char pad_300[0x8]; // 0x300(0x08)
	struct APlayerController* OwningPC; // 0x308(0x08)
	struct FPMAimToolingCachedProjectionData CachedProjectionData; // 0x310(0x120)
	struct FPMAimToolingDecelerationState DecelerationState; // 0x430(0x40)
	bool bAimToolingEnabled; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float CurrentAimAccelerationDelayScale; // 0x474(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x478(0x08)
	struct TArray<struct FPMAimToolingTarget> Targets; // 0x480(0x10)
	struct FPMAimToolingTarget PreviousTarget; // 0x490(0x20)
	float PreviousTargetLostTime; // 0x4b0(0x04)
	char pad_4B4[0x1c]; // 0x4b4(0x1c)

	bool IsFeatureEnabled(enum class EPMAimToolingFeature Feature); // Function PMAimTooling.PMAimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56ba720
	bool IsAimToolingEnabled(); // Function PMAimTooling.PMAimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56ba6f0
	float GetFeatureConfig(enum class EPMAimToolingConfig ConfigName); // Function PMAimTooling.PMAimToolingComponent.GetFeatureConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56ba660
};

// Class PMAimTooling.PMAimToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UPMAimToolingControllerInterface : UInterface {
};

// Class PMAimTooling.PMAimToolingFlashingTargetComponent
// Size: 0x2a0 (Inherited: 0x290)
struct UPMAimToolingFlashingTargetComponent : USceneComponent {
	bool ShouldAffectAllies; // 0x288(0x01)
	struct AActor* OwningActor; // 0x290(0x08)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class PMAimTooling.PMAimToolingTargetComponentBase
// Size: 0x290 (Inherited: 0x290)
struct UPMAimToolingTargetComponentBase : USceneComponent {
	char TargetId; // 0x288(0x01)
};

// Class PMAimTooling.PMAimToolingPointsTargetComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UPMAimToolingPointsTargetComponent : UPMAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x2a0(0x10)
	struct AActor* OwningActor; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class PMAimTooling.PMAimToolingSkeletalTargetComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UPMAimToolingSkeletalTargetComponent : UPMAimToolingTargetComponentBase {
	struct TArray<struct FPMAimToolingBoneDef> AimToolingBones; // 0x290(0x10)
	struct FPMAimToolingAxis AimToolingAxis; // 0x2a0(0x24)
	char pad_2C4[0xc]; // 0x2c4(0x0c)
};

// Class PMAimTooling.PMAimToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UPMAimToolingStatics : UBlueprintFunctionLibrary {
};

// Class PMAimTooling.PMAimToolingTargetManager
// Size: 0x150 (Inherited: 0xe8)
struct UPMAimToolingTargetManager : UActorComponent {
	char LastUsedTargetID; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UPMAimToolingTargetComponentBase*> TrackedTargets; // 0xf0(0x10)
	struct TSet<struct AActor*> FlashingTargets; // 0x100(0x50)
};

// Class PMAimTooling.PMAimToolingTargetPoint
// Size: 0x2a0 (Inherited: 0x290)
struct UPMAimToolingTargetPoint : USceneComponent {
	struct FPMAimToolingTargetPointDef TargetPoint; // 0x288(0x14)
};

