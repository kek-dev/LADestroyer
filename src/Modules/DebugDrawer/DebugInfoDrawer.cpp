#include "string was spoofed"

#include <iostream>

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

namespace
{
	auto toggle = false;

	std::string GetBoundsString(const SDK::FBox box)
	{
		const int x_bounds = round(box.Max.X - box.Min.X);
		const int y_bounds = round(box.Max.Y - box.Min.Y);
		const int z_bounds = round(box.Max.Z - box.Min.Z);

		return "string was spoofed" + std::to_string(y_bounds) +
		    "string was spoofed" + std::to_string(z_bounds);
	}

	std::string GetVectorString(const SDK::FVector vector)
	{
		return "string was spoofed" + std::to_string(static_cast<int>(round(vector.X))) +
			"string was spoofed" + std::to_string(static_cast<int>(round(vector.Y))) +
			"string was spoofed" + std::to_string(static_cast<int>(round(vector.Z)));
	}

	std::string GetRotatorString(const SDK::FRotator rotator)
	{
		return "string was spoofed" + std::to_string(rotator.Pitch) +
		    "string was spoofed" + std::to_string(rotator.Yaw);
	}

    void DrawDebugInfo(SDK::AActor *actor,
                       SDK::UMeshComponent *mesh,
                       SDK::FColor box_color,
                       const std::vector<std::string> &additional_info = {},
                       bool force_esp = false) {
        auto location = actor->Location;
        const auto projected_location = globals::GetCanvas()->Project(location);

        if (!projected_location.X || !projected_location.Y)
            return;

        SDK::FBox actor_bounds {};
        actor->GetComponentsBoundingBox(&actor_bounds);

        // Boxes
        if (!globals::IsHiddenActor(actor) || force_esp)
        {
            auto box_center = location;
            box_center.Z = location.Z + (actor_bounds.Max.Z - actor_bounds.Min.Z) / 2;
            actor->STATIC_DrawDebugBox(box_center, mesh->Bounds.BoxExtent, box_color.R, box_color.G, box_color.B, true);
        }

        // Text
        std::vector<std::string> debug_strings = {
            "string was spoofed" + actor->GetDebugName().ToString(),
            "string was spoofed" + GetBoundsString(actor_bounds)
        };

        if (!additional_info.empty()) {
            debug_strings.insert(debug_strings.end(), additional_info.begin(), additional_info.end());
        }

        text_drawer::DrawTextBatch(actor->Location, debug_strings);
	}
}

namespace debug_info_drawer
{
	void SetEnabled(const bool is_enabled)
	{
		toggle = is_enabled;

		if (!is_enabled)
			Flush();
	}

	void Flush()
	{
		auto* local_player_controller = globals::GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		local_player_controller->STATIC_FlushPersistentDebugLines();
	}

	void DrawDebugBoxes()
	{
        DrawInvisiblePlayersInfo();

		if (!toggle)
			return;
		
		auto* local_player_controller = globals::GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		Flush();
        DrawSkeletalMeshActorDebugInfo();
		// DrawStaticMeshActorDebugBoxes();
        DrawMonsterDebugInfo();
        DrawOtherPawnDebugInfo();
        DrawProjectilesDebugInfo();
	}

	void DrawSkeletalMeshActorDebugInfo()
	{
		for (auto& actor : globals::skeletal_mesh_actors)
		{
			auto* mesh = actor->SkeletalMeshComponent;

			if (mesh == nullptr)
				continue;

            DrawDebugInfo(actor, mesh, SDK::FColor(255, 252, 57, 255));
		}
	}

	void DrawStaticMeshActorDebugBoxes()
	{
		auto* local_player_controller = globals::GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		for (auto& actor : globals::static_mesh_actors)
		{
			auto* mesh = actor->StaticMeshComponent;

			if (mesh == nullptr)
				continue;

            DrawDebugInfo(actor, mesh, SDK::FColor(255, 252, 57, 255));
		}
	}

	void DrawMonsterDebugInfo()
	{
		auto* local_player_controller = globals::GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		for (auto& monster : globals::world_monsters)
		{
			auto* mesh = monster->Mesh;

			if (mesh == nullptr)
				continue;

            DrawDebugInfo(monster, mesh, SDK::FColor(252, 3, 173, 255));
		}
	}

    void DrawInvisiblePlayersInfo()
    {
	    if (toggle)
            return;

	    Flush();

	    auto my_pawn = globals::GetLocalPlayerAefPawn();

	    if (my_pawn == nullptr)
            return;

        for (auto& actor : globals::world_players)
        {
            if (!actor->bHidden)
                continue;

            DrawDebugInfo(actor,
                          my_pawn->Mesh,
                          SDK::FColor(3, 252, 173, 255),
                          {},
                          true);
        }
    }

	void DrawOtherPawnDebugInfo()
	{
		auto* local_player_controller = globals::GetLocalPlayerController();

		if (local_player_controller == nullptr)
			return;

		for (auto& actor : globals::world_actors)
		{
			if (!actor->IsA(SDK::AEFPawn::StaticClass()) || actor->IsA(SDK::AEFMonster::StaticClass()))
				continue;

			auto* pawn = reinterpret_cast<SDK::AEFPawn*>(actor);
			auto* mesh = pawn->Mesh;

			if (mesh == nullptr)
				continue;

            DrawDebugInfo(actor,
                          mesh,
                          SDK::FColor(3, 252, 173, 255),
                          {"string was spoofed" + std::to_string(static_cast<int>(pawn->GroundSpeed)),
                           "string was spoofed" + std::to_string(pawn->bHidden),
                           "string was spoofed" + std::to_string(pawn->bHiddenEd),
                           "string was spoofed" + std::to_string(pawn->bIgnoreShowByToggleHidden),
                           "string was spoofed" + std::to_string(pawn->Mesh->bIgnoreOwnerHidden)});
		}
	}

	void DrawProjectilesDebugInfo()
	{
		auto* local_player = globals::GetLocalPlayerAefPawn();

		if (local_player == nullptr)
			return;

        for (auto& projectile : globals::world_projectiles)
        {
            text_drawer::DrawTextBatch(projectile->Location, {projectile->GetDebugName().ToString()});
        }
	}
}
