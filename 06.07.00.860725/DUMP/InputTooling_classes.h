// Class InputTooling.AimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class InputTooling.BaseInputToolingComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UBaseInputToolingComponent : UActorComponent {
	struct APlayerController* OwningPC; // 0xe8(0x08)
};

// Class InputTooling.AimToolingComponent
// Size: 0x5d0 (Inherited: 0xf0)
struct UAimToolingComponent : UBaseInputToolingComponent {
	char pad_F0[0x2d0]; // 0xf0(0x2d0)
	struct TArray<bool> FeaturesEnabledValues; // 0x3c0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x3d0(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct FAimToolingCachedProjectionData CachedProjectionData; // 0x400(0x120)
	struct FAimToolingDecelerationState DecelerationState; // 0x520(0x40)
	bool bAimToolingEnabled; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float CurrentAimAccelerationDelayScale; // 0x564(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x568(0x08)
	struct TArray<struct FAimToolingTarget> Targets; // 0x570(0x10)
	struct FAimToolingTarget PreviousTarget; // 0x580(0x28)
	float PreviousTargetLostTime; // 0x5a8(0x04)
	float NewTargetAcquiredTime; // 0x5ac(0x04)
	char pad_5B0[0x20]; // 0x5b0(0x20)

	bool IsFeatureEnabled(enum class EAimToolingFeature Feature, struct UAimToolingTargetComponentBase* TargetComponent); // Function InputTooling.AimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56d5c20
	bool IsAimToolingEnabled(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56d5bf0
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

// Class InputTooling.BaseInputToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UBaseInputToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingComponent
// Size: 0x160 (Inherited: 0xf0)
struct UMovementToolingComponent : UBaseInputToolingComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	bool bMovementToolingEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D FastStrafingPreviousInputVector; // 0x114(0x08)
	float FastStrafeDirection; // 0x11c(0x04)
	bool bInitialFastStrafingActive; // 0x120(0x01)
	char pad_121[0x3f]; // 0x121(0x3f)

	bool IsMovementToolingEnabled(); // Function InputTooling.MovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d20e80
	bool IsFeatureEnabled(enum class EMovementToolingFeature Feature); // Function InputTooling.MovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56dc370
};

// Class InputTooling.MovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingStatics : UBlueprintFunctionLibrary {
};

