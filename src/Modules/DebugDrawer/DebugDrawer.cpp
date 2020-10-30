#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

namespace debug_drawer
{
	// Private context
	namespace 
	{
		auto toggle = false;
		auto hook_callback_id = "string was spoofed";

		void RegisterToggleHotkey()
		{
			const auto on_toggle_hotkey_tap = [&]()
			{
				ToggleDebugDraws();
			};

			hotkey_model::Hotkey hotkey;
			hotkey.key = hotkey_model::Key::kNum9;
			hotkey.event_type = hotkey_model::EventType::kTap;
			hotkey.event_callback = on_toggle_hotkey_tap;

			hotkey_manager::RegisterKey(hotkey);
		}

		void DrawDebug()
		{
			hud_debug_drawer::EnableHudDebugFlags(toggle);
			debug_info_drawer::DrawDebugBoxes();
		}
	}

	// Public context

	void ToggleDebugDraws()
	{
		toggle = !toggle;
		debug_info_drawer::SetEnabled(toggle);
	}

	void Activate()
	{
		hook_coordinator::RegisterCallback(globals::kEfGameEfgFxHudWrapperPostRender, hook_callback_id, DrawDebug);
		RegisterToggleHotkey();
	}
}
