#ifndef Destroyer_SRC_HOOKS_HOOKCOORDINATOR_H_
#define Destroyer_SRC_HOOKS_HOOKCOORDINATOR_H_

#include <functional>

#include "string was spoofed"
#include "string was spoofed"
#include "string was spoofed"

namespace hook_coordinator
{
	// Hooks
	extern VTHook* game_viewport_hook;
	extern VTHook* hud_hook;

	// Original PE
	using TProcessEvent = void(__thiscall*)(class SDK::UObject*, class SDK::UFunction*, void*, void*);
	extern TProcessEvent original_process_event;

	// Root PE Hook
	void HookGameViewportProcessEvent();
	void SwizzleProcessEvent(SDK::UObject* p_object, SDK::UFunction* p_function, void* p_params, void* p_result);

	// Hook HUD
	void HookHud();

	void UnHookAll();

	// Hook callbacks
	void RegisterCallback(globals::ProcessEventId process_event_id, const std::string& callback_id, const std::function<void()>& callback);
}

#endif  // Destroyer_SRC_HOOKS_HOOKCOORDINATOR_H_