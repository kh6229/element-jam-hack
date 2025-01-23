#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0xA, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_HEART, 4296, -5952, 2888, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		MARIO_POS(0x01, 0, 2617, 80, -4349),
		OBJECT(MODEL_NONE, 4304, -6359, -4387, 0, 0, 0, 0x02000000, bhvHiddenStar),
		OBJECT(MODEL_GLOW, -5813, -3806, 586, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, -5494, -4054, 3857, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 2989, -6008, 5966, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 5789, -5748, 2929, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 4401, -6280, -1192, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 2617, 80, -5244, 0, 0, 0, (0x0A << 16), bhvWarp),
		OBJECT(MODEL_NONE, -3767, -4575, -2458, 0, 0, 0, 0x000C0000, bhvWarp),
		OBJECT(MODEL_NONE, -65, -752, 3593, 0, 0, 0, 0x320B0000, bhvWarp),
		OBJECT(MODEL_NONE, 2373, -7094, -4456, 0, 0, 0, 0x320D0000, bhvWarp),
		OBJECT(MODEL_ALIEN_STAR, 2617, 2015, -1906, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -1397, 2649, 1328, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_NONE, 2617, 80, -4349, 0, 0, 0, 0x00010000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 2617, 1607, -1906, 0, 0, 0, 0x00020000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 2617, 1607, 672, 0, 0, 0, 0x00030000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -2367, 1607, 5741, 0, 0, 0, 0x00040000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -1397, 2258, 1328, 0, 0, 0, 0x00050000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -2367, 608, 10228, 0, 0, 0, 0x00060000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -65, -752, 4586, 0, 0, 0, 0x00070000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -3767, -4657, -2479, 0, 0, 0, 0x00080000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -2164, -4123, -199, 0, 0, 0, 0x00090000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 4291, -6073, 4050, 0, 0, 0, 0x000A0000, bhvTextTrigger),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CAVE_AMBIENCE_2),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		WARP_NODE(0xF0, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHILL_FLAME, 53, -4931, -4074, 0, 0, 0, 0x00000000, bhvChillFlame),
		OBJECT(MODEL_DEAD_VINE, 53, -4421, -2768, 0, -180, 0, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 53, -4721, -2768, 0, -180, 0, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, -1451, -5106, -1143, 0, -90, -30, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, -1451, -4770, -1143, 0, -90, 35, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, -3087, -5448, -2034, 0, 171, -7, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, -3087, -5154, -2034, 0, 172, 6, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, -522, -4883, -4449, 0, 45, -180, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 706, -4571, -3534, 0, -90, -14, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 641, -6245, -3705, -90, 0, -180, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 2652, -6092, -4098, 0, -45, 0, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 2523, -6384, -2738, 0, 0, 5, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 2523, -5927, -2738, 0, 0, -26, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 2647, -6754, 286, 0, -135, 14, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_DEAD_VINE, 1269, -7167, 156, 0, -90, 16, 0x00000000, bhvDeadVine),
		OBJECT(MODEL_HEART, 0, 2787, -5598, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, -5616, 41, 4934, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, -3095, -5510, -3925, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 53, -3516, -7297, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 105, -7595, 144, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_NONE, -534, 2974, -3876, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 310, 2974, -3527, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 554, 2974, -2736, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -105, 2765, -24, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -519, 2974, 642, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2911, 1632, 4452, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3969, 1850, 5415, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5670, 325, 3117, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6383, 325, 2201, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6037, -54, -1964, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5008, 419, -2302, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4732, 419, -3200, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_GLOW, -496, -4883, -4422, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, -1492, -4744, -1143, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 641, -6217, -3705, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 2422, -6140, -2736, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 1223, -7135, 156, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 0, 2808, -7751, 0, 0, 0, 0x000A0000, bhvWarp),
		OBJECT(MODEL_NONE, 53, -3554, -7787, 0, 0, 0, 0x000C0000, bhvWarp),
		OBJECT(MODEL_NONE, -5616, -797, -6140, 0, 0, 0, 0x320B0000, bhvWarp),
		OBJECT(MODEL_ALIEN_STAR, 5618, 1801, 4965, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 2708, -6725, 0, 0, 0, 0x000B0000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -5949, 35, -3784, 0, 0, 0, 0x000C0000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 53, -4931, -4585, 0, 0, 0, 0x000D0000, bhvTextTrigger),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CAVE_AMBIENCE_3),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2617, 80, -4349),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};