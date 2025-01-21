u8 activated;

void bhv_text_trigger_loop(void) {
    if (o->oDistanceToMario <= 500) {
        gTextIsRendering = o->oBehParams2ndByte;
        obj_mark_for_deletion(o);
    }
}

void bhv_text_trigger_init(void) {
    activated = 0;
}