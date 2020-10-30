#include <iostream>
#include "string was spoofed"
#include "string was spoofed"

namespace text_drawer {
#undef DrawText

    void DrawText(SDK::UCanvas *canvas,
                  const float x,
                  const float y,
                  const std::string& str,
                  const float x_scale,
                  const float y_scale,
                  const SDK::FColor desired_color) {
        const auto old_cur_x = canvas->CurX;
        const auto old_cur_y = canvas->CurY;

        const auto old_color = canvas->DrawColor;
        canvas->CurX = round(x);
        canvas->CurY = round(y);

        canvas->DrawColor = desired_color;

        canvas->DrawText(globals::ConvertToFString(str), false, x_scale, y_scale, nullptr);

        canvas->CurX = old_cur_x;
        canvas->CurY = old_cur_y;

        canvas->DrawColor = old_color;
    }

    void DrawTextBatch(const SDK::FVector center, std::vector<std::string> strings) {
        auto *canvas = globals::GetCanvas();

        if (canvas == nullptr)
            return;

        const auto projected_location = canvas->Project(center);

        if (!projected_location.X || !projected_location.Y)
            return;

        const auto text_color = SDK::FColor(255, 255, 255, 255);
        const auto text_offset_x = 25.0f;
        const auto text_offset_y = -20.0f;

        for (auto i = 0; i < strings.size(); ++i) {
            DrawText(canvas,
                     projected_location.X + text_offset_x,
                     projected_location.Y + (text_offset_y * (strings.size() - i)),
                     strings[i],
                     1.0f,
                     1.0f,
                     text_color);
        }
    }
}
