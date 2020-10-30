#ifndef PD_DEBUG_INFO_DRAWER_H_
#define PD_DEBUG_INFO_DRAWER_H_

namespace debug_info_drawer
{
	void SetEnabled(bool is_enabled);
	void Flush();
	void DrawDebugBoxes();
	void DrawSkeletalMeshActorDebugInfo();
	void DrawStaticMeshActorDebugBoxes();
	void DrawMonsterDebugInfo();
	void DrawOtherPawnDebugInfo();
	void DrawProjectilesDebugInfo();
    void DrawInvisiblePlayersInfo();
}

#endif  // PD_DEBUG_INFO_DRAWER_H_
