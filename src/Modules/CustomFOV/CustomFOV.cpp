#include "string was spoofed"

#include <iostream>

#include "string was spoofed"
#include "string was spoofed"

namespace custom_fov
{
	// Private context
	namespace 
	{
		auto hook_callback_id = "string was spoofed";
		auto desired_fov = 65.0f;
		auto min_fov = 55.0f;
		auto max_fov = 115.0f;

		void ApplyCustomFov()
		{
			auto* player_controller = globals::GetLocalPlayerController();

			if (player_controller == nullptr)
				return;

			auto* camera = player_controller->PlayerCamera;

			if (camera == nullptr)
				return;

			if (camera->GetFOVAngle() == desired_fov)
				return;

			camera->SetFOV(desired_fov);
		}

		void RegisterIncrementHotkey()
		{
			const auto on_decrement_key_tap = [&]()
			{
				IncrementFov();
			};

			hotkey_model::Hotkey hotkey;
			hotkey.key = hotkey_model::Key::kNumPlus;
			hotkey.event_type = hotkey_model::EventType::kTap;
			hotkey.event_callback = on_decrement_key_tap;

			hotkey_manager::RegisterKey(hotkey);
		}

		void RegisterDecrementHotkey()
		{
			const auto on_decrement_key_tap = [&]()
			{
				DecrementFov();
			};

			hotkey_model::Hotkey hotkey;
			hotkey.key = hotkey_model::Key::kNumMinus;
			hotkey.event_type = hotkey_model::EventType::kTap;
			hotkey.event_callback = on_decrement_key_tap;

			hotkey_manager::RegisterKey(hotkey);
		}

		void RegisterControlHotkeys()
		{
			RegisterIncrementHotkey();
			RegisterDecrementHotkey();
		}
	}

	// Public context
	
	void IncrementFov()
	{
		desired_fov = min(desired_fov + 10.0f, max_fov);
	}

	void DecrementFov()
	{
		desired_fov = max(min_fov, desired_fov - 10.0f);
	}

	void Activate()
	{
		hook_coordinator::RegisterCallback(globals::kEngineGameViewportClientLayoutPlayers, hook_callback_id, ApplyCustomFov);
		RegisterControlHotkeys();
	}
}
