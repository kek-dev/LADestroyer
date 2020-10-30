#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

auto last_recorded_time = std::chrono::duration_cast<std::chrono::milliseconds>(
    std::chrono::system_clock::now().time_since_epoch()
).count();

namespace {
    auto callback_id = "string was spoofed";

    void CarryTheCargo() {
        if (globals::world_type != globals::WorldType::kOcean)
            return;

        auto *my_pawn = globals::GetLocalPlayerAefPawn();

        if (my_pawn == nullptr)
            return;

        auto current_time = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()
        ).count();

        for (auto &actor : globals::skeletal_mesh_actors) {
            auto actor_bounds = globals::GetActorBounds(actor);
            auto dist = geometry::Distance(my_pawn->Location, actor->Location);
            auto is_barrel = (actor_bounds.Max.X - actor_bounds.Min.X) <= 61
                && (actor_bounds.Max.Y - actor_bounds.Min.Y) <= 65
                && (actor_bounds.Max.Z - actor_bounds.Min.Z) <= 50;

            if (!is_barrel)
                continue;

            if (dist < 1000.0f && actor->Location.X != my_pawn->Location.X) {
                auto near_to_me_loc = geometry::ModifyLength(actor->Location, my_pawn->Location, dist - 100);
                actor->Location = near_to_me_loc;
            }

            if (dist < 150.0f && (current_time - last_recorded_time >= 100)) {
                last_recorded_time = current_time;

                hotkey_manager::SimulateKeyPress(hotkey_model::GameKey::G);
            }
        }
    }
}

namespace auto_cargo_carrying {
    void Activate() {
        hook_coordinator::RegisterCallback(globals::kEfGameEfgFxHudWrapperPostRender,
                                           callback_id,
                                           CarryTheCargo);
    }
}