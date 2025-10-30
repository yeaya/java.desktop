#include <sun/java2d/marlin/MarlinConst.h>

#include <java/lang/Math.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <jcpp.h>

#undef BLOCK_SIZE
#undef BLOCK_SIZE_LG
#undef BYTE_0
#undef CAP_BUTT
#undef CAP_ROUND
#undef CAP_SQUARE
#undef DO_AA_RANGE_CHECK
#undef DO_CHECKS
#undef DO_CHECK_UNSAFE
#undef DO_CLEAN_DIRTY
#undef DO_CLIP_SUBDIVIDER
#undef DO_FLUSH_MONITORS
#undef DO_FLUSH_STATS
#undef DO_LOG_BOUNDS
#undef DO_LOG_CLIP
#undef DO_LOG_OVERSIZE
#undef DO_LOG_WIDEN_ARRAY
#undef DO_MONITORS
#undef DO_STATS
#undef DO_TRACE
#undef DUMP_INTERVAL
#undef ENABLE_LOGS
#undef INITIAL_AA_ARRAY
#undef INITIAL_ARRAY
#undef INITIAL_EDGES_CAPACITY
#undef INITIAL_EDGES_COUNT
#undef INITIAL_PIXEL_HEIGHT
#undef INITIAL_PIXEL_WIDTH
#undef JOIN_BEVEL
#undef JOIN_MITER
#undef JOIN_ROUND
#undef LOG_CREATE_CONTEXT
#undef LOG_UNSAFE_MALLOC
#undef MAX_AA_ALPHA
#undef MIN_SUBPIXELS
#undef MIN_SUBPIXEL_LG_POSITIONS
#undef OUTCODE_BOTTOM
#undef OUTCODE_LEFT
#undef OUTCODE_MASK_L_R
#undef OUTCODE_MASK_T_B
#undef OUTCODE_MASK_T_B_L_R
#undef OUTCODE_RIGHT
#undef OUTCODE_TOP
#undef SUBPIXEL_LG_POSITIONS_X
#undef SUBPIXEL_LG_POSITIONS_Y
#undef SUBPIXEL_POSITIONS_X
#undef SUBPIXEL_POSITIONS_Y
#undef TILE_H
#undef TILE_H_LG
#undef TILE_W
#undef TILE_W_LG
#undef USE_DUMP_THREAD
#undef USE_LOGGER
#undef USE_PATH_SIMPLIFIER
#undef USE_SIMPLIFIER
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _MarlinConst_FieldInfo_[] = {
	{"ENABLE_LOGS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, ENABLE_LOGS)},
	{"USE_LOGGER", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, USE_LOGGER)},
	{"LOG_CREATE_CONTEXT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, LOG_CREATE_CONTEXT)},
	{"LOG_UNSAFE_MALLOC", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, LOG_UNSAFE_MALLOC)},
	{"DO_CHECK_UNSAFE", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_CHECK_UNSAFE)},
	{"DO_STATS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_STATS)},
	{"DO_MONITORS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_MONITORS)},
	{"DO_CHECKS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_CHECKS)},
	{"DO_AA_RANGE_CHECK", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_AA_RANGE_CHECK)},
	{"DO_LOG_WIDEN_ARRAY", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_LOG_WIDEN_ARRAY)},
	{"DO_LOG_OVERSIZE", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_LOG_OVERSIZE)},
	{"DO_TRACE", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_TRACE)},
	{"DO_FLUSH_STATS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_FLUSH_STATS)},
	{"DO_FLUSH_MONITORS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_FLUSH_MONITORS)},
	{"USE_DUMP_THREAD", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, USE_DUMP_THREAD)},
	{"DUMP_INTERVAL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DUMP_INTERVAL)},
	{"DO_CLEAN_DIRTY", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, DO_CLEAN_DIRTY)},
	{"USE_SIMPLIFIER", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, USE_SIMPLIFIER)},
	{"USE_PATH_SIMPLIFIER", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, USE_PATH_SIMPLIFIER)},
	{"DO_CLIP_SUBDIVIDER", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_CLIP_SUBDIVIDER)},
	{"DO_LOG_BOUNDS", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_LOG_BOUNDS)},
	{"DO_LOG_CLIP", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, DO_LOG_CLIP)},
	{"INITIAL_PIXEL_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, INITIAL_PIXEL_WIDTH)},
	{"INITIAL_PIXEL_HEIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, INITIAL_PIXEL_HEIGHT)},
	{"INITIAL_ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, INITIAL_ARRAY)},
	{"INITIAL_AA_ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, INITIAL_AA_ARRAY)},
	{"INITIAL_EDGES_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, INITIAL_EDGES_COUNT)},
	{"INITIAL_EDGES_CAPACITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, INITIAL_EDGES_CAPACITY)},
	{"BYTE_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, BYTE_0)},
	{"SUBPIXEL_LG_POSITIONS_X", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, SUBPIXEL_LG_POSITIONS_X)},
	{"SUBPIXEL_LG_POSITIONS_Y", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, SUBPIXEL_LG_POSITIONS_Y)},
	{"MIN_SUBPIXEL_LG_POSITIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, MIN_SUBPIXEL_LG_POSITIONS)},
	{"SUBPIXEL_POSITIONS_X", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, SUBPIXEL_POSITIONS_X)},
	{"SUBPIXEL_POSITIONS_Y", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, SUBPIXEL_POSITIONS_Y)},
	{"MIN_SUBPIXELS", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, MIN_SUBPIXELS)},
	{"MAX_AA_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, MAX_AA_ALPHA)},
	{"TILE_H_LG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, TILE_H_LG)},
	{"TILE_H", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, TILE_H)},
	{"TILE_W_LG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, TILE_W_LG)},
	{"TILE_W", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, TILE_W)},
	{"BLOCK_SIZE_LG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, BLOCK_SIZE_LG)},
	{"BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MarlinConst, BLOCK_SIZE)},
	{"WIND_EVEN_ODD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, WIND_EVEN_ODD)},
	{"WIND_NON_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, WIND_NON_ZERO)},
	{"JOIN_MITER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, JOIN_MITER)},
	{"JOIN_ROUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, JOIN_ROUND)},
	{"JOIN_BEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, JOIN_BEVEL)},
	{"CAP_BUTT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, CAP_BUTT)},
	{"CAP_ROUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, CAP_ROUND)},
	{"CAP_SQUARE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, CAP_SQUARE)},
	{"OUTCODE_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_TOP)},
	{"OUTCODE_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_BOTTOM)},
	{"OUTCODE_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_LEFT)},
	{"OUTCODE_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_RIGHT)},
	{"OUTCODE_MASK_T_B", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_MASK_T_B)},
	{"OUTCODE_MASK_L_R", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_MASK_L_R)},
	{"OUTCODE_MASK_T_B_L_R", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MarlinConst, OUTCODE_MASK_T_B_L_R)},
	{}
};

$ClassInfo _MarlinConst_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.java2d.marlin.MarlinConst",
	nullptr,
	nullptr,
	_MarlinConst_FieldInfo_
};

$Object* allocate$MarlinConst($Class* clazz) {
	return $of($alloc(MarlinConst));
}

bool MarlinConst::ENABLE_LOGS = false;
bool MarlinConst::USE_LOGGER = false;
bool MarlinConst::LOG_CREATE_CONTEXT = false;
bool MarlinConst::LOG_UNSAFE_MALLOC = false;
bool MarlinConst::DO_STATS = false;
bool MarlinConst::DO_CHECKS = false;
bool MarlinConst::DO_LOG_WIDEN_ARRAY = false;
bool MarlinConst::DO_LOG_OVERSIZE = false;
bool MarlinConst::DO_TRACE = false;
bool MarlinConst::USE_SIMPLIFIER = false;
bool MarlinConst::USE_PATH_SIMPLIFIER = false;
bool MarlinConst::DO_CLIP_SUBDIVIDER = false;
bool MarlinConst::DO_LOG_BOUNDS = false;
bool MarlinConst::DO_LOG_CLIP = false;
int32_t MarlinConst::INITIAL_PIXEL_WIDTH = 0;
int32_t MarlinConst::INITIAL_PIXEL_HEIGHT = 0;
int32_t MarlinConst::INITIAL_AA_ARRAY = 0;
int32_t MarlinConst::INITIAL_EDGES_COUNT = 0;
int32_t MarlinConst::INITIAL_EDGES_CAPACITY = 0;
int32_t MarlinConst::SUBPIXEL_LG_POSITIONS_X = 0;
int32_t MarlinConst::SUBPIXEL_LG_POSITIONS_Y = 0;
int32_t MarlinConst::MIN_SUBPIXEL_LG_POSITIONS = 0;
int32_t MarlinConst::SUBPIXEL_POSITIONS_X = 0;
int32_t MarlinConst::SUBPIXEL_POSITIONS_Y = 0;
float MarlinConst::MIN_SUBPIXELS = 0.0;
int32_t MarlinConst::MAX_AA_ALPHA = 0;
int32_t MarlinConst::TILE_H_LG = 0;
int32_t MarlinConst::TILE_H = 0;
int32_t MarlinConst::TILE_W_LG = 0;
int32_t MarlinConst::TILE_W = 0;
int32_t MarlinConst::BLOCK_SIZE_LG = 0;
int32_t MarlinConst::BLOCK_SIZE = 0;

void clinit$MarlinConst($Class* class$) {
	MarlinConst::ENABLE_LOGS = $MarlinProperties::isLoggingEnabled();
	MarlinConst::USE_LOGGER = MarlinConst::ENABLE_LOGS && $MarlinProperties::isUseLogger();
	MarlinConst::LOG_CREATE_CONTEXT = MarlinConst::ENABLE_LOGS && $MarlinProperties::isLogCreateContext();
	MarlinConst::LOG_UNSAFE_MALLOC = MarlinConst::ENABLE_LOGS && $MarlinProperties::isLogUnsafeMalloc();
	MarlinConst::DO_STATS = MarlinConst::ENABLE_LOGS && $MarlinProperties::isDoStats();
	MarlinConst::DO_CHECKS = MarlinConst::ENABLE_LOGS && $MarlinProperties::isDoChecks();
	MarlinConst::DO_LOG_WIDEN_ARRAY = MarlinConst::ENABLE_LOGS && false;
	MarlinConst::DO_LOG_OVERSIZE = MarlinConst::ENABLE_LOGS && false;
	MarlinConst::DO_TRACE = MarlinConst::ENABLE_LOGS && false;
	MarlinConst::USE_SIMPLIFIER = $MarlinProperties::isUseSimplifier();
	MarlinConst::USE_PATH_SIMPLIFIER = $MarlinProperties::isUsePathSimplifier();
	MarlinConst::DO_CLIP_SUBDIVIDER = $MarlinProperties::isDoClipSubdivider();
	MarlinConst::DO_LOG_BOUNDS = MarlinConst::ENABLE_LOGS && false;
	MarlinConst::DO_LOG_CLIP = MarlinConst::ENABLE_LOGS && false;
	MarlinConst::INITIAL_PIXEL_WIDTH = $MarlinProperties::getInitialPixelWidth();
	MarlinConst::INITIAL_PIXEL_HEIGHT = $MarlinProperties::getInitialPixelHeight();
	MarlinConst::INITIAL_AA_ARRAY = MarlinConst::INITIAL_PIXEL_WIDTH;
	MarlinConst::INITIAL_EDGES_COUNT = $MarlinProperties::getInitialEdges();
	MarlinConst::INITIAL_EDGES_CAPACITY = MarlinConst::INITIAL_EDGES_COUNT * 24;
	MarlinConst::SUBPIXEL_LG_POSITIONS_X = $MarlinProperties::getSubPixel_Log2_X();
	MarlinConst::SUBPIXEL_LG_POSITIONS_Y = $MarlinProperties::getSubPixel_Log2_Y();
	MarlinConst::MIN_SUBPIXEL_LG_POSITIONS = $Math::min(MarlinConst::SUBPIXEL_LG_POSITIONS_X, MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	MarlinConst::SUBPIXEL_POSITIONS_X = $sl(1, MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	MarlinConst::SUBPIXEL_POSITIONS_Y = $sl(1, MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	MarlinConst::MIN_SUBPIXELS = (float)$sl(1, MarlinConst::MIN_SUBPIXEL_LG_POSITIONS);
	MarlinConst::MAX_AA_ALPHA = (MarlinConst::SUBPIXEL_POSITIONS_X * MarlinConst::SUBPIXEL_POSITIONS_Y);
	MarlinConst::TILE_H_LG = $MarlinProperties::getTileSize_Log2();
	MarlinConst::TILE_H = $sl(1, MarlinConst::TILE_H_LG);
	MarlinConst::TILE_W_LG = $MarlinProperties::getTileWidth_Log2();
	MarlinConst::TILE_W = $sl(1, MarlinConst::TILE_W_LG);
	MarlinConst::BLOCK_SIZE_LG = $MarlinProperties::getBlockSize_Log2();
	MarlinConst::BLOCK_SIZE = $sl(1, MarlinConst::BLOCK_SIZE_LG);
}

$Class* MarlinConst::load$($String* name, bool initialize) {
	$loadClass(MarlinConst, name, initialize, &_MarlinConst_ClassInfo_, clinit$MarlinConst, allocate$MarlinConst);
	return class$;
}

$Class* MarlinConst::class$ = nullptr;

		} // marlin
	} // java2d
} // sun