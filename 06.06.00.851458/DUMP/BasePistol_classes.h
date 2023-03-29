// BlueprintGeneratedClass BasePistol.BasePistol_C
// Size: 0x1268 (Inherited: 0x123c)
struct ABasePistol_C : AGun_C {
	char pad_123C[0x4]; // 0x123c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1240(0x08)
	struct UStabilityComponent* FlaggedBurstStability; // 0x1248(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability_Burst; // 0x1250(0x08)
	struct UStabilityComponent* BurstStability; // 0x1258(0x08)
	struct UFiringStateComponent* FiringStateBurst; // 0x1260(0x08)

	void OnRep_Kills(); // Function BasePistol.BasePistol_C.OnRep_Kills // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BasePistol.BasePistol_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTime); // Function BasePistol.BasePistol_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void Server Update Kill Count(int32_t Kills); // Function BasePistol.BasePistol_C.Server Update Kill Count // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BasePistol(int32_t EntryPoint); // Function BasePistol.BasePistol_C.ExecuteUbergraph_BasePistol // (Final|UbergraphFunction) // @ game+0x337bc90
};

