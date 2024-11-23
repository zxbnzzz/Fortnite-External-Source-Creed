#pragma once
#include <cstdint>

class entity {
public:
	uintptr_t
		actor,
		skeletal_mesh,
		root_component,
		player_state;
	int
		team_index;
	int
		kills;
};

class item {
public:
	uintptr_t
		Actor;

	std::string
		Name;
	bool
		isVehicle,
		isChest,
		isPickup,
		isAmmoBox;
	float
		distance;


};

class Pointers {
public:
	uintptr_t
		uworld,
		game_instance,
		game_state,
		local_player,
		acknowledged_pawn,
		player_state,
		player_controller,
		root_component,
		skeletal_mesh,
		persistent_level,
		levels,
		world_settings,
		WorldGravityZ,
		player_array,
		player_array_size,
		player_camera_manager,
		current_weapon,
		squad_id,
		actor,
		current_vehicle;
	//TArray<uintptr_t> levels;
	int
		team_index,
		actor_count;
}; static Pointers* pointer = new Pointers();

std::vector<item> item_pawns;
std::vector<entity> entity_list;
std::vector<entity> temporary_entity_list;

//
//int team_indx, player_arry_size;
//fvector relatv_location;
//fvector velocity;

namespace o {
	class p
	{
	public:

		uintptr_t
			uworld,
			game_instance,
			game_state,
			local_player,
			acknowledged_pawn,
			player_state,
			player_controller,
			root_component,
			skeletal_mesh,
			persistent_level,
			world_settings,
			WorldGravityZ,
			player_array,
			levels,
			player_array_size,
			player_camera_manager,
			current_weapon,
			squad_id,
			current_vehicle;
		//int
		//	team_index;
		//fvector
		//	relative_location,
		//	velocity;
	};
}
static o::p* g_ptr = new o::p();

int width, height;
ImDrawList* draw_list_universal;

namespace aimb {
	bool aimbot = true;
	bool auto_aim = false;
	bool human_aim = true;
	int key = 0;
	bool ignore_knocked = false;
	int aim_type = 0;
	bool prediction = true;
	bool visible_check = true;
	bool team_check = true;
	bool show_fov = true;
	int fov_size = 100;
	bool dynamic_fov = false;
	int smoothing = 2;
	int aim_bone = 0;
	int aimbot_key = VK_XBUTTON2;

	bool target_text = false;
	bool target_line = false;


}

namespace worldnigga {
	bool enabled = false;
	bool chests = false;
	bool pickups = false;
	bool uncommon = false;
	bool common = false;
	bool epic = false;
	bool rare = false;
	bool legendary = false;
	bool mythic = false;
	int max_loots_distance = 50;
}

namespace esp {
	bool enabled = true;
	bool box = true;
	bool filled_esp = false;
	int box_type = 0;
	bool rounded = false;
	bool cornered = false;
	bool skeleton = false;
	bool head_esp = false;
	int head_esp_size = 10;
	bool prediction_dot = true;
	float box_thick = 2.0f;
	float box_width = 0.65f;
	float skeleton_thick = 2.0f;
	int text_size = 19;

	bool snapline = false;
	int snapline_type = 0;
	bool username = false;
	bool platform = false;
	bool kill_count = false;
	bool weapon = false;
	bool distance = true;
	bool rank_esp = false;

	bool radar = false;
	int radar_pos_x = 20;
	int radar_pos_y = 50;
	int radar_size = 200;
	int radar_range = 60.f;

	bool player_count = false;



	int max_visual_distance = 250;
	bool outline = false;
	bool text_outline = true;

	//ImColor visible = ImVec4(0.0f, 1.0f, 0.0f, 1.0f); // green
	//ImColor invisible = ImVec4(1.0f, 0.0f, 0.0f, 1.0f); // red

	float box_visible[4] = { 0.0f, 1.0f, 0.0f, 1.0f };
	float box_invisible[4] = { 1.0f, 0.0f, 0.0f, 1.0f };
	ImColor skeleton_visible = { 0.0f, 1.0f, 0.0f, 1.0f };
	ImColor skeleton_invisible = { 1.0f, 0.0f, 0.0f, 1.0f };
	float snapline_visible[4] = { 0.0f, 1.0f, 0.0f, 1.0f };
	float snapline_invisible[4] = { 1.0f, 0.0f, 0.0f, 1.0f };
	float purple[4] = { 0.5f, 0.0f, 0.5f, 1.0f };
	float black[4] = { 0.0f, 0.0f, 0.0f, 0.5f };
	float text_color[4] = { 255.0f, 255.0f, 255.0f, 1.0f };
}

namespace idk {
	bool vsync = true;
	bool show_fps = true;
	bool show_watermark = true;
	bool stream_proof = false;
	bool aimwhenjumping = false;
	bool bRapidFire = false;
	bool noReload = false;
	bool performance_mode = true;
	int cache_update_speed = 250;
	bool magic_bullet = false;
	float magic_bullet_size = 5.0f;
	bool oof_arrow = true;
	bool oof_filled = false;
	float oof_size = 1.5f;
	bool third_person_when_ads = false;
	bool first_persss = false;
	int fov_val = 10;
	bool debug_bones_id = false;
	bool norecoil = false;
	bool debug_objects = false;
	bool controller_l2 = false;
	bool silent_aim_xd = false;
	int font_type = 0;
}

namespace radar {
	bool enable = false;
	bool rect = false;
	int radar_pos_x = 20;
	int radar_pos_y = 50;
	int radar_size = 200;
	int radar_range = 60.f;
}