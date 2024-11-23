#pragma once
#include "colors_widgets.h"

void D3DX11CreateShaderResourceViewFromMemory();

namespace settings {
    inline ImVec2 size_menu = ImVec2(730, 640);
    inline ImVec2 size_watermark = ImVec2(479, 50);
    inline ImVec2 size_preview = ImVec2(300, 400);

}

namespace misc {

    inline int tab_count, active_tab_count = 0;

    inline float anim_tab = 0;

    inline int tab_width = 85;

    inline float child_add, alpha_child = 0;

}

namespace menu {

    inline ImVec4 general_child = ImColor(23, 23, 25);

}

namespace pic
{
    ID3D11ShaderResourceView* bg = nullptr;
    ID3D11ShaderResourceView* widget = nullptr;

    ID3D11ShaderResourceView* aimbot = nullptr;
    ID3D11ShaderResourceView* visuals = nullptr;
    ID3D11ShaderResourceView* Logo = nullptr;

    ID3D11ShaderResourceView* skins = nullptr;
    ID3D11ShaderResourceView* settings = nullptr;

    ID3D11ShaderResourceView* weapon_ak47 = nullptr;
    ID3D11ShaderResourceView* weapon_m4a1 = nullptr;
    ID3D11ShaderResourceView* weapon_galil = nullptr;

    ID3D11ShaderResourceView* user_circle = nullptr;
}

namespace fonts {

    inline ImFont* inter_font;

    inline ImFont* inter_bold_font;

    inline ImFont* inter_bold_font2;

    inline ImFont* inter_bold_font3;

    inline ImFont* inter_bold_font4;

    inline ImFont* inter_font_b;

    inline ImFont* combo_icon_font;

    inline ImFont* weapon_font;

}


//