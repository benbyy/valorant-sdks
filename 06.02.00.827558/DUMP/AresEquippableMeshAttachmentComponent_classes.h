// BlueprintGeneratedClass AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C
// Size: 0x1c9 (Inherited: 0x118)
struct UAresEquippableMeshAttachmentComponent_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct USkeletalMesh* ; // 0x120(0x08)
	struct USkeletalMesh* ; // 0x128(0x08)
	struct FString ; // 0x130(0x10)
	struct TArray<struct UMaterialInterface*> ; // 0x140(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x150(0x10)
	struct UAnimInstance* ; // 0x160(0x08)
	struct USkeletalMeshComponent* ; // 0x168(0x08)
	struct USkeletalMeshComponent* ; // 0x170(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x178(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x188(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> ; // 0x198(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> ; // 0x1a8(0x10)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x1b8(0x10)
	bool ; // 0x1c8(0x01)

	void Add VFX Meshes(bool ); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (bool , struct USkeletalMeshComponent*& Mesh, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct USceneComponent* , struct UMeshComponent* , struct USkeletalMeshComponent*& ); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct TArray<struct UMaterialInterface*>& , struct USkeletalMeshComponent* ); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct USceneComponent* , struct UMeshComponent* , struct USkeletalMeshComponent*& ); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

