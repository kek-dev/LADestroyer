#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

namespace {
    void RegisterSwiftMoveKey()
    {
        const auto on_swift_move_key_hold = [&]()
        {
            swift_move::ApplySwiftMove();
        };

        hotkey_model::Hotkey hotkey;
        hotkey.key = hotkey_model::Key::kMouse4;
        hotkey.event_type = hotkey_model::EventType::kHold;
        hotkey.event_callback = on_swift_move_key_hold;

        hotkey_manager::RegisterKey(hotkey);
    }
}

namespace swift_move {
	void ApplySwiftMove()
	{
		auto* local_player_pawn = globals::GetLocalPlayerAefPawn();

		if (local_player_pawn == nullptr)
			return;

		const auto desired_speed = pvp_mode::toggle ? 370.0f : 900.0f;

		local_player_pawn->GroundSpeed = desired_speed;

		auto* vehicle = local_player_pawn->DrivenEFVehicle;

		if (vehicle)
			vehicle->GroundSpeed = desired_speed;
	}

	void Activate()
	{
		RegisterSwiftMoveKey();
	}
}
