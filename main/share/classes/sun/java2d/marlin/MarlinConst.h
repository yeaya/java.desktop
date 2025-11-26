#ifndef _sun_java2d_marlin_MarlinConst_h_
#define _sun_java2d_marlin_MarlinConst_h_
//$ interface sun.java2d.marlin.MarlinConst
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE
#pragma push_macro("BLOCK_SIZE_LG")
#undef BLOCK_SIZE_LG
#pragma push_macro("BYTE_0")
#undef BYTE_0
#pragma push_macro("CAP_BUTT")
#undef CAP_BUTT
#pragma push_macro("CAP_ROUND")
#undef CAP_ROUND
#pragma push_macro("CAP_SQUARE")
#undef CAP_SQUARE
#pragma push_macro("DO_AA_RANGE_CHECK")
#undef DO_AA_RANGE_CHECK
#pragma push_macro("DO_CHECKS")
#undef DO_CHECKS
#pragma push_macro("DO_CHECK_UNSAFE")
#undef DO_CHECK_UNSAFE
#pragma push_macro("DO_CLEAN_DIRTY")
#undef DO_CLEAN_DIRTY
#pragma push_macro("DO_CLIP_SUBDIVIDER")
#undef DO_CLIP_SUBDIVIDER
#pragma push_macro("DO_FLUSH_MONITORS")
#undef DO_FLUSH_MONITORS
#pragma push_macro("DO_FLUSH_STATS")
#undef DO_FLUSH_STATS
#pragma push_macro("DO_LOG_BOUNDS")
#undef DO_LOG_BOUNDS
#pragma push_macro("DO_LOG_CLIP")
#undef DO_LOG_CLIP
#pragma push_macro("DO_LOG_OVERSIZE")
#undef DO_LOG_OVERSIZE
#pragma push_macro("DO_LOG_WIDEN_ARRAY")
#undef DO_LOG_WIDEN_ARRAY
#pragma push_macro("DO_MONITORS")
#undef DO_MONITORS
#pragma push_macro("DO_STATS")
#undef DO_STATS
#pragma push_macro("DO_TRACE")
#undef DO_TRACE
#pragma push_macro("DUMP_INTERVAL")
#undef DUMP_INTERVAL
#pragma push_macro("ENABLE_LOGS")
#undef ENABLE_LOGS
#pragma push_macro("INITIAL_AA_ARRAY")
#undef INITIAL_AA_ARRAY
#pragma push_macro("INITIAL_ARRAY")
#undef INITIAL_ARRAY
#pragma push_macro("INITIAL_EDGES_CAPACITY")
#undef INITIAL_EDGES_CAPACITY
#pragma push_macro("INITIAL_EDGES_COUNT")
#undef INITIAL_EDGES_COUNT
#pragma push_macro("INITIAL_PIXEL_HEIGHT")
#undef INITIAL_PIXEL_HEIGHT
#pragma push_macro("INITIAL_PIXEL_WIDTH")
#undef INITIAL_PIXEL_WIDTH
#pragma push_macro("JOIN_BEVEL")
#undef JOIN_BEVEL
#pragma push_macro("JOIN_MITER")
#undef JOIN_MITER
#pragma push_macro("JOIN_ROUND")
#undef JOIN_ROUND
#pragma push_macro("LOG_CREATE_CONTEXT")
#undef LOG_CREATE_CONTEXT
#pragma push_macro("LOG_UNSAFE_MALLOC")
#undef LOG_UNSAFE_MALLOC
#pragma push_macro("MAX_AA_ALPHA")
#undef MAX_AA_ALPHA
#pragma push_macro("MIN_SUBPIXELS")
#undef MIN_SUBPIXELS
#pragma push_macro("MIN_SUBPIXEL_LG_POSITIONS")
#undef MIN_SUBPIXEL_LG_POSITIONS
#pragma push_macro("OUTCODE_BOTTOM")
#undef OUTCODE_BOTTOM
#pragma push_macro("OUTCODE_LEFT")
#undef OUTCODE_LEFT
#pragma push_macro("OUTCODE_MASK_L_R")
#undef OUTCODE_MASK_L_R
#pragma push_macro("OUTCODE_MASK_T_B")
#undef OUTCODE_MASK_T_B
#pragma push_macro("OUTCODE_MASK_T_B_L_R")
#undef OUTCODE_MASK_T_B_L_R
#pragma push_macro("OUTCODE_RIGHT")
#undef OUTCODE_RIGHT
#pragma push_macro("OUTCODE_TOP")
#undef OUTCODE_TOP
#pragma push_macro("SUBPIXEL_LG_POSITIONS_X")
#undef SUBPIXEL_LG_POSITIONS_X
#pragma push_macro("SUBPIXEL_LG_POSITIONS_Y")
#undef SUBPIXEL_LG_POSITIONS_Y
#pragma push_macro("SUBPIXEL_POSITIONS_X")
#undef SUBPIXEL_POSITIONS_X
#pragma push_macro("SUBPIXEL_POSITIONS_Y")
#undef SUBPIXEL_POSITIONS_Y
#pragma push_macro("TILE_H")
#undef TILE_H
#pragma push_macro("TILE_H_LG")
#undef TILE_H_LG
#pragma push_macro("TILE_W")
#undef TILE_W
#pragma push_macro("TILE_W_LG")
#undef TILE_W_LG
#pragma push_macro("USE_DUMP_THREAD")
#undef USE_DUMP_THREAD
#pragma push_macro("USE_LOGGER")
#undef USE_LOGGER
#pragma push_macro("USE_PATH_SIMPLIFIER")
#undef USE_PATH_SIMPLIFIER
#pragma push_macro("USE_SIMPLIFIER")
#undef USE_SIMPLIFIER
#pragma push_macro("WIND_EVEN_ODD")
#undef WIND_EVEN_ODD
#pragma push_macro("WIND_NON_ZERO")
#undef WIND_NON_ZERO

namespace sun {
	namespace java2d {
		namespace marlin {

class MarlinConst : public ::java::lang::Object {
	$interface(MarlinConst, 0, ::java::lang::Object)
public:
	static bool ENABLE_LOGS;
	static bool USE_LOGGER;
	static bool LOG_CREATE_CONTEXT;
	static bool LOG_UNSAFE_MALLOC;
	static const bool DO_CHECK_UNSAFE = false;
	static bool DO_STATS;
	static const bool DO_MONITORS = false;
	static bool DO_CHECKS;
	static const bool DO_AA_RANGE_CHECK = false;
	static bool DO_LOG_WIDEN_ARRAY;
	static bool DO_LOG_OVERSIZE;
	static bool DO_TRACE;
	static const bool DO_FLUSH_STATS = true;
	static const bool DO_FLUSH_MONITORS = true;
	static const bool USE_DUMP_THREAD = false;
	static const int64_t DUMP_INTERVAL = (int64_t)5000;
	static const bool DO_CLEAN_DIRTY = false;
	static bool USE_SIMPLIFIER;
	static bool USE_PATH_SIMPLIFIER;
	static bool DO_CLIP_SUBDIVIDER;
	static bool DO_LOG_BOUNDS;
	static bool DO_LOG_CLIP;
	static int32_t INITIAL_PIXEL_WIDTH;
	static int32_t INITIAL_PIXEL_HEIGHT;
	static const int32_t INITIAL_ARRAY = 256;
	static int32_t INITIAL_AA_ARRAY;
	static int32_t INITIAL_EDGES_COUNT;
	static int32_t INITIAL_EDGES_CAPACITY;
	static const int8_t BYTE_0 = (int8_t)0;
	static int32_t SUBPIXEL_LG_POSITIONS_X;
	static int32_t SUBPIXEL_LG_POSITIONS_Y;
	static int32_t MIN_SUBPIXEL_LG_POSITIONS;
	static int32_t SUBPIXEL_POSITIONS_X;
	static int32_t SUBPIXEL_POSITIONS_Y;
	static float MIN_SUBPIXELS;
	static int32_t MAX_AA_ALPHA;
	static int32_t TILE_H_LG;
	static int32_t TILE_H;
	static int32_t TILE_W_LG;
	static int32_t TILE_W;
	static int32_t BLOCK_SIZE_LG;
	static int32_t BLOCK_SIZE;
	static const int32_t WIND_EVEN_ODD = 0;
	static const int32_t WIND_NON_ZERO = 1;
	static const int32_t JOIN_MITER = 0;
	static const int32_t JOIN_ROUND = 1;
	static const int32_t JOIN_BEVEL = 2;
	static const int32_t CAP_BUTT = 0;
	static const int32_t CAP_ROUND = 1;
	static const int32_t CAP_SQUARE = 2;
	static const int32_t OUTCODE_TOP = 1;
	static const int32_t OUTCODE_BOTTOM = 2;
	static const int32_t OUTCODE_LEFT = 4;
	static const int32_t OUTCODE_RIGHT = 8;
	static const int32_t OUTCODE_MASK_T_B = 3; // OUTCODE_TOP | OUTCODE_BOTTOM
	static const int32_t OUTCODE_MASK_L_R = 12; // OUTCODE_LEFT | OUTCODE_RIGHT
	static const int32_t OUTCODE_MASK_T_B_L_R = 15; // OUTCODE_MASK_T_B | OUTCODE_MASK_L_R
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("BLOCK_SIZE")
#pragma pop_macro("BLOCK_SIZE_LG")
#pragma pop_macro("BYTE_0")
#pragma pop_macro("CAP_BUTT")
#pragma pop_macro("CAP_ROUND")
#pragma pop_macro("CAP_SQUARE")
#pragma pop_macro("DO_AA_RANGE_CHECK")
#pragma pop_macro("DO_CHECKS")
#pragma pop_macro("DO_CHECK_UNSAFE")
#pragma pop_macro("DO_CLEAN_DIRTY")
#pragma pop_macro("DO_CLIP_SUBDIVIDER")
#pragma pop_macro("DO_FLUSH_MONITORS")
#pragma pop_macro("DO_FLUSH_STATS")
#pragma pop_macro("DO_LOG_BOUNDS")
#pragma pop_macro("DO_LOG_CLIP")
#pragma pop_macro("DO_LOG_OVERSIZE")
#pragma pop_macro("DO_LOG_WIDEN_ARRAY")
#pragma pop_macro("DO_MONITORS")
#pragma pop_macro("DO_STATS")
#pragma pop_macro("DO_TRACE")
#pragma pop_macro("DUMP_INTERVAL")
#pragma pop_macro("ENABLE_LOGS")
#pragma pop_macro("INITIAL_AA_ARRAY")
#pragma pop_macro("INITIAL_ARRAY")
#pragma pop_macro("INITIAL_EDGES_CAPACITY")
#pragma pop_macro("INITIAL_EDGES_COUNT")
#pragma pop_macro("INITIAL_PIXEL_HEIGHT")
#pragma pop_macro("INITIAL_PIXEL_WIDTH")
#pragma pop_macro("JOIN_BEVEL")
#pragma pop_macro("JOIN_MITER")
#pragma pop_macro("JOIN_ROUND")
#pragma pop_macro("LOG_CREATE_CONTEXT")
#pragma pop_macro("LOG_UNSAFE_MALLOC")
#pragma pop_macro("MAX_AA_ALPHA")
#pragma pop_macro("MIN_SUBPIXELS")
#pragma pop_macro("MIN_SUBPIXEL_LG_POSITIONS")
#pragma pop_macro("OUTCODE_BOTTOM")
#pragma pop_macro("OUTCODE_LEFT")
#pragma pop_macro("OUTCODE_MASK_L_R")
#pragma pop_macro("OUTCODE_MASK_T_B")
#pragma pop_macro("OUTCODE_MASK_T_B_L_R")
#pragma pop_macro("OUTCODE_RIGHT")
#pragma pop_macro("OUTCODE_TOP")
#pragma pop_macro("SUBPIXEL_LG_POSITIONS_X")
#pragma pop_macro("SUBPIXEL_LG_POSITIONS_Y")
#pragma pop_macro("SUBPIXEL_POSITIONS_X")
#pragma pop_macro("SUBPIXEL_POSITIONS_Y")
#pragma pop_macro("TILE_H")
#pragma pop_macro("TILE_H_LG")
#pragma pop_macro("TILE_W")
#pragma pop_macro("TILE_W_LG")
#pragma pop_macro("USE_DUMP_THREAD")
#pragma pop_macro("USE_LOGGER")
#pragma pop_macro("USE_PATH_SIMPLIFIER")
#pragma pop_macro("USE_SIMPLIFIER")
#pragma pop_macro("WIND_EVEN_ODD")
#pragma pop_macro("WIND_NON_ZERO")

#endif // _sun_java2d_marlin_MarlinConst_h_