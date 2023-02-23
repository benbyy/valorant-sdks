// BlueprintGeneratedClass Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UAres_Characters_FunctionLibrary_C : UBlueprintFunctionLibrary {

	void Auth Append Ability Effect Location(struct AActor* Reporting Actor, bool Should Clear Before Append, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.Auth Append Ability Effect Location // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetTagDuration(struct AShooterCharacter* ShooterCharacter, struct FGameplayEffectQuery& Query, struct UObject* __WorldContext, float& MaxDuration); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetTagDuration // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetTagRemainingTime(struct AShooterCharacter* ShooterCharacter, struct FGameplayEffectQuery& Query, struct UObject* __WorldContext, float& RemainingDuration); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetTagRemainingTime // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetFirstFloorHitFromHitArray(struct TArray<struct FHitResult>& Array, struct UObject* InWorldContext, struct FVector NavQueryExtent, bool ReturnPointOnNav, struct UObject* __WorldContext, bool& Success, struct FVector& Location); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetFirstFloorHitFromHitArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void FindFirstFloorHitFromLineTrace(struct UObject* WorldContextObject, struct FVector StartLocation, struct FVector AimDirection, float MaxDistance, bool ReturnPointOnNavMesh, struct FVector NavQueryExtent, struct UObject* __WorldContext, bool& Success, struct FVector& Location); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindFirstFloorHitFromLineTrace // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetAllActorsOfClassAttached(struct AActor* Actor, struct TSoftClassPtr<UObject> AttachedActor, struct UObject* __WorldContext, struct TArray<struct AActor*>& OutAttachedActor); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAllActorsOfClassAttached // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void HasActorOfExactClassAttached(struct AActor* Actor, struct TSoftClassPtr<UObject> AttachedActor, struct UObject* __WorldContext, bool& HasAttached, struct AActor*& OutAttachedActor); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.HasActorOfExactClassAttached // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AddStates(struct UStateMachineComponent* StateMachine, struct TArray<struct UStateComponent*>& States, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AddStates // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SetEQSStateClearSpotForCharacterOffsetFix(struct UEQSStateComponent* EQSStateComponent, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.SetEQSStateClearSpotForCharacterOffsetFix // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SearchForBlockVolumes(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<struct AActor*>& ActorsToIgnore, struct UObject* __WorldContext, bool& HitVolume, struct FHitResult& HitResults); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.SearchForBlockVolumes // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetAresAbilitySystemComponent(struct AShooterCharacter* Shooter Character, struct UObject* __WorldContext, struct UAresAbilitySystemComponent*& Component); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAresAbilitySystemComponent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	bool CharacterIsFullyBelowPoint(struct AShooterCharacter* InShooterCharacter, struct FVector InPoint, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.CharacterIsFullyBelowPoint // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void ActorHasAnyTag(struct TArray<struct FName>& InTags, struct AActor* InActor, struct UObject* __WorldContext, bool& HasTag); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ActorHasAnyTag // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	bool ShooterCharacterIsCurrentViewTarget(struct UObject* InActor, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ShooterCharacterIsCurrentViewTarget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AuthApplyRadialDamage(struct FVector SearchOrigin, struct TArray<struct AActor*>& IgnoreActors, float SearchRadius, float OuterRadius, float BaseDamage, float InnerRadius, float MinDamage, struct AController* EventInstigator, struct AActor* DamageCauser, struct UDamageType* DamageTypeClass, enum class EAresRadialCheckType RadialCheckType, enum class EAresLineOfSightCheckType LineOfSightCheck, enum class EAresSearchVisibilityType SearchVisibilityType, struct UObject* Viewer, enum class EAresAlliance Alliance, bool bFindShooterCharacters, bool bFindGameObjects, bool bFindProjectiles, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthApplyRadialDamage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void FindFirstValidFloorUnderLocation(struct UObject* WorldContextObject, struct FVector Start, float TestDistnace, bool RequireWalkableAngle, bool RequireNav, struct FVector NavExtents, struct TArray<struct FName>& IgnoreTags, struct UObject* __WorldContext, bool& FloorFound, struct FHitResult& Array Element); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindFirstValidFloorUnderLocation // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void FindDistanceToPlayerCapsule(struct AShooterCharacter* InShooterCharacter, struct FVector InLocation, struct UObject* __WorldContext, float& Distance); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindDistanceToPlayerCapsule // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AuthApplyAxialDamage(struct FVector& SearchOrigin, struct TArray<struct AActor*>& IgnoreActors, float SearchRadius, float AxialOffset, enum class ECollisionChannel TraceChannel, float OuterRadius, float BaseDamage, float InnerRadius, float MinDamage, struct AController* EventInstigator, struct AActor* DamageCauser, struct UDamageType* DamageTypeClass, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthApplyAxialDamage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void FindGroundLocationFromHitResults(struct FHitResult InHitResults, struct AActor* WorldContext, float PullOffFromWall, enum class ETraceTypeQuery TraceChannel, bool TraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, struct UObject* __WorldContext, bool& FloorFound, struct FVector& FloorPoint, struct FHitResult& FloorHitResults); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindGroundLocationFromHitResults // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetItemSlotFromAbilitySlot(enum class ECharacterAbilitySlot AbilitySlot, struct UObject* __WorldContext, enum class EAresItemSlot& ItemSlot); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetItemSlotFromAbilitySlot // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void BuffIsActiveOnActor(struct AActor* InActor, struct UGameplayEffect* Effect Definition, struct UObject* __WorldContext, bool& IsActive); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.BuffIsActiveOnActor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AuthMarkAbilityCastDestroyed(struct AActor* ReportingActor, int32_t DestroyedCountToAdd, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthMarkAbilityCastDestroyed // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	struct FVector ComputeProjectileBounce(struct FVector Velocity, struct FHitResult HitResult, float Bounciness, float Friction, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ComputeProjectileBounce // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	bool CharacterIsDetectable(struct AShooterCharacter* ShooterCharacter, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.CharacterIsDetectable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	struct FString GetAudPerspectiveSwitchState(struct AShooterCharacter* InShooterCharacter, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAudPerspectiveSwitchState // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetAllWidgetChildrenRecursive(struct UPanelWidget* InWidget, struct UObject* __WorldContext, struct TArray<struct UWidget*>& ChildWidgets); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAllWidgetChildrenRecursive // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void RemoveAllHUD_ElementsOfType(struct UObject* WorldContextObject, struct UUserWidget* WidgetClass, bool TopLevelOnly, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.RemoveAllHUD_ElementsOfType // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SetTeamFresnelOnMeshComp(struct UMeshComponent* OnMeshComp, struct AActor* OwningActor, struct UObject* __WorldContext, struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterials); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.SetTeamFresnelOnMeshComp // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void ShooterCharacterIsIntangible(struct AShooterCharacter* ShooterCharacter, struct UObject* __WorldContext, bool& IsIntangible); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ShooterCharacterIsIntangible // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetPlantedBombFromCharacter(struct AShooterCharacter* ShooterCharacter, struct UObject* __WorldContext, struct APlantedBomb_C*& PlantedBomb); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetPlantedBombFromCharacter // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AuthGetCastIndexFromActor(struct AActor* Actor, struct UObject* __WorldContext, struct UCharacterAbilityStatisticsComponent_C*& GameStatisticsComponent, int32_t& CastIndex); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthGetCastIndexFromActor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AuthAddEffectedPlayerToAbilityCast(struct AActor* ReportingActor, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter* EffectedPlayer, enum class EAresAlliance Alliance, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthAddEffectedPlayerToAbilityCast // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AuthAddStatisticToAbilityCast(struct AActor* ReportingActor, struct AShooterCharacter* AffectedCharacter, enum class ECharacterAbilityStatisticList Statistic, enum class EAresAlliance Alliance, float ValueToAdd, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthAddStatisticToAbilityCast // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void ReplaceAllMaterialsWithDynamicMaterials(struct UPrimitiveComponent* PrimitiveComponent, struct UObject* __WorldContext, struct TArray<struct UMaterialInstanceDynamic*>& DynamicMaterials); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ReplaceAllMaterialsWithDynamicMaterials // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void ReplaceMaterialWithDynamicMaterial(struct UPrimitiveComponent* PrimitiveComponent, int32_t MaterialIndex, struct UObject* __WorldContext, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ReplaceMaterialWithDynamicMaterial // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AuthAddEffectedPlayerToMostRecentAbilityCast_HACK(struct AShooterCharacter* OwningShooterCharacter, enum class EAresItemSlot Slot, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter* EffectedPlayer, enum class EAresAlliance Alliance, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthAddEffectedPlayerToMostRecentAbilityCast_HACK // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	struct UCharacterAbilityStatisticsComponent_C* GetCharacterStatisticsComponentForSlot(struct AShooterCharacter* OwningCharacter, enum class EAresItemSlot Slot, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetCharacterStatisticsComponentForSlot // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AuthAddStatisticToMostRecentAbilityCast_HACK(struct AShooterCharacter* OwningShooterCharacter, enum class EAresItemSlot Slot, enum class ECharacterAbilityStatisticList Statistic, float ValueToAdd, struct AShooterCharacter* AffectedCharacter, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthAddStatisticToMostRecentAbilityCast_HACK // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetAbilitySlotFromItemSlot(enum class EAresItemSlot ItemSlot, struct AActor* Context, struct FString Strng, struct UObject* __WorldContext, enum class ECharacterAbilitySlot& AbilitySlot); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAbilitySlotFromItemSlot // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetActionMappingFromSlot(enum class EAresItemSlot Slot, struct UObject* __WorldContext, struct FName& ActionMapping); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetActionMappingFromSlot // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetInputKeyFromSlot(enum class EAresItemSlot InputSlot, struct UObject* __WorldContext, struct FInputChord& OutChordStruture, struct FKey& Key, bool& Success); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetInputKeyFromSlot // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void IsFloorSurface(struct FVector Normal, struct UObject* __WorldContext, bool& IsFloorSurface); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.IsFloorSurface // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AdjustDeveloperAudio(struct UAresAudioComponent* AkComponent, float VolumeMultiplier, float AttenuationMultiplier, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AdjustDeveloperAudio // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void HasActorOfClassAttached(struct AActor* Actor, struct TSoftClassPtr<UObject> AttachedActor, struct UObject* __WorldContext, bool& HasAttached, struct AActor*& OutAttachedActor); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.HasActorOfClassAttached // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetAllWidgetChildren(struct UPanelWidget* InWidget, struct UObject* __WorldContext, struct TArray<struct UWidget*>& ChildWidgets); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAllWidgetChildren // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetInputKeyFromEquippable(struct AAresItem* Target, struct UObject* __WorldContext, struct FInputChord& OutChordStruture, struct FKey& Key, bool& Success); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetInputKeyFromEquippable // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	struct FName GetActionMappingFromEquippable(struct AAresItem* Target, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetActionMappingFromEquippable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	bool GetKeyFromActionMapping(struct FName ActionMapping, struct UObject* __WorldContext, struct FInputChord& OutChordStruture, struct FKey& Key); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetKeyFromActionMapping // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetAllActorsOfClassOwnedByCharacter(struct AShooterCharacter* InShooterCharacter, struct AActor* ActorClass, struct UObject* __WorldContext, struct TArray<struct AActor*>& Actors); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAllActorsOfClassOwnedByCharacter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void CharacterOwnsActorOfClass(struct AShooterCharacter* InShooterCharacter, struct AActor* ActorClass, struct UObject* __WorldContext, bool& OwnsActorOfClass); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.CharacterOwnsActorOfClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetParticleFloatParamterValue(struct UParticleSystemComponent* InParticle, struct FName ParameterName, struct UObject* __WorldContext, float& Value); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetParticleFloatParamterValue // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AuthAddStatisticToEquippable(struct AShooterCharacter* OwningShooterCharacter, enum class EAresItemSlot Slot, struct FName KeyName, float ValueToAdd, enum class EAresAlliance Alliance, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthAddStatisticToEquippable // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetAbilityPrimaryFeedbackWidget(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct UWidget_Ability_Element_PrimaryAbilityFeedback_C*& Widget); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetAbilityPrimaryFeedbackWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetMaxFloorAngle(struct UObject* __WorldContext, float& NewParam); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetMaxFloorAngle // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void WasArmorBrokenFromDamage(struct UDamageResponse* InDamageResponse, struct UObject* __WorldContext, bool& WasBroken); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.WasArmorBrokenFromDamage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void FindWallExtent(struct FVector StartLocation, struct FVector Normal, struct FVector TraceDirection, float MaxDistance, enum class ETraceTypeQuery Channel, struct UObject* __WorldContext, float& ExtentDistance); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindWallExtent // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void FitObjectOnWall(struct FVector Location, struct FVector Normal, struct FVector2D Extents, enum class ETraceTypeQuery Channel, struct UObject* __WorldContext, struct FVector2D& Min, struct FVector2D& Max); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FitObjectOnWall // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void PrototypeIsInGame(struct UObject* WorldContextObject, struct UObject* __WorldContext, bool& PrototypeIsInGame); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.PrototypeIsInGame // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void SetBeamComponentEndPoints(struct UParticleSystemComponent* ParticleSystemComponent, struct FVector EndLocation, int32_t LastIndex, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.SetBeamComponentEndPoints // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void IsVectorNearlyZero(struct FVector Vector, float Tolerance, struct UObject* __WorldContext, bool& IsNearlyZero); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.IsVectorNearlyZero // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetOrthogonalVector(struct FVector Vector, struct UObject* __WorldContext, struct FVector& OrthogonalVector); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetOrthogonalVector // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void HasLineOfSightToCharacter(struct AActor* Viewer, struct AShooterCharacter* Target, enum class ETraceTypeQuery TraceChannel, struct UObject* __WorldContext, bool& HasVisibility, struct FVector& FocusPoint); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.HasLineOfSightToCharacter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AuthSetUltActiveFromShooterCharacter(struct AShooterCharacter* ShooterCharacter, bool UltActive, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AuthSetUltActiveFromShooterCharacter // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void Auth Set Ult Active from Equippable(struct AAbility_Base_C* AresEquippable, bool UltActive, struct UObject* __WorldContext, bool& Success); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.Auth Set Ult Active from Equippable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void GetComponentFromEquippable(struct AShooterCharacter* InShooterCharacter, enum class EAresItemSlot Slot, struct TSoftClassPtr<UObject> ActorComponentClass, struct UObject* __WorldContext, struct UActorComponent*& OutComponent); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetComponentFromEquippable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetClosestActorToPointInArray(struct TArray<struct AActor*>& InActors, struct FVector TestLocation, struct UObject* __WorldContext, struct AActor*& ClosestActor, float& DistanceSquared); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetClosestActorToPointInArray // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void HasFXC_OfClass(struct AActor* InActor, struct TSoftClassPtr<UObject> InFXC_Class, struct UObject* __WorldContext, bool& HasFXC); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.HasFXC_OfClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void RemoveAllActorBuffsFromAllTargets(struct AActor* InActor, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.RemoveAllActorBuffsFromAllTargets // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void RemoveAllActorBuffs(struct AActor* InActor, struct AShooterCharacter* InTarget, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.RemoveAllActorBuffs // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void ApplyAllActorBuffs(struct AActor* InActor, struct AShooterCharacter* InTarget, struct AActor* DamageCauser, struct AController* InstigatedByController, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.ApplyAllActorBuffs // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void FindBuff_InCharacterBuff_Array(struct AShooterCharacter* InCharacter, struct TArray<struct FShooterCharacterAndGameplayEffectStruct>& inArray, struct UObject* __WorldContext, bool& Success, struct FActiveGameplayEffectHandle& EffectHandle, int32_t& OutIndex); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindBuff_InCharacterBuff_Array // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void FindFXC_InActorFXC_Array(struct AActor* InActor, struct TArray<struct FActorAnd_FXC_Struct>& inArray, struct UObject* __WorldContext, bool& Success, struct FEffectID& EffectID, int32_t& OutIndex); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.FindFXC_InActorFXC_Array // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void GetStateTimeRemainingAsPercent(struct UTimedStateComponent* InTimedStateComponent, struct UObject* __WorldContext, float& PercentTimeRemaining); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.GetStateTimeRemainingAsPercent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3405eb0
	void AttemptToRemoveHUD(struct UUserWidget* InWidget, struct UObject* __WorldContext); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AttemptToRemoveHUD // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void AddHUD_ElementForLocalController(struct UUserWidget* HUD_Class, int32_t ZOrder, struct UObject* __WorldContext, struct UUserWidget*& OutWidget); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.AddHUD_ElementForLocalController // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void LocationIsWithinConeAngle(struct FVector TestLocation, struct FVector ConeOrigin, struct FVector ConeForwardVector, float CosignedConeAngle, struct UObject* __WorldContext, bool& IsWithinConeAngle, float& DotProduct); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.LocationIsWithinConeAngle // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
	void SpawnDirectionalIndicator(struct AShooterCharacter* OwningShooterCharacter, struct FVector IndicateLocation, struct FLinearColor IndicatorColor, float DurationSeconds, struct FVector2D Size, struct UObject* __WorldContext, struct UWidget*& DirectionalIndicator); // Function Ares_Characters_FunctionLibrary.Ares_Characters_FunctionLibrary_C.SpawnDirectionalIndicator // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3405eb0
};

