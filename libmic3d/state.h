/*
 * Copyright (c) Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#ifndef _MIC3D_STATE_H_
#define _MIC3D_STATE_H_

#include <gamemath/fix16.h>

#include "mic3d.h"

typedef struct render render_t;
typedef struct sort sort_t;
typedef struct tlist tlist_t;
typedef struct light light_t;
typedef struct gst gst_t;

typedef struct perf perf_t;

typedef struct 
{
    workarea_mic3d_t *workarea;
    render_t *render;
    sort_t *sort;
    tlist_t *tlist;
    light_t *light;
    gst_t *gst;
    perf_t *perf;
    
} render_state_t;


#endif /* _MIC3D_STATE_H_ */
