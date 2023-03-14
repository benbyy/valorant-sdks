// Enum RemoteControl.ERCAccess
enum class ERCAccess : uint8 {
	NO_ACCESS = 0,
	READ_ACCESS = 1,
	WRITE_ACCESS = 2,
	WRITE_TRANSACTION_ACCESS = 3,
	ERCAccess_MAX = 4
};

// Enum RemoteControl.EExposedFieldType
enum class EExposedFieldType : uint8 {
	Invalid = 0,
	Property = 1,
	Function = 2,
	EExposedFieldType_MAX = 3
};

// ScriptStruct RemoteControl.RemoteControlField
// Size: 0xa8 (Inherited: 0x00)
struct FRemoteControlField {
	enum class EExposedFieldType FieldType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName FieldName; // 0x04(0x0c)
	struct FName Label; // 0x10(0x0c)
	struct FGuid ID; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRCFieldPathInfo FieldPathInfo; // 0x30(0x18)
	struct TArray<struct FString> ComponentHierarchy; // 0x48(0x10)
	struct TMap<struct FString, struct FString> MetaData; // 0x58(0x50)
};

// ScriptStruct RemoteControl.RCFieldPathInfo
// Size: 0x18 (Inherited: 0x00)
struct FRCFieldPathInfo {
	struct TArray<struct FRCFieldPathSegment> Segments; // 0x00(0x10)
	uint32_t PathHash; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RemoteControl.RCFieldPathSegment
// Size: 0x28 (Inherited: 0x00)
struct FRCFieldPathSegment {
	struct FName Name; // 0x00(0x0c)
	int32_t ArrayIndex; // 0x0c(0x04)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct RemoteControl.RemoteControlFunction
// Size: 0xc0 (Inherited: 0xa8)
struct FRemoteControlFunction : FRemoteControlField {
	struct UFunction* Function; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// ScriptStruct RemoteControl.RemoteControlProperty
// Size: 0xa8 (Inherited: 0xa8)
struct FRemoteControlProperty : FRemoteControlField {
};

// ScriptStruct RemoteControl.RemoteControlTarget
// Size: 0xd0 (Inherited: 0x00)
struct FRemoteControlTarget {
	struct UObject* Class; // 0x00(0x08)
	struct TSet<struct FRemoteControlFunction> ExposedFunctions; // 0x08(0x50)
	struct TSet<struct FRemoteControlProperty> ExposedProperties; // 0x58(0x50)
	struct FName Alias; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FSoftObjectPath> Bindings; // 0xb8(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0xc8(0x08)
};

// ScriptStruct RemoteControl.RemoteControlPresetLayout
// Size: 0xc0 (Inherited: 0x00)
struct FRemoteControlPresetLayout {
	struct TArray<struct FRemoteControlPresetGroup> Groups; // 0x00(0x10)
	struct TWeakObjectPtr<struct URemoteControlPreset> Owner; // 0x10(0x08)
	char pad_18[0xa8]; // 0x18(0xa8)
};

// ScriptStruct RemoteControl.RemoteControlPresetGroup
// Size: 0x30 (Inherited: 0x00)
struct FRemoteControlPresetGroup {
	struct FName Name; // 0x00(0x0c)
	struct FGuid ID; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FGuid> Fields; // 0x20(0x10)
};

// ScriptStruct RemoteControl.RCCachedFieldData
// Size: 0x1c (Inherited: 0x00)
struct FRCCachedFieldData {
	struct FGuid LayoutGroupId; // 0x00(0x10)
	struct FName OwnerObjectAlias; // 0x10(0x0c)
};

