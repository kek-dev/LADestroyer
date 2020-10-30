#ifndef Destroyer_SRC_DATASTORE_GLOBALS_H_
#define Destroyer_SRC_DATASTORE_GLOBALS_H_

#include "string was spoofed"

namespace globals
{
	void InvalidateCache();
	
	// Game engine
	extern SDK::UEFGameEngine* ef_game_engine;
	void InitEfEngine();

	// World
	extern SDK::UWorld** u_world;
	void InitUWorld();

	// World Type
	enum WorldType: int {
	    kNotIdentified = 0,
	    kOpenWorld = 1,
	    kOcean = 2
	};
    extern WorldType world_type;

	// Local player
	extern SDK::ULocalPlayer* local_player;
	void InitLocalPlayer();
	SDK::AEFPlayerController* GetLocalPlayerController();
	SDK::AEFPawn* GetLocalPlayerAefPawn();

	// Game viewport client
	extern SDK::UEFGameViewportClient* game_viewport_client;
	void InitGameViewportClient();

	// Canvas
	SDK::AHUD* GetHud();
	SDK::UCanvas* GetCanvas();
	void InitCanvas();

	// World objects
	extern std::vector<SDK::AActor*> world_actors;
	extern std::vector<SDK::AEFSkeletalMeshActor*> skeletal_mesh_actors;
	extern std::vector<SDK::AStaticMeshActor*> static_mesh_actors;
	extern std::vector<SDK::AEFMonster*> world_monsters;
    extern std::vector<SDK::AEFPlayer*> world_players;
	extern std::vector<SDK::AEFProjectile*> world_projectiles;
    extern std::vector<SDK::AEFProjectileFixArea*> world_fix_area_projectiles;
    extern std::vector<SDK::AEFProjectileGrenade*> world_grenade_projectiles;
    extern std::vector<SDK::AEFProjectileMissile*> world_missile_projectiles;
    extern std::vector<SDK::AEFProjectileTrace*> world_trace_projectiles;
	void InitWorldActors();

	// Helpers
	bool IsValidActor(SDK::AActor* actor);
	bool IsHiddenActor(SDK::AActor* actor);
    SDK::FBox GetActorBounds(SDK::AActor* actor);
	SDK::FString ConvertToFString(const std::string& string);

	// PE indices
	enum ProcessEventId: int
	{
		kEngineCameraUpdateCamera = 6817,
		kEngineGameViewportClientLayoutPlayers = 19948,
		kEngineGameViewportClientPostRender = 20011,
		kEngineGameViewportClientTick = 20007,
		kEnginePlayerControllerGetFovAngle = 4416,
		kEfGameViewportClientPostRender = 41463,
		kEfGameEfGameViewportClientTick = 41465,
		kEfGameEfgFxHudWrapperPostRender = 41542,
		kEfGameEfPlayerControllerGetPlayerViewPoint = 44505,
		kEfGameEfPlayerControllerPlayerTick = 44490,
		kEfGameEfgFxHudWrapperDestroyed = 41540,
		kEngineSkeletalMeshActorMatSetAnimPosition = 30525,
		kEngineInteractionTick = 14522,
		kEfGameEfPlayerCameraUpdateRotation = 44389,
		kEfGameEfPlayerControllerGetPlayerViewPointQuat = 44509,
		kEnginePlayerControllerPreRender = 8313,
		kEngineCanvasGetDefaultCanvasFont = 13595,
		kEfGameEfPlayerInputPlayerInput = 44544,
		kEngineFractureManagerTick = 18389,
		kEfGameEfGameInfoTick = 41378,
		kEngineInteractionPostRender = 14524,
		kEnginePlayerControllerAdjustHudRenderSize = 9602,
		kEngineMatineeActorCheckPriorityRefresh = 22794,
		kEfGameEfEmitterPoolOnPsInfoFinished = 40987,
		kEngineActorForceNetRelevant = 4486,
		kEngineGameReplicationInfoTimer = 19731,
		kEngineEmitterOnParticleSystemFinished = 16629,
		kEngineGameInfoTimer = 18522,
		kEngineMatineeActorUpdate = 22786,
		kEngineGameViewportClientGameSessionEnded = 19938,
        engineActorGetDebugName = 4316
	};
}

#endif  // Destroyer_SRC_DATASTORE_GLOBALS_H_
