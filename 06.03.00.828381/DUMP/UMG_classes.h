// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x148 (Inherited: 0x30)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x30(0x08)
	struct FName TagOverride; // 0x38(0x0c)
	struct FName Tag; // 0x44(0x0c)
	struct FDelegate bIsEnabledDelegate; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText ToolTipText; // 0x68(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
	struct UWidget* ToolTipWidget; // 0x98(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0xa0(0x14)
	struct FDelegate VisibilityDelegate; // 0xb4(0x14)
	struct FWidgetTransform RenderTransform; // 0xc8(0x1c)
	struct FVector2D RenderTransformPivot; // 0xe4(0x08)
	char bIsVariable : 1; // 0xec(0x01)
	char bCreatedByConstructionScript : 1; // 0xec(0x01)
	char bIsEnabled : 1; // 0xec(0x01)
	char bOverride_Cursor : 1; // 0xec(0x01)
	char pad_EC_4 : 4; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xf0(0x08)
	char bIsVolatile : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	enum class EMouseCursor Cursor; // 0xf9(0x01)
	enum class EWidgetClipping Clipping; // 0xfa(0x01)
	enum class ESlateVisibility Visibility; // 0xfb(0x01)
	enum class ESlateQuality Quality; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float RenderOpacity; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UWidgetNavigation* Navigation; // 0x108(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0x110(0x01)
	char pad_111[0x27]; // 0x111(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x138(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x2ba74a0
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x4651d50
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4651ca0
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x4651c10
	void SetTagOverride(struct FName InTag); // Function UMG.Widget.SetTagOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4651b70
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4651a60
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46519e0
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x4651960
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x4651880
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4651800
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4651780
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x4651700
	void SetQuality(enum class ESlateQuality InQuality); // Function UMG.Widget.SetQuality // (Native|Public|BlueprintCallable) // @ game+0x2ba77a0
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x46515a0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x46514b0
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x46513c0
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x46512f0
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x46511c0
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x46511a0
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x4651100
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x4651060
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x4650fe0
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x4650f60
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x4650e70
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x4650e50
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x2c82f00
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x3405eb0
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650e20
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ccf510
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x4650e00
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650d60
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650cc0
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650bf0
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650bc0
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650b90
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650b60
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650b30
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650b00
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46509e0
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46509b0
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650980
	enum class ESlateQuality GetQuality(); // Function UMG.Widget.GetQuality // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650950
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650920
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46508e0
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46508a0
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650860
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x3405eb0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650830
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650800
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x46507c0
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650790
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650750
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46506e0
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650670
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x46505e0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x46505c0
};

// Class UMG.UserWidget
// Size: 0x2c8 (Inherited: 0x148)
struct UUserWidget : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FLinearColor ColorAndOpacity; // 0x150(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateColor ForegroundColor; // 0x178(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x1a0(0x14)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x1b8(0x10)
	char pad_1C8[0x18]; // 0x1c8(0x18)
	struct FMargin Padding; // 0x1e0(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1f0(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x200(0x08)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x208(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x218(0x10)
	struct UWidgetTree* WidgetTree; // 0x228(0x08)
	int32_t Priority; // 0x230(0x04)
	char bSupportsKeyboardFocus : 1; // 0x234(0x01)
	char bIsFocusable : 1; // 0x234(0x01)
	char bStopAction : 1; // 0x234(0x01)
	char bHasScriptImplementedTick : 1; // 0x234(0x01)
	char bHasScriptImplementedPaint : 1; // 0x234(0x01)
	char pad_234_5 : 3; // 0x234(0x01)
	char pad_235[0xb]; // 0x235(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UInputComponent* InputComponent; // 0x248(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x250(0x10)
	char pad_260[0x48]; // 0x260(0x48)
	bool bCreateWidgetOnInitAndKeepInMemory; // 0x2a8(0x01)
	char pad_2A9[0x1f]; // 0x2a9(0x1f)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x464c6a0
	void UnpinSlateWidget(); // Function UMG.UserWidget.UnpinSlateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x464c680
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x464c590
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x464c4a0
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x464c410
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x464c380
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x464c290
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0x464c270
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x464c250
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x464c1c0
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x464c1a0
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464ba70
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464b9a0
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464b910
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464b880
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464b6a0
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x464b330
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x464b2a0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464b110
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464ae50
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464ad30
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464aac0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a880
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464a800
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a770
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a750
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x464a730
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a6a0
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a480
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a360
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a240
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x464a070
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4649fd0
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnPreviewMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3405eb0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3405eb0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x4649f40
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x4649eb0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	struct UUserWidget* LookupUserWidgetWithInterface(struct UInterface* InterfaceClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetWithInterface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649b60
	void LookupUserWidgetsWithInterface(struct UInterface* InterfaceClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetsWithInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649d70
	void LookupUserWidgets(struct UUserWidget* WidgetClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgets // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649c30
	struct UUserWidget* LookupUserWidget(struct UUserWidget* WidgetClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649a90
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x4649900
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46498d0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649820
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649480
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x3405eb0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46497f0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4649750
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46496b0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46494e0
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46494b0
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649480
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649340
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649300
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x46492c0
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x46492a0
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3405eb0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x4649240
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x4649150
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x4649060
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x4648ee0
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4648e50
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4648db0
};

// Class UMG.PanelWidget
// Size: 0x160 (Inherited: 0x148)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x4633ff0
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x4633f50
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633eb0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633e80
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2fba760
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633c10
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633b70
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633ae0
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x2bf0800
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x4633a00
};

// Class UMG.ContentWidget
// Size: 0x160 (Inherited: 0x160)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x4620c50
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46205f0
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620580
};

// Class UMG.ComboBoxString
// Size: 0xf08 (Inherited: 0x148)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x148(0x10)
	struct FString SelectedOption; // 0x158(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x168(0x440)
	struct FTableRowStyle ItemStyle; // 0x5a8(0x838)
	struct FMargin ContentPadding; // 0xde0(0x10)
	float MaxListHeight; // 0xdf0(0x04)
	bool HasDownArrow; // 0xdf4(0x01)
	bool EnableGamepadNavigationMode; // 0xdf5(0x01)
	char pad_DF6[0x2]; // 0xdf6(0x02)
	struct FSlateFontInfo Font; // 0xdf8(0x60)
	struct FSlateColor ForegroundColor; // 0xe58(0x28)
	bool bIsFocusable; // 0xe80(0x01)
	char pad_E81[0x3]; // 0xe81(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xe84(0x14)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xe98(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xea8(0x10)
	char pad_EB8[0x50]; // 0xeb8(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x46216e0
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4621650
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x4620b00
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x4620a50
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620a20
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46207d0
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46207a0
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620770
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620690
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620430
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x4620020
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x4620000
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x461fe60
};

// Class UMG.MenuAnchor
// Size: 0x1b8 (Inherited: 0x160)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x160(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x168(0x14)
	struct FDelegate OnGetUserMenuContentEvent; // 0x17c(0x14)
	enum class EMenuPlacement Placement; // 0x190(0x01)
	bool bFitInWindow; // 0x191(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x192(0x01)
	bool UseApplicationMenuStack; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x198(0x10)
	char pad_1A8[0x10]; // 0x1a8(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x462ef00
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462eed0
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x462e7d0
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x462e130
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462e100
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462e0d0
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x462df80
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x462dd80
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x462dd60
};

// Class UMG.TableViewBase
// Size: 0x148 (Inherited: 0x148)
struct UTableViewBase : UWidget {
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.ScrollBox
// Size: 0x928 (Inherited: 0x160)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x160(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3a8(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8c0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8c8(0x08)
	enum class EOrientation Orientation; // 0x8d0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8d1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8d2(0x01)
	char pad_8D3[0x1]; // 0x8d3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8d4(0x08)
	struct FMargin ScrollbarPadding; // 0x8dc(0x10)
	bool AlwaysShowScrollbar; // 0x8ec(0x01)
	bool AlwaysShowScrollbarTrack; // 0x8ed(0x01)
	bool AllowOverscroll; // 0x8ee(0x01)
	bool bAnimateWheelScrolling; // 0x8ef(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x8f0(0x01)
	char pad_8F1[0x3]; // 0x8f1(0x03)
	float NavigationScrollPadding; // 0x8f4(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8f8(0x01)
	bool bAllowRightClickDragScrolling; // 0x8f9(0x01)
	char pad_8FA[0x2]; // 0x8fa(0x02)
	float WheelScrollMultiplier; // 0x8fc(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x900(0x10)
	char pad_910[0x18]; // 0x910(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x4635880
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x4635090
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x4635010
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x46351b0
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4635110
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x4634d20
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x4634490
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x4634370
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x46342e0
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x4634250
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x46340f0
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x46340d0
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x46340b0
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633e50
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633db0
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633d80
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x4633ac0
};

// Class UMG.TextLayoutWidget
// Size: 0x168 (Inherited: 0x148)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x148(0x03)
	enum class ETextJustify Justification; // 0x14b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x14c(0x01)
	char AutoWrapText : 1; // 0x14d(0x01)
	char pad_14D_1 : 7; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	float WrapTextAt; // 0x150(0x04)
	struct FMargin Margin; // 0x154(0x10)
	float LineHeightPercentage; // 0x164(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x464b490
};

// Class UMG.TextBlock
// Size: 0x310 (Inherited: 0x168)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FDelegate TextDelegate; // 0x180(0x14)
	char pad_194[0x4]; // 0x194(0x04)
	struct FSlateColor ColorAndOpacity; // 0x198(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1c0(0x14)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FSlateFontInfo Font; // 0x1d8(0x60)
	struct FSlateBrush StrikeBrush; // 0x238(0x90)
	struct FVector2D ShadowOffset; // 0x2c8(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2d0(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2e0(0x14)
	float MinDesiredWidth; // 0x2f4(0x04)
	bool bWrapWithInvalidationPanel; // 0x2f8(0x01)
	bool bAutoWrapText; // 0x2f9(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x2fa(0x01)
	bool bSimpleTextMode; // 0x2fb(0x01)
	char pad_2FC[0x14]; // 0x2fc(0x14)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.TextBlock.SetWrapTextAt // (Final|Native|Public|BlueprintCallable) // @ game+0x464c120
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x464bf80
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x464beb0
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x464bd70
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464bc60
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x464bbd0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x464b800
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x464b620
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x464afd0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x464ac20
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x464ab90
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46495a0
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4649410
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x46493e0
};

// Class UMG.WidgetComponent
// Size: 0x6b0 (Inherited: 0x590)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x588(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x589(0x01)
	struct UUserWidget* WidgetClass; // 0x590(0x08)
	struct FIntPoint DrawSize; // 0x598(0x08)
	bool bManuallyRedraw; // 0x5a0(0x01)
	bool bRedrawRequested; // 0x5a1(0x01)
	float RedrawTime; // 0x5a4(0x04)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FIntPoint CurrentDrawSize; // 0x5b0(0x08)
	bool bDrawAtDesiredSize; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	struct FVector2D Pivot; // 0x5bc(0x08)
	bool bReceiveHardwareInput; // 0x5c4(0x01)
	bool bWindowFocusable; // 0x5c5(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x5c6(0x01)
	bool bApplyGammaCorrection; // 0x5c7(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x5c8(0x08)
	struct FLinearColor BackgroundColor; // 0x5d0(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5e0(0x10)
	float OpacityFromTexture; // 0x5f0(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x5f4(0x01)
	bool bIsTwoSided; // 0x5f5(0x01)
	bool TickWhenOffscreen; // 0x5f6(0x01)
	char pad_5F7[0x1]; // 0x5f7(0x01)
	struct UBodySetup* BodySetup; // 0x5f8(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x600(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x608(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x610(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x618(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x620(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x628(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x630(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x638(0x08)
	bool bAddedToScreen; // 0x640(0x01)
	bool bEditTimeUsable; // 0x641(0x01)
	char pad_642[0x2]; // 0x642(0x02)
	struct FName SharedLayerName; // 0x644(0x0c)
	int32_t LayerZOrder; // 0x650(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	float CylinderArcAngle; // 0x658(0x04)
	enum class ETickMode TickMode; // 0x65c(0x01)
	char pad_65D[0x23]; // 0x65d(0x23)
	struct UUserWidget* Widget; // 0x680(0x08)
	char pad_688[0x28]; // 0x688(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x46615e0
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x4661550
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x46614d0
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x4661440
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x46613b0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4661320
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x4661290
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode // (Final|Native|Public|BlueprintCallable) // @ game+0x4661210
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x4661190
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4661100
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x4661070
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x4660fe0
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x4660f60
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4660e50
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4660dc0
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x4660d40
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4660bd0
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x46609a0
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4660190
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46600e0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46600c0
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4030930
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4660080
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fe80
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fe60
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fe40
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c19fc0
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fe20
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fd40
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fd10
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c19bf0
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fb00
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fa50
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fa10
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465f9f0
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465f9d0
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x465f990
};

// Class UMG.WidgetSwitcher
// Size: 0x178 (Inherited: 0x160)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x14]; // 0x164(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x4664490
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x4628170
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46643f0
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46643c0
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4664390
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4664360
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x30(0x08)
};

// Class UMG.Slider
// Size: 0x568 (Inherited: 0x148)
struct USlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x14)
	float MinValue; // 0x160(0x04)
	float MaxValue; // 0x164(0x04)
	struct FSliderStyle WidgetStyle; // 0x168(0x370)
	enum class EOrientation Orientation; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	struct FLinearColor SliderBarColor; // 0x4dc(0x10)
	struct FLinearColor SliderHandleColor; // 0x4ec(0x10)
	bool IndentHandle; // 0x4fc(0x01)
	bool Locked; // 0x4fd(0x01)
	bool MouseUsesStep; // 0x4fe(0x01)
	bool RequiresControllerLock; // 0x4ff(0x01)
	float StepSize; // 0x500(0x04)
	bool IsFocusable; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x508(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x518(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x528(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x538(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x548(0x10)
	char pad_558[0x10]; // 0x558(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463de30
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x463ddb0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x463dd20
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x463dc90
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463d9f0
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463d660
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x463d340
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x463d2b0
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c680
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c650
};

// Class UMG.ListViewBase
// Size: 0x258 (Inherited: 0x148)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x148(0x08)
	float WheelScrollMultiplier; // 0x150(0x04)
	bool bEnableScrollAnimation; // 0x154(0x01)
	bool bEnableFixedLineOffset; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
	float FixedLineScrollOffset; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x160(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x170(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x180(0x80)
	char pad_200[0x58]; // 0x200(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x462ed90
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x462e850
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x462e8d0
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x462e220
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x462e200
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x462e1e0
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x462e1c0
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462de10
};

// Class UMG.ListView
// Size: 0x3a8 (Inherited: 0x258)
struct UListView : UListViewBase {
	char pad_258[0xc0]; // 0x258(0xc0)
	enum class EOrientation Orientation; // 0x318(0x01)
	enum class ESelectionMode SelectionMode; // 0x319(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x31a(0x01)
	bool bClearSelectionOnClick; // 0x31b(0x01)
	bool bIsFocusable; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float EntrySpacing; // 0x320(0x04)
	bool bReturnFocusToSelection; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct TArray<struct UObject*> ListItems; // 0x328(0x10)
	char pad_338[0x10]; // 0x338(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x358(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x398(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x4629210
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4629060
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x4627cf0
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x4627c60
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4627bd0
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627ba0
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627930
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627900
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46277c0
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46276c0
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x4627620
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x4627590
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x46274e0
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x4627410
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x4627380
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x46272f0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627250
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x4627190
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627160
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627130
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x4627110
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x46270f0
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x4627060
};

// Class UMG.TileView
// Size: 0x3c8 (Inherited: 0x3a8)
struct UTileView : UListView {
	float EntryHeight; // 0x3a8(0x04)
	float EntryWidth; // 0x3ac(0x04)
	enum class EListItemAlignment TileAlignment; // 0x3b0(0x01)
	bool bWrapHorizontalNavigation; // 0x3b1(0x01)
	char pad_3B2[0x16]; // 0x3b2(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x464af50
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x464aed0
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649460
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649440
};

// Class UMG.Button
// Size: 0x498 (Inherited: 0x160)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x160(0x08)
	struct FButtonStyle WidgetStyle; // 0x168(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x410(0x10)
	struct FLinearColor BackgroundColor; // 0x420(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x430(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x431(0x01)
	enum class EButtonPressMethod PressMethod; // 0x432(0x01)
	bool IsFocusable; // 0x433(0x01)
	enum class EButtonInputPriority InteractionPriority; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x438(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x448(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x458(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x468(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x461a7d0
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x461a650
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x461a4d0
	void SetInteractionPriority(enum class EButtonInputPriority NewValue); // Function UMG.Button.SetInteractionPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x4619be0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46197c0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x46196c0
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46191b0
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618f20
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x58 (Inherited: 0x38)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4618b10
};

// Class UMG.BackgroundBlur
// Size: 0x350 (Inherited: 0x160)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	bool bApplyAlphaToBlur; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	float BlurStrength; // 0x174(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t BlurRadius; // 0x17c(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x180(0x90)
	struct FSlateBrush MaskImage; // 0x210(0x90)
	struct FLinearColor Tint; // 0x2a0(0x10)
	struct FSlateBrush LowQualityMaskedFallbackBrush; // 0x2b0(0x90)
	char pad_340[0x10]; // 0x340(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461a8d0
	void SetTint(struct FLinearColor& InTint); // Function UMG.BackgroundBlur.SetTint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x461a740
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x461a180
	void SetMaskImage(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetMaskImage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4619ec0
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4619d90
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4619960
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x46192d0
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x4619240
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x4619090
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461a950
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x461a210
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x46199e0
};

// Class UMG.PropertyBinding
// Size: 0x70 (Inherited: 0x30)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x28)
	struct FName DestinationProperty; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class UMG.BoolBinding
// Size: 0x70 (Inherited: 0x70)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x4618e30
};

// Class UMG.Border
// Size: 0x2d0 (Inherited: 0x160)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	char bShowEffectWhenDisabled : 1; // 0x162(0x01)
	char pad_162_1 : 7; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x164(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x174(0x14)
	struct FMargin Padding; // 0x188(0x10)
	struct FSlateBrush Background; // 0x198(0x90)
	struct FDelegate BackgroundDelegate; // 0x228(0x14)
	struct FLinearColor BrushColor; // 0x23c(0x10)
	struct FDelegate BrushColorDelegate; // 0x24c(0x14)
	struct FVector2D DesiredSizeScale; // 0x260(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x26c(0x14)
	struct FDelegate OnMouseButtonUpEvent; // 0x280(0x14)
	struct FDelegate OnMouseMoveEvent; // 0x294(0x14)
	struct FDelegate OnMouseDoubleClickEvent; // 0x2a8(0x14)
	char pad_2BC[0x14]; // 0x2bc(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461a9d0
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x461a2a0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4619a60
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46198e0
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4619850
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x46195b0
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x46195b0
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x4619520
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4619490
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4619360
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4618cf0
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461aa50
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x461a330
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4619ae0
};

// Class UMG.BrushBinding
// Size: 0x78 (Inherited: 0x70)
struct UBrushBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x4618e60
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461aad0
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x461a3c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4619b60
};

// Class UMG.CanvasPanel
// Size: 0x170 (Inherited: 0x160)
struct UCanvasPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x4618a70
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x40)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x461ab50
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x461a5d0
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x461a450
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x461a0f0
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x461a070
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x4619ff0
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4619cf0
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4619120
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x4619000
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4618f80
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618ec0
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618df0
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618db0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618d70
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618d20
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618c90
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618c50
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618c10
};

// Class UMG.CheckBox
// Size: 0x810 (Inherited: 0x160)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FDelegate CheckedStateDelegate; // 0x164(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x178(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x758(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x778(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x788(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x790(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x798(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7a0(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	struct FMargin Padding; // 0x7ac(0x10)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7c0(0x28)
	enum class EButtonClickMethod ClickMethod; // 0x7e8(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x7e9(0x01)
	enum class EButtonPressMethod PressMethod; // 0x7ea(0x01)
	bool IsFocusable; // 0x7eb(0x01)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7f0(0x10)
	char pad_800[0x10]; // 0x800(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x461a850
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x461a550
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x4619c60
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x4619740
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x4619640
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618f50
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618ef0
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4618cc0
};

// Class UMG.CheckedStateBinding
// Size: 0x78 (Inherited: 0x70)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x46209c0
};

// Class UMG.CircularThrobber
// Size: 0x208 (Inherited: 0x148)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	float Period; // 0x14c(0x04)
	float Radius; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct USlateBrushAsset* PieceImage; // 0x158(0x08)
	struct FSlateBrush Image; // 0x160(0x90)
	bool bEnableRadius; // 0x1f0(0x01)
	char pad_1F1[0x17]; // 0x1f1(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x46215d0
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x46214b0
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x4621420
};

// Class UMG.ColorBinding
// Size: 0x78 (Inherited: 0x70)
struct UColorBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x4620860
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x4620620
};

// Class UMG.ComboBox
// Size: 0x180 (Inherited: 0x148)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x148(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x158(0x14)
	bool bIsFocusable; // 0x16c(0x01)
	char pad_16D[0x13]; // 0x16d(0x13)
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D Offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x60(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x46202e0
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4620190
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4620040
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x218 (Inherited: 0x148)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector2D EntrySpacing; // 0x14c(0x08)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x158(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x168(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	int32_t MaxElementSize; // 0x174(0x04)
	struct FRadialBoxSettings RadialBoxSettings; // 0x178(0x0c)
	char pad_184[0x14]; // 0x184(0x14)
	struct FUserWidgetPool EntryWidgetPool; // 0x198(0x80)

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4621530
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4620cf0
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620660
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46204f0
};

// Class UMG.DynamicEntryBox
// Size: 0x220 (Inherited: 0x218)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x218(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x4620bc0
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x4620a70
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x461ff40
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x461ff10
};

// Class UMG.EditableText
// Size: 0x508 (Inherited: 0x148)
struct UEditableText : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x14)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FEditableTextStyle WidgetStyle; // 0x1a8(0x240)
	struct USlateWidgetStyleAsset* Style; // 0x3e8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3f0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3f8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x400(0x08)
	struct FSlateFontInfo Font; // 0x408(0x60)
	struct FSlateColor ColorAndOpacity; // 0x468(0x28)
	bool IsReadOnly; // 0x490(0x01)
	bool IsPassword; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x494(0x08)
	float MinimumDesiredWidth; // 0x49c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x4a0(0x01)
	bool SelectAllTextWhenFocused; // 0x4a1(0x01)
	bool RevertTextOnEscape; // 0x4a2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4a3(0x01)
	bool SelectAllTextOnCommit; // 0x4a4(0x01)
	bool AllowContextMenu; // 0x4a5(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x4a6(0x01)
	char pad_4A7[0x1]; // 0x4a7(0x01)
	struct FText VirtualKeyboardCommitText; // 0x4a8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4c0(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x4c1(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4c2(0x01)
	enum class ETextJustify Justification; // 0x4c3(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x4c4(0x03)
	char pad_4C7[0x1]; // 0x4c7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x4e8(0x10)
	char pad_4F8[0x10]; // 0x4f8(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.EditableText.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x4621960
	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x46217e0
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableText.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x4621300
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x4621200
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x46210e0
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x4620fc0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x4620e40
	void OnEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46208e0
};

// Class UMG.EditableTextBox
// Size: 0xb30 (Inherited: 0x148)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x178(0x868)
	struct USlateWidgetStyleAsset* Style; // 0x9e0(0x08)
	struct FText HintText; // 0x9e8(0x18)
	struct FDelegate HintTextDelegate; // 0xa00(0x14)
	char pad_A14[0x4]; // 0xa14(0x04)
	struct FSlateFontInfo Font; // 0xa18(0x60)
	struct FLinearColor ForegroundColor; // 0xa78(0x10)
	struct FLinearColor BackgroundColor; // 0xa88(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa98(0x10)
	bool IsReadOnly; // 0xaa8(0x01)
	bool IsPassword; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0xaac(0x08)
	float MinimumDesiredWidth; // 0xab4(0x04)
	struct FMargin Padding; // 0xab8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xac8(0x01)
	bool SelectAllTextWhenFocused; // 0xac9(0x01)
	bool RevertTextOnEscape; // 0xaca(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xacb(0x01)
	bool SelectAllTextOnCommit; // 0xacc(0x01)
	bool AllowContextMenu; // 0xacd(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xace(0x01)
	char pad_ACF[0x1]; // 0xacf(0x01)
	struct FText VirtualKeyboardCommitText; // 0xad0(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xae8(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xae9(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xaea(0x01)
	enum class ETextJustify Justification; // 0xaeb(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xaec(0x03)
	char pad_AEF[0x1]; // 0xaef(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0xaf0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xb00(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.EditableTextBox.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x4621a20
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x46218a0
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableTextBox.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x4621390
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x4621280
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x4621170
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x4621050
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x4620f00
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x4620d80
	void OnEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46209f0
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4620950
	struct FVector2D GetContentSize(); // Function UMG.EditableTextBox.GetContentSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x46205b0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x461ffe0
};

// Class UMG.ExpandableArea
// Size: 0x390 (Inherited: 0x148)
struct UExpandableArea : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FExpandableAreaStyle Style; // 0x150(0x130)
	struct FSlateBrush BorderBrush; // 0x280(0x90)
	struct FSlateColor BorderColor; // 0x310(0x28)
	bool bIsExpanded; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float MaxHeight; // 0x33c(0x04)
	struct FMargin HeaderPadding; // 0x340(0x10)
	struct FMargin AreaPadding; // 0x350(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x360(0x10)
	struct UWidget* HeaderContent; // 0x370(0x08)
	struct UWidget* BodyContent; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x4628c70
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x4628be0
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627760
};

// Class UMG.FloatBinding
// Size: 0x70 (Inherited: 0x70)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x4627a00
};

// Class UMG.GridPanel
// Size: 0x190 (Inherited: 0x160)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x160(0x10)
	struct TArray<float> RowFill; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x4628f90
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x4628980
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x4626eb0
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2f90
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2e70
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2d10
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2bf0
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2dc2af0
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2950
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc27d0
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc2740
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x2dc25e0
};

// Class UMG.HorizontalBox
// Size: 0x170 (Inherited: 0x160)
struct UHorizontalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x4626fc0
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	struct FSlateChildSize Size; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x46293a0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4629290
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4628f00
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4628b60
};

// Class UMG.Image
// Size: 0x268 (Inherited: 0x148)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x148(0x90)
	struct FDelegate BrushDelegate; // 0x1d8(0x14)
	struct FLinearColor ColorAndOpacity; // 0x1ec(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1fc(0x14)
	bool bFlipForRightToLeftFlowDirection; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x214(0x14)
	char pad_228[0x40]; // 0x228(0x40)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x4628e80
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46288f0
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x4628750
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46286d0
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x4628640
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x4628560
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x4628480
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x4628320
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x4628200
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0x4628170
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x4628070
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x4627fe0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4627ea0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4627690
};

// Class UMG.InputKeySelector
// Size: 0x7b0 (Inherited: 0x148)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x148(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x3f0(0x290)
	struct FInputChord SelectedKey; // 0x680(0x28)
	struct FSlateFontInfo Font; // 0x6a8(0x60)
	struct FMargin Margin; // 0x708(0x10)
	struct FLinearColor ColorAndOpacity; // 0x718(0x10)
	struct FText KeySelectionText; // 0x728(0x18)
	struct FText NoKeySpecifiedText; // 0x740(0x18)
	bool bAllowModifierKeys; // 0x758(0x01)
	bool bAllowGamepadKeys; // 0x759(0x01)
	char pad_75A[0x6]; // 0x75a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x760(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x770(0x10)
	struct FMulticastInlineDelegate OnKeySelectionSuccessful; // 0x780(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x790(0x10)
	char pad_7A0[0x10]; // 0x7a0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x4629320
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46290f0
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x4628dc0
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x4628d00
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4628a50
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x4627e10
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x4627d80
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627790
	void ClearSelectedKey(); // Function UMG.InputKeySelector.ClearSelectedKey // (Final|Native|Public|BlueprintCallable) // @ game+0x4627640
};

// Class UMG.Int32Binding
// Size: 0x70 (Inherited: 0x70)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x4627a30
};

// Class UMG.InvalidationBox
// Size: 0x178 (Inherited: 0x160)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x160(0x01)
	bool CacheRelativeTransforms; // 0x161(0x01)
	char pad_162[0x16]; // 0x162(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x4628860
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce6760
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4627660
};

// Class UMG.UserListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x3405eb0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x3405eb0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x3405eb0
};

// Class UMG.UserListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4627b00
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4627a60
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4627960
};

// Class UMG.UserObjectListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x3405eb0
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4627860
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x30 (Inherited: 0x30)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MouseCursorBinding
// Size: 0x70 (Inherited: 0x70)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x462e0a0
};

// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x560 (Inherited: 0xf0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieScene2DTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x100(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x240(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2e0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x420(0x140)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xb8 (Inherited: 0xb8)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x370 (Inherited: 0xf0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xf0(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x190(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x230(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2d0(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xb8 (Inherited: 0x90)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct FName> BrushPropertyNamePath; // 0x98(0x10)
	struct FName TrackName; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class UMG.MultiLineEditableText
// Size: 0x518 (Inherited: 0x168)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x14)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FTextBlockStyle WidgetStyle; // 0x1b0(0x290)
	bool bIsReadOnly; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x444(0x08)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FSlateFontInfo Font; // 0x450(0x60)
	bool SelectAllTextWhenFocused; // 0x4b0(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4b1(0x01)
	bool RevertTextOnEscape; // 0x4b2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4b3(0x01)
	bool AllowContextMenu; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	struct FText VirtualKeyboardCommitText; // 0x4b8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4d0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x4f8(0x10)
	char pad_508[0x10]; // 0x508(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x462ee10
	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.MultiLineEditableText.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x462ec10
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x462e950
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableText.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x462e620
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x462e500
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x462e300
	void OnMultiLineEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462dfc0
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462dea0
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xdb0 (Inherited: 0x168)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x14)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1b0(0x868)
	struct FTextBlockStyle TextStyle; // 0xa18(0x290)
	bool bIsReadOnly; // 0xca8(0x01)
	char pad_CA9[0x3]; // 0xca9(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0xcac(0x08)
	bool AllowContextMenu; // 0xcb4(0x01)
	char pad_CB5[0x3]; // 0xcb5(0x03)
	struct FText VirtualKeyboardCommitText; // 0xcb8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xcd0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xcd1(0x01)
	char pad_CD2[0x6]; // 0xcd2(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xcd8(0x08)
	struct FSlateFontInfo Font; // 0xce0(0x60)
	struct FLinearColor ForegroundColor; // 0xd40(0x10)
	struct FLinearColor BackgroundColor; // 0xd50(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xd60(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xd70(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xd80(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0xd90(0x10)
	char pad_DA0[0x10]; // 0xda0(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.MultiLineEditableTextBox.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x462ecd0
	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x462ead0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x462ea10
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableTextBox.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x462e6b0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x462e590
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x462e3c0
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x462e240
	void OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3405eb0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462e030
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x462df10
};

// Class UMG.NamedSlot
// Size: 0x170 (Inherited: 0x160)
struct UNamedSlot : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x30 (Inherited: 0x30)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x158 (Inherited: 0x148)
struct UNativeWidgetHost : UWidget {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.Overlay
// Size: 0x170 (Inherited: 0x160)
struct UOverlay : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x462dcc0
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)
struct UOverlaySlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x462eb90
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x462e740
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x462e480
};

// Class UMG.ProgressBar
// Size: 0x378 (Inherited: 0x148)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x148(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x300(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x308(0x08)
	struct USlateBrushAsset* FillImage; // 0x310(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x318(0x08)
	float Percent; // 0x320(0x04)
	enum class EProgressBarFillType BarFillType; // 0x324(0x01)
	bool bIsMarquee; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct FVector2D BorderPadding; // 0x328(0x08)
	struct FDelegate PercentDelegate; // 0x330(0x14)
	struct FLinearColor FillColorAndOpacity; // 0x344(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x354(0x14)
	char pad_368[0x10]; // 0x368(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x4634e30
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x4634c10
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4634af0
};

// Class UMG.RetainerBox
// Size: 0x198 (Inherited: 0x160)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x160(0x01)
	bool RenderOnInvalidation; // 0x161(0x01)
	bool RenderOnPhase; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	int32_t Phase; // 0x164(0x04)
	int32_t PhaseCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x170(0x08)
	struct FName TextureParameter; // 0x178(0x0c)
	char pad_184[0x14]; // 0x184(0x14)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x4635760
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x4634f80
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x4634eb0
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4634a60
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x4634090
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633d50
};

// Class UMG.RichTextBlock
// Size: 0x6f8 (Inherited: 0x168)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct UDataTable* TextStyleSet; // 0x180(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x188(0x10)
	bool bOverrideDefaultStyle; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1a0(0x290)
	float MinDesiredWidth; // 0x430(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FTextBlockStyle DefaultTextStyle; // 0x438(0x290)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6c8(0x10)
	char pad_6D8[0x20]; // 0x6d8(0x20)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.RichTextBlock.SetWrapTextAt // (Final|Native|Protected|BlueprintCallable) // @ game+0x4635900
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x46356e0
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x4635650
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4635590
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x4634ca0
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46349a0
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4634870
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46347f0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4634760
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x4634620
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x4634510
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x4634400
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4633de0
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x4633cb0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x4633aa0
};

// Class UMG.SafeZone
// Size: 0x178 (Inherited: 0x160)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x160(0x01)
	bool PadRight; // 0x161(0x01)
	bool PadTop; // 0x162(0x01)
	bool PadBottom; // 0x163(0x01)
	char pad_164[0x14]; // 0x164(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x4635240
};

// Class UMG.SafeZoneSlot
// Size: 0x68 (Inherited: 0x40)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.ScaleBox
// Size: 0x180 (Inherited: 0x160)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x160(0x01)
	enum class EStretchDirection StretchDirection; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float UserSpecifiedScale; // 0x164(0x04)
	bool IgnoreInheritedScale; // 0x168(0x01)
	char pad_169[0x17]; // 0x169(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x4635800
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x4635510
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x4635490
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x4634b80
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x461aad0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4634da0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4619b60
};

// Class UMG.ScrollBar
// Size: 0x698 (Inherited: 0x148)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x148(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x660(0x08)
	bool bAlwaysShowScrollbar; // 0x668(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x669(0x01)
	enum class EOrientation Orientation; // 0x66a(0x01)
	char pad_66B[0x1]; // 0x66b(0x01)
	struct FVector2D Thickness; // 0x66c(0x08)
	struct FMargin Padding; // 0x674(0x10)
	char pad_684[0x14]; // 0x684(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x46353c0
};

// Class UMG.ScrollBoxSlot
// Size: 0x60 (Inherited: 0x40)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x463df30
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x463daf0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x463d1b0
};

// Class UMG.SizeBox
// Size: 0x198 (Inherited: 0x160)
struct USizeBox : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float WidthOverride; // 0x170(0x04)
	float HeightOverride; // 0x174(0x04)
	float MinDesiredWidth; // 0x178(0x04)
	float MinDesiredHeight; // 0x17c(0x04)
	float MaxDesiredWidth; // 0x180(0x04)
	float MaxDesiredHeight; // 0x184(0x04)
	float MinAspectRatio; // 0x188(0x04)
	float MaxAspectRatio; // 0x18c(0x04)
	char bOverride_WidthOverride : 1; // 0x190(0x01)
	char bOverride_HeightOverride : 1; // 0x190(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MinAspectRatio : 1; // 0x190(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x463e030
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x463d860
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x463d7e0
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x463d760
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x463d4d0
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x463d450
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x463d3d0
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x463d130
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x463c050
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x463bff0
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x463bfd0
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x463bfb0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x463bf50
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x463bf30
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x463bf10
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x463bef0
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x463dfb0
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x463db80
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x463d230
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463e3b0
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463e2b0
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x463e1b0
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x463e0b0
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x463cd30
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x463cbd0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x463cad0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c8e0
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c7e0
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c6e0
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c470
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c3b0
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463c290
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x463c070
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463bd90
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x463bc90
};

// Class UMG.SlateVectorArtData
// Size: 0x68 (Inherited: 0x30)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x08)
	struct FVector2D ExtentMax; // 0x60(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x98 (Inherited: 0x30)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FText AccessibleText; // 0x38(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText AccessibleSummaryText; // 0x68(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class UMG.Spacer
// Size: 0x160 (Inherited: 0x148)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x148(0x08)
	char pad_150[0x10]; // 0x150(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x463dc10
};

// Class UMG.SpinBox
// Size: 0x590 (Inherited: 0x148)
struct USpinBox : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x14)
	struct FSpinBoxStyle WidgetStyle; // 0x160(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x470(0x08)
	int32_t MinFractionalDigits; // 0x478(0x04)
	int32_t MaxFractionalDigits; // 0x47c(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float Delta; // 0x484(0x04)
	float SliderExponent; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FSlateFontInfo Font; // 0x490(0x60)
	enum class ETextJustify Justification; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float MinDesiredWidth; // 0x4f4(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4f8(0x01)
	bool SelectAllTextOnCommit; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
	struct FSlateColor ForegroundColor; // 0x500(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x528(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x538(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x548(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x558(0x10)
	char bOverride_MinValue : 1; // 0x568(0x01)
	char bOverride_MaxValue : 1; // 0x568(0x01)
	char bOverride_MinSliderValue : 1; // 0x568(0x01)
	char bOverride_MaxSliderValue : 1; // 0x568(0x01)
	char pad_568_4 : 4; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float MinValue; // 0x56c(0x04)
	float MaxValue; // 0x570(0x04)
	float MinSliderValue; // 0x574(0x04)
	float MaxSliderValue; // 0x578(0x04)
	char pad_57C[0x14]; // 0x57c(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463deb0
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463da70
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463d970
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x463d8e0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463d6e0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463d5e0
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x463d550
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x463d020
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x463cfa0
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x463cf10
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3405eb0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c6b0
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c620
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c5f0
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c5c0
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c590
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c560
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c530
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c380
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x463c350
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463c030
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463c010
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463bf90
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x463bf70
};

// Class UMG.TextBinding
// Size: 0x78 (Inherited: 0x70)
struct UTextBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x4649610
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x4649510
};

// Class UMG.Throbber
// Size: 0x1f8 (Inherited: 0x148)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	bool bAnimateHorizontally; // 0x14c(0x01)
	bool bAnimateVertically; // 0x14d(0x01)
	bool bAnimateOpacity; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x150(0x08)
	struct FSlateBrush Image; // 0x158(0x90)
	char pad_1E8[0x10]; // 0x1e8(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x464b770
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x464aa30
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x464a9a0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x464a910
};

// Class UMG.TreeView
// Size: 0x408 (Inherited: 0x3a8)
struct UTreeView : UListView {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x3b8(0x14)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3d0(0x10)
	char pad_3E0[0x28]; // 0x3e0(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x464b3c0
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x4649280
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x4649260
};

// Class UMG.UMGSequencePlayer
// Size: 0x588 (Inherited: 0x30)
struct UUMGSequencePlayer : UObject {
	char pad_30[0x3e8]; // 0x30(0x3e8)
	struct UWidgetAnimation* Animation; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x428(0xe8)
	char pad_510[0x78]; // 0x510(0x78)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x464c000
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4649680
};

// Class UMG.UMGSequenceTickManager
// Size: 0x128 (Inherited: 0x30)
struct UUMGSequenceTickManager : UObject {
	struct TSet<struct TWeakObjectPtr<struct UUserWidget>> WeakUserWidgets; // 0x30(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x80(0x08)
	char pad_88[0xa0]; // 0x88(0xa0)
};

// Class UMG.UniformGridPanel
// Size: 0x188 (Inherited: 0x160)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x160(0x10)
	float MinDesiredSlotWidth; // 0x170(0x04)
	float MinDesiredSlotHeight; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x464bce0
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x464b5a0
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x464b520
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x4648ca0
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x464c0a0
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x464bb40
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x464b220
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x464adc0
};

// Class UMG.VerticalBox
// Size: 0x170 (Inherited: 0x160)
struct UVerticalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x4650520
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4651de0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4651ae0
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4651670
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4651080
};

// Class UMG.Viewport
// Size: 0x1a8 (Inherited: 0x160)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x160(0x10)
	char pad_170[0x38]; // 0x170(0x38)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x4651f80
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4651ef0
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4651e60
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650a90
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650ad0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4650a50
};

// Class UMG.VisibilityBinding
// Size: 0x70 (Inherited: 0x70)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x4650a20
};

// Class UMG.WidgetAnimation
// Size: 0x98 (Inherited: 0x68)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x70(0x10)
	bool bLegacyFinishOnStop; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DisplayLabel; // 0x88(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x465a270
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x465a180
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x465a0f0
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x465a060
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4658a70
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4658280
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x4655dd0
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x4655ce0
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x50 (Inherited: 0x30)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x46567f0
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x46565d0
};

// Class UMG.WidgetBinding
// Size: 0x70 (Inherited: 0x70)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x4658aa0
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x378 (Inherited: 0x338)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x338(0x08)
	char bClassRequiresNativeTick : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x348(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x358(0x10)
	struct TArray<struct FName> NamedSlots; // 0x368(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x465a3e0
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x465a360
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4659ec0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4659e20
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4659da0
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4655ee0
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4659bf0
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4659af0
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x46599f0
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4659970
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4659820
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x46596c0
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4659560
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4659540
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x46593e0
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4659270
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4659270
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4659250
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46590f0
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4656290
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x3405eb0
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4659090
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658f40
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658df0
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658d30
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4658b80
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658b50
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658ad0
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x46588f0
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4658720
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46585c0
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46584e0
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46583a0
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46582b0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4658150
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4658120
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4657ff0
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4657ec0
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4657d90
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4657c10
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4657a90
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4657930
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x46576c0
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4657520
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4657330
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4657120
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4656f60
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4656f40
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4656cb0
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4656a50
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4656540
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4656440
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4656290
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x46560e0
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4655ee0
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4655ec0
};

// Class UMG.WidgetInteractionComponent
// Size: 0x4a0 (Inherited: 0x290)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x288(0x10)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	int32_t VirtualUserIndex; // 0x2a8(0x04)
	int32_t PointerIndex; // 0x2ac(0x04)
	enum class ECollisionChannel TraceChannel; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float InteractionDistance; // 0x2b4(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x2b8(0x01)
	bool bEnableHitTesting; // 0x2b9(0x01)
	bool bShowDebug; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float DebugSphereLineThickness; // 0x2bc(0x04)
	float DebugLineThickness; // 0x2c0(0x04)
	struct FLinearColor DebugColor; // 0x2c4(0x10)
	char pad_2D4[0x7c]; // 0x2d4(0x7c)
	struct FHitResult CustomHitResult; // 0x350(0x94)
	struct FVector2D LocalHitLocation; // 0x3e4(0x08)
	struct FVector2D LastLocalHitLocation; // 0x3ec(0x08)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x3f8(0x08)
	struct FHitResult LastHitResult; // 0x400(0x94)
	bool bIsHoveredWidgetInteractable; // 0x494(0x01)
	bool bIsHoveredWidgetFocusable; // 0x495(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x496(0x01)
	char pad_497[0x9]; // 0x497(0x09)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x4660ed0
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4660c60
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x4660a60
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x46609d0
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x4660800
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x46606e0
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x4660450
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x46602e0
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x46601c0
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4660160
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4660130
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4660100
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x465fa70
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba6380
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x465f950
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661d20
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661c90
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661c00
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661b70
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661ae0
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661a50
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x46619c0
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661930
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x46618a0
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661810
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661780
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x46616f0
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4661660
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4660920
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4660570
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x465ffd0
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x465ff40
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x465feb0
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x465fd70
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x465fbf0
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x465fb60
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x465fb20
};

// Class UMG.WidgetNavigation
// Size: 0x138 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x30(0x2c)
	struct FWidgetNavigationData Down; // 0x5c(0x2c)
	struct FWidgetNavigationData Left; // 0x88(0x2c)
	struct FWidgetNavigationData Right; // 0xb4(0x2c)
	struct FWidgetNavigationData Next; // 0xe0(0x2c)
	struct FWidgetNavigationData Previous; // 0x10c(0x2c)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x46648d0
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4664720
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4664520
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x30(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x180 (Inherited: 0x160)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x160(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x161(0x01)
	char pad_162[0x1e]; // 0x162(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4664950
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x46647b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x46645a0
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x46649d0
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4664840
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4664620
};

// Class UMG.WrapBox
// Size: 0x188 (Inherited: 0x160)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x160(0x08)
	float WrapWidth; // 0x168(0x04)
	float WrapSize; // 0x16c(0x04)
	bool bExplicitWrapWidth; // 0x170(0x01)
	bool bExplicitWrapSize; // 0x171(0x01)
	enum class EOrientation Orientation; // 0x172(0x01)
	char pad_173[0x15]; // 0x173(0x15)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46646a0
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x46642c0
};

// Class UMG.WrapBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3079080
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3078ec0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3078d20
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x3078c20
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x3078b00
};

