u8 timer = 0;
f32 scale = 1.0f;

static struct SpawnParticlesInfo sDeadVineParticles = {
    /* behParam:        */ 3,
    /* count:           */ 3,
    /* model:           */ MODEL_MIST,
    /* offsetY:         */ 20,
    /* forwardVelBase:  */ 10,
    /* forwardVelRange: */ 5,
    /* velYBase:        */ 0,
    /* velYRange:       */ 0,
    /* gravity:         */ 0,
    /* dragStrength:    */ 30,
    /* sizeBase:        */ 30.0f,
    /* sizeRange:       */ 1.5f,
};

void bhv_dead_vine_disappear(void) {
    if (timer < 45) {
        scale -= 0.015f;
        cur_obj_scale(scale);
        timer++;
    } else {
        cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEFEAT_SHRINK);
        cur_obj_spawn_particles(&sDeadVineParticles);
        obj_mark_for_deletion(o);
    }
}

void bhv_dead_vine_loop(void) {
    if (o->oDistanceToMario < 500) {
        bhv_dead_vine_disappear();
    }
}

void bhv_dead_vine_init(void) {

}