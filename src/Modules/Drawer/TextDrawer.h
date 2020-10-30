#ifndef Destroyer_SRC_MODULES_DRAWER_TEXTDRAWER_H_
#define Destroyer_SRC_MODULES_DRAWER_TEXTDRAWER_H_

#include "string was spoofed"

namespace text_drawer
{
    void DrawText(SDK::UCanvas *canvas,
                  float x,
                  float y,
                  const std::string& str,
                  float x_scale,
                  float y_scale,
                  SDK::FColor desired_color);
	void DrawTextBatch(SDK::FVector center, std::vector<std::string> strings);
}

#endif  // Destroyer_SRC_MODULES_DRAWER_TEXTDRAWER_H_
