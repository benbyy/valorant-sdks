// Class PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPlayerFeedbackToolFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPlayerFeedbackToolManager* GetPlayerFeedbackToolManager(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary.GetPlayerFeedbackToolManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2347c70
};

// Class PlayerFeedbackToolModule.PlayerFeedbackToolManager
// Size: 0x110 (Inherited: 0x30)
struct UPlayerFeedbackToolManager : UObject {
	struct FMulticastInlineDelegate OnSurveyReceivedEvent; // 0x30(0x10)
	char pad_40[0xd0]; // 0x40(0xd0)

	void SetQuestionResponse(int32_t questionId, struct FString Key, struct FString Value); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.SetQuestionResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x2347f30
	void SendSurveyResults(bool didOptOutOfSurvey); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.SendSurveyResults // (Final|Native|Public|BlueprintCallable) // @ game+0x2347ea0
	void RequestSurveyForEvent(struct UPlayerFeedbackToolManager* pftManager, struct FString EventType, struct TFieldPath<FProperty> anyStruct); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurveyForEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2347d80
	void RequestSurvey(struct FString EventType); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurvey // (Final|Native|Public|BlueprintCallable) // @ game+0x2347cd0
	bool HasActiveSurvey(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.HasActiveSurvey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2347ca0
	struct FPlayerFeedbackSurvey GetActiveSurvey(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.GetActiveSurvey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2347c40
	void AddMetadataField(struct FString Key, struct FString Value); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddMetadataField // (Final|Native|Public|BlueprintCallable) // @ game+0x2347b30
	void AddExpandedSurveyAction(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddExpandedSurveyAction // (Final|Native|Public|BlueprintCallable) // @ game+0x2347b10
};

