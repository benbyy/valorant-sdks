// BlueprintGeneratedClass PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C
// Size: 0x168 (Inherited: 0xe8)
struct UPlayerNonverbalChatComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FText CharacterName; // 0xf0(0x18)
	struct ABaseController_C* ; // 0x108(0x08)
	struct TMap<float, enum class NonVerbalCommTypesEnum> ; // 0x110(0x50)
	bool ; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t ; // 0x164(0x04)

	void (bool& bSuccess); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum , bool& ); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum , struct FText& ); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class NonVerbalCommTypesEnum ); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (struct UCharacterHandle* CharacterHandle); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33d1d60
	void (); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (enum class  ); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x33d1d60
};

