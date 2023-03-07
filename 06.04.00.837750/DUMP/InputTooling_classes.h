// Class InputTooling.AimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class InputTooling.AimToolingComponent
// Size: 0x4d0 (Inherited: 0xe8)
struct UAimToolingComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x110(0x10)
	struct TArray<struct FAimToolingTargetFrictionFeatureTuningSet> TargetFrictionFeatureTuningSets; // 0x120(0x10)
	struct TMap<struct FString, struct FAimToolingTargetFrictionWeaponTuningSet> TargetFrictionWeaponTuningSets; // 0x130(0x50)
	struct TArray<struct FAimToolingStrafeAssistFeatureTuningSet> StrafeAssistFeatureTuningSets; // 0x180(0x10)
	struct TMap<struct FString, struct FAimToolingStrafeAssistWeaponTuningSet> StrafeAssistWeaponTuningSets; // 0x190(0x50)
	struct TArray<struct FAimToolingFrameOfReferenceFeatureTuningSet> FrameOfReferenceFeatureTuningSets; // 0x1e0(0x10)
	struct TMap<struct FString, struct FAimToolingFrameOfReferenceWeaponTuningSet> FrameOfReferenceWeaponTuningSets; // 0x1f0(0x50)
	struct TArray<struct FAimToolingPullToCenterFeatureTuningSet> PullToCenterFeatureTuningSets; // 0x240(0x10)
	struct TMap<struct FString, struct FAimToolingPullToCenterWeaponTuningSet> PullToCenterWeaponTuningSets; // 0x250(0x50)
	struct TArray<struct FAimToolingBendingFeatureTuningSet> BendingFeatureTuningSets; // 0x2a0(0x10)
	struct TMap<struct FString, struct FAimToolingBendingWeaponTuningSet> BendingWeaponTuningSets; // 0x2b0(0x50)
	char pad_300[0x8]; // 0x300(0x08)
	struct APlayerController* OwningPC; // 0x308(0x08)
	struct FAimToolingCachedProjectionData CachedProjectionData; // 0x310(0x120)
	struct FAimToolingDecelerationState DecelerationState; // 0x430(0x40)
	bool bAimToolingEnabled; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float CurrentAimAccelerationDelayScale; // 0x474(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x478(0x08)
	struct TArray<struct FAimToolingTarget> Targets; // 0x480(0x10)
	struct FAimToolingTarget PreviousTarget; // 0x490(0x20)
	float PreviousTargetLostTime; // 0x4b0(0x04)
	float NewTargetAcquiredTime; // 0x4b4(0x04)
	char pad_4B8[0x18]; // 0x4b8(0x18)

	bool IsFeatureEnabled(enum class EAimToolingFeature Feature); // Function InputTooling.AimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5785880
	bool IsAimToolingEnabled(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5785850
	float GetFeatureConfig(enum class EAimToolingConfig ConfigName); // Function InputTooling.AimToolingComponent.GetFeatureConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57857c0
};

// Class InputTooling.AimToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingControllerInterface : UInterface {
};

// Class InputTooling.AimToolingFlashingTargetComponent
// Size: 0x2a0 (Inherited: 0x290)
struct UAimToolingFlashingTargetComponent : USceneComponent {
	bool ShouldAffectAllies; // 0x288(0x01)
	struct AActor* OwningActor; // 0x290(0x08)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class InputTooling.AimToolingTargetComponentBase
// Size: 0x290 (Inherited: 0x290)
struct UAimToolingTargetComponentBase : USceneComponent {
	char TargetId; // 0x288(0x01)
};

// Class InputTooling.AimToolingPointsTargetComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UAimToolingPointsTargetComponent : UAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x2a0(0x10)
	struct AActor* OwningActor; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class InputTooling.AimToolingSkeletalTargetComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UAimToolingSkeletalTargetComponent : UAimToolingTargetComponentBase {
	struct TArray<struct FAimToolingBoneDef> AimToolingBones; // 0x290(0x10)
	struct FAimToolingAxis AimToolingAxis; // 0x2a0(0x24)
	char pad_2C4[0xc]; // 0x2c4(0x0c)
};

// Class InputTooling.AimToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingStatics : UBlueprintFunctionLibrary {
};

// Class InputTooling.AimToolingTargetManager
// Size: 0x150 (Inherited: 0xe8)
struct UAimToolingTargetManager : UActorComponent {
	char LastUsedTargetID; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UAimToolingTargetComponentBase*> TrackedTargets; // 0xf0(0x10)
	struct TSet<struct AActor*> FlashingTargets; // 0x100(0x50)
};

// Class InputTooling.AimToolingTargetPoint
// Size: 0x2a0 (Inherited: 0x290)
struct UAimToolingTargetPoint : USceneComponent {
	struct FAimToolingTargetPointDef TargetPoint; // 0x288(0x14)
};

// Class InputTooling.MovementToolingComponent
// Size: 0x128 (Inherited: 0xe8)
struct UMovementToolingComponent : UActorComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xe8(0x10)
	struct TArray<float> FeatureConfigValues; // 0xf8(0x10)
	struct APlayerController* OwningPC; // 0x108(0x08)
	bool bMovementToolingEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D FastStrafingPreviousInputVector; // 0x114(0x08)
	float FastStrafeDirection; // 0x11c(0x04)
	bool bInitialFastStrafingActive; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	bool IsMovementToolingEnabled(); // Function InputTooling.MovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e96e30
	bool IsFeatureEnabled(enum class EMovementToolingFeature Feature); // Function InputTooling.MovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x578ca80
	float GetFeatureConfig(enum class EMovementToolingConfig ConfigName); // Function InputTooling.MovementToolingComponent.GetFeatureConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x578c9f0
};

// Class InputTooling.MovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingStatics : UBlueprintFunctionLibrary {
};

