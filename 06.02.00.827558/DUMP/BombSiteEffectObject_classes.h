// BlueprintGeneratedClass BombSiteEffectObject.BombSiteEffectObject_C
// Size: 0x42c (Inherited: 0x400)
struct ABombSiteEffectObject_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UBillboardComponent* ; // 0x408(0x08)
	float EffectDelay; // 0x410(0x04)
	struct FName ; // 0x414(0x0c)
	struct FName ; // 0x420(0x0c)

	void (); // Function BombSiteEffectObject.BombSiteEffectObject_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void CleanupEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CleanupEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void CreateEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CreateEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33d1d60
	void ReceiveBeginPlay(); // Function BombSiteEffectObject.BombSiteEffectObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33d1d60
	void (int32_t EntryPoint); // Function BombSiteEffectObject.BombSiteEffectObject_C. // (Final|UbergraphFunction) // @ game+0x33d1d60
};

