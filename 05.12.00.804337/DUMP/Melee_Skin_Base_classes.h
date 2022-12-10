// BlueprintGeneratedClass Melee_Skin_Base.Melee_Skin_Base_C
// Size: 0x340 (Inherited: 0x118)
struct UMelee_Skin_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct UAnimInstance* Weapon Cosmetic AnimGraph; // 0x120(0x08)
	struct USkeletalMesh* NewMesh; // 0x128(0x08)
	struct USkeletalMesh* ; // 0x130(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> ; // 0x138(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectOverrides; // 0x188(0x50)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x1d8(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x1e8(0x10)
	int32_t ; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> ; // 0x200(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> ; // 0x250(0x50)
	struct UKillBannerData* KillBannerData; // 0x2a0(0x08)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x2a8(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x2b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x2c8(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x2d8(0x08)
	struct UBaseGunSkinVOComponent_C* Spawned VO Component; // 0x2e0(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> ; // 0x2e8(0x50)
	struct AAbility_Melee_Base_C* ; // 0x338(0x08)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Melee_Skin_Base.Melee_Skin_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Melee_Skin_Base.Melee_Skin_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function Melee_Skin_Base.Melee_Skin_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Melee_Skin_Base.Melee_Skin_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Melee_Skin_Base.Melee_Skin_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct USkeletalMeshComponent*& Mesh); // Function Melee_Skin_Base.Melee_Skin_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Melee_Skin_Base.Melee_Skin_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Add VO Component(); // Function Melee_Skin_Base.Melee_Skin_Base_C.Add VO Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Add VFX Meshes(); // Function Melee_Skin_Base.Melee_Skin_Base_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Melee_Skin_Base.Melee_Skin_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Melee_Skin_Base.Melee_Skin_Base_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};
