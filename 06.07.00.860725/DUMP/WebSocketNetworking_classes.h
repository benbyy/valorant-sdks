// Class WebSocketNetworking.WebSocketConnection
// Size: 0x1b50 (Inherited: 0x1b40)
struct UWebSocketConnection : UNetConnection {
	char pad_1B40[0x10]; // 0x1b40(0x10)
};

// Class WebSocketNetworking.WebSocketNetDriver
// Size: 0x7f0 (Inherited: 0x7e0)
struct UWebSocketNetDriver : UNetDriver {
	int32_t WebSocketPort; // 0x7e0(0x04)
	char pad_7E4[0xc]; // 0x7e4(0x0c)
};

