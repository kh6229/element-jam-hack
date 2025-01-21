Vtx chill_flame_Cube_002_mesh_layer_1_vtx_cull[8] = {
	{{ {-34, -34, -34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-34, -34, 34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-34, 34, 34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-34, 34, -34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {34, -34, -34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {34, -34, 34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {34, 34, 34}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {34, 34, -34}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx chill_flame_Cube_002_mesh_layer_1_vtx_0[24] = {
	{{ {-34, -34, 34}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {-34, 34, 34}, 0, {624, 1008}, {129, 0, 0, 255} }},
	{{ {-34, 34, -34}, 0, {624, 752}, {129, 0, 0, 255} }},
	{{ {-34, -34, -34}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {-34, -34, -34}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {-34, 34, -34}, 0, {624, 752}, {0, 0, 129, 255} }},
	{{ {34, 34, -34}, 0, {624, 496}, {0, 0, 129, 255} }},
	{{ {34, -34, -34}, 0, {368, 496}, {0, 0, 129, 255} }},
	{{ {34, -34, -34}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {34, 34, -34}, 0, {624, 496}, {127, 0, 0, 255} }},
	{{ {34, 34, 34}, 0, {624, 240}, {127, 0, 0, 255} }},
	{{ {34, -34, 34}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {34, -34, 34}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {34, 34, 34}, 0, {624, 240}, {0, 0, 127, 255} }},
	{{ {-34, 34, 34}, 0, {624, -16}, {0, 0, 127, 255} }},
	{{ {-34, -34, 34}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {-34, -34, -34}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {34, -34, -34}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {34, -34, 34}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {-34, -34, 34}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {34, 34, -34}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {-34, 34, -34}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {-34, 34, 34}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {34, 34, 34}, 0, {624, 240}, {0, 127, 0, 255} }},
};

Gfx chill_flame_Cube_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(chill_flame_Cube_002_mesh_layer_1_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSPEndDisplayList(),
};


Gfx mat_chill_flame_f3dlite_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 255, 189, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_chill_flame_f3dlite_material_004[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx chill_flame_Cube_002_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(chill_flame_Cube_002_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_chill_flame_f3dlite_material_004),
	gsSPDisplayList(chill_flame_Cube_002_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_chill_flame_f3dlite_material_004),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

