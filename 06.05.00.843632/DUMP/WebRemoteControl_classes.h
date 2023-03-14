// Class WebRemoteControl.WebRemoteControlSettings
// Size: 0x40 (Inherited: 0x30)
struct UWebRemoteControlSettings : UObject {
	bool bAutoStartWebServer; // 0x30(0x01)
	bool bAutoStartWebSocketServer; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t RemoteControlHttpServerPort; // 0x34(0x04)
	uint32_t RemoteControlWebSocketServerPort; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

