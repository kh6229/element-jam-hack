u8 soundPlayed = 0;
u8 soundTimer = 0;

void bhv_lava_pool_rise(void) {
    o->oPosY += 5;
    cur_obj_play_sound_1(SOUND_ENV_MOVINGSAND);

    if (o->oPosY >= 13000) {
        o->oAction++;
    }

}

void bhv_lava_pool_play_sounds(void) {
    if (soundPlayed < 4) {
        if (soundTimer < 7) {
            if (soundTimer == 0) {
                cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_LAVA);
            }
            soundTimer++;

        } else {
            soundTimer = 0;
            soundPlayed++;
        }
    }
}

void bhv_lava_pool_activate(void) {
    if (o->oTimer > 180 && o->oTimer < 210) {
        cur_obj_shake_screen(SHAKE_POS_SMALL);
        bhv_lava_pool_play_sounds();
    }

    if (o->oTimer > 240) {
        o->oAction++;
    }
}

void bhv_lava_pool_idle(void) {
    if (gMarioObject->oPosZ >= 3600) {
        o->oAction++;
    }
}

void bhv_lava_pool_loop(void) {
    switch (o->oAction) {
        case 0:
            bhv_lava_pool_idle();
            break;
        case 1:
            bhv_lava_pool_activate();
            break;
        case 2:
            bhv_lava_pool_rise();
            break;
        case 3:
            break;
        default:
            break;
    }
}