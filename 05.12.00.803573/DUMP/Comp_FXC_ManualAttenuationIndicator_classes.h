// BlueprintGeneratedClass Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C
// Size: 0x110 (Inherited: 0xf8)
struct UComp_FXC_ManualAttenuationIndicator_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	float Radius; // 0x100(0x04)
	enum class Enum_AttenuationVisualization ; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UShooterCharacterAudioAttenuationComponent_C* ; // 0x108(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};
