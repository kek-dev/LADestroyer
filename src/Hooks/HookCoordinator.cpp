#include "string was spoofed"

#include <functional>
#include <iostream>
#include <map>

// Game Viewport
namespace
{
	std::map<std::string, std::function<void()>> layout_players_callbacks;

	void OnGameViewportLayoutPlayers()
	{
		globals::InitWorldActors();
		hook_coordinator::HookHud();

		for (auto& callback : layout_players_callbacks)
		{
			callback.second();
		}
	}

	void OnGameSessionEnded()
	{
		globals::InvalidateCache();
	}
}

// HUD
namespace
{
	std::map<std::string, std::function<void()>> hud_post_render_callbacks;

	void OnHudPostRender()
	{
		globals::InitCanvas();

		for (auto& callback : hud_post_render_callbacks)
		{
			callback.second();
		}
	}

	void OnEfGameEfgDxHudWrapperDestroy()
	{
		hook_coordinator::hud_hook->UnHook();
		hook_coordinator::hud_hook = nullptr;
		globals::InvalidateCache();
	}
}

namespace hook_coordinator
{
	VTHook* game_viewport_hook = nullptr;
	VTHook* hud_hook = nullptr;
	TProcessEvent original_process_event = nullptr;

	// Main hook
	void HookGameViewportProcessEvent()
	{
		if (globals::game_viewport_client == nullptr)
			return;

		game_viewport_hook = new VTHook(reinterpret_cast<PDWORD64*>(globals::game_viewport_client));
		original_process_event = reinterpret_cast<TProcessEvent>(game_viewport_hook->dwHookMethod(
			reinterpret_cast<DWORD64>(&SwizzleProcessEvent), 67));
	}


	void HookHud()
	{
		if (hud_hook != nullptr)
			return;

		auto* player_controller = globals::GetLocalPlayerController();

		if (player_controller == nullptr)
			return;

		auto* my_hud = player_controller->myHUD;

		if (my_hud == nullptr)
			return;

		hud_hook = new VTHook((PDWORD64*)player_controller->myHUD);
		original_process_event = (TProcessEvent)hud_hook->dwHookMethod((DWORD64)&SwizzleProcessEvent, 67);
	}

	// Swizzling
	void SwizzleProcessEvent(SDK::UObject* p_object, SDK::UFunction* p_function, void* p_params, void* p_result)
	{
		if (p_object)
		{
			const auto function_id = p_function->ObjectInternalInteger;

			if (function_id == globals::ProcessEventId::kEngineGameViewportClientLayoutPlayers)
				OnGameViewportLayoutPlayers();

			if (function_id == globals::ProcessEventId::kEngineGameViewportClientGameSessionEnded)
				OnGameSessionEnded();

			if (function_id == globals::ProcessEventId::kEfGameEfgFxHudWrapperPostRender)
				OnHudPostRender();

			if (function_id == globals::ProcessEventId::kEfGameEfgFxHudWrapperDestroyed)
				OnEfGameEfgDxHudWrapperDestroy();

			if (function_id != globals::ProcessEventId::kEngineGameViewportClientTick
				&& function_id != globals::ProcessEventId::kEfGameEfGameViewportClientTick
				&& function_id != globals::ProcessEventId::kEfGameViewportClientPostRender
				&& function_id != globals::ProcessEventId::kEfGameEfgFxHudWrapperPostRender
				&& function_id != globals::ProcessEventId::kEngineGameViewportClientLayoutPlayers
				&& function_id != globals::ProcessEventId::kEfGameEfPlayerControllerGetPlayerViewPoint
				&& function_id != globals::ProcessEventId::kEfGameEfPlayerControllerGetPlayerViewPointQuat
				&& function_id != globals::ProcessEventId::kEfGameEfPlayerControllerPlayerTick
				&& function_id != globals::ProcessEventId::kEnginePlayerControllerGetFovAngle
				&& function_id != globals::ProcessEventId::kEnginePlayerControllerPreRender
				&& function_id != globals::ProcessEventId::kEnginePlayerControllerAdjustHudRenderSize
				&& function_id != globals::ProcessEventId::engineActorGetDebugName)
			{
				std::cout << function_id << "string was spoofed" << p_function->GetFullName() << std::endl;
			}
		}

		original_process_event(p_object, p_function, p_params, p_result);
	}

	void UnHookAll()
	{
		if (hud_hook)
		{
			hud_hook->UnHook();
			hud_hook = nullptr;
		}

		if (game_viewport_hook)
		{
			game_viewport_hook->UnHook();
			game_viewport_hook = nullptr;
		}
	}

	// Hook callbacks
    void RegisterCallback(const globals::ProcessEventId process_event_id,
                          const std::string &callback_id,
                          const std::function<void()> &callback)
	{
		switch (process_event_id)
		{
		case globals::ProcessEventId::kEngineGameViewportClientLayoutPlayers:
			layout_players_callbacks[callback_id] = callback;
			break;
		case globals::ProcessEventId::kEfGameEfgFxHudWrapperPostRender:
			hud_post_render_callbacks[callback_id] = callback;
			break;
		default:
			break;
		}
	}
}
