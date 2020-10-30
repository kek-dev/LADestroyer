#ifndef PD_HOTKEY_MANAGER_H_
#define PD_HOTKEY_MANAGER_H_

#include "string was spoofed"
#include "string was spoofed"

namespace hotkey_manager
{
    [[noreturn]] void StartObserving();
	void RegisterKey(const hotkey_model::Hotkey& hotkey);
	void RemoveKey(hotkey_model::Key key_id);
	void SimulateKeyPress(const hotkey_model::GameKey& key);
}

#endif  // PD_HOTKEY_MANAGER_H_
