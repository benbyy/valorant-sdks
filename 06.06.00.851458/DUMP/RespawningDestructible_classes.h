// BlueprintGeneratedClass RespawningDestructible.RespawningDestructible_C
// Size: 0x450 (Inherited: 0x400)
struct ARespawningDestructible_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USimpleReplicationSleepComponent* SimpleReplicationSleep; // 0x408(0x08)
	struct UParticleSystem* DeathVFX; // 0x410(0x08)
	struct FMulticastInlineDelegate ServerDeathEvent; // 0x418(0x10)
	bool IsAlive_1; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UAkAudioEvent* Ak Event Destruction; // 0x430(0x08)
	struct UChildDamageSectionComponent* CurrentHealthSection; // 0x438(0x08)
	bool ShouldBreakOnOverlap; // 0x440(0x01)
	bool CanBeCrushed; // 0x441(0x01)
	char pad_442[0x2]; // 0x442(0x02)
	struct FName DoNotBreakTag; // 0x444(0x0c)

	bool OnCrushed(struct AActor* CrushingObject, float CrushDamage); // Function RespawningDestructible.RespawningDestructible_C.OnCrushed // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	struct FTransform GetExplosionLocation(); // Function RespawningDestructible.RespawningDestructible_C.GetExplosionLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x337bc90
	void OnAuthRoundBegin(); // Function RespawningDestructible.RespawningDestructible_C.OnAuthRoundBegin // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void OnDie(); // Function RespawningDestructible.RespawningDestructible_C.OnDie // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void RoundBeginBroadcast(); // Function RespawningDestructible.RespawningDestructible_C.RoundBeginBroadcast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature(struct UDamageResponse* Response); // Function RespawningDestructible.RespawningDestructible_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x337bc90
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function RespawningDestructible.RespawningDestructible_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void Event Respawn(); // Function RespawningDestructible.RespawningDestructible_C.Event Respawn // (BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function RespawningDestructible.RespawningDestructible_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_RespawningDestructible(int32_t EntryPoint); // Function RespawningDestructible.RespawningDestructible_C.ExecuteUbergraph_RespawningDestructible // (Final|UbergraphFunction|HasDefaults) // @ game+0x337bc90
	void ServerDeathEvent__DelegateSignature(); // Function RespawningDestructible.RespawningDestructible_C.ServerDeathEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
};

