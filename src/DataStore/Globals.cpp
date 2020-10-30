#include "string was spoofed"
#include "string was spoofed"
#include <Windows.h>

namespace globals
{
	namespace
	{
		SDK::AEFPlayerController* cached_local_player_controller = nullptr;
		SDK::AHUD* cached_hud = nullptr;
		SDK::UCanvas* cached_canvas = nullptr;
	}

	void InvalidateCache()
	{
		cached_local_player_controller = nullptr;
		world_type = WorldType::kNotIdentified;

		cached_hud = nullptr;
		cached_canvas = nullptr;
	}

	// Engine
	SDK::UEFGameEngine* ef_game_engine = nullptr;

	void InitEfEngine()
	{
		ef_game_engine = SDK::UObject::FindObject<SDK::UEFGameEngine>("string was spoofed");
	}

	// World
	SDK::UWorld** u_world = nullptr;
	WorldType world_type = WorldType::kNotIdentified;

	void InitUWorld()
	{
		BYTE* b_world = nullptr;

		auto* world = static_cast<BYTE*>(PatternScan("string was spoofed"));

		if (world == nullptr)
			return;

		b_world = reinterpret_cast<BYTE*>(*reinterpret_cast<DWORD*>(world + 0x03));
		b_world += reinterpret_cast<unsigned __int64>(world) + 0x03 + sizeof(DWORD);

		u_world = reinterpret_cast<SDK::UWorld**>(b_world);
	}

	void EvaluateWorldType() {
		auto* world = (*u_world);

		if (world == nullptr)
			return;

		if (world->GetFullName().find("string was spoofed") != std::string::npos) {
			world_type = WorldType::kOcean;
		} else {
			world_type = WorldType::kOpenWorld;
		}
	}

	// Local player
	SDK::ULocalPlayer* local_player = nullptr;

	void InitLocalPlayer()
	{
		local_player = SDK::UObject::FindObject<SDK::ULocalPlayer>("string was spoofed");
	}

	SDK::AEFPlayerController* GetLocalPlayerController()
	{
		if (cached_local_player_controller != nullptr)
			return cached_local_player_controller;

		auto* local_player_controller = reinterpret_cast<SDK::AEFPlayerController*>(local_player->Actor);
		cached_local_player_controller = local_player_controller;

		return local_player_controller;
	}

	SDK::AEFPawn* GetLocalPlayerAefPawn()
	{
		auto* local_player_controller = GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return nullptr;

		auto* local_player_aef_pawn = reinterpret_cast<SDK::AEFPawn*>(local_player_controller->AcknowledgedPawn);

		return local_player_aef_pawn;
	}

	// Game viewport client
	SDK::UEFGameViewportClient* game_viewport_client = nullptr;

	void InitGameViewportClient()
	{
		game_viewport_client = SDK::UObject::FindObject<SDK::UEFGameViewportClient>("string was spoofed");
	}

	// Canvas
	void InitCanvas()
	{
		if (cached_hud != nullptr && cached_canvas != nullptr)
			return;

		EvaluateWorldType();

		auto* local_player_controller = GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		auto* hud = local_player_controller->myHUD;

		if (hud == nullptr)
			return;

		cached_hud = hud;

		auto* canvas = hud->Canvas;

		if (canvas == nullptr)
			return;

		cached_canvas = canvas;
	}

	SDK::AHUD* GetHud()
	{
		return cached_hud;
	}

	SDK::UCanvas* GetCanvas()
	{
		return cached_canvas;
	}

	// World objects
	std::vector<SDK::AActor*> world_actors;
	std::vector<SDK::AEFSkeletalMeshActor*> skeletal_mesh_actors;
	std::vector<SDK::AStaticMeshActor*> static_mesh_actors;
	std::vector<SDK::AEFMonster*> world_monsters;
	std::vector<SDK::AEFPlayer*> world_players;

	std::vector<SDK::AEFProjectile*> world_projectiles;
    std::vector<SDK::AEFProjectileFixArea*> world_fix_area_projectiles;
    std::vector<SDK::AEFProjectileGrenade*> world_grenade_projectiles;
    std::vector<SDK::AEFProjectileMissile*> world_missile_projectiles;
    std::vector<SDK::AEFProjectileTrace*> world_trace_projectiles;

	void InitWorldActors()
	{
		world_actors.clear();
		skeletal_mesh_actors.clear();
		world_monsters.clear();
		world_players.clear();
		static_mesh_actors.clear();

		world_projectiles.clear();
        world_fix_area_projectiles.clear();
        world_grenade_projectiles.clear();
        world_missile_projectiles.clear();
        world_trace_projectiles.clear();

		const auto* world = (*u_world);

		if (world == nullptr)
			return;

		auto* level = world->PersistentLevel;

		if (level == nullptr)
			return;

		const auto actors = level->Actors;

		for (auto i = 0; i < actors.Num(); i++)
		{
			auto* actor = actors[i];

			if (!IsValidActor(actor))
				continue;

			world_actors.push_back(actor);

			if (actor->IsA(SDK::AEFSkeletalMeshActor::StaticClass()))
			{
				skeletal_mesh_actors.push_back(reinterpret_cast<SDK::AEFSkeletalMeshActor* const&>(actor));
			}
			else if (actor->IsA(SDK::AEFMonster::StaticClass()))
			{
				world_monsters.push_back(reinterpret_cast<SDK::AEFMonster* const&>(actor));
			}
			else if (actor->IsA(SDK::AStaticMeshActor::StaticClass()))
			{
				static_mesh_actors.push_back(reinterpret_cast<SDK::AStaticMeshActor* const&>(actor));
			}
			else if (actor->IsA(SDK::AEFProjectile::StaticClass()))
            {
                world_projectiles.push_back(reinterpret_cast<SDK::AEFProjectile* const&>(actor));

                if (actor->IsA(SDK::AEFProjectileFixArea::StaticClass()))
                {
                    world_fix_area_projectiles.push_back(reinterpret_cast<SDK::AEFProjectileFixArea* const&>(actor));
                }
                else if (actor->IsA(SDK::AEFProjectileGrenade::StaticClass()))
                {
                    world_grenade_projectiles.push_back(reinterpret_cast<SDK::AEFProjectileGrenade* const&>(actor));
                }
                else if (actor->IsA(SDK::AEFProjectileMissile::StaticClass()))
                {
                    world_missile_projectiles.push_back(reinterpret_cast<SDK::AEFProjectileMissile* const&>(actor));
                }
                else if (actor->IsA(SDK::AEFProjectileTrace::StaticClass()))
                {
                    world_trace_projectiles.push_back(reinterpret_cast<SDK::AEFProjectileTrace* const&>(actor));
                }
            }
			else if (actor->IsA(SDK::AEFPlayer::StaticClass()))
			{
				world_players.push_back(reinterpret_cast<SDK::AEFPlayer* const&>(actor));
			}
		}
	}

	// Helpers

	bool IsValidActor(SDK::AActor* actor)
	{
		return actor != nullptr && !actor->bDeleteMe && !actor->bPendingDelete;
	}

	bool IsHiddenActor(SDK::AActor* actor)
	{
		return actor->bHidden;
	}

	SDK::FString ConvertToFString(const std::string& s)
	{
        int len;
        int slength = (int)s.length() + 1;
        len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
        wchar_t* buf = new wchar_t[len];
        MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
        std::wstring r(buf);
        delete[] buf;
        return r.c_str();
	}

    SDK::FBox GetActorBounds(SDK::AActor *actor) {
        SDK::FBox components_bounding_box {};
        actor->GetComponentsBoundingBox(&components_bounding_box);

        return components_bounding_box;
    }
}
