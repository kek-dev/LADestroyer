#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

// Private context
namespace 
{
	auto callback_id = "string was spoofed";
	auto toggle = false;

	void ModifyAnimationSpeed()
	{
		auto my_pawn = globals::GetLocalPlayerAefPawn();

		if (my_pawn == nullptr || pvp_mode::toggle)
            return;

        my_pawn->CustomTimeDilation = toggle ? 2.0f : 1.0f;
	}
	
	void RegisterAnimationSpeedKey()
	{
		const auto on_key_tap = [&]()
		{
			animation_speed_modifier::ToggleAnimationSpeed();
		};

		hotkey_model::Hotkey hotkey;
		hotkey.key = hotkey_model::Key::kNum8;
		hotkey.event_type = hotkey_model::EventType::kTap;
		hotkey.event_callback = on_key_tap;

		hotkey_manager::RegisterKey(hotkey);
	}
}

namespace animation_speed_modifier
{
	void Activate()
	{
		RegisterAnimationSpeedKey();
        hook_coordinator::RegisterCallback(globals::kEngineGameViewportClientLayoutPlayers,
                                           callback_id,
                                           ModifyAnimationSpeed);
	}

	void ToggleAnimationSpeed()
	{
		toggle = !toggle;
	}
}
