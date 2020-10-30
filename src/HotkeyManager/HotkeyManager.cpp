#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"
#include <chrono>
#include <functional>
#include <map>

namespace
{
    void HandlePvpMode() {
        // if (pvp_mode::toggle)
        //     swift_move::ApplySwiftMove();
    }
}

// Private context
namespace
{
    std::map <hotkey_model::Key, hotkey_model::Hotkey> hotkeys;

    void OnPress(const hotkey_model::Hotkey hotkey)
    {
        const auto callback = [&]()
        {
            if (hotkeys.count(hotkey.key) == 1)
                hotkeys[hotkey.key].current_state = hotkey_model::KeyState::kPressed;

            if (hotkey.event_callback == nullptr)
                return;

            hotkey.event_callback();
        };

        switch (hotkey.event_type)
        {
            case hotkey_model::EventType::kTap:
                if (hotkey.current_state == hotkey_model::KeyState::kReleased)
                    callback();
                break;
            case hotkey_model::EventType::kHold:
                callback();
                break;
        }
    }

    void OnRelease(const hotkey_model::Hotkey hotkey)
    {
        const auto callback = [&]()
        {
            if (hotkeys.count(hotkey.key) == 1)
                hotkeys[hotkey.key].current_state = hotkey_model::KeyState::kReleased;

            if (hotkey.on_release == nullptr)
                return;

            hotkey.on_release();
        };

        callback();
    }

    void EvaluateHotkey(const hotkey_model::Hotkey& hotkey)
    {
        HandlePvpMode();

        if (GetAsyncKeyState(static_cast<int>(hotkey.key)) & 0x8000)
        {
            OnPress(hotkey);
        }

        if (GetAsyncKeyState(static_cast<int>(hotkey.key)) == 0
            && hotkeys[hotkey.key].current_state == hotkey_model::KeyState::kPressed)
        {
            OnRelease(hotkey);
        }
    }

    auto InputKey(const SDK::FName& key, const SDK::EInputEvent& input_event) -> bool
    {
        using Fn = bool (__thiscall *)(SDK::UInteraction * /* interaction */,
                                       int /* i_controller_id */,
                                       SDK::FName /* i_index */,
                                       SDK::EInputEvent /* e_input_even */,
                                       float /* f_amount_depressed */,
                                       bool /* b_game_pad */);

        auto* player_controller = globals::GetLocalPlayerController();

        if (player_controller == nullptr)
            return false;

        if (player_controller->Interactions.Num() < 1)
            return false;

        if (player_controller->EFPlayerInput == nullptr)
            return false;

        static auto ui_interaction = *reinterpret_cast<std::uintptr_t *>( player_controller->Interactions[0] );
        static auto ui_func = *reinterpret_cast<std::uintptr_t *>( ui_interaction + 0x270 );
        static auto procedure = reinterpret_cast<Fn>( ui_func );

        return procedure(player_controller->EFPlayerInput,
                         0,
                         key,
                         SDK::TEnumAsByte<SDK::EInputEvent>(input_event),
                         1.f,
                         false);
    }
}

// Public context
namespace hotkey_manager
{
    [[noreturn]] void StartObserving()
	{
		while (true)
			for (auto& hotkey_pair : hotkeys)
				EvaluateHotkey(hotkey_pair.second);
	}

	void RegisterKey(const hotkey_model::Hotkey& hotkey)
	{
		hotkeys[hotkey.key] = hotkey;
	}

	void RemoveKey(const hotkey_model::Key key_id)
	{
		hotkeys.erase(key_id);
	}

    void SimulateKeyPress(const hotkey_model::GameKey& key) {
        auto key_id = static_cast<std::uint16_t>(key);
        InputKey(key_id, SDK::EInputEvent::IE_Pressed);
        InputKey(key_id, SDK::EInputEvent::IE_Released);
    }
}
