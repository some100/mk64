#include <ultra64.h>
#include <macros.h>
#include "courseTable.h"
#include "all_course_model.h"
#include "all_course_packed.h"
#include "config.h"

#if !ENABLE_CUSTOM_COURSE_ENGINE
#define DECLARE_COURSE(name, unknown) \
    {                        \
        _course_##name##_dl_mio0SegmentRomStart, \
        _course_##name##_dl_mio0SegmentRomEnd, \
        _##name##_vertexSegmentRomStart, \
        _##name##_vertexSegmentRomEnd, \
        _course_##name##_offsetsSegmentRomStart, \
        _course_##name##_offsetsSegmentRomEnd, \
        d_course_##name##_vertex, \
        d_course_##name##_vertex_count, \
        d_course_##name##_packed, \
        d_course_##name##_packed_end, \
        name##_textures, \
        unknown, \
        0x0000 \
    }

struct CourseTable gCourseTable[] = { 
                                      DECLARE_COURSE(mario_raceway, 0),
                                      DECLARE_COURSE(choco_mountain, 1),
                                      DECLARE_COURSE(bowsers_castle, 0),
                                      DECLARE_COURSE(banshee_boardwalk, 1),
                                      DECLARE_COURSE(yoshi_valley, 0),
                                      DECLARE_COURSE(frappe_snowland, 0),
                                      DECLARE_COURSE(koopa_troopa_beach, 0),
                                      DECLARE_COURSE(royal_raceway, 0),
                                      DECLARE_COURSE(luigi_raceway, 0),
                                      DECLARE_COURSE(moo_moo_farm, 0),
                                      DECLARE_COURSE(toads_turnpike, 0),
                                      DECLARE_COURSE(kalimari_desert, 0),
                                      DECLARE_COURSE(sherbet_land, 0),
                                      DECLARE_COURSE(rainbow_road, 0),
                                      DECLARE_COURSE(wario_stadium, 0),
                                      DECLARE_COURSE(block_fort, 0),
                                      DECLARE_COURSE(skyscraper, 0),
                                      DECLARE_COURSE(double_deck, 0),
                                      DECLARE_COURSE(dks_jungle_parkway, 0),
                                      DECLARE_COURSE(big_donut, 0),
                                    };
#endif
