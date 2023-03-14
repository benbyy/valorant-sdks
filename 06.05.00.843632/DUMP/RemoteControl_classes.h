// Class RemoteControl.RemoteControlPreset
// Size: 0x2e0 (Inherited: 0x30)
struct URemoteControlPreset : UObject {
	struct FRemoteControlPresetLayout Layout; // 0x30(0xc0)
	struct TMap<struct FString, struct FString> MetaData; // 0xf0(0x50)
	struct TMap<struct FName, struct FRemoteControlTarget> RemoteControlTargets; // 0x140(0x50)
	struct TMap<struct FGuid, struct FRCCachedFieldData> FieldCache; // 0x190(0x50)
	char pad_1E0[0xb0]; // 0x1e0(0xb0)
	struct TMap<struct FName, struct FGuid> NameToGuidMap; // 0x290(0x50)
};

// Class RemoteControl.RemoteControlPresetActor
// Size: 0x3e0 (Inherited: 0x3d0)
struct ARemoteControlPresetActor : AActor {
	struct URemoteControlPreset* Preset; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
};

