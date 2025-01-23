struct ObjectHitbox sChillFlameHitbox = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 20,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 75,
    /* height:            */ 100,
    /* hurtboxRadius:     */ 75,
    /* hurtboxHeight:     */ 100,
};

void bhv_chill_flame_loop(void) {
    if (gMarioObject->oPosY >= -800 && cur_obj_lateral_dist_to_home() > 500) {
        obj_set_pos(o, o->oHomeX, o->oHomeY, o->oHomeZ);
    }
    
    switch (o->oHeldState) {
        case HELD_FREE:
            cur_obj_enable_rendering_and_become_tangible(o);
            object_step();
            break;
        
        case HELD_HELD:
            cur_obj_disable_rendering_and_become_intangible(o);
            break;

        case HELD_THROWN:
            cur_obj_enable_rendering_and_become_tangible(o);
            o->oForwardVel = 20.f;
            o->oVelY = 10.f;
            object_step();
            o->oHeldState = HELD_FREE;
            break;
        
        case HELD_DROPPED:
            cur_obj_enable_rendering_and_become_tangible(o);
            o->oHeldState = HELD_FREE;
            break;
    }

   o->oInteractStatus = INT_STATUS_NONE;
}

void bhv_chill_flame_init(void) {
    o->oGravity = 3.f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 2.f;
    obj_set_hitbox(o, &sChillFlameHitbox);
}