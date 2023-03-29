// BlueprintGeneratedClass BombCinematicsManagerComponent.BombCinematicsManagerComponent_C
// Size: 0x1a4 (Inherited: 0x180)
struct UBombCinematicsManagerComponent_C : UCinematicsManagerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	float ScoreFieldOfViewDegreesMin; // 0x188(0x04)
	float ScoreDistanceFromCameraMin; // 0x18c(0x04)
	float ScoreFieldOfViewWeight; // 0x190(0x04)
	float ScoreDistanceWeight; // 0x194(0x04)
	float FOVDotProductMax; // 0x198(0x04)
	float ScoreDistanceFromCameraMax; // 0x19c(0x04)
	float FOVDotProductMin; // 0x1a0(0x04)

	float ScoreCamera(struct FCinematicCameraScoreData& CameraToScore); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ScoreCamera // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x337bc90
	void ReceiveBeginPlay(); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x337bc90
	void ExecuteUbergraph_BombCinematicsManagerComponent(int32_t EntryPoint); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ExecuteUbergraph_BombCinematicsManagerComponent // (Final|UbergraphFunction) // @ game+0x337bc90
};

