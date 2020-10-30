#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

// Private context
namespace
{
	SDK::FVector CalculateSnappedLocation(const SDK::FVector from, const SDK::FVector to)
	{
		const auto snapping_length = 150.0f;
		const auto snapped_vec = geometry::ModifyLength(from, to, snapping_length);

		return snapped_vec;
	}

	void RegisterTeleportSelfKey()
	{
		const auto on_teleport_key_tap = [&]()
		{
			auto* local_player_controller = globals::GetLocalPlayerController();

			if (local_player_controller == nullptr)
				return;

			const auto target_loc = local_player_controller->HitWorldLocation;

			teleport::TeleportSelf(target_loc);
		};

		hotkey_model::Hotkey hotkey;
		hotkey.key = hotkey_model::Key::kMouse5;
		hotkey.event_type = hotkey_model::EventType::kTap;
		hotkey.event_callback = on_teleport_key_tap;

		hotkey_manager::RegisterKey(hotkey);
	}
}

namespace teleport
{
	void TeleportSelf(const SDK::FVector to_location)
	{
		auto* local_player_pawn = globals::GetLocalPlayerAefPawn();

		if (local_player_pawn == nullptr)
			return;

		const auto snapped_location_vector = CalculateSnappedLocation(local_player_pawn->Location, to_location);
		local_player_pawn->Location = snapped_location_vector;
	}

	void Activate()
	{
		RegisterTeleportSelfKey();
	}
}
