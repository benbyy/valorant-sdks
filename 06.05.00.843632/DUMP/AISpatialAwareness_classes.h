// Class AISpatialAwareness.AISpatialAwarenessBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAISpatialAwarenessBlueprintLibrary : UBlueprintFunctionLibrary {

	bool EqualEqual_FInfluenceLayerIDFInfluenceLayerID(struct FInfluenceLayerID& A, struct FInfluenceLayerID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerIDFInfluenceLayerID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x561da60
	bool EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID(struct FInfluenceLayerBlockID& A, struct FInfluenceLayerBlockID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x561da60
};

// Class AISpatialAwareness.AISpatialAwarenessDebugControllerComponent
// Size: 0x100 (Inherited: 0xe8)
struct UAISpatialAwarenessDebugControllerComponent : UActorComponent {
	struct APlayerController* CachedPlayerController; // 0xe8(0x08)
	struct UInfluenceMapDebuggerComponent* CachedInfluenceMapDebuggerComponent; // 0xf0(0x08)
	struct UMapMarkupWaypointDebuggerComponent* CachedMapMarkupWaypointDebuggerComponent; // 0xf8(0x08)

	void ServerStepPropagation(float PropagationStepAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerStepPropagation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x561df70
	void ServerSetPropagationPaused(bool bPaused); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetPropagationPaused // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x561ded0
	void ServerSetLayerID(int32_t LayerID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetLayerID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x2cdf500
	void ServerSetClientRequestedWaypointDebugData(struct FClientRequestedWaypointDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedWaypointDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x561de40
	void ServerSetClientRequestedInfluenceMapDebugData(struct FClientRequestedInfluenceMapDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedInfluenceMapDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x561ddb0
	void ServerSetBlockID(int32_t BlockID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetBlockID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x2aedee0
	void ServerRegisterInfluenceAtPoint(float InfluenceValue); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerRegisterInfluenceAtPoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x561dd20
	void ServerCycleToNextActiveLayer(); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleToNextActiveLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x2a5ef50
	void ServerCycleLayer(int32_t CycleAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x2e9e290
};

// Class AISpatialAwareness.BTService_RunWaypointQuery
// Size: 0x1d0 (Inherited: 0x78)
struct UBTService_RunWaypointQuery : UBTService {
	struct UEnvQuery* PrimaryQueryTemplate; // 0x78(0x08)
	struct FBlackboardKeySelector PrimaryQueryBlackboardKey; // 0x80(0x30)
	struct UEnvQuery* SecondaryQueryTemplate; // 0xb0(0x08)
	struct FBlackboardKeySelector SecondaryQueryBlackboardKey; // 0xb8(0x30)
	float SecondaryQueryCombinedScoreWeight; // 0xe8(0x04)
	float SecondaryQueryScoreTolerance; // 0xec(0x04)
	bool bDiscardPrimaryResultWithFailedSecondaryQuery; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float FoundWaypointTimeoutDuration; // 0xf4(0x04)
	bool bRunQueryIfFoundWaypointValid; // 0xf8(0x01)
	bool bUsePreviousWaypointOnNoneFound; // 0xf9(0x01)
	enum class EInfluenceLayerTag InfluenceTypeCheckTag; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelperType; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelper; // 0x128(0x08)
	struct TMap<int32_t, struct FWaypointQueryInfo> CachedWaypointQueryInfo; // 0x130(0x50)
	struct FWaypointQueryInfo CachedPreviousWaypointInfo; // 0x180(0x28)
	struct APawn* CachedOwnerPawn; // 0x1a8(0x08)
	struct AAIController* CachedOwnerController; // 0x1b0(0x08)
	char pad_1B8[0x18]; // 0x1b8(0x18)

	void InvalidatePreviousWaypointInfo(); // Function AISpatialAwareness.BTService_RunWaypointQuery.InvalidatePreviousWaypointInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x561dba0
	struct APawn* GetOwnerPawn(); // Function AISpatialAwareness.BTService_RunWaypointQuery.GetOwnerPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x561db70
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryPawn
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryPawn : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryWaypoint
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryWaypoint : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryGenerator_ConnectedWaypoints
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_ConnectedWaypoints : UEnvQueryGenerator {
	struct UEnvQueryContext* Context; // 0x58(0x08)
};

// Class AISpatialAwareness.EnvQueryGenerator_WaypointsInRoom
// Size: 0x58 (Inherited: 0x58)
struct UEnvQueryGenerator_WaypointsInRoom : UEnvQueryGenerator {
};

// Class AISpatialAwareness.EnvQueryTest_WaypointInfluenceValue
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointInfluenceValue : UEnvQueryTest {
	enum class EInfluenceLayerTag LayerTag; // 0x238(0x01)
	enum class EWaypointInfluenceQueryReturnType QueryReturnType; // 0x239(0x01)
	bool bIgnoreQuerierInfluenceContribution; // 0x23a(0x01)
	bool bDiscardZeroInfluenceWaypoints; // 0x23b(0x01)
	char pad_23C[0x4]; // 0x23c(0x04)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointType
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_WaypointType : UEnvQueryTest {
	char WaypointTypeFlags; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct AMapMarkupWaypoint* WaypointClass; // 0x240(0x08)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointVisibility
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointVisibility : UEnvQueryTest {
	enum class EEnvTestWaypointVisibilityMode CheckMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class AISpatialAwareness.InfluenceClearerComponentBase
// Size: 0x110 (Inherited: 0xe8)
struct UInfluenceClearerComponentBase : UActorComponent {
	float ClearTickRate; // 0xe8(0x04)
	enum class EInfluenceLayerTag ClearLayerTag; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct TArray<enum class EInfluenceSourceTag> ClearSourceTags; // 0xf0(0x10)
	struct FInfluenceLayerBlockID OwnerLayerBlockID; // 0x100(0x04)
	enum class ELayerBlockBehavior LayerBlockBehavior; // 0x104(0x01)
	char pad_105[0xb]; // 0x105(0x0b)
};

// Class AISpatialAwareness.InfluenceMap
// Size: 0x408 (Inherited: 0x3d0)
struct AInfluenceMap : AActor {
	struct UInfluenceMapNodeGraphComponent* InfluenceMapNodeGraphComponent; // 0x3d0(0x08)
	struct UInfluenceMapSourceManagerComponent* InfluenceMapSourceManagerComponent; // 0x3d8(0x08)
	struct UInfluencePropagationComponent* InfluencePropagationComponent; // 0x3e0(0x08)
	struct UInfluenceMapRoomManagerComponent* InfluenceMapRoomManagerComponent; // 0x3e8(0x08)
	struct UInfluenceMapDebuggerComponent* InfluenceMapDebuggerComponent; // 0x3f0(0x08)
	struct UMapMarkupWaypointDebuggerComponent* MapMarkupWaypointDebuggerComponent; // 0x3f8(0x08)
	int32_t NumExpectedPropagatingLayers; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)

	int32_t GetNumExpectedPropagatingLayers(); // Function AISpatialAwareness.InfluenceMap.GetNumExpectedPropagatingLayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x561db50
	struct AInfluenceMap* AuthGetInfluenceMap(struct UObject* WorldContextObject); // Function AISpatialAwareness.InfluenceMap.AuthGetInfluenceMap // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x561d9d0
};

// Class AISpatialAwareness.InfluenceMapDebuggerComponent
// Size: 0x2e8 (Inherited: 0xe8)
struct UInfluenceMapDebuggerComponent : UActorComponent {
	char pad_E8[0x38]; // 0xe8(0x38)
	struct AInfluenceMap* CachedInfluenceMap; // 0x120(0x08)
	struct ULayerBlockAssignerComponentBase* CachedBlockAssignerComponent; // 0x128(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x130(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x138(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComp; // 0x140(0x08)
	struct ARecastNavMesh* CachedNavMesh; // 0x148(0x08)
	struct FInfluenceMapDebugData InfluenceMapDebugData; // 0x150(0x98)
	struct TMap<struct APlayerController*, int32_t> FocusedNodeIndexMap; // 0x1e8(0x50)
	struct TArray<struct FSavedInfoMap> SavedInfoArray; // 0x238(0x10)
	struct TMap<int32_t, struct AMapMarkupWaypoint*> NodeIndexToWaypointMap; // 0x248(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedInfluenceMapDebugData> ClientRequestedDebugDataMap; // 0x298(0x50)

	void MulticastInfluenceDebugData(struct FInfluenceMapDebugData DebugData); // Function AISpatialAwareness.InfluenceMapDebuggerComponent.MulticastInfluenceDebugData // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x561dbc0
};

// Class AISpatialAwareness.InfluenceMapNodeGraphComponent
// Size: 0x1b0 (Inherited: 0xe8)
struct UInfluenceMapNodeGraphComponent : UActorComponent {
	struct UNodePlacementStrategyBase* NodePlacementStrategyClass; // 0xe8(0x08)
	struct TMap<struct FIntVector, int32_t> InfluenceMapNodeIndices; // 0xf0(0x50)
	struct TArray<struct FInfluenceMapNode> InfluenceMapNodes; // 0x140(0x10)
	struct TMap<int32_t, struct FNodeOperationsList> PendingNodeOperations; // 0x150(0x50)
	struct UNodePlacementStrategyBase* NodePlacementStrategy; // 0x1a0(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x1a8(0x08)

	struct TArray<int32_t> GetSurroundingNodeIndicesAtLocation(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetSurroundingNodeIndicesAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623930
	int32_t GetNumNodes(); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNumNodes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c8f7a0
	struct FVector GetNodeLocation(int32_t NodeIndex); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNodeLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56237f0
	int32_t GetNearestInfluenceMapNodeIndex(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNearestInfluenceMapNodeIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623710
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInSphere(struct FVector& Location, float Radius); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInSphere // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56233f0
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInCone(struct FVector& Location, struct FVector& ViewDirection, float PeripheralVisionAngleCos, float PointOfViewBackwardOffset, float NearClippingRadiusSq, float SightRadiusSq); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInCone // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56231a0
};

// Class AISpatialAwareness.InfluenceMapRoomManagerComponent
// Size: 0x100 (Inherited: 0xe8)
struct UInfluenceMapRoomManagerComponent : UActorComponent {
	struct AActor* RoomOccupierClass; // 0xe8(0x08)
	struct TArray<struct AMapMarkupRoom*> MapMarkupRooms; // 0xf0(0x10)

	struct TArray<struct AMapMarkupRoom*> GetMapMarkupRooms(); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.GetMapMarkupRooms // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56236e0
	struct TArray<struct AMapMarkupRoom*> AuthGetRoomsForActor(struct AActor* InActor); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.AuthGetRoomsForActor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ebaeb0
};

// Class AISpatialAwareness.InfluenceMapSourceManagerComponent
// Size: 0x140 (Inherited: 0xe8)
struct UInfluenceMapSourceManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInfluenceSourceRegistered; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnInfluenceSourceDeregistered; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnInfluenceValuesCleared; // 0x108(0x10)
	bool bPropagatingSourceStampedNodesImmuneToClears; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FInfluenceMapLayer> InfluenceSourceLayers; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)

	bool IsValidBlockID(struct FInfluenceLayerBlockID& BlockID); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsValidBlockID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623eb0
	bool IsInfluenceSourceRegistered(struct UInfluenceSourceComponentBase* SourceComp); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsInfluenceSourceRegistered // (Final|Native|Public|BlueprintCallable) // @ game+0x2aeacc0
};

// Class AISpatialAwareness.InfluenceSourceComponentBase
// Size: 0x1f8 (Inherited: 0xe8)
struct UInfluenceSourceComponentBase : UActorComponent {
	struct FInfluenceSourceRegistrationData RegistrationData; // 0xe8(0xe0)
	float ReseedTickRate; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<struct FInfluenceLayerBlockID> ReseedBlockIDs; // 0x1d0(0x10)
	char pad_1E0[0x18]; // 0x1e0(0x18)

	struct FInfluenceIdentifiers GetSourceIdentifiers(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetSourceIdentifiers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623900
	struct FInfluenceSourceRegistrationData GetRegistrationData(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetRegistrationData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56238d0
	void AuthUpdateReseedBlockIDs(struct TArray<struct FInfluenceLayerBlockID>& InNewReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthUpdateReseedBlockIDs // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x2c2c890
	void AuthStopPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStopPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1b86de0
	void AuthStartPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStartPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1b86de0
	void AuthSetInfluencePropagationPaused(bool bPaused); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthSetInfluencePropagationPaused // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2b28300
	void AuthResetReseedBlockIDs(bool bAllBlocksReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthResetReseedBlockIDs // (Final|Native|Protected|BlueprintCallable) // @ game+0x2b28300
	bool AuthRegisterSource(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2aacca0
	bool AuthDeregisterSource(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthDeregisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2aacca0
};

// Class AISpatialAwareness.InfluencePointSourceComponent
// Size: 0x208 (Inherited: 0x1f8)
struct UInfluencePointSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1f8(0x04)
	char pad_1FC[0xc]; // 0x1fc(0x0c)

	float GetInfluenceValue(); // Function AISpatialAwareness.InfluencePointSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5623620
};

// Class AISpatialAwareness.InfluencePropagationComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UInfluencePropagationComponent : UActorComponent {
	struct UInfluencePropagatorMovement* InfluencePropagatorMovement; // 0xe8(0x08)
	bool bAllPropagationPaused; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float PropagationTimeOffset; // 0xf4(0x04)

	void OnInfluenceValuesCleared(struct TArray<int32_t>& LayerIndices, struct TArray<int32_t>& ClearedNodes); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceValuesCleared // (Final|Native|Public|HasOutParms) // @ game+0x56242a0
	void OnInfluenceSourceRegistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceRegistered // (Final|Native|Public|HasOutParms) // @ game+0x5624100
	void OnInfluenceSourceDeregistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceDeregistered // (Final|Native|Public|HasOutParms) // @ game+0x5623f60
};

// Class AISpatialAwareness.InfluencePropagatorBase
// Size: 0x48 (Inherited: 0x30)
struct UInfluencePropagatorBase : UObject {
	struct UInfluenceMapSourceManagerComponent* CachedInfluenceMapSourceManagerComponent; // 0x30(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedInfluenceMapNodeGraphComponent; // 0x38(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x40(0x08)
};

// Class AISpatialAwareness.InfluencePropagatorMovement
// Size: 0x98 (Inherited: 0x48)
struct UInfluencePropagatorMovement : UInfluencePropagatorBase {
	struct TMap<int32_t, struct FMovementLayerPropagationInfo> PropagatingLayerInfo; // 0x48(0x50)
};

// Class AISpatialAwareness.InfluenceSphereClearerComponent
// Size: 0x128 (Inherited: 0x110)
struct UInfluenceSphereClearerComponent : UInfluenceClearerComponentBase {
	float SphereRadius; // 0x110(0x04)
	char pad_114[0x14]; // 0x114(0x14)
};

// Class AISpatialAwareness.InfluenceVisionConeClearerComponent
// Size: 0x120 (Inherited: 0x110)
struct UInfluenceVisionConeClearerComponent : UInfluenceClearerComponentBase {
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x110(0x08)
	bool bEnabled; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeClearerComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x56243c0
	void Enable(); // Function AISpatialAwareness.InfluenceVisionConeClearerComponent.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x5623040
	void Disable(); // Function AISpatialAwareness.InfluenceVisionConeClearerComponent.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x5623000
};

// Class AISpatialAwareness.InfluenceVisionConeSourceComponent
// Size: 0x208 (Inherited: 0x1f8)
struct UInfluenceVisionConeSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1f8(0x04)
	bool bEnabled; // 0x1fc(0x01)
	char pad_1FD[0xb]; // 0x1fd(0x0b)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x56243c0
	float GetInfluenceValue(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5623620
	void Enable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x5623060
	void Disable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x5623020
};

// Class AISpatialAwareness.LayerBlockAssignerComponentBase
// Size: 0xe8 (Inherited: 0xe8)
struct ULayerBlockAssignerComponentBase : UActorComponent {

	struct FString GetStringIdentifierForBlockID(struct FInfluenceLayerBlockID BlockID); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetStringIdentifierForBlockID // (Event|Public|BlueprintEvent|Const) // @ game+0x332feb0
	int32_t GetNumLayerBlocks(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNumLayerBlocks // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2cba090
	struct FInfluenceLayerBlockID GetNextLayerBlockID(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNextLayerBlockID // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x56237b0
	struct FInfluenceLayerBlockID GetLayerBlockIDForActor(struct AActor* InActor); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetLayerBlockIDForActor // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5623640
	struct ULayerBlockAssignerComponentBase* AuthGetLayerBlockAssigner(struct UObject* WorldContextObject); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AuthGetLayerBlockAssigner // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5622f70
	void AssignLayerBlockIDs(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AssignLayerBlockIDs // (Event|Public|BlueprintEvent|Const) // @ game+0x332feb0
};

// Class AISpatialAwareness.MapMarkupRoom
// Size: 0x438 (Inherited: 0x3d0)
struct AMapMarkupRoom : AActor {
	struct TArray<struct AMapMarkupWaypoint*> RoomWaypoints; // 0x3d0(0x10)
	struct TSet<struct AActor*> OccupyingActors; // 0x3e0(0x50)
	struct UInfluenceMapRoomManagerComponent* CachedRoomManagerComponent; // 0x430(0x08)

	bool IsActorInRoom(struct AActor* InActor); // Function AISpatialAwareness.MapMarkupRoom.IsActorInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623d70
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfType(char TypeFlags); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623ba0
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfClass(struct AMapMarkupWaypoint* WaypointType); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623ab0
	struct TArray<struct AMapMarkupWaypoint*> GetWaypoints(); // Function AISpatialAwareness.MapMarkupRoom.GetWaypoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623a20
	struct TArray<struct AActor*> GetActorsInRoom(); // Function AISpatialAwareness.MapMarkupRoom.GetActorsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623080
};

// Class AISpatialAwareness.MapMarkupWaypoint
// Size: 0x468 (Inherited: 0x3d0)
struct AMapMarkupWaypoint : AActor {
	struct TMap<struct FName, struct FEnvNamedValue> WaypointQueryNamedParams; // 0x3d0(0x50)
	float MinValueAfterDecay; // 0x420(0x04)
	float MaxValueAfterGrowth; // 0x424(0x04)
	struct TArray<struct AMapMarkupWaypoint*> ConnectedWaypoints; // 0x428(0x10)
	struct TArray<struct AMapMarkupRoom*> OwningRooms; // 0x438(0x10)
	int32_t CachedNodeIndex; // 0x448(0x04)
	char WaypointTypeFlags; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct UAIPerceptionStimuliSourceComponent* StimuliSourceComponent; // 0x450(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComponent; // 0x458(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComponent; // 0x460(0x08)

	bool WaypointIsType(char TypeFlags); // Function AISpatialAwareness.MapMarkupWaypoint.WaypointIsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56246b0
	float QueryInfluence(struct AActor* Querent, struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag InfluenceType, enum class EWaypointInfluenceQueryReturnType ReturnType, bool bIgnoreQuerent); // Function AISpatialAwareness.MapMarkupWaypoint.QueryInfluence // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x56244e0
	bool IsInRoom(struct AMapMarkupRoom* InRoom); // Function AISpatialAwareness.MapMarkupWaypoint.IsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623e10
	bool HasInfluenceOfType(struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag LayerTag); // Function AISpatialAwareness.MapMarkupWaypoint.HasInfluenceOfType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623c80
	struct TArray<struct AMapMarkupRoom*> GetOwningRooms(); // Function AISpatialAwareness.MapMarkupWaypoint.GetOwningRooms // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56238a0
	float GetInfluenceValue(struct FInfluenceLayerBlockID& BlockID, struct FInfluenceLayerID& LayerID); // Function AISpatialAwareness.MapMarkupWaypoint.GetInfluenceValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623520
	struct FString GetDebugString(); // Function AISpatialAwareness.MapMarkupWaypoint.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5623110
};

// Class AISpatialAwareness.MapMarkupWaypointDebuggerComponent
// Size: 0x1d0 (Inherited: 0xe8)
struct UMapMarkupWaypointDebuggerComponent : UActorComponent {
	struct FMapMarkupWaypointDebugData WaypointDebugData; // 0xe8(0x30)
	struct AInfluenceMap* CachedInfluenceMap; // 0x118(0x08)
	struct TArray<struct AMapMarkupWaypoint*> CachedWaypoints; // 0x120(0x10)
	struct TMap<struct APlayerController*, struct AMapMarkupWaypoint*> FocusedWaypointsMap; // 0x130(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedWaypointDebugData> ClientRequestedDebugDataMap; // 0x180(0x50)

	void MulticastDebugData(struct FMapMarkupWaypointDebugData DebugData); // Function AISpatialAwareness.MapMarkupWaypointDebuggerComponent.MulticastDebugData // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x5625da0
};

// Class AISpatialAwareness.NodePlacementStrategyBase
// Size: 0x90 (Inherited: 0x30)
struct UNodePlacementStrategyBase : UObject {
	struct TMap<uint64_t, struct FWaypointsForNavMeshPoly> CachedWaypoints; // 0x30(0x50)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class AISpatialAwareness.NodePlacementStrategyNavMeshPolys
// Size: 0x98 (Inherited: 0x90)
struct UNodePlacementStrategyNavMeshPolys : UNodePlacementStrategyBase {
	float UpwardNavLinkConnectionLimit; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class AISpatialAwareness.VisionConeNodeDetectorComponent
// Size: 0x150 (Inherited: 0xe8)
struct UVisionConeNodeDetectorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInfluenceNodesInConeUpdated; // 0xe8(0x10)
	float RefreshTickRate; // 0xf8(0x04)
	float SightRadius; // 0xfc(0x04)
	float PeripheralVisionHalfAngleDegrees; // 0x100(0x04)
	float PointOfViewBackwardOffset; // 0x104(0x04)
	float NearClippingRadius; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<int32_t> CachedNodesInCone; // 0x110(0x10)
	struct TArray<int32_t> CachedVisibleNodes; // 0x120(0x10)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x130(0x08)
	char pad_138[0x18]; // 0x138(0x18)
};

// Class AISpatialAwareness.WaypointQueryEventsHelperBase
// Size: 0x38 (Inherited: 0x30)
struct UWaypointQueryEventsHelperBase : UObject {
	struct UBTService_RunWaypointQuery* OwnerService; // 0x30(0x08)

	void UnbindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.UnbindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x332feb0
	void BindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.BindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x332feb0
};

