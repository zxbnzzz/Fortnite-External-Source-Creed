#include "imgui.h"

namespace c {

    ImVec4 accent_color = ImColor(250, 218, 80, 255);
    ImVec4 accent_color_low = ImColor(250, 218, 80, 30);
    ImVec4 accent_color_transparency = ImColor(250, 218, 80, 0);

    namespace bg
    {
        ImVec4 background = ImColor(7, 5, 7, 255);
        ImVec4 background_outline = ImColor(11, 10, 12, 255);
        ImVec4 background_border = ImColor(10, 9, 10, 255);

        ImVec2 size = ImVec2(620, 480);
        float rounding = 0.f;
    }

    namespace child
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }

    namespace text
    {
        ImVec4 text_active = ImColor(255, 255, 255, 255);
        ImVec4 text_hov = ImColor(127, 127, 128, 255);
        ImVec4 text = ImColor(92, 92, 93, 255);

        ImVec4 text_hide = ImColor(92, 92, 93, 0);
    }

    namespace checkbox
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        ImVec4 checkmark_active = ImColor(0, 0, 0, 255);
        ImVec4 checkmark_inactive = ImColor(0, 0, 0, 0);

        float rounding = 4.f;
    }

    namespace slider
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        ImVec4 circle_inactive = ImColor(25, 25, 25, 255);

        float rounding = 30.f;
    }

    namespace combo
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        ImVec4 checkmark_active = ImColor(0, 0, 0, 255);
        ImVec4 checkmark_inactive = ImColor(0, 0, 0, 0);

        float rounding = 4.f;
    }

    namespace picker
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }

    namespace keybind
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }

    namespace button
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }

    namespace input
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }

    namespace tab
    {
        ImVec4 background_inactive = ImColor(16, 15, 16, 0);
    }

    namespace config_selector
    {
        ImVec4 background_outline = ImColor(16, 15, 16, 255);
        float rounding = 2.f;
    }
}
