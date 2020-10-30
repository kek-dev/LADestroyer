#include "string was spoofed"

extern "string was spoofed" [[maybe_unused]] __declspec(dllexport) LRESULT __fastcall tinj(int a1, WPARAM a2, LPARAM a3) {
    return CallNextHookEx(nullptr, a1, a2, a3);
}

[[maybe_unused]] BOOL WINAPI DllMain(HINSTANCE hinst_dll, const DWORD fdw_reason) {
    if (fdw_reason == DLL_PROCESS_ATTACH) {
        auto *handle = GetModuleHandleA("string was spoofed");
        if (handle != nullptr) {
            CreateThread(nullptr,
                         0,
                         LPTHREAD_START_ROUTINE(hook_instigator::OnAttach),
                         hinst_dll,
                         NULL,
                         nullptr);
        }
    }

    return TRUE;
}
