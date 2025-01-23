#include "src/game/envfx_snow.h"

const GeoLayout lava_pool_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lava_pool_Cube_005_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
