#include "src/game/envfx_snow.h"

const GeoLayout dead_vine_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, dead_vine_Cylinder_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
