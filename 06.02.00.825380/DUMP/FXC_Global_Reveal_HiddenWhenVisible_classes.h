// BlueprintGeneratedClass FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C
// Size: 0x609 (Inherited: 0x5e5)
struct AFXC_Global_Reveal_HiddenWhenVisible_C : AFXC_Global_Reveal_C {
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	bool OnlyShowWhenVisible; // 0x5f0(0x01)
	enum class ETraceTypeQuery VisibilityChannel; // 0x5f1(0x01)
	bool CurrentlyVisible; // 0x5f2(0x01)
	char pad_5F3[0x5]; // 0x5f3(0x05)
	struct FMulticastInlineDelegate UpdateVisible; // 0x5f8(0x10)
	bool VisibilitySet; // 0x608(0x01)

	void HasVisibility(bool& HasVisibility); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.HasVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	bool InMaxVisionDistance(); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.InMaxVisionDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
	void ShouldBeHidden(bool& ShouldBeHidden); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.ShouldBeHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33d1d50
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33d1d50
	void ExecuteUbergraph_FXC_Global_Reveal_HiddenWhenVisible(int32_t EntryPoint); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.ExecuteUbergraph_FXC_Global_Reveal_HiddenWhenVisible // (Final|UbergraphFunction) // @ game+0x33d1d50
	void UpdateVisible__DelegateSignature(bool CurrentlyVisible); // Function FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C.UpdateVisible__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d50
};

