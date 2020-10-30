#include "string was spoofed"

#include "string was spoofed"
#include "string was spoofed"

namespace
{
    void RegisterPvpModeKey() {
        const auto on_key_tap = [&]()
        {
            pvp_mode::ApplyPvpMode();
        };

        hotkey_model::Hotkey hotkey;
        hotkey.key = hotkey_model::Key::kNum7;
        hotkey.event_type = hotkey_model::EventType::kTap;
        hotkey.event_callback = on_key_tap;

        hotkey_manager::RegisterKey(hotkey);
    }

    void ModifyAnimationSpeed() {
        auto my_pawn = globals::GetLocalPlayerAefPawn();

        if (my_pawn == nullptr || !pvp_mode::toggle)
            return;

        if (GetAsyncKeyState(0x56) & 0x8000) // Ult key
        {
            my_pawn->CustomTimeDilation = 1.0f;
        } else {
            my_pawn->CustomTimeDilation = 1.2f;
        }
    }
}

namespace pvp_mode
{
    bool toggle = false;

    void ApplyPvpMode() {
        toggle = !toggle;
    }

    void Activate() {
        RegisterPvpModeKey();
        hook_coordinator::RegisterCallback(globals::kEngineGameViewportClientLayoutPlayers,
                                           "string was spoofed",
                                           ModifyAnimationSpeed);
    }
}