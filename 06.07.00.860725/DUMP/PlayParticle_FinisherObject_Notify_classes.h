// BlueprintGeneratedClass PlayParticle_FinisherObject_Notify.PlayParticle_FinisherObject_Notify_C
// Size: 0x13c (Inherited: 0x40)
struct UPlayParticle_FinisherObject_Notify_C : UAnimNotify {
	struct FGunSkinParticleInfo Particle Info; // 0x40(0x98)
	struct TSoftObjectPtr<UParticleSystem> Particle Template; // 0xd8(0x30)
	struct FName Attach Socket; // 0x108(0x0c)
	struct FVector Location Offset; // 0x114(0x0c)
	bool Flip Particle Orientation; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float speedMultiplier; // 0x124(0x04)
	bool setManualRotation; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FRotator ManualRotation; // 0x12c(0x0c)
	int32_t TransluencySortPriority; // 0x138(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayParticle_FinisherObject_Notify.PlayParticle_FinisherObject_Notify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3367a20
};

