#ifndef _sun_java2d_marlin_MarlinCache_h_
#define _sun_java2d_marlin_MarlinCache_h_
//$ class sun.java2d.marlin.MarlinCache
//$ extends sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("ALPHA_MAP")
#undef ALPHA_MAP
#pragma push_macro("ALPHA_MAP_UNSAFE")
#undef ALPHA_MAP_UNSAFE
#pragma push_macro("FORCE_NO_RLE")
#undef FORCE_NO_RLE
#pragma push_macro("FORCE_RLE")
#undef FORCE_RLE
#pragma push_macro("INITIAL_CHUNK_ARRAY")
#undef INITIAL_CHUNK_ARRAY
#pragma push_macro("RLE_MAX_WIDTH")
#undef RLE_MAX_WIDTH
#pragma push_macro("RLE_MIN_WIDTH")
#undef RLE_MIN_WIDTH

namespace sun {
	namespace java2d {
		namespace marlin {
			class IntArrayCache$Reference;
			class OffHeapArray;
			class RendererContext;
			class RendererStats;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class MarlinCache : public ::sun::java2d::marlin::MarlinConst {
	$class(MarlinCache, 0, ::sun::java2d::marlin::MarlinConst)
public:
	MarlinCache();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	int32_t alphaSumInTile(int32_t x);
	static $bytes* buildAlphaMap(int32_t maxalpha);
	void clearAARow(int32_t y);
	void copyAARowNoRLE($ints* alphaRow, int32_t y, int32_t px0, int32_t px1);
	void copyAARowRLE_WithBlockFlags($ints* blkFlags, $ints* alphaRow, int32_t y, int32_t px0, int32_t px1);
	void dispose();
	void expandRowAAChunk(int64_t needSize);
	void init(int32_t minx, int32_t miny, int32_t maxx, int32_t maxy);
	void resetTileLine(int32_t pminY);
	int64_t startRLERow(int32_t row, int32_t x0, int32_t x1);
	virtual $String* toString() override;
	void touchTile(int32_t x0, int32_t val, int32_t x1, int32_t runLen, $ints* _touchedTile);
	static bool FORCE_RLE;
	static bool FORCE_NO_RLE;
	static int32_t RLE_MIN_WIDTH;
	static const int32_t RLE_MAX_WIDTH = 8388608; // 1 << (24 - 1)
	static int64_t INITIAL_CHUNK_ARRAY;
	static $bytes* ALPHA_MAP;
	static ::sun::java2d::marlin::OffHeapArray* ALPHA_MAP_UNSAFE;
	int32_t bboxX0 = 0;
	int32_t bboxY0 = 0;
	int32_t bboxX1 = 0;
	int32_t bboxY1 = 0;
	$longs* rowAAChunkIndex = nullptr;
	$ints* rowAAx0 = nullptr;
	$ints* rowAAx1 = nullptr;
	$ints* rowAAEnc = nullptr;
	$longs* rowAALen = nullptr;
	$longs* rowAAPos = nullptr;
	::sun::java2d::marlin::OffHeapArray* rowAAChunk = nullptr;
	int64_t rowAAChunkPos = 0;
	$ints* touchedTile = nullptr;
	::sun::java2d::marlin::RendererStats* rdrStats = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* touchedTile_ref = nullptr;
	int32_t tileMin = 0;
	int32_t tileMax = 0;
	bool useRLE = false;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("ALPHA_MAP")
#pragma pop_macro("ALPHA_MAP_UNSAFE")
#pragma pop_macro("FORCE_NO_RLE")
#pragma pop_macro("FORCE_RLE")
#pragma pop_macro("INITIAL_CHUNK_ARRAY")
#pragma pop_macro("RLE_MAX_WIDTH")
#pragma pop_macro("RLE_MIN_WIDTH")

#endif // _sun_java2d_marlin_MarlinCache_h_