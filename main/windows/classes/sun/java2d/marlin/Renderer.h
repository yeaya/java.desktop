#ifndef _sun_java2d_marlin_Renderer_h_
#define _sun_java2d_marlin_Renderer_h_
//$ class sun.java2d.marlin.Renderer
//$ extends sun.java2d.marlin.DPathConsumer2D
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("ALL_BUT_LSB")
#undef ALL_BUT_LSB
#pragma push_macro("CUB_COUNT")
#undef CUB_COUNT
#pragma push_macro("CUB_COUNT_2")
#undef CUB_COUNT_2
#pragma push_macro("CUB_COUNT_3")
#undef CUB_COUNT_3
#pragma push_macro("CUB_COUNT_LG")
#undef CUB_COUNT_LG
#pragma push_macro("CUB_DEC_BND")
#undef CUB_DEC_BND
#pragma push_macro("CUB_DEC_ERR_SUBPIX")
#undef CUB_DEC_ERR_SUBPIX
#pragma push_macro("CUB_INC_BND")
#undef CUB_INC_BND
#pragma push_macro("CUB_INC_ERR_SUBPIX")
#undef CUB_INC_ERR_SUBPIX
#pragma push_macro("CUB_INV_COUNT")
#undef CUB_INV_COUNT
#pragma push_macro("CUB_INV_COUNT_2")
#undef CUB_INV_COUNT_2
#pragma push_macro("CUB_INV_COUNT_3")
#undef CUB_INV_COUNT_3
#pragma push_macro("DISABLE_RENDER")
#undef DISABLE_RENDER
#pragma push_macro("ENABLE_BLOCK_FLAGS")
#undef ENABLE_BLOCK_FLAGS
#pragma push_macro("ENABLE_BLOCK_FLAGS_HEURISTICS")
#undef ENABLE_BLOCK_FLAGS_HEURISTICS
#pragma push_macro("ERR_STEP_MAX")
#undef ERR_STEP_MAX
#pragma push_macro("INITIAL_BUCKET_ARRAY")
#undef INITIAL_BUCKET_ARRAY
#pragma push_macro("INITIAL_CROSSING_COUNT")
#undef INITIAL_CROSSING_COUNT
#pragma push_macro("OFF_BUMP_ERR")
#undef OFF_BUMP_ERR
#pragma push_macro("OFF_BUMP_X")
#undef OFF_BUMP_X
#pragma push_macro("OFF_CURX_OR")
#undef OFF_CURX_OR
#pragma push_macro("OFF_ERROR")
#undef OFF_ERROR
#pragma push_macro("OFF_NEXT")
#undef OFF_NEXT
#pragma push_macro("OFF_YMAX")
#undef OFF_YMAX
#pragma push_macro("POWER_2_TO_32")
#undef POWER_2_TO_32
#pragma push_macro("QUAD_DEC_BND")
#undef QUAD_DEC_BND
#pragma push_macro("QUAD_DEC_ERR_SUBPIX")
#undef QUAD_DEC_ERR_SUBPIX
#pragma push_macro("RDR_OFFSET_X")
#undef RDR_OFFSET_X
#pragma push_macro("RDR_OFFSET_Y")
#undef RDR_OFFSET_Y
#pragma push_macro("SCALE_DY")
#undef SCALE_DY
#pragma push_macro("SIZEOF_EDGE_BYTES")
#undef SIZEOF_EDGE_BYTES
#pragma push_macro("SUBPIXEL_MASK_X")
#undef SUBPIXEL_MASK_X
#pragma push_macro("SUBPIXEL_MASK_Y")
#undef SUBPIXEL_MASK_Y
#pragma push_macro("SUBPIXEL_SCALE_X")
#undef SUBPIXEL_SCALE_X
#pragma push_macro("SUBPIXEL_SCALE_Y")
#undef SUBPIXEL_SCALE_Y
#pragma push_macro("SUBPIXEL_TILE")
#undef SUBPIXEL_TILE

namespace sun {
	namespace java2d {
		namespace marlin {
			class Curve;
			class IntArrayCache$Reference;
			class MarlinCache;
			class OffHeapArray;
			class RendererContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Renderer : public ::sun::java2d::marlin::DPathConsumer2D, public ::sun::java2d::marlin::MarlinConst {
	$class(Renderer, 0, ::sun::java2d::marlin::DPathConsumer2D, ::sun::java2d::marlin::MarlinConst)
public:
	Renderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void _endRendering(int32_t ymin, int32_t ymax);
	void addLine(double x1, double y1, double x2, double y2);
	virtual void closePath() override;
	void copyAARow($ints* alphaRow, int32_t pix_y, int32_t pix_from, int32_t pix_to, bool useBlockFlags);
	void curveBreakIntoLinesAndAdd(double x0, double y0, ::sun::java2d::marlin::Curve* c, double x3, double y3);
	virtual void curveTo(double pix_x1, double pix_y1, double pix_x2, double pix_y2, double pix_x3, double pix_y3) override;
	void dispose();
	bool endRendering();
	void endRendering(int32_t pminY);
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::Renderer* init(int32_t pix_boundsX, int32_t pix_boundsY, int32_t pix_boundsWidth, int32_t pix_boundsHeight, int32_t windingRule);
	virtual void lineTo(double pix_x1, double pix_y1) override;
	virtual void moveTo(double pix_x0, double pix_y0) override;
	virtual void pathDone() override;
	void quadBreakIntoLinesAndAdd(double x0, double y0, ::sun::java2d::marlin::Curve* c, double x2, double y2);
	virtual void quadTo(double pix_x1, double pix_y1, double pix_x2, double pix_y2) override;
	virtual $String* toString() override;
	static double tosubpixx(double pix_x);
	static double tosubpixy(double pix_y);
	static const bool DISABLE_RENDER = false;
	static bool ENABLE_BLOCK_FLAGS;
	static bool ENABLE_BLOCK_FLAGS_HEURISTICS;
	static const int32_t ALL_BUT_LSB = (-2);
	static const int32_t ERR_STEP_MAX = 0x7FFFFFFF;
	static double POWER_2_TO_32;
	static double SUBPIXEL_SCALE_X;
	static double SUBPIXEL_SCALE_Y;
	static int32_t SUBPIXEL_MASK_X;
	static int32_t SUBPIXEL_MASK_Y;
	static double RDR_OFFSET_X;
	static double RDR_OFFSET_Y;
	static int32_t SUBPIXEL_TILE;
	static int32_t INITIAL_BUCKET_ARRAY;
	static int32_t INITIAL_CROSSING_COUNT;
	static const int64_t OFF_CURX_OR = 0;
	static int64_t OFF_ERROR;
	static int64_t OFF_BUMP_X;
	static int64_t OFF_BUMP_ERR;
	static int64_t OFF_NEXT;
	static int64_t OFF_YMAX;
	static int32_t SIZEOF_EDGE_BYTES;
	static double CUB_DEC_ERR_SUBPIX;
	static double CUB_INC_ERR_SUBPIX;
	static double SCALE_DY;
	static double CUB_DEC_BND;
	static double CUB_INC_BND;
	static const int32_t CUB_COUNT_LG = 2;
	static const int32_t CUB_COUNT = 4; // 1 << CUB_COUNT_LG
	static const int32_t CUB_COUNT_2 = 16; // 1 << (2 * CUB_COUNT_LG)
	static const int32_t CUB_COUNT_3 = 64; // 1 << (3 * CUB_COUNT_LG)
	static double CUB_INV_COUNT;
	static double CUB_INV_COUNT_2;
	static double CUB_INV_COUNT_3;
	static double QUAD_DEC_ERR_SUBPIX;
	static double QUAD_DEC_BND;
	$ints* crossings = nullptr;
	$ints* aux_crossings = nullptr;
	int32_t edgeCount = 0;
	$ints* edgePtrs = nullptr;
	$ints* aux_edgePtrs = nullptr;
	int32_t activeEdgeMaxUsed = 0;
	::sun::java2d::marlin::IntArrayCache$Reference* crossings_ref = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* edgePtrs_ref = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* aux_crossings_ref = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* aux_edgePtrs_ref = nullptr;
	int32_t edgeMinY = 0;
	int32_t edgeMaxY = 0;
	double edgeMinX = 0.0;
	double edgeMaxX = 0.0;
	::sun::java2d::marlin::OffHeapArray* edges = nullptr;
	$ints* edgeBuckets = nullptr;
	$ints* edgeBucketCounts = nullptr;
	int32_t buckets_minY = 0;
	int32_t buckets_maxY = 0;
	::sun::java2d::marlin::IntArrayCache$Reference* edgeBuckets_ref = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* edgeBucketCounts_ref = nullptr;
	::sun::java2d::marlin::MarlinCache* cache = nullptr;
	int32_t boundsMinX = 0;
	int32_t boundsMinY = 0;
	int32_t boundsMaxX = 0;
	int32_t boundsMaxY = 0;
	int32_t windingRule = 0;
	double x0 = 0.0;
	double y0 = 0.0;
	double sx0 = 0.0;
	double sy0 = 0.0;
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	::sun::java2d::marlin::Curve* curve = nullptr;
	$ints* alphaLine = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* alphaLine_ref = nullptr;
	bool enableBlkFlags = false;
	bool prevUseBlkFlags = false;
	$ints* blkFlags = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* blkFlags_ref = nullptr;
	int32_t bbox_spminX = 0;
	int32_t bbox_spmaxX = 0;
	int32_t bbox_spminY = 0;
	int32_t bbox_spmaxY = 0;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("ALL_BUT_LSB")
#pragma pop_macro("CUB_COUNT")
#pragma pop_macro("CUB_COUNT_2")
#pragma pop_macro("CUB_COUNT_3")
#pragma pop_macro("CUB_COUNT_LG")
#pragma pop_macro("CUB_DEC_BND")
#pragma pop_macro("CUB_DEC_ERR_SUBPIX")
#pragma pop_macro("CUB_INC_BND")
#pragma pop_macro("CUB_INC_ERR_SUBPIX")
#pragma pop_macro("CUB_INV_COUNT")
#pragma pop_macro("CUB_INV_COUNT_2")
#pragma pop_macro("CUB_INV_COUNT_3")
#pragma pop_macro("DISABLE_RENDER")
#pragma pop_macro("ENABLE_BLOCK_FLAGS")
#pragma pop_macro("ENABLE_BLOCK_FLAGS_HEURISTICS")
#pragma pop_macro("ERR_STEP_MAX")
#pragma pop_macro("INITIAL_BUCKET_ARRAY")
#pragma pop_macro("INITIAL_CROSSING_COUNT")
#pragma pop_macro("OFF_BUMP_ERR")
#pragma pop_macro("OFF_BUMP_X")
#pragma pop_macro("OFF_CURX_OR")
#pragma pop_macro("OFF_ERROR")
#pragma pop_macro("OFF_NEXT")
#pragma pop_macro("OFF_YMAX")
#pragma pop_macro("POWER_2_TO_32")
#pragma pop_macro("QUAD_DEC_BND")
#pragma pop_macro("QUAD_DEC_ERR_SUBPIX")
#pragma pop_macro("RDR_OFFSET_X")
#pragma pop_macro("RDR_OFFSET_Y")
#pragma pop_macro("SCALE_DY")
#pragma pop_macro("SIZEOF_EDGE_BYTES")
#pragma pop_macro("SUBPIXEL_MASK_X")
#pragma pop_macro("SUBPIXEL_MASK_Y")
#pragma pop_macro("SUBPIXEL_SCALE_X")
#pragma pop_macro("SUBPIXEL_SCALE_Y")
#pragma pop_macro("SUBPIXEL_TILE")

#endif // _sun_java2d_marlin_Renderer_h_