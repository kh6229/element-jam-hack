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
    if (o->oShrinkTimer < 45 * (o->oBehParams2ndByte + 1)) {
        o->oVineScale -= 0.015f;
        cur_obj_scale(o->oVineScale);
        o->oShrinkTimer++;
    } else {
        cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEFEAT_SHRINK);
        cur_obj_spawn_particles(&sDeadVineParticles);
        obj_mark_for_deletion(o);
    }
}

void bhv_dead_vine_loop(void) {
    struct Object *chillFlameObj = cur_obj_nearest_object_with_behavior(bhvChillFlame);
    
    if (o->oDistanceToMario < o->oVineDistToMario && chillFlameObj->oHeldState == HELD_HELD) {
        bhv_dead_vine_disappear();
    }
}

void bhv_dead_vine_init(void) {
    o->oShrinkTimer     =  0;
    o->oVineScale       = (1.0f * (o->oBehParams2ndByte + 1));
    o->oVineDistToMario = (400  * (o->oBehParams2ndByte + 1));
    cur_obj_scale(o->oVineScale);
}