// Class ActorLayerUtilities.LayersBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULayersBlueprintLibrary : UBlueprintFunctionLibrary {

	void RemoveActorFromLayer(struct AActor* InActor, struct FActorLayer& Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x229e360
	struct TArray<struct AActor*> GetActors(struct UObject* WorldContextObject, struct FActorLayer& ActorLayer); // Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x229e230
	void AddActorToLayer(struct AActor* InActor, struct FActorLayer& Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x229e160
};

