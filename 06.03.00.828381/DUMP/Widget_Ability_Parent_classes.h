// WidgetBlueprintGeneratedClass Widget_Ability_Parent.Widget_Ability_Parent_C
// Size: 0x3e0 (Inherited: 0x358)
struct UWidget_Ability_Parent_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	bool HideInputHolder; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float FrontIconUpdateSpeed; // 0x364(0x04)
	struct FTimerHandle FrontIconTimer; // 0x368(0x08)
	float FrontIconStartTime; // 0x370(0x04)
	float BackIconTimeUpdateSpeed; // 0x374(0x04)
	struct FTimerHandle BackIconTimer; // 0x378(0x08)
	float BackIconStartTime; // 0x380(0x04)
	float RechargeIconUpdateSpeed; // 0x384(0x04)
	struct FTimerHandle RechargeIconTimer; // 0x388(0x08)
	float RechargeIconStartTime; // 0x390(0x04)
	float BackIconDuration; // 0x394(0x04)
	float FrontIconDuration; // 0x398(0x04)
	float RechargeIconDuration; // 0x39c(0x04)
	struct UHorizontalBox* Cached_InputPromptHolder; // 0x3a0(0x08)
	struct UVerticalBox* Cached_VerticalTimerBox; // 0x3a8(0x08)
	struct UImage* Cached_TwoHolder; // 0x3b0(0x08)
	struct UImage* Cached_ThreeHolder; // 0x3b8(0x08)
	struct UImage* Cached_FrontAnimIcon; // 0x3c0(0x08)
	struct UImage* Cached_BackAnimIcon; // 0x3c8(0x08)
	struct UImage* Cached_RechargeAnimIcon; // 0x3d0(0x08)
	struct UOverlay* Cached_MainOverlay; // 0x3d8(0x08)

	void CacheWidgetElements(struct UHorizontalBox* InputPromptHolder, struct UVerticalBox* VerticalTimerBox, struct UImage* TwoHolder, struct UImage* ThreeHolder, struct UImage* FrontAnimIcon, struct UImage* BackAnimIcon, struct UImage* RechargeAnimIcon, struct UOverlay* MainOverlay); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.CacheWidgetElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void StartRechargeAnimEffect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.StartRechargeAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void StartBackAnimEffect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.StartBackAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void StartFrontAnimEffect(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.StartFrontAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void UpdateHolderVisuals(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateHolderVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SortAndAddTimer(struct UWidget* Content); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SortAndAddTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void UpdateIconAnimation(float StartTime, float Duration, struct FTimerHandle TimerHandle, struct UImage* Icon); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateIconAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SortActiveInputs(struct TArray<struct UWidget*>& SortedInputs); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SortActiveInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetNextBestInput(struct TArray<struct UWidget*>& Array, struct UWidget_Ability_Element_InputPrompt_C*& CurrentBestInput); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.GetNextBestInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SetupChildren(struct UPanelWidget* InBasePanelWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SetupChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void OnStartWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3405eb0
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void InputPromptRemoved(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void UpdateFrontIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateFrontIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void PlayBackIconAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayBackIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void PlayFrontIconAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayFrontIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void PlayRechargeAnim(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.PlayRechargeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void UpdateBackIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateBackIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void UpdateRechargeIcon(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.UpdateRechargeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void ExecuteUbergraph_Widget_Ability_Parent(int32_t EntryPoint); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.ExecuteUbergraph_Widget_Ability_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3405eb0
};

