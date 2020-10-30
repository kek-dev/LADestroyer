#ifndef PD_HOOK_INSTIGATOR_H_
#define PD_HOOK_INSTIGATOR_H_

#include <Windows.h>

// Total Injector extern function
extern "string was spoofed" [[maybe_unused]] __declspec(dllexport) LRESULT __fastcall tinj(int a1, WPARAM a2, LPARAM a3);

// DLL entry point
[[maybe_unused]] BOOL WINAPI DllMain(HINSTANCE hinst_dll, const DWORD fdw_reason);

namespace hook_instigator
{
	// Start routine for new thread in DllMain
	void OnAttach(HMODULE h_module);

	// Init main UE objects and names
	void InitializeObjectsAndNames();

	// Invokes hook coordinator
	void HookProcessEvent();

	// DLL detach mechanism

	void RegisterDetachHotkey(HMODULE h_module);
	void OnDetach(HMODULE h_module);
}

#endif  // PD_HOOK_INSTIGATOR_H_