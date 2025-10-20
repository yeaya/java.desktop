#include <sun/java2d/marlin/MarlinCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/FloatMath.h>
#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/IntArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/OffHeapArray.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef ALPHA_MAP
#undef ALPHA_MAP_UNSAFE
#undef BLOCK_SIZE
#undef BLOCK_SIZE_LG
#undef DO_CHECKS
#undef DO_LOG_BOUNDS
#undef DO_STATS
#undef FORCE_NO_RLE
#undef FORCE_RLE
#undef INITIAL_ARRAY
#undef INITIAL_CHUNK_ARRAY
#undef INITIAL_PIXEL_WIDTH
#undef MAX_AA_ALPHA
#undef MAX_VALUE
#undef MIN_VALUE
#undef RLE_MAX_WIDTH
#undef RLE_MIN_WIDTH
#undef SIZE_BYTE
#undef SIZE_INT
#undef TILE_H
#undef TILE_W
#undef TILE_W_LG
#undef UNSAFE
#undef _ALPHA_MAP
#undef _BLK_SIZE_LG
#undef _MAX_VALUE
#undef _TILE_SIZE_LG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $FloatMath = ::sun::java2d::marlin::FloatMath;
using $IntArrayCache = ::sun::java2d::marlin::IntArrayCache;
using $IntArrayCache$Reference = ::sun::java2d::marlin::IntArrayCache$Reference;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $OffHeapArray = ::sun::java2d::marlin::OffHeapArray;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _MarlinCache_FieldInfo_[] = {
	{"FORCE_RLE", "Z", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, FORCE_RLE)},
	{"FORCE_NO_RLE", "Z", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, FORCE_NO_RLE)},
	{"RLE_MIN_WIDTH", "I", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, RLE_MIN_WIDTH)},
	{"RLE_MAX_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(MarlinCache, RLE_MAX_WIDTH)},
	{"INITIAL_CHUNK_ARRAY", "J", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, INITIAL_CHUNK_ARRAY)},
	{"ALPHA_MAP", "[B", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, ALPHA_MAP)},
	{"ALPHA_MAP_UNSAFE", "Lsun/java2d/marlin/OffHeapArray;", nullptr, $STATIC | $FINAL, $staticField(MarlinCache, ALPHA_MAP_UNSAFE)},
	{"bboxX0", "I", nullptr, 0, $field(MarlinCache, bboxX0)},
	{"bboxY0", "I", nullptr, 0, $field(MarlinCache, bboxY0)},
	{"bboxX1", "I", nullptr, 0, $field(MarlinCache, bboxX1)},
	{"bboxY1", "I", nullptr, 0, $field(MarlinCache, bboxY1)},
	{"rowAAChunkIndex", "[J", nullptr, $FINAL, $field(MarlinCache, rowAAChunkIndex)},
	{"rowAAx0", "[I", nullptr, $FINAL, $field(MarlinCache, rowAAx0)},
	{"rowAAx1", "[I", nullptr, $FINAL, $field(MarlinCache, rowAAx1)},
	{"rowAAEnc", "[I", nullptr, $FINAL, $field(MarlinCache, rowAAEnc)},
	{"rowAALen", "[J", nullptr, $FINAL, $field(MarlinCache, rowAALen)},
	{"rowAAPos", "[J", nullptr, $FINAL, $field(MarlinCache, rowAAPos)},
	{"rowAAChunk", "Lsun/java2d/marlin/OffHeapArray;", nullptr, $FINAL, $field(MarlinCache, rowAAChunk)},
	{"rowAAChunkPos", "J", nullptr, 0, $field(MarlinCache, rowAAChunkPos)},
	{"touchedTile", "[I", nullptr, 0, $field(MarlinCache, touchedTile)},
	{"rdrStats", "Lsun/java2d/marlin/RendererStats;", nullptr, $FINAL, $field(MarlinCache, rdrStats)},
	{"touchedTile_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(MarlinCache, touchedTile_ref)},
	{"tileMin", "I", nullptr, 0, $field(MarlinCache, tileMin)},
	{"tileMax", "I", nullptr, 0, $field(MarlinCache, tileMax)},
	{"useRLE", "Z", nullptr, 0, $field(MarlinCache, useRLE)},
	{}
};

$MethodInfo _MarlinCache_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)($RendererContext*)>(&MarlinCache::init$))},
	{"alphaSumInTile", "(I)I", nullptr, 0, $method(static_cast<int32_t(MarlinCache::*)(int32_t)>(&MarlinCache::alphaSumInTile))},
	{"buildAlphaMap", "(I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&MarlinCache::buildAlphaMap))},
	{"clearAARow", "(I)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)(int32_t)>(&MarlinCache::clearAARow))},
	{"copyAARowNoRLE", "([IIII)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)($ints*,int32_t,int32_t,int32_t)>(&MarlinCache::copyAARowNoRLE))},
	{"copyAARowRLE_WithBlockFlags", "([I[IIII)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&MarlinCache::copyAARowRLE_WithBlockFlags))},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(MarlinCache::*)()>(&MarlinCache::dispose))},
	{"expandRowAAChunk", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(MarlinCache::*)(int64_t)>(&MarlinCache::expandRowAAChunk))},
	{"init", "(IIII)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)(int32_t,int32_t,int32_t,int32_t)>(&MarlinCache::init))},
	{"resetTileLine", "(I)V", nullptr, 0, $method(static_cast<void(MarlinCache::*)(int32_t)>(&MarlinCache::resetTileLine))},
	{"startRLERow", "(III)J", nullptr, 0, $method(static_cast<int64_t(MarlinCache::*)(int32_t,int32_t,int32_t)>(&MarlinCache::startRLERow))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"touchTile", "(IIII[I)V", nullptr, $PRIVATE, $method(static_cast<void(MarlinCache::*)(int32_t,int32_t,int32_t,int32_t,$ints*)>(&MarlinCache::touchTile))},
	{}
};

$ClassInfo _MarlinCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.MarlinCache",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_MarlinCache_FieldInfo_,
	_MarlinCache_MethodInfo_
};

$Object* allocate$MarlinCache($Class* clazz) {
	return $of($alloc(MarlinCache));
}

bool MarlinCache::FORCE_RLE = false;
bool MarlinCache::FORCE_NO_RLE = false;
int32_t MarlinCache::RLE_MIN_WIDTH = 0;
int64_t MarlinCache::INITIAL_CHUNK_ARRAY = 0;
$bytes* MarlinCache::ALPHA_MAP = nullptr;
$OffHeapArray* MarlinCache::ALPHA_MAP_UNSAFE = nullptr;

void MarlinCache::init$($RendererContext* rdrCtx) {
	$init($MarlinConst);
	$set(this, rowAAChunkIndex, $new($longs, $MarlinConst::TILE_H));
	$set(this, rowAAx0, $new($ints, $MarlinConst::TILE_H));
	$set(this, rowAAx1, $new($ints, $MarlinConst::TILE_H));
	$set(this, rowAAEnc, $new($ints, $MarlinConst::TILE_H));
	$set(this, rowAALen, $new($longs, $MarlinConst::TILE_H));
	$set(this, rowAAPos, $new($longs, $MarlinConst::TILE_H));
	this->useRLE = false;
	$set(this, rdrStats, $nc(rdrCtx)->stats());
	$set(this, rowAAChunk, rdrCtx->newOffHeapArray(MarlinCache::INITIAL_CHUNK_ARRAY));
	$set(this, touchedTile_ref, rdrCtx->newCleanIntArrayRef($MarlinConst::INITIAL_ARRAY));
	$set(this, touchedTile, $nc(this->touchedTile_ref)->initial);
	this->tileMin = $Integer::MAX_VALUE;
	this->tileMax = $Integer::MIN_VALUE;
}

void MarlinCache::init(int32_t minx, int32_t miny, int32_t maxx, int32_t maxy) {
	this->bboxX0 = minx;
	this->bboxY0 = miny;
	this->bboxX1 = maxx;
	this->bboxY1 = maxy;
	int32_t width = (maxx - minx);
	if (MarlinCache::FORCE_NO_RLE) {
		this->useRLE = false;
	} else if (MarlinCache::FORCE_RLE) {
		this->useRLE = true;
	} else {
		this->useRLE = (width > MarlinCache::RLE_MIN_WIDTH && width < MarlinCache::RLE_MAX_WIDTH);
	}
	$init($MarlinConst);
	int32_t nxTiles = $sr(width + $MarlinConst::TILE_W, $MarlinConst::TILE_W_LG);
	if (nxTiles > $MarlinConst::INITIAL_ARRAY) {
		if ($MarlinConst::DO_STATS) {
			$nc($nc(this->rdrStats)->stat_array_marlincache_touchedTile)->add(nxTiles);
		}
		$set(this, touchedTile, $nc(this->touchedTile_ref)->getArray(nxTiles));
	}
}

void MarlinCache::dispose() {
	resetTileLine(0);
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(this->rdrStats)->totalOffHeap += $nc(this->rowAAChunk)->length;
	}
	$set(this, touchedTile, $nc(this->touchedTile_ref)->putArray(this->touchedTile, 0, 0));
	if ($nc(this->rowAAChunk)->length != MarlinCache::INITIAL_CHUNK_ARRAY) {
		$nc(this->rowAAChunk)->resize(MarlinCache::INITIAL_CHUNK_ARRAY);
	}
}

void MarlinCache::resetTileLine(int32_t pminY) {
	this->bboxY0 = pminY;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->stat_cache_rowAAChunk)->add(this->rowAAChunkPos);
	}
	this->rowAAChunkPos = 0;
	if (this->tileMin != $Integer::MAX_VALUE) {
		if ($MarlinConst::DO_STATS) {
			$nc($nc(this->rdrStats)->stat_cache_tiles)->add(this->tileMax - this->tileMin);
		}
		if (this->tileMax == 1) {
			$nc(this->touchedTile)->set(0, 0);
		} else {
			$IntArrayCache::fill(this->touchedTile, this->tileMin, this->tileMax, 0);
		}
		this->tileMin = $Integer::MAX_VALUE;
		this->tileMax = $Integer::MIN_VALUE;
	}
}

void MarlinCache::clearAARow(int32_t y) {
	int32_t row = y - this->bboxY0;
	$nc(this->rowAAx0)->set(row, 0);
	$nc(this->rowAAx1)->set(row, 0);
	$nc(this->rowAAEnc)->set(row, 0);
}

void MarlinCache::copyAARowNoRLE($ints* alphaRow, int32_t y, int32_t px0, int32_t px1) {
	$useLocalCurrentObjectStackCache();
	int32_t px_bbox1 = $FloatMath::min(px1, this->bboxX1);
	$init($MarlinConst);
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"row = ["_s, $$str(px0), " ... "_s, $$str(px_bbox1), " ("_s, $$str(px1), ") [ for y="_s, $$str(y)}));
	}
	int32_t row = y - this->bboxY0;
	$nc(this->rowAAx0)->set(row, px0);
	$nc(this->rowAAx1)->set(row, px_bbox1);
	$nc(this->rowAAEnc)->set(row, 0);
	int64_t pos = this->rowAAChunkPos;
	$nc(this->rowAAChunkIndex)->set(row, pos);
	int64_t needSize = pos + ((int32_t)((px_bbox1 - px0 + 3) & (uint32_t)-4));
	this->rowAAChunkPos = needSize;
	$var($OffHeapArray, _rowAAChunk, this->rowAAChunk);
	if ($nc(_rowAAChunk)->length < needSize) {
		expandRowAAChunk(needSize);
	}
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->stat_cache_rowAA)->add(px_bbox1 - px0);
	}
	$var($ints, _touchedTile, this->touchedTile);
	int32_t _TILE_SIZE_LG = $MarlinConst::TILE_W_LG;
	int32_t from = px0 - this->bboxX0;
	int32_t to = px_bbox1 - this->bboxX0;
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t SIZE_BYTE = 1;
	int64_t addr_alpha = $nc(MarlinCache::ALPHA_MAP_UNSAFE)->address;
	int64_t addr_off = $nc(_rowAAChunk)->address + pos;
	{
		int32_t x = from;
		int32_t val = 0;
		for (; x < to; ++x) {
			val += $nc(alphaRow)->get(x);
			if (val == 0) {
				$nc(_unsafe)->putByte(addr_off, (int8_t)0);
			} else {
				$nc(_unsafe)->putByte(addr_off, _unsafe->getByte(addr_alpha + val));
				(*$nc(_touchedTile))[$sr(x, _TILE_SIZE_LG)] += val;
			}
			addr_off += SIZE_BYTE;
		}
	}
	int32_t tx = $sr(from, _TILE_SIZE_LG);
	if (tx < this->tileMin) {
		this->tileMin = tx;
	}
	tx = ($sr(to - 1, _TILE_SIZE_LG)) + 1;
	if (tx > this->tileMax) {
		this->tileMax = tx;
	}
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"clear = ["_s, $$str(from), " ... "_s, $$str(to), "["_s}));
	}
	$IntArrayCache::fill(alphaRow, from, px1 + 1 - this->bboxX0, 0);
}

void MarlinCache::copyAARowRLE_WithBlockFlags($ints* blkFlags, $ints* alphaRow, int32_t y, int32_t px0, int32_t px1) {
	$useLocalCurrentObjectStackCache();
	int32_t _bboxX0 = this->bboxX0;
	int32_t row = y - this->bboxY0;
	int32_t from = px0 - _bboxX0;
	int32_t px_bbox1 = $FloatMath::min(px1, this->bboxX1);
	int32_t to = px_bbox1 - _bboxX0;
	$init($MarlinConst);
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"row = ["_s, $$str(px0), " ... "_s, $$str(px_bbox1), " ("_s, $$str(px1), ") [ for y="_s, $$str(y)}));
	}
	int64_t initialPos = startRLERow(row, px0, px_bbox1);
	int64_t needSize = initialPos + ((to - from) << 2);
	$var($OffHeapArray, _rowAAChunk, this->rowAAChunk);
	if ($nc(_rowAAChunk)->length < needSize) {
		expandRowAAChunk(needSize);
	}
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t SIZE_INT = 4;
	int64_t addr_alpha = $nc(MarlinCache::ALPHA_MAP_UNSAFE)->address;
	int64_t addr_off = $nc(_rowAAChunk)->address + initialPos;
	$var($ints, _touchedTile, this->touchedTile);
	int32_t _TILE_SIZE_LG = $MarlinConst::TILE_W_LG;
	int32_t _BLK_SIZE_LG = $MarlinConst::BLOCK_SIZE_LG;
	int32_t blkW = ($sr(from, _BLK_SIZE_LG));
	int32_t blkE = ($sr(to, _BLK_SIZE_LG)) + 1;
	$nc(blkFlags)->set(blkE, 0);
	int32_t val = 0;
	int32_t cx0 = from;
	int32_t runLen = 0;
	int32_t _MAX_VALUE = $Integer::MAX_VALUE;
	int32_t last_t0 = _MAX_VALUE;
	int32_t skip = 0;
	{
		int32_t t = blkW;
		int32_t blk_x0 = 0;
		int32_t blk_x1 = 0;
		int32_t cx = 0;
		int32_t delta = 0;
		for (; t <= blkE; ++t) {
			if (blkFlags->get(t) != 0) {
				blkFlags->set(t, 0);
				if (last_t0 == _MAX_VALUE) {
					last_t0 = t;
				}
				continue;
			}
			if (last_t0 != _MAX_VALUE) {
				blk_x0 = $FloatMath::max($sl(last_t0, _BLK_SIZE_LG), from);
				last_t0 = _MAX_VALUE;
				blk_x1 = $FloatMath::min(($sl(t, _BLK_SIZE_LG)) + 1, to);
				for (cx = blk_x0; cx < blk_x1; ++cx) {
					if ((delta = $nc(alphaRow)->get(cx)) != 0) {
						alphaRow->set(cx, 0);
						if (cx != cx0) {
							runLen = cx - cx0;
							if (val == 0) {
								$nc(_unsafe)->putInt(addr_off, ((_bboxX0 + cx) << 8));
							} else {
								$nc(_unsafe)->putInt(addr_off, ((_bboxX0 + cx) << 8) | ((int32_t)(((int32_t)_unsafe->getByte(addr_alpha + val)) & (uint32_t)255)));
								if (runLen == 1) {
									(*$nc(_touchedTile))[$sr(cx0, _TILE_SIZE_LG)] += val;
								} else {
									touchTile(cx0, val, cx, runLen, _touchedTile);
								}
							}
							addr_off += SIZE_INT;
							if ($MarlinConst::DO_STATS) {
								$nc($nc(this->rdrStats)->hist_tile_generator_encoding_runLen)->add(runLen);
							}
							cx0 = cx;
						}
						val += delta;
					}
				}
			} else {
				if ($MarlinConst::DO_STATS) {
					++skip;
				}
			}
		}
	}
	runLen = to - cx0;
	if (val == 0) {
		$nc(_unsafe)->putInt(addr_off, ((_bboxX0 + to) << 8));
	} else {
		$nc(_unsafe)->putInt(addr_off, ((_bboxX0 + to) << 8) | ((int32_t)(((int32_t)_unsafe->getByte(addr_alpha + val)) & (uint32_t)255)));
		if (runLen == 1) {
			(*$nc(_touchedTile))[$sr(cx0, _TILE_SIZE_LG)] += val;
		} else {
			touchTile(cx0, val, to, runLen, _touchedTile);
		}
	}
	addr_off += SIZE_INT;
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->hist_tile_generator_encoding_runLen)->add(runLen);
	}
	int64_t len = (addr_off - _rowAAChunk->address);
	$nc(this->rowAALen)->set(row, (len - initialPos));
	this->rowAAChunkPos = len;
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->stat_cache_rowAA)->add($nc(this->rowAALen)->get(row));
		$nc($nc(this->rdrStats)->hist_tile_generator_encoding_ratio)->add($div((100 * skip), (blkE - blkW)));
	}
	int32_t tx = $sr(from, _TILE_SIZE_LG);
	if (tx < this->tileMin) {
		this->tileMin = tx;
	}
	tx = ($sr(to - 1, _TILE_SIZE_LG)) + 1;
	if (tx > this->tileMax) {
		this->tileMax = tx;
	}
	$nc(alphaRow)->set(to, 0);
	if ($MarlinConst::DO_CHECKS) {
		$IntArrayCache::check(blkFlags, blkW, blkE, 0);
		$IntArrayCache::check(alphaRow, from, px1 + 1 - this->bboxX0, 0);
	}
}

int64_t MarlinCache::startRLERow(int32_t row, int32_t x0, int32_t x1) {
	$nc(this->rowAAx0)->set(row, x0);
	$nc(this->rowAAx1)->set(row, x1);
	$nc(this->rowAAEnc)->set(row, 1);
	$nc(this->rowAAPos)->set(row, 0);
	return ($nc(this->rowAAChunkIndex)->set(row, this->rowAAChunkPos));
}

void MarlinCache::expandRowAAChunk(int64_t needSize) {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->stat_array_marlincache_rowAAChunk)->add(needSize);
	}
	int64_t newSize = $ArrayCacheConst::getNewLargeSize($nc(this->rowAAChunk)->length, needSize);
	$nc(this->rowAAChunk)->resize(newSize);
}

void MarlinCache::touchTile(int32_t x0, int32_t val, int32_t x1, int32_t runLen, $ints* _touchedTile) {
	$init($MarlinConst);
	int32_t _TILE_SIZE_LG = $MarlinConst::TILE_W_LG;
	int32_t tx = ($sr(x0, _TILE_SIZE_LG));
	if (tx == ($sr(x1, _TILE_SIZE_LG))) {
		(*$nc(_touchedTile))[tx] += val * runLen;
		return;
	}
	int32_t tx1 = $sr(x1 - 1, _TILE_SIZE_LG);
	if (tx <= tx1) {
		int32_t nextTileXCoord = $sl(tx + 1, _TILE_SIZE_LG);
		(*$nc(_touchedTile))[tx++] += val * (nextTileXCoord - x0);
	}
	if (tx < tx1) {
		int32_t tileVal = ($sl(val, _TILE_SIZE_LG));
		for (; tx < tx1; ++tx) {
			(*$nc(_touchedTile))[tx] += tileVal;
		}
	}
	if (tx == tx1) {
		int32_t txXCoord = $sl(tx, _TILE_SIZE_LG);
		int32_t nextTileXCoord = $sl(tx + 1, _TILE_SIZE_LG);
		int32_t lastXCoord = (nextTileXCoord <= x1) ? nextTileXCoord : x1;
		(*$nc(_touchedTile))[tx] += val * (lastXCoord - txXCoord);
	}
}

int32_t MarlinCache::alphaSumInTile(int32_t x) {
	$init($MarlinConst);
	return $nc(this->touchedTile)->get($sr(x - this->bboxX0, $MarlinConst::TILE_W_LG));
}

$String* MarlinCache::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"bbox = ["_s, $$str(this->bboxX0), ", "_s, $$str(this->bboxY0), " => "_s, $$str(this->bboxX1), ", "_s, $$str(this->bboxY1), "]\n"_s});
}

$bytes* MarlinCache::buildAlphaMap(int32_t maxalpha) {
	$init(MarlinCache);
	$var($bytes, alMap, $new($bytes, maxalpha << 1));
	int32_t halfmaxalpha = maxalpha >> 2;
	for (int32_t i = 0; i <= maxalpha; ++i) {
		alMap->set(i, (int8_t)($div((i * 255 + halfmaxalpha), maxalpha)));
	}
	return alMap;
}

void clinit$MarlinCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	MarlinCache::FORCE_RLE = $MarlinProperties::isForceRLE();
	MarlinCache::FORCE_NO_RLE = $MarlinProperties::isForceNoRLE();
	$init($MarlinConst);
	MarlinCache::RLE_MIN_WIDTH = $Math::max($MarlinConst::BLOCK_SIZE, $MarlinProperties::getRLEMinWidth());
	MarlinCache::INITIAL_CHUNK_ARRAY = ($MarlinConst::TILE_H * $MarlinConst::INITIAL_PIXEL_WIDTH) >> 2;
	{
		$var($bytes, _ALPHA_MAP, MarlinCache::buildAlphaMap($MarlinConst::MAX_AA_ALPHA));
		$assignStatic(MarlinCache::ALPHA_MAP_UNSAFE, $new($OffHeapArray, _ALPHA_MAP, $nc(_ALPHA_MAP)->length));
		$assignStatic(MarlinCache::ALPHA_MAP, _ALPHA_MAP);
		$init($OffHeapArray);
		$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
		int64_t addr = $nc(MarlinCache::ALPHA_MAP_UNSAFE)->address;
		for (int32_t i = 0; i < $nc(_ALPHA_MAP)->length; ++i) {
			$nc(_unsafe)->putByte(addr + i, _ALPHA_MAP->get(i));
		}
	}
}

MarlinCache::MarlinCache() {
}

$Class* MarlinCache::load$($String* name, bool initialize) {
	$loadClass(MarlinCache, name, initialize, &_MarlinCache_ClassInfo_, clinit$MarlinCache, allocate$MarlinCache);
	return class$;
}

$Class* MarlinCache::class$ = nullptr;

		} // marlin
	} // java2d
} // sun