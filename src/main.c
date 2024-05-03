#define SOKOL_IMPL
#define SOKOL_GFX_IMPL
#include "../dependencies/sokol/sokol_app.h"
#include "../dependencies/sokol/sokol_gfx.h"

void init(void) {
    sg_setup(&(sg_desc){0});
}

void frame(void) {

    const sg_pass_action pass_action = {
        .colors[0] = {
            .load_action = SG_LOADACTION_CLEAR,
            .clear_value = {0.4f, 0.4f, 0.8f, 1.0f}
        }
    };


    sg_begin_pass(&pass_action);
    sg_end_pass();
    sg_commit();
}

void cleanup(void) {
    sg_shutdown();
}

sapp_desc sokol_main(int argc, char* argv[]) {
    return (sapp_desc){
        .init_cb = init,
        .frame_cb = frame,
        .cleanup_cb = cleanup,
        .width = 640,
        .height = 480,
        .window_title = "My Website",
    };
}
