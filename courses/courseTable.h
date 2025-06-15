#ifndef COURSE_TABLE_H
#define COURSE_TABLE_H

#include <ultra64.h>
#include <macros.h>

// dlRomStart, vertexRomStart, & vertexStart, are u8* because mio0 compressed.
struct CourseTable {
    u8* dlRomStart;             // 0x00 ROM start for segment 6 DL data
    u8* dlRomEnd;               // 0x04 ROM end for segment 6 DL data
    u8* vertexRomStart;         // 0x08 ROM start for segment 4 vertex data
    u8* vertexRomEnd;           // 0x0C ROM end for segment 7?
    u8* offsetRomStart;         // 0x10 ROM start for uncompressed segment 9 texture and DL addresses
    u8* offsetRomEnd;           // 0x14 ROM end for uncompressed segment 9 texture and DL addresses
    CourseVtx* vertexStart;     // 0x18 segmented address of vertex data
    u32 vertexCount;            // 0x1C number of vertices in vertex data
    u8* packedStart;            // 0x20 packed display list start address
    u8* finalDisplaylistOffset; // 0x24
    u32* textures;              // 0x20 segmented address of textures table
    u16 unknown1;               // 0x2C
    u16 padding;                // 0x2E
};

#if !ENABLE_CUSTOM_COURSE_ENGINE
extern struct CourseTable gCourseTable[];
#endif

#ifndef NO_SEGMENTED_MEMORY

#define DECLARE_SEGMENT(name) \
    extern u8 _##name##SegmentRomStart[]; \
    extern u8 _##name##SegmentRomEnd[];

#define DECLARE_COURSE_SEGMENT(name) \
    DECLARE_SEGMENT(course_##name##_dl_mio0) \
    DECLARE_SEGMENT(name##_vertex) \
    DECLARE_SEGMENT(course_##name##_offsets) \
    extern u8 d_course_##name##_packed[]; \
    extern u32 name##_textures[];

//! @todo These should probably be ptr's instead of array's?
DECLARE_COURSE_SEGMENT(mario_raceway)
DECLARE_COURSE_SEGMENT(choco_mountain)
DECLARE_COURSE_SEGMENT(bowsers_castle)
DECLARE_COURSE_SEGMENT(banshee_boardwalk)
DECLARE_COURSE_SEGMENT(yoshi_valley)
DECLARE_COURSE_SEGMENT(frappe_snowland)
DECLARE_COURSE_SEGMENT(koopa_troopa_beach)
DECLARE_COURSE_SEGMENT(royal_raceway)
DECLARE_COURSE_SEGMENT(luigi_raceway)
DECLARE_COURSE_SEGMENT(moo_moo_farm)
DECLARE_COURSE_SEGMENT(toads_turnpike)
DECLARE_COURSE_SEGMENT(kalimari_desert)
DECLARE_COURSE_SEGMENT(sherbet_land)
DECLARE_COURSE_SEGMENT(rainbow_road)
DECLARE_COURSE_SEGMENT(wario_stadium)
DECLARE_COURSE_SEGMENT(block_fort)
DECLARE_COURSE_SEGMENT(skyscraper)
DECLARE_COURSE_SEGMENT(double_deck)
DECLARE_COURSE_SEGMENT(dks_jungle_parkway)
DECLARE_COURSE_SEGMENT(big_donut)

#endif

#endif // COURSE_TABLE_H
