// BlueprintGeneratedClass FXC_Impact_Base.FXC_Impact_Base_C
// Size: 0x678 (Inherited: 0x540)
struct AFXC_Impact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UAresAudioComponent* AresAudio; // 0x548(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct TMap<enum class EAresSurfaceType, struct FAresHitImpactParticle> ImpactParticle; // 0x560(0x50)
	struct TMap<enum class EAresSurfaceType, struct FDecalData> ImpactDecal; // 0x5b0(0x50)
	struct UAkAudioEvent* ImpactAudioEvent; // 0x600(0x08)
	struct FRotator ParticleRotation; // 0x608(0x0c)
	float ParticleScale; // 0x614(0x04)
	bool AudDebrisAdd; // 0x618(0x01)
	enum class Aud_SizeSelector AudDebrisSize; // 0x619(0x01)
	char pad_61A[0x2]; // 0x61a(0x02)
	float MaxAudioDistance; // 0x61c(0x04)
	struct UAresAudioComponent* AudioComponent; // 0x620(0x08)
	struct FClassInclusionExclusionFilter ValidHitActorFilter; // 0x628(0x50)

	void ResetEffect(); // Function FXC_Impact_Base.FXC_Impact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Impact_Base.FXC_Impact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_Impact_Base(int32_t EntryPoint); // Function FXC_Impact_Base.FXC_Impact_Base_C.ExecuteUbergraph_FXC_Impact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d50
};

