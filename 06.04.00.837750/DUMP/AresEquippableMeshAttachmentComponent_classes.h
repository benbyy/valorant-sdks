// BlueprintGeneratedClass AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C
// Size: 0x1c9 (Inherited: 0x118)
struct UAresEquippableMeshAttachmentComponent_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct USkeletalMesh* 1P Mesh; // 0x120(0x08)
	struct USkeletalMesh* 3p Mesh; // 0x128(0x08)
	struct FString Attach Point; // 0x130(0x10)
	struct TArray<struct UMaterialInterface*> 1P Material Overrides; // 0x140(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x150(0x10)
	struct UAnimInstance* Anim Instance; // 0x160(0x08)
	struct USkeletalMeshComponent* Mesh Component 3P; // 0x168(0x08)
	struct USkeletalMeshComponent* Mesh Component 1P; // 0x170(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x178(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x188(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> 1P Mesh Dynamic Materials; // 0x198(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> 3P Mesh Dynamic Materials; // 0x1a8(0x10)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x1b8(0x10)
	bool Use 3P VFX?; // 0x1c8(0x01)

	void Attach Component(struct UMeshComponent* Component, struct UMeshComponent* Parent); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Attach Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Detach Component(struct USceneComponent* Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Detach Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Add VFX Meshes(struct USkeletalMeshComponent* Mesh Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Override Materials With Dynamic Materials(bool Override 3P Materials?, struct USkeletalMeshComponent*& Mesh, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Override Materials With Dynamic Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Get VFX Meshes And Materials(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Get VFX Meshes And Materials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Setup Skeletal Mesh 3P(struct USceneComponent* Attach Parent, struct UMeshComponent* Mesh Parent, struct USkeletalMeshComponent*& Mesh Component 3P); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Setup Skeletal Mesh 3P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Override Materials(struct TArray<struct UMaterialInterface*>& Material Array, struct USkeletalMeshComponent* Mesh Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Override Materials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void Setup Skeletal Mesh 1P(struct USceneComponent* Attach Parent, struct UMeshComponent* Mesh Parent, struct USkeletalMeshComponent*& Mesh Component 1P); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Setup Skeletal Mesh 1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ReceiveBeginPlay(); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x34b46f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x34b46f0
	void ExecuteUbergraph_AresEquippableMeshAttachmentComponent(int32_t EntryPoint); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ExecuteUbergraph_AresEquippableMeshAttachmentComponent // (Final|UbergraphFunction) // @ game+0x34b46f0
};

