// BlueprintGeneratedClass FXC_BasePistol_Fire.FXC_BasePistol_Fire_C
// Size: 0x598 (Inherited: 0x590)
struct AFXC_BasePistol_Fire_C : AFXC_Gun_Fire_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)

	void ReceiveBeginPlay(); // Function FXC_BasePistol_Fire.FXC_BasePistol_Fire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3367a20
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_BasePistol_Fire.FXC_BasePistol_Fire_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3367a20
	void ExecuteUbergraph_FXC_BasePistol_Fire(int32_t EntryPoint); // Function FXC_BasePistol_Fire.FXC_BasePistol_Fire_C.ExecuteUbergraph_FXC_BasePistol_Fire // (Final|UbergraphFunction) // @ game+0x3367a20
};

