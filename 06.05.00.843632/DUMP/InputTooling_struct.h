// Enum InputTooling.EAimToolingStrafeAssistMode
enum class EAimToolingStrafeAssistMode : uint8 {
	AlwaysTowardsTarget = 0,
	ConditionalCounterStrafe = 1,
	AlwaysCounterStrafe = 2,
	Count = 3,
	Invalid = 254,
	EAimToolingFeature_MAX = 255,
	EAimToolingStrafeAssistMode_MAX = 256
};

// Enum InputTooling.EAimToolingCurve
enum class EAimToolingCurve : uint8 {
	REPLACE_WITH_NEW_ENTRY = 0,
	Count = 1,
	Invalid = 254,
	EAimToolingCurve_MAX = 255
};

// Enum InputTooling.EAimToolingFeature
enum class EAimToolingFeature : uint8 {
	TargetManagement = 0,
	PullToCenter = 1,
	Bending = 2,
	AimAccelerationDelay = 3,
	Deceleration = 4,
	FrameOfReference = 5,
	StrafeAssist = 6,
	TargetFriction = 7,
	FlashTurning = 8,
	Count = 9,
	Invalid = 254,
	EAimToolingFeature_MAX = 255
};

// Enum InputTooling.EMovementToolingFeature
enum class EMovementToolingFeature : uint8 {
	ShotRooting = 0,
	FastStrafing = 1,
	FastRelease = 2,
	AngularDeadzones = 3,
	RadialDeadzones = 4,
	AxialDeadzones = 5,
	Count = 6,
	Invalid = 254,
	EMovementToolingFeature_MAX = 255
};

// ScriptStruct InputTooling.AimToolingBendingWeaponTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingBendingWeaponTuningSet {
	float AimToolingBendingExponent; // 0x00(0x04)
	float AimToolingBendingMovePenaltyScale; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingBendingFeatureTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingBendingFeatureTuningSet {
	float AimToolingBendingInnerRadiusCm; // 0x00(0x04)
	float AimToolingBendingOuterRadiusCm; // 0x04(0x04)
	float AimToolingBendingMaxAngleDegs; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* AimToolingBendingEfficacyScaleForErrorCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingPullToCenterWeaponTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingPullToCenterWeaponTuningSet {
	struct UCurveFloat* PullToCenterWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* PullToCenterScreenDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* PullToCenterStickDeflectionCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingPullToCenterFeatureTuningSet
// Size: 0x50 (Inherited: 0x00)
struct FAimToolingPullToCenterFeatureTuningSet {
	float AimToolingPullToCenterRadialTowardExponent; // 0x00(0x04)
	float AimToolingPullToCenterRadialTowardScale; // 0x04(0x04)
	float AimToolingPullToCenterRadialAwayExponent; // 0x08(0x04)
	float AimToolingPullToCenterRadialAwayScale; // 0x0c(0x04)
	float AimToolingPullToCenterTangentialTowardExponent; // 0x10(0x04)
	float AimToolingPullToCenterTangentialTowardScale; // 0x14(0x04)
	float AimToolingPullToCenterTangentialAwayExponent; // 0x18(0x04)
	float AimToolingPullToCenterTangentialAwayScale; // 0x1c(0x04)
	float AimToolingPullToCenterMovePenaltyScale; // 0x20(0x04)
	float AimToolingPullToCenterRecoilEfficacyScale; // 0x24(0x04)
	float AimToolingPullToCenterAdjustmentClampThreshold; // 0x28(0x04)
	float AimToolingPullToCenterAdjustmentClampScale; // 0x2c(0x04)
	struct UCurveFloat* PullToCenterRadialTowardCurve; // 0x30(0x08)
	struct UCurveFloat* PullToCenterRadialAwayCurve; // 0x38(0x08)
	struct UCurveFloat* PullToCenterTangentialTowardCurve; // 0x40(0x08)
	struct UCurveFloat* PullToCenterTangentialAwayCurve; // 0x48(0x08)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FAimToolingFrameOfReferenceWeaponTuningSet {
	struct UCurveFloat* FrameOfReferenceWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* FrameOfReferenceScreenDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* FrameOfReferenceStickDeflectionCurve; // 0x10(0x08)
	struct UCurveFloat* FrameOfReferenceOverTargetPctCurve; // 0x18(0x08)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceFeatureTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingFrameOfReferenceFeatureTuningSet {
	float AimToolingFrameOfReferenceMinOverTargetPct; // 0x00(0x04)
	float AimToolingFrameOfReferenceMovementDeltaScale; // 0x04(0x04)
	struct FVector2D AimToolingFrameOfReferenceScale; // 0x08(0x08)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FAimToolingStrafeAssistWeaponTuningSet {
	struct UCurveFloat* StrafeAssistOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* StrafeAssistWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* StrafeAssistScreenDistFromTargetCurve; // 0x10(0x08)
	struct UCurveFloat* StrafeAssistPlayerSpeedCurve; // 0x18(0x08)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistFeatureTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingStrafeAssistFeatureTuningSet {
	float AimToolingStrafeAssistMovementDeltaScale; // 0x00(0x04)
	float AimToolingStrafeAssistMinimumMaxSpeedThreshold; // 0x04(0x04)
	float AimToolingStrafeAssistMinimumMaxSpeedOverride; // 0x08(0x04)
	enum class EAimToolingStrafeAssistMode AimToolingStrafeAssistMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FAimToolingTargetFrictionWeaponTuningSet {
	struct UCurveFloat* TargetFrictionOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* TargetFrictionWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* TargetFrictionScreenDistFromTargetCurve; // 0x10(0x08)
	struct UCurveFloat* TargetFrictionStickDeflectionCurve; // 0x18(0x08)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionFeatureTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingTargetFrictionFeatureTuningSet {
	struct FVector2D TargetFrictionStrengthTowardScale; // 0x00(0x08)
	struct FVector2D TargetFrictionStrengthAwayScale; // 0x08(0x08)
};

// ScriptStruct InputTooling.AimToolingFlashTurningFeatureTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingFlashTurningFeatureTuningSet {
	float FlashTurningAimAccelerationScale; // 0x00(0x04)
	float FlashTurningPitchSensitivityScale; // 0x04(0x04)
	float FlashTurningYawSensitivityScale; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingDecelerationFeatureTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingDecelerationFeatureTuningSet {
	float DecelerationTime; // 0x00(0x04)
	float DecelerationAverageWindow; // 0x04(0x04)
	float DecelerationExponent; // 0x08(0x04)
	float DecelerationHalfAngle; // 0x0c(0x04)
	float DecelerationMaxShift; // 0x10(0x04)
	float DecelerationStartThreshold; // 0x14(0x04)
};

// ScriptStruct InputTooling.AimToolingAimAccelerationFeatureTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingAimAccelerationFeatureTuningSet {
	float AimAccelerationDelayScaleDecayRate; // 0x00(0x04)
	float AimAccelerationDelayMinOverTargetPct; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingMoveErrorTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingMoveErrorTuningSet {
	float MoveErrorMax; // 0x00(0x04)
	float MoveErrorExponent; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingTargetManagementTuningSet
// Size: 0x28 (Inherited: 0x00)
struct FAimToolingTargetManagementTuningSet {
	float TargetManagementOuterRadius; // 0x00(0x04)
	float TargetManagementOuterRadiusMinScalePct; // 0x04(0x04)
	float TargetManagementOuterRadiusMaxScalePct; // 0x08(0x04)
	float TargetManagementMinDistance; // 0x0c(0x04)
	float TargetManagementMaxDistance; // 0x10(0x04)
	float TargetManagementPreviousTargetDecay; // 0x14(0x04)
	bool ENGINEERING_ONLY_CHECK_TO_MODIFY_VALUES_BELOW; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PotentialTargetMaxAngle; // 0x1c(0x04)
	float PotentialTargetQueryDist; // 0x20(0x04)
	float DefaultRawInputVectorSize; // 0x24(0x04)
};

// ScriptStruct InputTooling.AimToolingNewTargetRampUpFeatureTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingNewTargetRampUpFeatureTuningSet {
	bool IsNewTargetRampUpEnabled; // 0x00(0x01)
	bool NewTargetRampUpDeceleration; // 0x01(0x01)
	bool NewTargetRampUpFrameOfReference; // 0x02(0x01)
	bool NewTargetRampUpStrafeAssist; // 0x03(0x01)
	bool NewTargetRampUpTargetFriction; // 0x04(0x01)
	bool NewTargetRampUpPullToCenter; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float NewTargetRampUpTime; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingNoTargetFalloffFeatureTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingNoTargetFalloffFeatureTuningSet {
	bool IsNoTargetFalloffEnabled; // 0x00(0x01)
	bool NoTargetFalloffDeceleration; // 0x01(0x01)
	bool NoTargetFalloffFrameOfReference; // 0x02(0x01)
	bool NoTargetFalloffStrafeAssist; // 0x03(0x01)
	bool NoTargetFalloffTargetFriction; // 0x04(0x01)
	bool NoTargetFalloffPullToCenter; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float NoTargetFalloffTime; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingDecelerationState
// Size: 0x40 (Inherited: 0x00)
struct FAimToolingDecelerationState {
	struct TArray<struct FAimToolingDecelerationEntry> InputEntries; // 0x00(0x10)
	struct FVector2D AverageInput; // 0x10(0x08)
	float TimeTotal; // 0x18(0x04)
	bool bIsDecelerating; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DecelerationAmount; // 0x20(0x04)
	struct FVector2D DecelerationStartDirection; // 0x24(0x08)
	struct FVector2D DecelerationLastKnownDirection; // 0x2c(0x08)
	float DecelerationStartSize; // 0x34(0x04)
	struct FVector2D ToTargetStartVector; // 0x38(0x08)
};

// ScriptStruct InputTooling.AimToolingDecelerationEntry
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingDecelerationEntry {
	struct FVector2D Input; // 0x00(0x08)
	float Duration; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingAxis
// Size: 0x24 (Inherited: 0x00)
struct FAimToolingAxis {
	struct FName TopBone; // 0x00(0x0c)
	struct FName MiddleBone; // 0x0c(0x0c)
	struct FName BottomBone; // 0x18(0x0c)
};

// ScriptStruct InputTooling.AimToolingTargetPointDef
// Size: 0x14 (Inherited: 0x00)
struct FAimToolingTargetPointDef {
	struct FName TargetPointName; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct InputTooling.AimToolingBoneDef
// Size: 0x14 (Inherited: 0x00)
struct FAimToolingBoneDef {
	struct FName Bone; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct InputTooling.AimToolingTarget
// Size: 0x20 (Inherited: 0x00)
struct FAimToolingTarget {
	struct UAimToolingTargetComponentBase* TargetComponent; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	float OverTargetPercent; // 0x0c(0x04)
	float Dist; // 0x10(0x04)
	struct FVector AssistLocation; // 0x14(0x0c)
};

// ScriptStruct InputTooling.AimToolingCachedProjectionData
// Size: 0x120 (Inherited: 0x00)
struct FAimToolingCachedProjectionData {
	struct APlayerController* OwningPC; // 0x00(0x08)
	char pad_8[0x118]; // 0x08(0x118)
};

// ScriptStruct InputTooling.AimToolingModifiers
// Size: 0x40 (Inherited: 0x00)
struct FAimToolingModifiers {
	char pad_0[0x10]; // 0x00(0x10)
	struct FRotator CurrentTrajectoryOffset; // 0x10(0x0c)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct InputTooling.MovementToolingFastReleaseFeatureTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FMovementToolingFastReleaseFeatureTuningSet {
	float FastReleasePower; // 0x00(0x04)
	float FastReleaseMinSpeed; // 0x04(0x04)
};

// ScriptStruct InputTooling.MovementToolingFastStrafingFeatureTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FMovementToolingFastStrafingFeatureTuningSet {
	float FastStrafingStickDeltaInitialThreshold; // 0x00(0x04)
	float FastStrafingStickDeltaReleaseThreshold; // 0x04(0x04)
	float FastStrafingYInitialThreshold; // 0x08(0x04)
	float FastStrafingYReleaseThreshold; // 0x0c(0x04)
	float FastStrafingCounterStrafeThreshold; // 0x10(0x04)
	float FastStrafingCounterStrafeMaxSpeed; // 0x14(0x04)
	float InitialFastStrafingStickDeltaThreshold; // 0x18(0x04)
	float InitialFastStrafingPlayerSpeedCutoff; // 0x1c(0x04)
};

// ScriptStruct InputTooling.MovementToolingShotRootingFeatureTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FMovementToolingShotRootingFeatureTuningSet {
	float ShotRootingDeadzone; // 0x00(0x04)
	float ShotRootingDuration; // 0x04(0x04)
	float ShotRootingFalloffSeconds; // 0x08(0x04)
	float ShotRootingFalloffExponent; // 0x0c(0x04)
};

