// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x6d0 (Inherited: 0x670)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x668(0x10)
	struct FString LookUpAtRateAxisName; // 0x678(0x10)
	struct FString TurnAxisName; // 0x688(0x10)
	struct FString TurnAtRateAxisName; // 0x698(0x10)
	struct FString MoveForwardAxisName; // 0x6a8(0x10)
	struct FString MoveRightAxisName; // 0x6b8(0x10)
	float MouseSensitivityScale_Pitch; // 0x6c8(0x04)
	float MouseSensitivityScale_Yaw; // 0x6cc(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xc20 (Inherited: 0xbd0)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xbd0(0x0c)
	struct FRotator RotationalDeceleration; // 0xbdc(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xbe8(0x0c)
	float MinPitch; // 0xbf4(0x04)
	float MaxPitch; // 0xbf8(0x04)
	float WalkingFriction; // 0xbfc(0x04)
	float WalkingSpeed; // 0xc00(0x04)
	float WalkingAcceleration; // 0xc04(0x04)
	char pad_C08[0x18]; // 0xc08(0x18)
};

