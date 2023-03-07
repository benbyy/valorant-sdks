// BlueprintGeneratedClass AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UAresBlueprintFunctionLibrary_C : UBlueprintFunctionLibrary {

	void IsClassDefaultObject(struct UObject* Object, struct UObject* __WorldContext, bool& Is Default Object); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.IsClassDefaultObject // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void IsUsingLimitedLoading(struct UObject* __WorldContext, bool& bLimitedLoading); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.IsUsingLimitedLoading // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void IsSoftReferenceLoaded(struct TSoftObjectPtr<UObject> Soft Ref, struct UObject* __WorldContext, bool& bLoaded); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.IsSoftReferenceLoaded // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void GetSoftObjectRefsFromEquippableParticles(struct TArray<struct FEquippableParticleEffect>& Equippable Particles, struct UObject* __WorldContext, struct TArray<struct TSoftObjectPtr<UObject>>& Soft Object Refs); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetSoftObjectRefsFromEquippableParticles // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetWeaponStatFeatureDescription(enum class EWeaponStatsFeature Feature, struct UObject* __WorldContext, struct TArray<struct FText>& Texts); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetWeaponStatFeatureDescription // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void GetWeaponStatFeatureText(enum class EWeaponStatsFeature Feature, struct UObject* __WorldContext, struct FText& Text); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetWeaponStatFeatureText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetWeaponStatAltFireText(enum class EWeaponAltFireDisplayType AltFireType, struct UObject* __WorldContext, struct FText& Text); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetWeaponStatAltFireText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetWeaponStatWallPenText(enum class EWallPenetrationDisplayType WallPenType, struct UObject* __WorldContext, struct FText& Text); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetWeaponStatWallPenText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetWeaponStatFireTypeText(enum class EWeaponFireModeDisplayType FireType, struct UObject* __WorldContext, struct FText& Text); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetWeaponStatFireTypeText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetLabelForNonverbalEnum(enum class NonVerbalCommTypesEnum CommEnum, struct UObject* __WorldContext, struct FText& OptionText); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetLabelForNonverbalEnum // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetChatTextForNonverbalEnum(enum class NonVerbalCommTypesEnum NonverbalEnum, struct UObject* __WorldContext, struct FText& ChatText); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetChatTextForNonverbalEnum // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetCalloutSuperRegionName(enum class ECalloutSuperRegion SuperRegion, struct UObject* __WorldContext, struct FText& SuperRegionName); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetCalloutSuperRegionName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void MultiLineTraceByChannelAllHits(struct FVector Start, struct FVector End, enum class ETraceTypeQuery TraceChannel, struct TArray<struct AActor*>& ActorsToIgnore, bool TraceComplex, struct UObject* __WorldContext, bool& NewParam, struct TArray<struct FHitResult>& OutHit); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.MultiLineTraceByChannelAllHits // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetCharacterTaggingSlowPercent(struct AActor* Actor, struct UObject* __WorldContext, float& SlowPercentage); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetCharacterTaggingSlowPercent // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void GetPointFromSphericalCoordinates(struct FVector OriginLocation, struct FVector OriginAim, float Distance, float YawDegrees, float PitchDegrees, struct UObject* __WorldContext, struct FVector& Location); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetPointFromSphericalCoordinates // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetSphericalCoordinatesFromCamera(struct FVector Location, struct UObject* __WorldContext, float& Distance, float& YawDegrees, float& PitchDegrees); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetSphericalCoordinatesFromCamera // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void IsCharacterFacingPointUnobstructed(struct AShooterCharacter* ShooterCharacter, struct TArray<struct AActor*>& ActorsToIgnore, struct FVector PointToTest, struct UObject* __WorldContext, bool& CanSeePoint); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.IsCharacterFacingPointUnobstructed // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void PrintRandom(struct UObject* __WorldContext); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.PrintRandom // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void identifyAllies(struct AShooterCharacter* selfRef, struct UObject* __WorldContext); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.identifyAllies // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void FindTeleportPosition(struct FVector TryPosition, struct AShooterCharacter* Character, struct FRotator TryRotation, struct UObject* __WorldContext, struct FVector& OutPosition, bool& FoundPosition, struct FName& FailureReason); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.FindTeleportPosition // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void FindMovetoPosition(struct FVector Origin, struct FVector Direction, float Distance, struct AShooterCharacter* MovingCharacter, float NudgeBackAmount, struct UObject* __WorldContext, struct FVector& EndPos); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.FindMovetoPosition // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void AuthAddForceToAresActor(struct AActor* Actor, struct FVector Force, struct UObject* __WorldContext, bool& AddedForce); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.AuthAddForceToAresActor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void ResetMaterials(struct TArray<struct UMaterialInterface*>& OldMaterials, struct USkeletalMeshComponent* SkeletalMeshComponent, struct UObject* __WorldContext); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.ResetMaterials // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void SwapMaterials(struct USkeletalMeshComponent* SkeletalMesh, struct UMaterialInstance* OverrideMaterial, struct UObject* __WorldContext, struct TArray<struct UMaterialInterface*>& OldMaterials); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.SwapMaterials // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void AresActorIsAliveAndValid(struct AActor* AresActor, struct UObject* __WorldContext, bool& IsAliveAndValid); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.AresActorIsAliveAndValid // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void ShooterCharacterIsValidAndAlive(struct AShooterCharacter* ShooterCharacter, struct UObject* __WorldContext, bool& IsAliveAndValid); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.ShooterCharacterIsValidAndAlive // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void IsLocationWithinYawAngle(struct FVector PosOfTarget, struct FVector PosOfOrigin, float YawAngle, struct FVector OriginFacing, struct UObject* __WorldContext, bool& IsWithinYawAngle); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.IsLocationWithinYawAngle // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
	void ReverseArray(int32_t& NewParam, struct UObject* __WorldContext); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.ReverseArray // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void GetVectorArrayFromTrackedPawnStates(struct TArray<struct FTrackedPawnState>& TrackedPawnStates, bool Reverse, struct UObject* __WorldContext, struct TArray<struct FVector>& VectorArray); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.GetVectorArrayFromTrackedPawnStates // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void FollowPath(struct TArray<struct FVector>& PathLocs, struct FVector StartPos, float Distance, int32_t StartIndex, struct UObject* __WorldContext, struct FVector& Position, int32_t& LastReachedIndex); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.FollowPath // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void FindPositionThroughWall(float TargetDistance, float TargetTolerance, struct FVector StartPos, struct FVector AimVector, struct AActor* Actor, struct TArray<struct AActor*>& IgnoreActors, float MaxVerticalDelta, float MaxDistanceFromWall, float StartDistanceFromExit, struct UObject* __WorldContext, bool& ValidPositionFound, struct FVector& ValidPosition, enum class JumpThroughWallsEndPosResult& Result); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.FindPositionThroughWall // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34b46f0
	void TruncateFloatByInteger(float Value, int32_t TruncateTo, struct UObject* __WorldContext, int32_t& RoundedValue); // Function AresBlueprintFunctionLibrary.AresBlueprintFunctionLibrary_C.TruncateFloatByInteger // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x34b46f0
};

