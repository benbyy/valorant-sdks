// Class VariantManagerContent.LevelVariantSets
// Size: 0x98 (Inherited: 0x30)
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; // 0x30(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207f10
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207e70
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207a70
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x3f0 (Inherited: 0x3d0)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x3d0(0x20)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2208c30
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2208b60
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x2208390
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x2207970
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x48 (Inherited: 0x30)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1d8 (Inherited: 0x30)
struct UPropertyValue : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x90(0x10)
	struct TArray<int32_t> PropertyIndices; // 0xa0(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xb0(0x10)
	struct FString FullDisplayString; // 0xc0(0x10)
	struct FName PropertySetterName; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xe0(0x50)
	bool bHasRecordedData; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UObject* LeafPropertyClass; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)
	struct TArray<char> ValueBytes; // 0x148(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x158(0x01)
	char pad_159[0x7f]; // 0x159(0x7f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2208020
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207bc0
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207930
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1d8 (Inherited: 0x1d8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x3f8 (Inherited: 0x3d0)
struct ASwitchActor : AActor {
	char pad_3D0[0x18]; // 0x3d0(0x18)
	struct USceneComponent* SceneComponent; // 0x3e8(0x08)
	int32_t LastSelectedOption; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // @ game+0x2208080
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207c30
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207ad0
};

// Class VariantManagerContent.Variant
// Size: 0x88 (Inherited: 0x30)
struct UVariant : UObject {
	struct TArray<struct FVariantDependency> Dependencies; // 0x30(0x10)
	struct FText DisplayText; // 0x40(0x18)
	char pad_58[0x18]; // 0x58(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x70(0x10)
	struct UTexture2D* Thumbnail; // 0x80(0x08)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // @ game+0x2208b40
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.Variant.SetThumbnailFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x2208a20
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.Variant.SetThumbnailFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2208820
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport // (Final|Native|Public|BlueprintCallable) // @ game+0x1d33980
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.Variant.SetThumbnailFromCamera // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2208420
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2208230
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.SetDependency // (Final|Native|Public|HasOutParms) // @ game+0x2208110
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x2208050
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x2207c60
	struct UVariantSet* GetParent(); // Function VariantManagerContent.Variant.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207b60
	int32_t GetNumDependencies(); // Function VariantManagerContent.Variant.GetNumDependencies // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207a40
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207a10
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207850
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // Function VariantManagerContent.Variant.GetDependents // (Final|Native|Public|BlueprintCallable) // @ game+0x2207730
	struct FVariantDependency GetDependency(int32_t Index); // Function VariantManagerContent.Variant.GetDependency // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207690
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x22075f0
	void DeleteDependency(int32_t Index); // Function VariantManagerContent.Variant.DeleteDependency // (Final|Native|Public) // @ game+0x2207560
	int32_t AddDependency(struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.AddDependency // (Final|Native|Public|HasOutParms) // @ game+0x2207480
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0xa0 (Inherited: 0x30)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x30(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x40(0x20)
	LazyObjectProperty LazyObjectPtr; // 0x60(0x1c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x80(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x90(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x80 (Inherited: 0x30)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
	bool bExpanded; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UVariant*> Variants; // 0x68(0x10)
	struct UTexture2D* Thumbnail; // 0x78(0x08)

	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.VariantSet.SetThumbnailFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x2208ab0
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.VariantSet.SetThumbnailFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2208920
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport // (Final|Native|Public|BlueprintCallable) // @ game+0x1d33980
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.VariantSet.SetThumbnailFromCamera // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2208620
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22082e0
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207d60
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207cc0
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.VariantSet.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x2207c90
	struct ULevelVariantSets* GetParent(); // Function VariantManagerContent.VariantSet.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2207b90
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2207aa0
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22078c0
};

