// Class InputTooling.AimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class InputTooling.AimToolingComponent
// Size: 0x540 (Inherited: 0xe8)
struct UAimToolingComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x110(0x10)
	struct FAimToolingNoTargetFalloffFeatureTuningSet NoTargetFalloffFeatureTuningSet; // 0x120(0x0c)
	struct FAimToolingNewTargetRampUpFeatureTuningSet NewTargetRampUpFeatureTuningSet; // 0x12c(0x0c)
	struct FAimToolingTargetManagementTuningSet TargetManagementTuningSet; // 0x138(0x28)
	struct FAimToolingMoveErrorTuningSet AimToolingMoveErrorTuningSet; // 0x160(0x08)
	struct FAimToolingAimAccelerationFeatureTuningSet AimAccelerationFeatureTuningSet; // 0x168(0x08)
	struct FAimToolingDecelerationFeatureTuningSet DecelerationFeatureTuningSet; // 0x170(0x18)
	struct TArray<struct FAimToolingTargetFrictionFeatureTuningSet> TargetFrictionFeatureTuningSets; // 0x188(0x10)
	struct TMap<struct FString, struct FAimToolingTargetFrictionWeaponTuningSet> TargetFrictionWeaponTuningSets; // 0x198(0x50)
	struct TArray<struct FAimToolingStrafeAssistFeatureTuningSet> StrafeAssistFeatureTuningSets; // 0x1e8(0x10)
	struct TMap<struct FString, struct FAimToolingStrafeAssistWeaponTuningSet> StrafeAssistWeaponTuningSets; // 0x1f8(0x50)
	struct TArray<struct FAimToolingFrameOfReferenceFeatureTuningSet> FrameOfReferenceFeatureTuningSets; // 0x248(0x10)
	struct TMap<struct FString, struct FAimToolingFrameOfReferenceWeaponTuningSet> FrameOfReferenceWeaponTuningSets; // 0x258(0x50)
	struct TArray<struct FAimToolingPullToCenterFeatureTuningSet> PullToCenterFeatureTuningSets; // 0x2a8(0x10)
	struct TMap<struct FString, struct FAimToolingPullToCenterWeaponTuningSet> PullToCenterWeaponTuningSets; // 0x2b8(0x50)
	struct TArray<struct FAimToolingBendingFeatureTuningSet> BendingFeatureTuningSets; // 0x308(0x10)
	struct TMap<struct FString, struct FAimToolingBendingWeaponTuningSet> BendingWeaponTuningSets; // 0x318(0x50)
	struct FAimToolingFlashTurningFeatureTuningSet FlashTurningFeatureTuningSet; // 0x368(0x0c)
	char pad_374[0x4]; // 0x374(0x04)
	struct APlayerController* OwningPC; // 0x378(0x08)
	struct FAimToolingCachedProjectionData CachedProjectionData; // 0x380(0x120)
	struct FAimToolingDecelerationState DecelerationState; // 0x4a0(0x40)
	bool bAimToolingEnabled; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float CurrentAimAccelerationDelayScale; // 0x4e4(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x4e8(0x08)
	struct TArray<struct FAimToolingTarget> Targets; // 0x4f0(0x10)
	struct FAimToolingTarget PreviousTarget; // 0x500(0x20)
	float PreviousTargetLostTime; // 0x520(0x04)
	float NewTargetAcquiredTime; // 0x524(0x04)
	char pad_528[0x18]; // 0x528(0x18)

	bool IsFeatureEnabled(enum class EAimToolingFeature Feature, struct UAimToolingTargetComponentBase* TargetComponent); // Function InputTooling.AimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5600d20
	bool IsAimToolingEnabled(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5600cf0
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
// Size: 0x2a0 (Inherited: 0x290)
struct UAimToolingTargetComponentBase : USceneComponent {
	struct TArray<enum class EAimToolingFeature> DisabledFeatures; // 0x288(0x10)
	char TargetId; // 0x298(0x01)
};

// Class InputTooling.AimToolingPointsTargetComponent
// Size: 0x2d0 (Inherited: 0x2a0)
struct UAimToolingPointsTargetComponent : UAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x2b0(0x10)
	struct AActor* OwningActor; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class InputTooling.AimToolingSkeletalTargetComponent
// Size: 0x2e0 (Inherited: 0x2a0)
struct UAimToolingSkeletalTargetComponent : UAimToolingTargetComponentBase {
	struct TArray<struct FAimToolingBoneDef> AimToolingBones; // 0x2a0(0x10)
	struct FAimToolingAxis AimToolingAxis; // 0x2b0(0x24)
	char pad_2D4[0xc]; // 0x2d4(0x0c)
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
// Size: 0x160 (Inherited: 0xe8)
struct UMovementToolingComponent : UActorComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xe8(0x10)
	struct TArray<float> FeatureConfigValues; // 0xf8(0x10)
	struct APlayerController* OwningPC; // 0x108(0x08)
	bool bMovementToolingEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D FastStrafingPreviousInputVector; // 0x114(0x08)
	float FastStrafeDirection; // 0x11c(0x04)
	bool bInitialFastStrafingActive; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	struct FMovementToolingShotRootingFeatureTuningSet ShotRootingFeatureTuningSet; // 0x124(0x10)
	struct FMovementToolingFastStrafingFeatureTuningSet FastStrafingFeatureTuningSet; // 0x134(0x20)
	struct FMovementToolingFastReleaseFeatureTuningSet FastReleaseFeatureTuningSet; // 0x154(0x08)
	char pad_15C[0x4]; // 0x15c(0x04)

	bool IsMovementToolingEnabled(); // Function InputTooling.MovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d0a800
	bool IsFeatureEnabled(enum class EMovementToolingFeature Feature); // Function InputTooling.MovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5606a40
};

// Class InputTooling.MovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingStatics : UBlueprintFunctionLibrary {
};

