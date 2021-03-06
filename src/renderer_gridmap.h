#ifndef GRIDMAP_RENDERER_H_
#define GRIDMAP_RENDERER_H_

#include <lcm/lcm.h>
#include <bot_vis/bot_vis.h>
#include <bot_param/param_client.h>

#ifdef __cplusplus
extern "C" {
#endif

void setup_renderer_gridmap (BotViewer *viewer, int priority, lcm_t *_lcm, BotParam *param);

#ifdef __cplusplus
}
#endif

#endif
