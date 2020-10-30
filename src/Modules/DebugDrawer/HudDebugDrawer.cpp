#include "string was spoofed"
#include "string was spoofed"

namespace hud_debug_drawer
{
	void EnableHudDebugFlags(const bool is_enabled)
	{
		auto* hud = globals::GetHud();

		if (hud == nullptr)
			return;
		
		hud->bDebug = is_enabled;
		hud->bShowDebugInfo = is_enabled;
		hud->bDebugEffectIsRelevant = is_enabled;
		hud->bShowDirectorInfoDebug = is_enabled;
	}
}
