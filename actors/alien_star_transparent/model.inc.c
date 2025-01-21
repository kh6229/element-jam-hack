Vtx alien_star_transparent_Cube_001_mesh_layer_5_vtx_cull[8] = {
	{{ {-74, -74, -11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-74, -74, 11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-74, 74, 11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-74, 74, -11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {74, -74, -11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {74, -74, 11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {74, 74, 11}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {74, 74, -11}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx alien_star_transparent_Cube_001_mesh_layer_5_vtx_0[28] = {
	{{ {-23, -23, 11}, 0, {347, 496}, {202, 202, 101, 255} }},
	{{ {-23, 23, 11}, 0, {496, 347}, {202, 54, 101, 255} }},
	{{ {-74, 0, 0}, 0, {253, 253}, {129, 0, 0, 255} }},
	{{ {23, -23, 11}, 0, {496, 645}, {54, 202, 101, 255} }},
	{{ {0, -74, 0}, 0, {253, 739}, {0, 129, 0, 255} }},
	{{ {23, 23, 11}, 0, {645, 496}, {54, 54, 101, 255} }},
	{{ {74, 0, 0}, 0, {739, 739}, {127, 0, 0, 255} }},
	{{ {0, 74, 0}, 0, {739, 253}, {0, 127, 0, 255} }},
	{{ {23, -23, -11}, 0, {645, 496}, {54, 202, 155, 255} }},
	{{ {23, 23, -11}, 0, {496, 645}, {54, 54, 155, 255} }},
	{{ {-23, -23, -11}, 0, {496, 347}, {202, 202, 155, 255} }},
	{{ {0, -74, 0}, 0, {739, 253}, {0, 129, 0, 255} }},
	{{ {-23, 23, -11}, 0, {347, 496}, {202, 54, 155, 255} }},
	{{ {0, 74, 0}, 0, {253, 739}, {0, 127, 0, 255} }},
	{{ {23, 23, 11}, 0, {348, 487}, {54, 54, 101, 255} }},
	{{ {23, 23, -11}, 0, {253, 505}, {54, 54, 155, 255} }},
	{{ {0, 74, 0}, 0, {348, 739}, {0, 127, 0, 255} }},
	{{ {74, 0, 0}, 0, {253, 253}, {127, 0, 0, 255} }},
	{{ {23, -23, -11}, 0, {253, 505}, {54, 202, 155, 255} }},
	{{ {23, -23, 11}, 0, {348, 487}, {54, 202, 101, 255} }},
	{{ {0, -74, 0}, 0, {253, 253}, {0, 129, 0, 255} }},
	{{ {74, 0, 0}, 0, {348, 739}, {127, 0, 0, 255} }},
	{{ {-23, -23, 11}, 0, {253, 505}, {202, 202, 101, 255} }},
	{{ {-23, -23, -11}, 0, {348, 487}, {202, 202, 155, 255} }},
	{{ {-74, 0, 0}, 0, {348, 739}, {129, 0, 0, 255} }},
	{{ {-23, 23, 11}, 0, {253, 505}, {202, 54, 101, 255} }},
	{{ {-23, 23, -11}, 0, {348, 487}, {202, 54, 155, 255} }},
	{{ {-74, 0, 0}, 0, {253, 253}, {129, 0, 0, 255} }},
};

Gfx alien_star_transparent_Cube_001_mesh_layer_5_tri_0[] = {
	gsSPVertex(alien_star_transparent_Cube_001_mesh_layer_5_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 1, 3, 5, 0),
	gsSP2Triangles(5, 3, 6, 0, 1, 5, 7, 0),
	gsSP2Triangles(8, 9, 6, 0, 9, 8, 10, 0),
	gsSP2Triangles(10, 8, 11, 0, 9, 10, 12, 0),
	gsSP2Triangles(12, 10, 2, 0, 9, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 19, 18, 21, 0),
	gsSP2Triangles(22, 23, 20, 0, 23, 22, 24, 0),
	gsSP2Triangles(25, 26, 27, 0, 26, 25, 16, 0),
	gsSPEndDisplayList(),
};


Gfx mat_alien_star_transparent_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 10, 22, 36, 167),
	gsSPEndDisplayList(),
};

Gfx mat_revert_alien_star_transparent_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx alien_star_transparent_Cube_001_mesh_layer_5[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(alien_star_transparent_Cube_001_mesh_layer_5_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_alien_star_transparent_f3dlite_material_002),
	gsSPDisplayList(alien_star_transparent_Cube_001_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_alien_star_transparent_f3dlite_material_002),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

