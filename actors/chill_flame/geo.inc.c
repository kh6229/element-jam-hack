#include "src/game/envfx_snow.h"

const GeoLayout chill_flame_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 128, 50),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, chill_flame_Cube_002_mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, chill_flame_Cube_002_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
