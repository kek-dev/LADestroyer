#include "string was spoofed"

#include <thread>

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

namespace hook_instigator
{
	// Life cycle
	
	void OnAttach(const HMODULE h_module)
	{
		// Console
		console_manager::InitConsole();

		// SDK
		InitializeObjectsAndNames();
		HookProcessEvent();

		// Hotkeys init
		RegisterDetachHotkey(h_module);

		// Feature modules
		module_coordinator::ActivateModules();

		// Start key observing
		hotkey_manager::StartObserving();
	}

	void OnDetach(const HMODULE h_module)
	{
		hook_coordinator::UnHookAll();
		console_manager::TerminateConsole();
		FreeLibraryAndExitThread(h_module, EXIT_SUCCESS);
	}

	void RegisterDetachHotkey(HMODULE h_module)
	{
		const auto on_detach_key_tap = [&]()
		{
			OnDetach(h_module);
		};

		hotkey_model::Hotkey hotkey;
		hotkey.key = hotkey_model::Key::kEnd;
		hotkey.event_type = hotkey_model::EventType::kTap;
		hotkey.event_callback = on_detach_key_tap;

		hotkey_manager::RegisterKey(hotkey);
	}

	// SDK

	void InitializeObjectsAndNames()
	{
		while (!SDK::ObjectInitialize())
			std::this_thread::sleep_for(std::chrono::milliseconds(50));

		while (!SDK::NamesInitialize())
			std::this_thread::sleep_for(std::chrono::milliseconds(50));

		globals::InitEfEngine();
		globals::InitUWorld();
		globals::InitGameViewportClient();
		globals::InitLocalPlayer();
	}

	void HookProcessEvent()
	{
		hook_coordinator::HookGameViewportProcessEvent();
	}
}
