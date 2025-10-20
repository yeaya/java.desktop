#include <sun/java2d/marlin/Renderer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/FloatMath.h>
#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/MarlinCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/MergeSort.h>
#include <sun/java2d/marlin/OffHeapArray.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef ALL_BUT_LSB
#undef BLOCK_SIZE
#undef BLOCK_SIZE_LG
#undef CUB_COUNT
#undef CUB_COUNT_2
#undef CUB_COUNT_3
#undef CUB_COUNT_LG
#undef CUB_DEC_BND
#undef CUB_DEC_ERR_SUBPIX
#undef CUB_INC_BND
#undef CUB_INC_ERR_SUBPIX
#undef CUB_INV_COUNT
#undef CUB_INV_COUNT_2
#undef CUB_INV_COUNT_3
#undef DISABLE_RENDER
#undef DO_LOG_BOUNDS
#undef DO_STATS
#undef ENABLE_BLOCK_FLAGS
#undef ENABLE_BLOCK_FLAGS_HEURISTICS
#undef ERR_STEP_MAX
#undef INITIAL_AA_ARRAY
#undef INITIAL_ARRAY
#undef INITIAL_BUCKET_ARRAY
#undef INITIAL_CROSSING_COUNT
#undef INITIAL_EDGES_CAPACITY
#undef INITIAL_EDGES_COUNT
#undef INITIAL_PIXEL_HEIGHT
#undef MAX_VALUE
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef OFF_BUMP_ERR
#undef OFF_BUMP_X
#undef OFF_CURX_OR
#undef OFF_ERROR
#undef OFF_NEXT
#undef OFF_YMAX
#undef POSITIVE_INFINITY
#undef POWER_2_TO_32
#undef QUAD_DEC_BND
#undef QUAD_DEC_ERR_SUBPIX
#undef RDR_OFFSET_X
#undef RDR_OFFSET_Y
#undef SCALE_DY
#undef SIZEOF_EDGE_BYTES
#undef SIZE_INT
#undef SUBPIXEL_LG_POSITIONS_X
#undef SUBPIXEL_LG_POSITIONS_Y
#undef SUBPIXEL_MASK_X
#undef SUBPIXEL_MASK_Y
#undef SUBPIXEL_POSITIONS_X
#undef SUBPIXEL_POSITIONS_Y
#undef SUBPIXEL_SCALE_X
#undef SUBPIXEL_SCALE_Y
#undef SUBPIXEL_TILE
#undef TILE_H
#undef UNSAFE
#undef WIND_EVEN_ODD
#undef _ALL_BUT_LSB
#undef _BLK_SIZE
#undef _BLK_SIZE_LG
#undef _DEC_BND
#undef _ERR_STEP_MAX
#undef _INC_BND
#undef _MAX_VALUE
#undef _MIN_VALUE
#undef _OFF_BUMP_ERR
#undef _OFF_BUMP_X
#undef _OFF_ERROR
#undef _OFF_NEXT
#undef _OFF_YMAX
#undef _SCALE_DY
#undef _SIZEOF_EDGE_BYTES
#undef _SUBPIXEL_LG_POSITIONS_X
#undef _SUBPIXEL_LG_POSITIONS_Y
#undef _SUBPIXEL_MASK_X
#undef _SUBPIXEL_MASK_Y
#undef _SUBPIXEL_POSITIONS_X

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $Curve = ::sun::java2d::marlin::Curve;
using $DMarlinRenderingEngine = ::sun::java2d::marlin::DMarlinRenderingEngine;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $FloatMath = ::sun::java2d::marlin::FloatMath;
using $IntArrayCache$Reference = ::sun::java2d::marlin::IntArrayCache$Reference;
using $MarlinCache = ::sun::java2d::marlin::MarlinCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $MergeSort = ::sun::java2d::marlin::MergeSort;
using $OffHeapArray = ::sun::java2d::marlin::OffHeapArray;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Renderer_FieldInfo_[] = {
	{"DISABLE_RENDER", "Z", nullptr, $STATIC | $FINAL, $constField(Renderer, DISABLE_RENDER)},
	{"ENABLE_BLOCK_FLAGS", "Z", nullptr, $STATIC | $FINAL, $staticField(Renderer, ENABLE_BLOCK_FLAGS)},
	{"ENABLE_BLOCK_FLAGS_HEURISTICS", "Z", nullptr, $STATIC | $FINAL, $staticField(Renderer, ENABLE_BLOCK_FLAGS_HEURISTICS)},
	{"ALL_BUT_LSB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Renderer, ALL_BUT_LSB)},
	{"ERR_STEP_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Renderer, ERR_STEP_MAX)},
	{"POWER_2_TO_32", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, POWER_2_TO_32)},
	{"SUBPIXEL_SCALE_X", "D", nullptr, $STATIC | $FINAL, $staticField(Renderer, SUBPIXEL_SCALE_X)},
	{"SUBPIXEL_SCALE_Y", "D", nullptr, $STATIC | $FINAL, $staticField(Renderer, SUBPIXEL_SCALE_Y)},
	{"SUBPIXEL_MASK_X", "I", nullptr, $STATIC | $FINAL, $staticField(Renderer, SUBPIXEL_MASK_X)},
	{"SUBPIXEL_MASK_Y", "I", nullptr, $STATIC | $FINAL, $staticField(Renderer, SUBPIXEL_MASK_Y)},
	{"RDR_OFFSET_X", "D", nullptr, $STATIC | $FINAL, $staticField(Renderer, RDR_OFFSET_X)},
	{"RDR_OFFSET_Y", "D", nullptr, $STATIC | $FINAL, $staticField(Renderer, RDR_OFFSET_Y)},
	{"SUBPIXEL_TILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, SUBPIXEL_TILE)},
	{"INITIAL_BUCKET_ARRAY", "I", nullptr, $STATIC | $FINAL, $staticField(Renderer, INITIAL_BUCKET_ARRAY)},
	{"INITIAL_CROSSING_COUNT", "I", nullptr, $STATIC | $FINAL, $staticField(Renderer, INITIAL_CROSSING_COUNT)},
	{"OFF_CURX_OR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Renderer, OFF_CURX_OR)},
	{"OFF_ERROR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, OFF_ERROR)},
	{"OFF_BUMP_X", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, OFF_BUMP_X)},
	{"OFF_BUMP_ERR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, OFF_BUMP_ERR)},
	{"OFF_NEXT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, OFF_NEXT)},
	{"OFF_YMAX", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, OFF_YMAX)},
	{"SIZEOF_EDGE_BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, SIZEOF_EDGE_BYTES)},
	{"CUB_DEC_ERR_SUBPIX", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, CUB_DEC_ERR_SUBPIX)},
	{"CUB_INC_ERR_SUBPIX", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, CUB_INC_ERR_SUBPIX)},
	{"SCALE_DY", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, SCALE_DY)},
	{"CUB_DEC_BND", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, CUB_DEC_BND)},
	{"CUB_INC_BND", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, CUB_INC_BND)},
	{"CUB_COUNT_LG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Renderer, CUB_COUNT_LG)},
	{"CUB_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Renderer, CUB_COUNT)},
	{"CUB_COUNT_2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Renderer, CUB_COUNT_2)},
	{"CUB_COUNT_3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Renderer, CUB_COUNT_3)},
	{"CUB_INV_COUNT", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, CUB_INV_COUNT)},
	{"CUB_INV_COUNT_2", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, CUB_INV_COUNT_2)},
	{"CUB_INV_COUNT_3", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, CUB_INV_COUNT_3)},
	{"QUAD_DEC_ERR_SUBPIX", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Renderer, QUAD_DEC_ERR_SUBPIX)},
	{"QUAD_DEC_BND", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Renderer, QUAD_DEC_BND)},
	{"crossings", "[I", nullptr, $PRIVATE, $field(Renderer, crossings)},
	{"aux_crossings", "[I", nullptr, $PRIVATE, $field(Renderer, aux_crossings)},
	{"edgeCount", "I", nullptr, $PRIVATE, $field(Renderer, edgeCount)},
	{"edgePtrs", "[I", nullptr, $PRIVATE, $field(Renderer, edgePtrs)},
	{"aux_edgePtrs", "[I", nullptr, $PRIVATE, $field(Renderer, aux_edgePtrs)},
	{"activeEdgeMaxUsed", "I", nullptr, $PRIVATE, $field(Renderer, activeEdgeMaxUsed)},
	{"crossings_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, crossings_ref)},
	{"edgePtrs_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, edgePtrs_ref)},
	{"aux_crossings_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, aux_crossings_ref)},
	{"aux_edgePtrs_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, aux_edgePtrs_ref)},
	{"edgeMinY", "I", nullptr, $PRIVATE, $field(Renderer, edgeMinY)},
	{"edgeMaxY", "I", nullptr, $PRIVATE, $field(Renderer, edgeMaxY)},
	{"edgeMinX", "D", nullptr, $PRIVATE, $field(Renderer, edgeMinX)},
	{"edgeMaxX", "D", nullptr, $PRIVATE, $field(Renderer, edgeMaxX)},
	{"edges", "Lsun/java2d/marlin/OffHeapArray;", nullptr, $PRIVATE | $FINAL, $field(Renderer, edges)},
	{"edgeBuckets", "[I", nullptr, $PRIVATE, $field(Renderer, edgeBuckets)},
	{"edgeBucketCounts", "[I", nullptr, $PRIVATE, $field(Renderer, edgeBucketCounts)},
	{"buckets_minY", "I", nullptr, $PRIVATE, $field(Renderer, buckets_minY)},
	{"buckets_maxY", "I", nullptr, $PRIVATE, $field(Renderer, buckets_maxY)},
	{"edgeBuckets_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, edgeBuckets_ref)},
	{"edgeBucketCounts_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, edgeBucketCounts_ref)},
	{"cache", "Lsun/java2d/marlin/MarlinCache;", nullptr, $FINAL, $field(Renderer, cache)},
	{"boundsMinX", "I", nullptr, $PRIVATE, $field(Renderer, boundsMinX)},
	{"boundsMinY", "I", nullptr, $PRIVATE, $field(Renderer, boundsMinY)},
	{"boundsMaxX", "I", nullptr, $PRIVATE, $field(Renderer, boundsMaxX)},
	{"boundsMaxY", "I", nullptr, $PRIVATE, $field(Renderer, boundsMaxY)},
	{"windingRule", "I", nullptr, $PRIVATE, $field(Renderer, windingRule)},
	{"x0", "D", nullptr, $PRIVATE, $field(Renderer, x0)},
	{"y0", "D", nullptr, $PRIVATE, $field(Renderer, y0)},
	{"sx0", "D", nullptr, $PRIVATE, $field(Renderer, sx0)},
	{"sy0", "D", nullptr, $PRIVATE, $field(Renderer, sy0)},
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $FINAL, $field(Renderer, rdrCtx)},
	{"curve", "Lsun/java2d/marlin/Curve;", nullptr, $PRIVATE | $FINAL, $field(Renderer, curve)},
	{"alphaLine", "[I", nullptr, $PRIVATE, $field(Renderer, alphaLine)},
	{"alphaLine_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, alphaLine_ref)},
	{"enableBlkFlags", "Z", nullptr, $PRIVATE, $field(Renderer, enableBlkFlags)},
	{"prevUseBlkFlags", "Z", nullptr, $PRIVATE, $field(Renderer, prevUseBlkFlags)},
	{"blkFlags", "[I", nullptr, $PRIVATE, $field(Renderer, blkFlags)},
	{"blkFlags_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Renderer, blkFlags_ref)},
	{"bbox_spminX", "I", nullptr, $PRIVATE, $field(Renderer, bbox_spminX)},
	{"bbox_spmaxX", "I", nullptr, $PRIVATE, $field(Renderer, bbox_spmaxX)},
	{"bbox_spminY", "I", nullptr, $PRIVATE, $field(Renderer, bbox_spminY)},
	{"bbox_spmaxY", "I", nullptr, $PRIVATE, $field(Renderer, bbox_spmaxY)},
	{}
};

$MethodInfo _Renderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(Renderer::*)($RendererContext*)>(&Renderer::init$))},
	{"_endRendering", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Renderer::*)(int32_t,int32_t)>(&Renderer::_endRendering))},
	{"addLine", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Renderer::*)(double,double,double,double)>(&Renderer::addLine))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"copyAARow", "([IIIIZ)V", nullptr, 0, $method(static_cast<void(Renderer::*)($ints*,int32_t,int32_t,int32_t,bool)>(&Renderer::copyAARow))},
	{"curveBreakIntoLinesAndAdd", "(DDLsun/java2d/marlin/Curve;DD)V", nullptr, $PRIVATE, $method(static_cast<void(Renderer::*)(double,double,$Curve*,double,double)>(&Renderer::curveBreakIntoLinesAndAdd))},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(Renderer::*)()>(&Renderer::dispose))},
	{"endRendering", "()Z", nullptr, 0, $method(static_cast<bool(Renderer::*)()>(&Renderer::endRendering))},
	{"endRendering", "(I)V", nullptr, 0, $method(static_cast<void(Renderer::*)(int32_t)>(&Renderer::endRendering))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(IIIII)Lsun/java2d/marlin/Renderer;", nullptr, 0, $method(static_cast<Renderer*(Renderer::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&Renderer::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadBreakIntoLinesAndAdd", "(DDLsun/java2d/marlin/Curve;DD)V", nullptr, $PRIVATE, $method(static_cast<void(Renderer::*)(double,double,$Curve*,double,double)>(&Renderer::quadBreakIntoLinesAndAdd))},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tosubpixx", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&Renderer::tosubpixx))},
	{"tosubpixy", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&Renderer::tosubpixy))},
	{}
};

$ClassInfo _Renderer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Renderer",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D,sun.java2d.marlin.MarlinConst",
	_Renderer_FieldInfo_,
	_Renderer_MethodInfo_
};

$Object* allocate$Renderer($Class* clazz) {
	return $of($alloc(Renderer));
}

int32_t Renderer::hashCode() {
	 return this->$DPathConsumer2D::hashCode();
}

bool Renderer::equals(Object$* arg0) {
	 return this->$DPathConsumer2D::equals(arg0);
}

$Object* Renderer::clone() {
	 return this->$DPathConsumer2D::clone();
}

$String* Renderer::toString() {
	 return this->$DPathConsumer2D::toString();
}

void Renderer::finalize() {
	this->$DPathConsumer2D::finalize();
}

bool Renderer::ENABLE_BLOCK_FLAGS = false;
bool Renderer::ENABLE_BLOCK_FLAGS_HEURISTICS = false;
double Renderer::POWER_2_TO_32 = 0.0;
double Renderer::SUBPIXEL_SCALE_X = 0.0;
double Renderer::SUBPIXEL_SCALE_Y = 0.0;
int32_t Renderer::SUBPIXEL_MASK_X = 0;
int32_t Renderer::SUBPIXEL_MASK_Y = 0;
double Renderer::RDR_OFFSET_X = 0.0;
double Renderer::RDR_OFFSET_Y = 0.0;
int32_t Renderer::SUBPIXEL_TILE = 0;
int32_t Renderer::INITIAL_BUCKET_ARRAY = 0;
int32_t Renderer::INITIAL_CROSSING_COUNT = 0;
int64_t Renderer::OFF_ERROR = 0;
int64_t Renderer::OFF_BUMP_X = 0;
int64_t Renderer::OFF_BUMP_ERR = 0;
int64_t Renderer::OFF_NEXT = 0;
int64_t Renderer::OFF_YMAX = 0;
int32_t Renderer::SIZEOF_EDGE_BYTES = 0;
double Renderer::CUB_DEC_ERR_SUBPIX = 0.0;
double Renderer::CUB_INC_ERR_SUBPIX = 0.0;
double Renderer::SCALE_DY = 0.0;
double Renderer::CUB_DEC_BND = 0.0;
double Renderer::CUB_INC_BND = 0.0;
double Renderer::CUB_INV_COUNT = 0.0;
double Renderer::CUB_INV_COUNT_2 = 0.0;
double Renderer::CUB_INV_COUNT_3 = 0.0;
double Renderer::QUAD_DEC_ERR_SUBPIX = 0.0;
double Renderer::QUAD_DEC_BND = 0.0;

void Renderer::quadBreakIntoLinesAndAdd(double x0, double y0, $Curve* c, double x2, double y2) {
	int32_t count = 1;
	double var$0 = $Math::abs($nc(c)->dbx);
	double maxDD = var$0 + $Math::abs($nc(c)->dby) * Renderer::SCALE_DY;
	double _DEC_BND = Renderer::QUAD_DEC_BND;
	while (maxDD >= _DEC_BND) {
		maxDD /= 4.0;
		count <<= 1;
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_quadBreak_dec)->add(count);
		}
	}
	int32_t nL = count;
	if (count > 1) {
		double icount = 1.0 / count;
		double icount2 = icount * icount;
		double ddx = $nc(c)->dbx * icount2;
		double ddy = c->dby * icount2;
		double dx = c->bx * icount2 + c->cx * icount;
		double dy = c->by * icount2 + c->cy * icount;
		{
			double x1 = x0;
			double y1 = y0;
			for (; --count > 0; dx += ddx, dy += ddy) {
				x1 += dx;
				y1 += dy;
				addLine(x0, y0, x1, y1);
				x0 = x1;
				y0 = y1;
			}
		}
	}
	addLine(x0, y0, x2, y2);
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_quadBreak)->add(nL);
	}
}

void Renderer::curveBreakIntoLinesAndAdd(double x0, double y0, $Curve* c, double x3, double y3) {
	int32_t count = Renderer::CUB_COUNT;
	double icount = Renderer::CUB_INV_COUNT;
	double icount2 = Renderer::CUB_INV_COUNT_2;
	double icount3 = Renderer::CUB_INV_COUNT_3;
	double dddx = 0.0;
	double dddy = 0.0;
	double ddx = 0.0;
	double ddy = 0.0;
	double dx = 0.0;
	double dy = 0.0;
	dddx = 2.0 * $nc(c)->dax * icount3;
	dddy = 2.0 * c->day * icount3;
	ddx = dddx + c->dbx * icount2;
	ddy = dddy + c->dby * icount2;
	dx = c->ax * icount3 + c->bx * icount2 + c->cx * icount;
	dy = c->ay * icount3 + c->by * icount2 + c->cy * icount;
	int32_t nL = 0;
	double _DEC_BND = Renderer::CUB_DEC_BND;
	double _INC_BND = Renderer::CUB_INC_BND;
	double _SCALE_DY = Renderer::SCALE_DY;
	{
		double x1 = x0;
		double y1 = y0;
		for (; count > 0;) {
			while (true) {
				bool var$0 = (count % 2 == 0);
				if (var$0) {
					double var$1 = $Math::abs(ddx);
					var$0 = ((var$1 + $Math::abs(ddy) * _SCALE_DY) <= _INC_BND);
				}
				if (!(var$0)) {
					break;
				}
				{
					dx = 2.0 * dx + ddx;
					dy = 2.0 * dy + ddy;
					ddx = 4.0 * (ddx + dddx);
					ddy = 4.0 * (ddy + dddy);
					dddx *= 8.0;
					dddy *= 8.0;
					count >>= 1;
					$init($MarlinConst);
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_curveBreak_inc)->add(count);
					}
				}
			}
			while (true) {
				double var$2 = $Math::abs(ddx);
				if (!((var$2 + $Math::abs(ddy) * _SCALE_DY) >= _DEC_BND)) {
					break;
				}
				{
					dddx /= 8.0;
					dddy /= 8.0;
					ddx = ddx / 4.0 - dddx;
					ddy = ddy / 4.0 - dddy;
					dx = (dx - ddx) / 2.0;
					dy = (dy - ddy) / 2.0;
					count <<= 1;
					$init($MarlinConst);
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_curveBreak_dec)->add(count);
					}
				}
			}
			if (--count == 0) {
				break;
			}
			x1 += dx;
			y1 += dy;
			dx += ddx;
			dy += ddy;
			ddx += dddx;
			ddy += dddy;
			addLine(x0, y0, x1, y1);
			x0 = x1;
			y0 = y1;
		}
	}
	addLine(x0, y0, x3, y3);
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_curveBreak)->add(nL + 1);
	}
}

void Renderer::addLine(double x1, double y1, double x2, double y2) {
	$useLocalCurrentObjectStackCache();
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_addLine)->add(1);
	}
	int32_t or$ = 1;
	if (y2 < y1) {
		or$ = 0;
		double tmp = y2;
		y2 = y1;
		y1 = tmp;
		tmp = x2;
		x2 = x1;
		x1 = tmp;
	}
	int32_t firstCrossing = $FloatMath::max($FloatMath::ceil_int(y1), this->boundsMinY);
	int32_t lastCrossing = $FloatMath::min($FloatMath::ceil_int(y2), this->boundsMaxY);
	if (firstCrossing >= lastCrossing) {
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_addLine_skip)->add(1);
		}
		return;
	}
	if (firstCrossing < this->edgeMinY) {
		this->edgeMinY = firstCrossing;
	}
	if (lastCrossing > this->edgeMaxY) {
		this->edgeMaxY = lastCrossing;
	}
	double slope = (x1 - x2) / (y1 - y2);
	if (slope >= 0.0) {
		if (x1 < this->edgeMinX) {
			this->edgeMinX = x1;
		}
		if (x2 > this->edgeMaxX) {
			this->edgeMaxX = x2;
		}
	} else {
		if (x2 < this->edgeMinX) {
			this->edgeMinX = x2;
		}
		if (x1 > this->edgeMaxX) {
			this->edgeMaxX = x1;
		}
	}
	int32_t _SIZEOF_EDGE_BYTES = Renderer::SIZEOF_EDGE_BYTES;
	$var($OffHeapArray, _edges, this->edges);
	int32_t edgePtr = $nc(_edges)->used;
	if (_edges->length - edgePtr < _SIZEOF_EDGE_BYTES) {
		int64_t edgeNewSize = $ArrayCacheConst::getNewLargeSize(_edges->length, edgePtr + _SIZEOF_EDGE_BYTES);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_edges_resizes)->add(edgeNewSize);
		}
		_edges->resize(edgeNewSize);
	}
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t SIZE_INT = 4;
	int64_t addr = _edges->address + edgePtr;
	double x1_intercept = x1 + (firstCrossing - y1) * slope;
	int64_t x1_fixed_biased = ($cast(int64_t, (Renderer::POWER_2_TO_32 * x1_intercept))) + (int64_t)2147483647;
	$nc(_unsafe)->putInt(addr, ((int32_t)(((int32_t)($sr(x1_fixed_biased, 31))) & (uint32_t)Renderer::ALL_BUT_LSB)) | or$);
	addr += SIZE_INT;
	_unsafe->putInt(addr, (int32_t)((uint32_t)((int32_t)x1_fixed_biased) >> 1));
	addr += SIZE_INT;
	int64_t slope_fixed = $cast(int64_t, (Renderer::POWER_2_TO_32 * slope));
	_unsafe->putInt(addr, ((int32_t)(((int32_t)($sr(slope_fixed, 31))) & (uint32_t)Renderer::ALL_BUT_LSB)));
	addr += SIZE_INT;
	_unsafe->putInt(addr, (int32_t)((uint32_t)((int32_t)slope_fixed) >> 1));
	addr += SIZE_INT;
	$var($ints, _edgeBuckets, this->edgeBuckets);
	$var($ints, _edgeBucketCounts, this->edgeBucketCounts);
	int32_t _boundsMinY = this->boundsMinY;
	int32_t bucketIdx = firstCrossing - _boundsMinY;
	_unsafe->putInt(addr, $nc(_edgeBuckets)->get(bucketIdx));
	addr += SIZE_INT;
	_unsafe->putInt(addr, lastCrossing);
	$nc(_edgeBuckets)->set(bucketIdx, edgePtr);
	(*$nc(_edgeBucketCounts))[bucketIdx] += 2;
	(*_edgeBucketCounts)[lastCrossing - _boundsMinY] |= 1;
	_edges->used += _SIZEOF_EDGE_BYTES;
}

void Renderer::init$($RendererContext* rdrCtx) {
	this->edgeMinY = $Integer::MAX_VALUE;
	this->edgeMaxY = $Integer::MIN_VALUE;
	$init($Double);
	this->edgeMinX = $Double::POSITIVE_INFINITY;
	this->edgeMaxX = $Double::NEGATIVE_INFINITY;
	this->enableBlkFlags = false;
	this->prevUseBlkFlags = false;
	$set(this, rdrCtx, rdrCtx);
	$set(this, curve, $nc(rdrCtx)->curve);
	$set(this, cache, rdrCtx->cache);
	$init($MarlinConst);
	$set(this, edges, rdrCtx->newOffHeapArray($MarlinConst::INITIAL_EDGES_CAPACITY));
	$set(this, edgeBuckets_ref, rdrCtx->newCleanIntArrayRef(Renderer::INITIAL_BUCKET_ARRAY));
	$set(this, edgeBucketCounts_ref, rdrCtx->newCleanIntArrayRef(Renderer::INITIAL_BUCKET_ARRAY));
	$set(this, edgeBuckets, $nc(this->edgeBuckets_ref)->initial);
	$set(this, edgeBucketCounts, $nc(this->edgeBucketCounts_ref)->initial);
	$set(this, alphaLine_ref, rdrCtx->newCleanIntArrayRef($MarlinConst::INITIAL_AA_ARRAY));
	$set(this, alphaLine, $nc(this->alphaLine_ref)->initial);
	$set(this, crossings_ref, rdrCtx->newDirtyIntArrayRef(Renderer::INITIAL_CROSSING_COUNT));
	$set(this, aux_crossings_ref, rdrCtx->newDirtyIntArrayRef(Renderer::INITIAL_CROSSING_COUNT));
	$set(this, edgePtrs_ref, rdrCtx->newDirtyIntArrayRef(Renderer::INITIAL_CROSSING_COUNT));
	$set(this, aux_edgePtrs_ref, rdrCtx->newDirtyIntArrayRef(Renderer::INITIAL_CROSSING_COUNT));
	$set(this, crossings, $nc(this->crossings_ref)->initial);
	$set(this, aux_crossings, $nc(this->aux_crossings_ref)->initial);
	$set(this, edgePtrs, $nc(this->edgePtrs_ref)->initial);
	$set(this, aux_edgePtrs, $nc(this->aux_edgePtrs_ref)->initial);
	$set(this, blkFlags_ref, rdrCtx->newCleanIntArrayRef($MarlinConst::INITIAL_ARRAY));
	$set(this, blkFlags, $nc(this->blkFlags_ref)->initial);
}

Renderer* Renderer::init(int32_t pix_boundsX, int32_t pix_boundsY, int32_t pix_boundsWidth, int32_t pix_boundsHeight, int32_t windingRule) {
	$useLocalCurrentObjectStackCache();
	this->windingRule = windingRule;
	$init($MarlinConst);
	this->boundsMinX = $sl(pix_boundsX, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	this->boundsMaxX = $sl(pix_boundsX + pix_boundsWidth, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	this->boundsMinY = $sl(pix_boundsY, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	this->boundsMaxY = $sl(pix_boundsY + pix_boundsHeight, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"boundsXY = ["_s, $$str(this->boundsMinX), " ... "_s, $$str(this->boundsMaxX), "[ ["_s, $$str(this->boundsMinY), " ... "_s, $$str(this->boundsMaxY), "["_s}));
	}
	int32_t edgeBucketsLength = (this->boundsMaxY - this->boundsMinY) + 1;
	if (edgeBucketsLength > Renderer::INITIAL_BUCKET_ARRAY) {
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_edgeBuckets)->add(edgeBucketsLength);
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_edgeBucketCounts)->add(edgeBucketsLength);
		}
		$set(this, edgeBuckets, $nc(this->edgeBuckets_ref)->getArray(edgeBucketsLength));
		$set(this, edgeBucketCounts, $nc(this->edgeBucketCounts_ref)->getArray(edgeBucketsLength));
	}
	this->edgeMinY = $Integer::MAX_VALUE;
	this->edgeMaxY = $Integer::MIN_VALUE;
	$init($Double);
	this->edgeMinX = $Double::POSITIVE_INFINITY;
	this->edgeMaxX = $Double::NEGATIVE_INFINITY;
	this->edgeCount = 0;
	this->activeEdgeMaxUsed = 0;
	$nc(this->edges)->used = 0;
	return this;
}

void Renderer::dispose() {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_activeEdges)->add(this->activeEdgeMaxUsed);
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_edges)->add($nc(this->edges)->used);
		$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_edges_count)->add($div($nc(this->edges)->used, Renderer::SIZEOF_EDGE_BYTES));
		$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_edges_count)->add($div($nc(this->edges)->used, Renderer::SIZEOF_EDGE_BYTES));
		$nc($nc(this->rdrCtx)->stats$)->totalOffHeap += $nc(this->edges)->length;
	}
	$set(this, crossings, $nc(this->crossings_ref)->putArray(this->crossings));
	$set(this, aux_crossings, $nc(this->aux_crossings_ref)->putArray(this->aux_crossings));
	$set(this, edgePtrs, $nc(this->edgePtrs_ref)->putArray(this->edgePtrs));
	$set(this, aux_edgePtrs, $nc(this->aux_edgePtrs_ref)->putArray(this->aux_edgePtrs));
	$set(this, alphaLine, $nc(this->alphaLine_ref)->putArray(this->alphaLine, 0, 0));
	$set(this, blkFlags, $nc(this->blkFlags_ref)->putArray(this->blkFlags, 0, 0));
	if (this->edgeMinY != $Integer::MAX_VALUE) {
		if ($nc(this->rdrCtx)->dirty) {
			this->buckets_minY = 0;
			this->buckets_maxY = this->boundsMaxY - this->boundsMinY;
		}
		$set(this, edgeBuckets, $nc(this->edgeBuckets_ref)->putArray(this->edgeBuckets, this->buckets_minY, this->buckets_maxY));
		$set(this, edgeBucketCounts, $nc(this->edgeBucketCounts_ref)->putArray(this->edgeBucketCounts, this->buckets_minY, this->buckets_maxY + 1));
	} else {
		$set(this, edgeBuckets, $nc(this->edgeBuckets_ref)->putArray(this->edgeBuckets, 0, 0));
		$set(this, edgeBucketCounts, $nc(this->edgeBucketCounts_ref)->putArray(this->edgeBucketCounts, 0, 0));
	}
	if ($nc(this->edges)->length != $MarlinConst::INITIAL_EDGES_CAPACITY) {
		$nc(this->edges)->resize($MarlinConst::INITIAL_EDGES_CAPACITY);
	}
	$DMarlinRenderingEngine::returnRendererContext(this->rdrCtx);
}

double Renderer::tosubpixx(double pix_x) {
	$init(Renderer);
	return Renderer::SUBPIXEL_SCALE_X * pix_x;
}

double Renderer::tosubpixy(double pix_y) {
	$init(Renderer);
	return Renderer::SUBPIXEL_SCALE_Y * pix_y - 0.5;
}

void Renderer::moveTo(double pix_x0, double pix_y0) {
	closePath();
	double sx = tosubpixx(pix_x0);
	double sy = tosubpixy(pix_y0);
	this->sx0 = sx;
	this->sy0 = sy;
	this->x0 = sx;
	this->y0 = sy;
}

void Renderer::lineTo(double pix_x1, double pix_y1) {
	double x1 = tosubpixx(pix_x1);
	double y1 = tosubpixy(pix_y1);
	addLine(this->x0, this->y0, x1, y1);
	this->x0 = x1;
	this->y0 = y1;
}

void Renderer::curveTo(double pix_x1, double pix_y1, double pix_x2, double pix_y2, double pix_x3, double pix_y3) {
	double xe = tosubpixx(pix_x3);
	double ye = tosubpixy(pix_y3);
	double var$0 = this->x0;
	double var$1 = this->y0;
	double var$2 = tosubpixx(pix_x1);
	double var$3 = tosubpixy(pix_y1);
	double var$4 = tosubpixx(pix_x2);
	$nc(this->curve)->set(var$0, var$1, var$2, var$3, var$4, tosubpixy(pix_y2), xe, ye);
	curveBreakIntoLinesAndAdd(this->x0, this->y0, this->curve, xe, ye);
	this->x0 = xe;
	this->y0 = ye;
}

void Renderer::quadTo(double pix_x1, double pix_y1, double pix_x2, double pix_y2) {
	double xe = tosubpixx(pix_x2);
	double ye = tosubpixy(pix_y2);
	double var$0 = this->x0;
	double var$1 = this->y0;
	double var$2 = tosubpixx(pix_x1);
	$nc(this->curve)->set(var$0, var$1, var$2, tosubpixy(pix_y1), xe, ye);
	quadBreakIntoLinesAndAdd(this->x0, this->y0, this->curve, xe, ye);
	this->x0 = xe;
	this->y0 = ye;
}

void Renderer::closePath() {
	if (this->x0 != this->sx0 || this->y0 != this->sy0) {
		addLine(this->x0, this->y0, this->sx0, this->sy0);
		this->x0 = this->sx0;
		this->y0 = this->sy0;
	}
}

void Renderer::pathDone() {
	closePath();
}

int64_t Renderer::getNativeConsumer() {
	$throwNew($InternalError, "Renderer does not use a native consumer."_s);
	$shouldNotReachHere();
}

void Renderer::_endRendering(int32_t ymin, int32_t ymax) {
	$useLocalCurrentObjectStackCache();
	int32_t bboxx0 = this->bbox_spminX;
	int32_t bboxx1 = this->bbox_spmaxX;
	bool windingRuleEvenOdd = (this->windingRule == $MarlinConst::WIND_EVEN_ODD);
	$var($ints, _alpha, this->alphaLine);
	$var($MarlinCache, _cache, this->cache);
	$var($OffHeapArray, _edges, this->edges);
	$var($ints, _edgeBuckets, this->edgeBuckets);
	$var($ints, _edgeBucketCounts, this->edgeBucketCounts);
	$var($ints, _crossings, this->crossings);
	$var($ints, _edgePtrs, this->edgePtrs);
	$var($ints, _aux_crossings, this->aux_crossings);
	$var($ints, _aux_edgePtrs, this->aux_edgePtrs);
	int64_t _OFF_ERROR = Renderer::OFF_ERROR;
	int64_t _OFF_BUMP_X = Renderer::OFF_BUMP_X;
	int64_t _OFF_BUMP_ERR = Renderer::OFF_BUMP_ERR;
	int64_t _OFF_NEXT = Renderer::OFF_NEXT;
	int64_t _OFF_YMAX = Renderer::OFF_YMAX;
	int32_t _ALL_BUT_LSB = Renderer::ALL_BUT_LSB;
	int32_t _ERR_STEP_MAX = Renderer::ERR_STEP_MAX;
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t addr0 = $nc(_edges)->address;
	int64_t addr = 0;
	$init($MarlinConst);
	int32_t _SUBPIXEL_LG_POSITIONS_X = $MarlinConst::SUBPIXEL_LG_POSITIONS_X;
	int32_t _SUBPIXEL_LG_POSITIONS_Y = $MarlinConst::SUBPIXEL_LG_POSITIONS_Y;
	int32_t _SUBPIXEL_MASK_X = Renderer::SUBPIXEL_MASK_X;
	int32_t _SUBPIXEL_MASK_Y = Renderer::SUBPIXEL_MASK_Y;
	int32_t _SUBPIXEL_POSITIONS_X = $MarlinConst::SUBPIXEL_POSITIONS_X;
	int32_t _MIN_VALUE = $Integer::MIN_VALUE;
	int32_t _MAX_VALUE = $Integer::MAX_VALUE;
	int32_t minX = _MAX_VALUE;
	int32_t maxX = _MIN_VALUE;
	int32_t y = ymin;
	int32_t bucket = y - this->boundsMinY;
	int32_t numCrossings = this->edgeCount;
	int32_t edgePtrsLen = $nc(_edgePtrs)->length;
	int32_t crossingsLen = $nc(_crossings)->length;
	int32_t _arrayMaxUsed = this->activeEdgeMaxUsed;
	int32_t ptrLen = 0;
	int32_t newCount = 0;
	int32_t ptrEnd = 0;
	int32_t bucketcount = 0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t ecur = 0;
	int32_t cross = 0;
	int32_t lastCross = 0;
	int32_t x0 = 0;
	int32_t x1 = 0;
	int32_t tmp = 0;
	int32_t sum = 0;
	int32_t prev = 0;
	int32_t curx = 0;
	int32_t curxo = 0;
	int32_t crorientation = 0;
	int32_t err = 0;
	int32_t pix_x = 0;
	int32_t pix_xmaxm1 = 0;
	int32_t pix_xmax = 0;
	int32_t low = 0;
	int32_t high = 0;
	int32_t mid = 0;
	int32_t prevNumCrossings = 0;
	bool useBinarySearch = false;
	$var($ints, _blkFlags, this->blkFlags);
	int32_t _BLK_SIZE_LG = $MarlinConst::BLOCK_SIZE_LG;
	int32_t _BLK_SIZE = $MarlinConst::BLOCK_SIZE;
	bool _enableBlkFlagsHeuristics = Renderer::ENABLE_BLOCK_FLAGS_HEURISTICS && this->enableBlkFlags;
	bool useBlkFlags = this->prevUseBlkFlags;
	int32_t stroking = $nc(this->rdrCtx)->stroking;
	int32_t lastY = -1;
	for (; y < ymax; ++y, ++bucket) {
		bucketcount = $nc(_edgeBucketCounts)->get(bucket);
		prevNumCrossings = numCrossings;
		if (bucketcount != 0) {
			if ($MarlinConst::DO_STATS) {
				$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_activeEdges_updates)->add(numCrossings);
			}
			if (((int32_t)(bucketcount & (uint32_t)1)) != 0) {
				addr = addr0 + _OFF_YMAX;
				for (i = 0, newCount = 0; i < numCrossings; ++i) {
					ecur = _edgePtrs->get(i);
					if ($nc(_unsafe)->getInt(addr + ecur) > y) {
						_edgePtrs->set(newCount++, ecur);
					}
				}
				prevNumCrossings = (numCrossings = newCount);
			}
			ptrLen = bucketcount >> 1;
			if (ptrLen != 0) {
				if ($MarlinConst::DO_STATS) {
					$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_activeEdges_adds)->add(ptrLen);
					if (ptrLen > 10) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_activeEdges_adds_high)->add(ptrLen);
					}
				}
				ptrEnd = numCrossings + ptrLen;
				if (edgePtrsLen < ptrEnd) {
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_edgePtrs)->add(ptrEnd);
					}
					$set(this, edgePtrs, ($assign(_edgePtrs, $nc(this->edgePtrs_ref)->widenArray(_edgePtrs, numCrossings, ptrEnd))));
					edgePtrsLen = $nc(_edgePtrs)->length;
					$nc(this->aux_edgePtrs_ref)->putArray(_aux_edgePtrs);
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_aux_edgePtrs)->add(ptrEnd);
					}
					$set(this, aux_edgePtrs, ($assign(_aux_edgePtrs, $nc(this->aux_edgePtrs_ref)->getArray($ArrayCacheConst::getNewSize(numCrossings, ptrEnd)))));
				}
				addr = addr0 + _OFF_NEXT;
				for (ecur = $nc(_edgeBuckets)->get(bucket); numCrossings < ptrEnd; ++numCrossings) {
					_edgePtrs->set(numCrossings, ecur);
					ecur = $nc(_unsafe)->getInt(addr + ecur);
				}
				if (crossingsLen < numCrossings) {
					$nc(this->crossings_ref)->putArray(_crossings);
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_crossings)->add(numCrossings);
					}
					$set(this, crossings, ($assign(_crossings, $nc(this->crossings_ref)->getArray(numCrossings))));
					$nc(this->aux_crossings_ref)->putArray(_aux_crossings);
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_aux_crossings)->add(numCrossings);
					}
					$set(this, aux_crossings, ($assign(_aux_crossings, $nc(this->aux_crossings_ref)->getArray(numCrossings))));
					crossingsLen = $nc(_crossings)->length;
				}
				if ($MarlinConst::DO_STATS) {
					if (numCrossings > _arrayMaxUsed) {
						_arrayMaxUsed = numCrossings;
					}
				}
			}
		}
		if (numCrossings != 0) {
			if ((ptrLen < 10) || (numCrossings < 40)) {
				if ($MarlinConst::DO_STATS) {
					$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_crossings)->add(numCrossings);
					$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_crossings_adds)->add(ptrLen);
				}
				useBinarySearch = (numCrossings >= 20);
				lastCross = _MIN_VALUE;
				for (i = 0; i < numCrossings; ++i) {
					ecur = _edgePtrs->get(i);
					addr = addr0 + ecur;
					curx = $nc(_unsafe)->getInt(addr);
					cross = curx;
					curx += _unsafe->getInt(addr + _OFF_BUMP_X);
					int32_t var$0 = _unsafe->getInt(addr + _OFF_ERROR);
					err = var$0 + _unsafe->getInt(addr + _OFF_BUMP_ERR);
					_unsafe->putInt(addr, curx - ((int32_t)((err >> 30) & (uint32_t)_ALL_BUT_LSB)));
					_unsafe->putInt(addr + _OFF_ERROR, ((int32_t)(err & (uint32_t)_ERR_STEP_MAX)));
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_updates)->add(numCrossings);
					}
					if (cross < lastCross) {
						if ($MarlinConst::DO_STATS) {
							$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_sorts)->add(i);
						}
						if (useBinarySearch && (i >= prevNumCrossings)) {
							if ($MarlinConst::DO_STATS) {
								$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_bsearch)->add(i);
							}
							low = 0;
							high = i - 1;
							do {
								mid = (low + high) >> 1;
								if (_crossings->get(mid) < cross) {
									low = mid + 1;
								} else {
									high = mid - 1;
								}
							} while (low <= high);
							for (j = i - 1; j >= low; --j) {
								_crossings->set(j + 1, _crossings->get(j));
								_edgePtrs->set(j + 1, _edgePtrs->get(j));
							}
							_crossings->set(low, cross);
							_edgePtrs->set(low, ecur);
						} else {
							j = i - 1;
							_crossings->set(i, _crossings->get(j));
							_edgePtrs->set(i, _edgePtrs->get(j));
							while (true) {
								bool var$1 = (--j >= 0);
								if (!(var$1 && (_crossings->get(j) > cross))) {
									break;
								}
								{
									_crossings->set(j + 1, _crossings->get(j));
									_edgePtrs->set(j + 1, _edgePtrs->get(j));
								}
							}
							_crossings->set(j + 1, cross);
							_edgePtrs->set(j + 1, ecur);
						}
					} else {
						_crossings->set(i, lastCross = cross);
					}
				}
			} else {
				if ($MarlinConst::DO_STATS) {
					$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_msorts)->add(numCrossings);
					$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_crossings_ratio)->add($div((1000 * ptrLen), numCrossings));
					$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_crossings_msorts)->add(numCrossings);
					$nc($nc($nc(this->rdrCtx)->stats$)->hist_rdr_crossings_msorts_adds)->add(ptrLen);
				}
				lastCross = _MIN_VALUE;
				for (i = 0; i < numCrossings; ++i) {
					ecur = _edgePtrs->get(i);
					addr = addr0 + ecur;
					curx = $nc(_unsafe)->getInt(addr);
					cross = curx;
					curx += _unsafe->getInt(addr + _OFF_BUMP_X);
					int32_t var$2 = _unsafe->getInt(addr + _OFF_ERROR);
					err = var$2 + _unsafe->getInt(addr + _OFF_BUMP_ERR);
					_unsafe->putInt(addr, curx - ((int32_t)((err >> 30) & (uint32_t)_ALL_BUT_LSB)));
					_unsafe->putInt(addr + _OFF_ERROR, ((int32_t)(err & (uint32_t)_ERR_STEP_MAX)));
					if ($MarlinConst::DO_STATS) {
						$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_updates)->add(numCrossings);
					}
					if (i >= prevNumCrossings) {
						_crossings->set(i, cross);
					} else if (cross < lastCross) {
						if ($MarlinConst::DO_STATS) {
							$nc($nc($nc(this->rdrCtx)->stats$)->stat_rdr_crossings_sorts)->add(i);
						}
						j = i - 1;
						$nc(_aux_crossings)->set(i, _aux_crossings->get(j));
						$nc(_aux_edgePtrs)->set(i, _aux_edgePtrs->get(j));
						while (true) {
							bool var$3 = (--j >= 0);
							if (!(var$3 && (_aux_crossings->get(j) > cross))) {
								break;
							}
							{
								_aux_crossings->set(j + 1, _aux_crossings->get(j));
								_aux_edgePtrs->set(j + 1, _aux_edgePtrs->get(j));
							}
						}
						_aux_crossings->set(j + 1, cross);
						_aux_edgePtrs->set(j + 1, ecur);
					} else {
						$nc(_aux_crossings)->set(i, lastCross = cross);
						$nc(_aux_edgePtrs)->set(i, ecur);
					}
				}
				$MergeSort::mergeSortNoCopy(_crossings, _edgePtrs, _aux_crossings, _aux_edgePtrs, numCrossings, prevNumCrossings);
			}
			ptrLen = 0;
			curxo = _crossings->get(0);
			x0 = curxo >> 1;
			if (x0 < minX) {
				minX = x0;
			}
			x1 = _crossings->get(numCrossings - 1) >> 1;
			if (x1 > maxX) {
				maxX = x1;
			}
			prev = (curx = x0);
			crorientation = (((int32_t)(curxo & (uint32_t)1)) << 1) - 1;
			if (windingRuleEvenOdd) {
				sum = crorientation;
				for (i = 1; i < numCrossings; ++i) {
					curxo = _crossings->get(i);
					curx = curxo >> 1;
					crorientation = (((int32_t)(curxo & (uint32_t)1)) << 1) - 1;
					if (((int32_t)(sum & (uint32_t)1)) != 0) {
						x0 = (prev > bboxx0) ? prev : bboxx0;
						if (curx < bboxx1) {
							x1 = curx;
						} else {
							x1 = bboxx1;
							i = numCrossings;
						}
						if (x0 < x1) {
							x0 -= bboxx0;
							x1 -= bboxx0;
							pix_x = $sr(x0, _SUBPIXEL_LG_POSITIONS_X);
							pix_xmaxm1 = $sr(x1 - 1, _SUBPIXEL_LG_POSITIONS_X);
							if (pix_x == pix_xmaxm1) {
								tmp = (x1 - x0);
								(*$nc(_alpha))[pix_x] += tmp;
								(*_alpha)[pix_x + 1] -= tmp;
								if (useBlkFlags) {
									$nc(_blkFlags)->set($sr(pix_x, _BLK_SIZE_LG), 1);
								}
							} else {
								tmp = ((int32_t)(x0 & (uint32_t)_SUBPIXEL_MASK_X));
								(*$nc(_alpha))[pix_x] += (_SUBPIXEL_POSITIONS_X - tmp);
								(*_alpha)[pix_x + 1] += tmp;
								pix_xmax = $sr(x1, _SUBPIXEL_LG_POSITIONS_X);
								tmp = ((int32_t)(x1 & (uint32_t)_SUBPIXEL_MASK_X));
								(*_alpha)[pix_xmax] -= (_SUBPIXEL_POSITIONS_X - tmp);
								(*_alpha)[pix_xmax + 1] -= tmp;
								if (useBlkFlags) {
									$nc(_blkFlags)->set($sr(pix_x, _BLK_SIZE_LG), 1);
									_blkFlags->set($sr(pix_xmax, _BLK_SIZE_LG), 1);
								}
							}
						}
					}
					sum += crorientation;
					prev = curx;
				}
			} else {
				for (i = 1, sum = 0;; ++i) {
					sum += crorientation;
					if (sum != 0) {
						if (prev > curx) {
							prev = curx;
						}
					} else {
						x0 = (prev > bboxx0) ? prev : bboxx0;
						if (curx < bboxx1) {
							x1 = curx;
						} else {
							x1 = bboxx1;
							i = numCrossings;
						}
						if (x0 < x1) {
							x0 -= bboxx0;
							x1 -= bboxx0;
							pix_x = $sr(x0, _SUBPIXEL_LG_POSITIONS_X);
							pix_xmaxm1 = $sr(x1 - 1, _SUBPIXEL_LG_POSITIONS_X);
							if (pix_x == pix_xmaxm1) {
								tmp = (x1 - x0);
								(*$nc(_alpha))[pix_x] += tmp;
								(*_alpha)[pix_x + 1] -= tmp;
								if (useBlkFlags) {
									$nc(_blkFlags)->set($sr(pix_x, _BLK_SIZE_LG), 1);
								}
							} else {
								tmp = ((int32_t)(x0 & (uint32_t)_SUBPIXEL_MASK_X));
								(*$nc(_alpha))[pix_x] += (_SUBPIXEL_POSITIONS_X - tmp);
								(*_alpha)[pix_x + 1] += tmp;
								pix_xmax = $sr(x1, _SUBPIXEL_LG_POSITIONS_X);
								tmp = ((int32_t)(x1 & (uint32_t)_SUBPIXEL_MASK_X));
								(*_alpha)[pix_xmax] -= (_SUBPIXEL_POSITIONS_X - tmp);
								(*_alpha)[pix_xmax + 1] -= tmp;
								if (useBlkFlags) {
									$nc(_blkFlags)->set($sr(pix_x, _BLK_SIZE_LG), 1);
									_blkFlags->set($sr(pix_xmax, _BLK_SIZE_LG), 1);
								}
							}
						}
						prev = _MAX_VALUE;
					}
					if (i == numCrossings) {
						break;
					}
					curxo = _crossings->get(i);
					curx = curxo >> 1;
					crorientation = (((int32_t)(curxo & (uint32_t)1)) << 1) - 1;
				}
			}
		}
		if (((int32_t)(y & (uint32_t)_SUBPIXEL_MASK_Y)) == _SUBPIXEL_MASK_Y) {
			lastY = $sr(y, _SUBPIXEL_LG_POSITIONS_Y);
			minX = $sr($FloatMath::max(minX, bboxx0), _SUBPIXEL_LG_POSITIONS_X);
			maxX = $sr($FloatMath::min(maxX, bboxx1), _SUBPIXEL_LG_POSITIONS_X);
			if (maxX >= minX) {
				copyAARow(_alpha, lastY, minX, maxX + 1, useBlkFlags);
				if (_enableBlkFlagsHeuristics) {
					maxX -= minX;
					useBlkFlags = (maxX > _BLK_SIZE) && (maxX > ($sl(($sr(numCrossings, stroking)) - 1, _BLK_SIZE_LG)));
					if ($MarlinConst::DO_STATS) {
						tmp = $FloatMath::max(1, (($sr(numCrossings, stroking)) - 1));
						$nc($nc($nc(this->rdrCtx)->stats$)->hist_tile_generator_encoding_dist)->add($div(maxX, tmp));
					}
				}
			} else {
				$nc(_cache)->clearAARow(lastY);
			}
			minX = _MAX_VALUE;
			maxX = _MIN_VALUE;
		}
	}
	--y;
	y >>= _SUBPIXEL_LG_POSITIONS_Y;
	minX = $sr($FloatMath::max(minX, bboxx0), _SUBPIXEL_LG_POSITIONS_X);
	maxX = $sr($FloatMath::min(maxX, bboxx1), _SUBPIXEL_LG_POSITIONS_X);
	if (maxX >= minX) {
		copyAARow(_alpha, y, minX, maxX + 1, useBlkFlags);
	} else if (y != lastY) {
		$nc(_cache)->clearAARow(y);
	}
	this->edgeCount = numCrossings;
	this->prevUseBlkFlags = useBlkFlags;
	if ($MarlinConst::DO_STATS) {
		this->activeEdgeMaxUsed = _arrayMaxUsed;
	}
}

bool Renderer::endRendering() {
	$useLocalCurrentObjectStackCache();
	if (this->edgeMinY == $Integer::MAX_VALUE) {
		return false;
	}
	int32_t spminX = $FloatMath::max($FloatMath::ceil_int(this->edgeMinX - 0.5), this->boundsMinX);
	int32_t spmaxX = $FloatMath::min($FloatMath::ceil_int(this->edgeMaxX - 0.5), this->boundsMaxX);
	int32_t spminY = this->edgeMinY;
	int32_t spmaxY = this->edgeMaxY;
	this->buckets_minY = spminY - this->boundsMinY;
	this->buckets_maxY = spmaxY - this->boundsMinY;
	$init($MarlinConst);
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"edgesXY = ["_s, $$str(this->edgeMinX), " ... "_s, $$str(this->edgeMaxX), "[ ["_s, $$str(this->edgeMinY), " ... "_s, $$str(this->edgeMaxY), "["_s}));
		$MarlinUtils::logInfo($$str({"spXY    = ["_s, $$str(spminX), " ... "_s, $$str(spmaxX), "[ ["_s, $$str(spminY), " ... "_s, $$str(spmaxY), "["_s}));
	}
	if ((spminX >= spmaxX) || (spminY >= spmaxY)) {
		return false;
	}
	int32_t pminX = $sr(spminX, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	int32_t pmaxX = $sr(spmaxX + Renderer::SUBPIXEL_MASK_X, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	int32_t pminY = $sr(spminY, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	int32_t pmaxY = $sr(spmaxY + Renderer::SUBPIXEL_MASK_Y, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	$nc(this->cache)->init(pminX, pminY, pmaxX, pmaxY);
	if (Renderer::ENABLE_BLOCK_FLAGS) {
		this->enableBlkFlags = $nc(this->cache)->useRLE;
		this->prevUseBlkFlags = this->enableBlkFlags && !Renderer::ENABLE_BLOCK_FLAGS_HEURISTICS;
		if (this->enableBlkFlags) {
			int32_t blkLen = ($sr(pmaxX - pminX, $MarlinConst::BLOCK_SIZE_LG)) + 2;
			if (blkLen > $MarlinConst::INITIAL_ARRAY) {
				$set(this, blkFlags, $nc(this->blkFlags_ref)->getArray(blkLen));
			}
		}
	}
	this->bbox_spminX = $sl(pminX, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	this->bbox_spmaxX = $sl(pmaxX, $MarlinConst::SUBPIXEL_LG_POSITIONS_X);
	this->bbox_spminY = spminY;
	this->bbox_spmaxY = spmaxY;
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"pXY       = ["_s, $$str(pminX), " ... "_s, $$str(pmaxX), "[ ["_s, $$str(pminY), " ... "_s, $$str(pmaxY), "["_s}));
		$MarlinUtils::logInfo($$str({"bbox_spXY = ["_s, $$str(this->bbox_spminX), " ... "_s, $$str(this->bbox_spmaxX), "[ ["_s, $$str(this->bbox_spminY), " ... "_s, $$str(this->bbox_spmaxY), "["_s}));
	}
	int32_t width = (pmaxX - pminX) + 2;
	if (width > $MarlinConst::INITIAL_AA_ARRAY) {
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_renderer_alphaline)->add(width);
		}
		$set(this, alphaLine, $nc(this->alphaLine_ref)->getArray(width));
	}
	endRendering(pminY);
	return true;
}

void Renderer::endRendering(int32_t pminY) {
	$init($MarlinConst);
	int32_t spminY = $sl(pminY, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	int32_t fixed_spminY = $FloatMath::max(this->bbox_spminY, spminY);
	if (fixed_spminY < this->bbox_spmaxY) {
		int32_t spmaxY = $FloatMath::min(this->bbox_spmaxY, spminY + Renderer::SUBPIXEL_TILE);
		$nc(this->cache)->resetTileLine(pminY);
		_endRendering(fixed_spminY, spmaxY);
	}
}

void Renderer::copyAARow($ints* alphaRow, int32_t pix_y, int32_t pix_from, int32_t pix_to, bool useBlockFlags) {
	if (useBlockFlags) {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->hist_tile_generator_encoding)->add(1);
		}
		$nc(this->cache)->copyAARowRLE_WithBlockFlags(this->blkFlags, alphaRow, pix_y, pix_from, pix_to);
	} else {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->hist_tile_generator_encoding)->add(0);
		}
		$nc(this->cache)->copyAARowNoRLE(alphaRow, pix_y, pix_from, pix_to);
	}
}

void clinit$Renderer($Class* class$) {
	Renderer::POWER_2_TO_32 = 4.294967296E9;
	Renderer::CUB_INV_COUNT = $div(1.0, Renderer::CUB_COUNT);
	Renderer::CUB_INV_COUNT_2 = $div(1.0, Renderer::CUB_COUNT_2);
	Renderer::CUB_INV_COUNT_3 = $div(1.0, Renderer::CUB_COUNT_3);
	Renderer::ENABLE_BLOCK_FLAGS = $MarlinProperties::isUseTileFlags();
	Renderer::ENABLE_BLOCK_FLAGS_HEURISTICS = $MarlinProperties::isUseTileFlagsWithHeuristics();
	$init($MarlinConst);
	Renderer::SUBPIXEL_SCALE_X = (double)$MarlinConst::SUBPIXEL_POSITIONS_X;
	Renderer::SUBPIXEL_SCALE_Y = (double)$MarlinConst::SUBPIXEL_POSITIONS_Y;
	Renderer::SUBPIXEL_MASK_X = $MarlinConst::SUBPIXEL_POSITIONS_X - 1;
	Renderer::SUBPIXEL_MASK_Y = $MarlinConst::SUBPIXEL_POSITIONS_Y - 1;
	Renderer::RDR_OFFSET_X = 0.5 / Renderer::SUBPIXEL_SCALE_X;
	Renderer::RDR_OFFSET_Y = 0.5 / Renderer::SUBPIXEL_SCALE_Y;
	Renderer::SUBPIXEL_TILE = $sl($MarlinConst::TILE_H, $MarlinConst::SUBPIXEL_LG_POSITIONS_Y);
	Renderer::INITIAL_BUCKET_ARRAY = $MarlinConst::INITIAL_PIXEL_HEIGHT * $MarlinConst::SUBPIXEL_POSITIONS_Y;
	Renderer::INITIAL_CROSSING_COUNT = $MarlinConst::INITIAL_EDGES_COUNT >> 2;
	$init($OffHeapArray);
	Renderer::OFF_ERROR = Renderer::OFF_CURX_OR + $OffHeapArray::SIZE_INT;
	Renderer::OFF_BUMP_X = Renderer::OFF_ERROR + $OffHeapArray::SIZE_INT;
	Renderer::OFF_BUMP_ERR = Renderer::OFF_BUMP_X + $OffHeapArray::SIZE_INT;
	Renderer::OFF_NEXT = Renderer::OFF_BUMP_ERR + $OffHeapArray::SIZE_INT;
	Renderer::OFF_YMAX = Renderer::OFF_NEXT + $OffHeapArray::SIZE_INT;
	Renderer::SIZEOF_EDGE_BYTES = (int32_t)(Renderer::OFF_YMAX + $OffHeapArray::SIZE_INT);
	Renderer::CUB_DEC_ERR_SUBPIX = $MarlinProperties::getCubicDecD2() * ($MarlinConst::SUBPIXEL_POSITIONS_X / 8.0);
	Renderer::CUB_INC_ERR_SUBPIX = $MarlinProperties::getCubicIncD1() * ($MarlinConst::SUBPIXEL_POSITIONS_X / 8.0);
	Renderer::SCALE_DY = ((double)$MarlinConst::SUBPIXEL_POSITIONS_X) / $MarlinConst::SUBPIXEL_POSITIONS_Y;
	Renderer::CUB_DEC_BND = 8.0 * Renderer::CUB_DEC_ERR_SUBPIX;
	Renderer::CUB_INC_BND = 8.0 * Renderer::CUB_INC_ERR_SUBPIX;
	Renderer::QUAD_DEC_ERR_SUBPIX = $MarlinProperties::getQuadDecD2() * ($MarlinConst::SUBPIXEL_POSITIONS_X / 8.0);
	Renderer::QUAD_DEC_BND = 8.0 * Renderer::QUAD_DEC_ERR_SUBPIX;
}

Renderer::Renderer() {
}

$Class* Renderer::load$($String* name, bool initialize) {
	$loadClass(Renderer, name, initialize, &_Renderer_ClassInfo_, clinit$Renderer, allocate$Renderer);
	return class$;
}

$Class* Renderer::class$ = nullptr;

		} // marlin
	} // java2d
} // sun