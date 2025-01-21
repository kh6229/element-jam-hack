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
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2682, -752, 6567, 0, 0, 0, 0x320B0000, bhvWarp),
		MARIO_POS(0x01, 0, 0, 80, -1375),
		OBJECT(MODEL_ALIEN_STAR, 0, 2015, 1068, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -4014, 2649, 4302, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 80, -1375, 0, 0, 0, 0x00010000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 0, 1607, 1068, 0, 0, 0, 0x00020000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 0, 1607, 3646, 0, 0, 0, 0x00030000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -4984, 1607, 8715, 0, 0, 0, 0x00040000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -4014, 2258, 4302, 0, 0, 0, 0x00050000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -4984, 608, 13202, 0, 0, 0, 0x00060000, bhvTextTrigger),
		OBJECT(MODEL_NONE, -2682, -752, 7560, 0, 0, 0, 0x00070000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 0, 80, -1375, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CAVE_AMBIENCE_2),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 6140, -2519, -1997, 0, 0, 0, 0x320B0000, bhvWarp),
		OBJECT(MODEL_HEART, 8063, -1377, 5347, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 8071, -1784, -1928, 0, 0, 0, 0x02000000, bhvHiddenStar),
		OBJECT(MODEL_GLOW, -2046, 769, 3044, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, -1727, 521, 6315, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 6756, -1433, 8424, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 9556, -1173, 5388, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_GLOW, 8168, -1704, 1266, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 0, -82, -20, 0, 0, 0, 0x00080000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 1603, 452, 2259, 0, 0, 0, 0x00090000, bhvTextTrigger),
		OBJECT(MODEL_NONE, 8058, -1498, 6509, 0, 0, 0, 0x000A0000, bhvTextTrigger),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CAVE_AMBIENCE_3),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(3, bob_area_3),
		WARP_NODE(0xF0, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_HEART, 0, 79, -5598, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, -5616, -2667, 4934, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_NONE, 0, 100, -7751, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -534, 266, -3876, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 310, 266, -3527, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 554, 266, -2736, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -105, 57, -24, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -519, 266, 642, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2911, -1076, 4452, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3969, -857, 5415, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5670, -2383, 3117, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6383, -2383, 2201, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6037, -2762, -1964, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5008, -2289, -2302, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4732, -2289, -3200, 0, 0, 0, 0x00600000, bhvPoleGrabbing),
		OBJECT(MODEL_ALIEN_STAR, 5618, -907, 4965, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 0, -6725, 0, 0, 0, 0x000B0000, bhvTextTrigger),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CAVE_AMBIENCE_3),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 80, -1375),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};