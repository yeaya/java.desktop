#include <sun/java2d/marlin/MarlinTileGenerator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/java2d/marlin/FloatMath.h>
#include <sun/java2d/marlin/MarlinCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/OffHeapArray.h>
#include <sun/java2d/marlin/Renderer.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/pipe/AATileGenerator.h>
#include <jcpp.h>

#undef DISABLE_BLEND
#undef DO_LOG_BOUNDS
#undef DO_STATS
#undef DO_TRACE
#undef FILL_TILE_W
#undef MAX_AA_ALPHA
#undef MAX_TILE_ALPHA_SUM
#undef SIZE
#undef SIZE_BYTE
#undef SIZE_INT
#undef TH_AA_ALPHA_FILL_EMPTY
#undef TH_AA_ALPHA_FILL_FULL
#undef TILE_H
#undef TILE_W
#undef UNSAFE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $FloatMath = ::sun::java2d::marlin::FloatMath;
using $MarlinCache = ::sun::java2d::marlin::MarlinCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $OffHeapArray = ::sun::java2d::marlin::OffHeapArray;
using $Renderer = ::sun::java2d::marlin::Renderer;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $AATileGenerator = ::sun::java2d::pipe::AATileGenerator;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _MarlinTileGenerator_FieldInfo_[] = {
	{"DISABLE_BLEND", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MarlinTileGenerator, DISABLE_BLEND)},
	{"MAX_TILE_ALPHA_SUM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinTileGenerator, MAX_TILE_ALPHA_SUM)},
	{"TH_AA_ALPHA_FILL_EMPTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinTileGenerator, TH_AA_ALPHA_FILL_EMPTY)},
	{"TH_AA_ALPHA_FILL_FULL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinTileGenerator, TH_AA_ALPHA_FILL_FULL)},
	{"FILL_TILE_W", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinTileGenerator, FILL_TILE_W)},
	{"renderer", "Lsun/java2d/marlin/Renderer;", nullptr, $PRIVATE | $FINAL, $field(MarlinTileGenerator, renderer)},
	{"cache", "Lsun/java2d/marlin/MarlinCache;", nullptr, $PRIVATE | $FINAL, $field(MarlinTileGenerator, cache)},
	{"x", "I", nullptr, $PRIVATE, $field(MarlinTileGenerator, x)},
	{"y", "I", nullptr, $PRIVATE, $field(MarlinTileGenerator, y)},
	{"rdrStats", "Lsun/java2d/marlin/RendererStats;", nullptr, $FINAL, $field(MarlinTileGenerator, rdrStats)},
	{}
};

$MethodInfo _MarlinTileGenerator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/marlin/RendererStats;Lsun/java2d/marlin/Renderer;Lsun/java2d/marlin/MarlinCache;)V", nullptr, 0, $method(static_cast<void(MarlinTileGenerator::*)($RendererStats*,$Renderer*,$MarlinCache*)>(&MarlinTileGenerator::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getAlpha", "([BII)V", nullptr, $PUBLIC},
	{"getAlphaNoRLE", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(MarlinTileGenerator::*)($bytes*,int32_t,int32_t)>(&MarlinTileGenerator::getAlphaNoRLE))},
	{"getAlphaRLE", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(MarlinTileGenerator::*)($bytes*,int32_t,int32_t)>(&MarlinTileGenerator::getAlphaRLE))},
	{"getBbox", "([I)V", nullptr, 0, $method(static_cast<void(MarlinTileGenerator::*)($ints*)>(&MarlinTileGenerator::getBbox))},
	{"getTileHeight", "()I", nullptr, $PUBLIC},
	{"getTileWidth", "()I", nullptr, $PUBLIC},
	{"getTypicalAlpha", "()I", nullptr, $PUBLIC},
	{"hex", "(II)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t,int32_t)>(&MarlinTileGenerator::hex))},
	{"init", "()Lsun/java2d/marlin/MarlinTileGenerator;", nullptr, 0, $method(static_cast<MarlinTileGenerator*(MarlinTileGenerator::*)()>(&MarlinTileGenerator::init))},
	{"nextTile", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MarlinTileGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.MarlinTileGenerator",
	"java.lang.Object",
	"sun.java2d.pipe.AATileGenerator,sun.java2d.marlin.MarlinConst",
	_MarlinTileGenerator_FieldInfo_,
	_MarlinTileGenerator_MethodInfo_
};

$Object* allocate$MarlinTileGenerator($Class* clazz) {
	return $of($alloc(MarlinTileGenerator));
}

int32_t MarlinTileGenerator::hashCode() {
	 return this->$AATileGenerator::hashCode();
}

bool MarlinTileGenerator::equals(Object$* arg0) {
	 return this->$AATileGenerator::equals(arg0);
}

$Object* MarlinTileGenerator::clone() {
	 return this->$AATileGenerator::clone();
}

$String* MarlinTileGenerator::toString() {
	 return this->$AATileGenerator::toString();
}

void MarlinTileGenerator::finalize() {
	this->$AATileGenerator::finalize();
}

int32_t MarlinTileGenerator::MAX_TILE_ALPHA_SUM = 0;
int32_t MarlinTileGenerator::TH_AA_ALPHA_FILL_EMPTY = 0;
int32_t MarlinTileGenerator::TH_AA_ALPHA_FILL_FULL = 0;
int32_t MarlinTileGenerator::FILL_TILE_W = 0;

void MarlinTileGenerator::init$($RendererStats* stats, $Renderer* r, $MarlinCache* cache) {
	$set(this, rdrStats, stats);
	$set(this, renderer, r);
	$set(this, cache, cache);
}

MarlinTileGenerator* MarlinTileGenerator::init() {
	this->x = $nc(this->cache)->bboxX0;
	this->y = $nc(this->cache)->bboxY0;
	return this;
}

void MarlinTileGenerator::dispose() {
	$nc(this->cache)->dispose();
	$nc(this->renderer)->dispose();
}

void MarlinTileGenerator::getBbox($ints* bbox) {
	$nc(bbox)->set(0, $nc(this->cache)->bboxX0);
	bbox->set(1, $nc(this->cache)->bboxY0);
	bbox->set(2, $nc(this->cache)->bboxX1);
	bbox->set(3, $nc(this->cache)->bboxY1);
}

int32_t MarlinTileGenerator::getTileWidth() {
	$init($MarlinConst);
	return $MarlinConst::TILE_W;
}

int32_t MarlinTileGenerator::getTileHeight() {
	$init($MarlinConst);
	return $MarlinConst::TILE_H;
}

int32_t MarlinTileGenerator::getTypicalAlpha() {
	int32_t al = $nc(this->cache)->alphaSumInTile(this->x);
	int32_t alpha = (al == 0 ? 0 : (al == MarlinTileGenerator::MAX_TILE_ALPHA_SUM ? 255 : 128));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc($nc(this->rdrStats)->hist_tile_generator_alpha)->add(alpha);
	}
	return alpha;
}

void MarlinTileGenerator::nextTile() {
	$init($MarlinConst);
	if ((this->x += $MarlinConst::TILE_W) >= $nc(this->cache)->bboxX1) {
		this->x = $nc(this->cache)->bboxX0;
		this->y += $MarlinConst::TILE_H;
		if (this->y < $nc(this->cache)->bboxY1) {
			$nc(this->renderer)->endRendering(this->y);
		}
	}
}

void MarlinTileGenerator::getAlpha($bytes* tile, int32_t offset, int32_t rowstride) {
	if ($nc(this->cache)->useRLE) {
		getAlphaRLE(tile, offset, rowstride);
	} else {
		getAlphaNoRLE(tile, offset, rowstride);
	}
}

void MarlinTileGenerator::getAlphaNoRLE($bytes* tile, int32_t offset, int32_t rowstride) {
	$useLocalCurrentObjectStackCache();
	$var($MarlinCache, _cache, this->cache);
	$var($longs, rowAAChunkIndex, $nc(_cache)->rowAAChunkIndex);
	$var($ints, rowAAx0, _cache->rowAAx0);
	$var($ints, rowAAx1, _cache->rowAAx1);
	int32_t x0 = this->x;
	$init($MarlinConst);
	int32_t x1 = $FloatMath::min(x0 + $MarlinConst::TILE_W, _cache->bboxX1);
	int32_t y0 = 0;
	int32_t y1 = $FloatMath::min(this->y + $MarlinConst::TILE_H, _cache->bboxY1) - this->y;
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"getAlpha = ["_s, $$str(x0), " ... "_s, $$str(x1), "[ ["_s, $$str(y0), " ... "_s, $$str(y1), "["_s}));
	}
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t SIZE = 1;
	int64_t addr_rowAA = $nc(_cache->rowAAChunk)->address;
	int64_t addr = 0;
	int32_t skipRowPixels = (rowstride - (x1 - x0));
	int32_t aax0 = 0;
	int32_t aax1 = 0;
	int32_t end = 0;
	int32_t idx = offset;
	{
		int32_t cy = y0;
		int32_t cx = 0;
		for (; cy < y1; ++cy) {
			cx = x0;
			aax1 = $nc(rowAAx1)->get(cy);
			if (aax1 > x0) {
				aax0 = $nc(rowAAx0)->get(cy);
				if (aax0 < x1) {
					cx = aax0;
					if (cx <= x0) {
						cx = x0;
					} else {
						for (end = x0; end < cx; ++end) {
							$nc(tile)->set(idx++, (int8_t)0);
						}
					}
					addr = addr_rowAA + $nc(rowAAChunkIndex)->get(cy) + (cx - aax0);
					for (end = (aax1 <= x1) ? aax1 : x1; cx < end; ++cx) {
						$nc(tile)->set(idx++, $nc(_unsafe)->getByte(addr));
						addr += SIZE;
					}
				}
			}
			while (cx < x1) {
				$nc(tile)->set(idx++, (int8_t)0);
				++cx;
			}
			if ($MarlinConst::DO_TRACE) {
				for (int32_t i = idx - (x1 - x0); i < idx; ++i) {
					$nc($System::out)->print($(hex($nc(tile)->get(i), 2)));
				}
				$nc($System::out)->println();
			}
			idx += skipRowPixels;
		}
	}
	nextTile();
}

void MarlinTileGenerator::getAlphaRLE($bytes* tile, int32_t offset, int32_t rowstride) {
	$useLocalCurrentObjectStackCache();
	$var($MarlinCache, _cache, this->cache);
	$var($longs, rowAAChunkIndex, $nc(_cache)->rowAAChunkIndex);
	$var($ints, rowAAx0, _cache->rowAAx0);
	$var($ints, rowAAx1, _cache->rowAAx1);
	$var($ints, rowAAEnc, _cache->rowAAEnc);
	$var($longs, rowAALen, _cache->rowAALen);
	$var($longs, rowAAPos, _cache->rowAAPos);
	int32_t x0 = this->x;
	$init($MarlinConst);
	int32_t x1 = $FloatMath::min(x0 + $MarlinConst::TILE_W, _cache->bboxX1);
	int32_t w = x1 - x0;
	int32_t y0 = 0;
	int32_t y1 = $FloatMath::min(this->y + $MarlinConst::TILE_H, _cache->bboxY1) - this->y;
	if ($MarlinConst::DO_LOG_BOUNDS) {
		$MarlinUtils::logInfo($$str({"getAlpha = ["_s, $$str(x0), " ... "_s, $$str(x1), "[ ["_s, $$str(y0), " ... "_s, $$str(y1), "["_s}));
	}
	int32_t clearTile = 0;
	int8_t refVal = 0;
	int32_t area = 0;
	if ((w >= MarlinTileGenerator::FILL_TILE_W) && (area = w * y1) > 64) {
		int32_t alphaSum = $nc(this->cache)->alphaSumInTile(x0);
		if (alphaSum < area * MarlinTileGenerator::TH_AA_ALPHA_FILL_EMPTY) {
			clearTile = 1;
			refVal = (int8_t)0;
		} else if (alphaSum > area * MarlinTileGenerator::TH_AA_ALPHA_FILL_FULL) {
			clearTile = 2;
			refVal = (int8_t)255;
		} else {
			clearTile = 0;
			refVal = (int8_t)0;
		}
	} else {
		clearTile = 0;
		refVal = (int8_t)0;
	}
	$init($OffHeapArray);
	$var($Unsafe, _unsafe, $OffHeapArray::UNSAFE);
	int64_t SIZE_BYTE = 1;
	int64_t SIZE_INT = 4;
	int64_t addr_rowAA = $nc(_cache->rowAAChunk)->address;
	int64_t addr = 0;
	int64_t addr_row = 0;
	int64_t last_addr = 0;
	int64_t addr_end = 0;
	int32_t skipRowPixels = (rowstride - w);
	int32_t cx = 0;
	int32_t cy = 0;
	int32_t cx1 = 0;
	int32_t rx0 = 0;
	int32_t rx1 = 0;
	int32_t runLen = 0;
	int32_t end = 0;
	int32_t packed = 0;
	int8_t val = 0;
	int32_t idx = offset;
	switch (clearTile) {
	case 1:
		{
			$Arrays::fill(tile, offset, offset + (y1 * rowstride), refVal);
			for (cy = y0; cy < y1; ++cy) {
				cx = x0;
				if ($nc(rowAAEnc)->get(cy) == 0) {
					int32_t aax1 = $nc(rowAAx1)->get(cy);
					if (aax1 > x0) {
						int32_t aax0 = $nc(rowAAx0)->get(cy);
						if (aax0 < x1) {
							cx = aax0;
							if (cx <= x0) {
								cx = x0;
							} else {
								idx += (cx - x0);
							}
							addr = addr_rowAA + $nc(rowAAChunkIndex)->get(cy) + (cx - aax0);
							for (end = (aax1 <= x1) ? aax1 : x1; cx < end; ++cx) {
								$nc(tile)->set(idx++, $nc(_unsafe)->getByte(addr));
								addr += SIZE_BYTE;
							}
						}
					}
				} else if ($nc(rowAAx1)->get(cy) > x0) {
					cx = $nc(rowAAx0)->get(cy);
					if (cx > x1) {
						cx = x1;
					}
					if (cx > x0) {
						idx += (cx - x0);
					}
					addr_row = addr_rowAA + $nc(rowAAChunkIndex)->get(cy);
					addr_end = addr_row + $nc(rowAALen)->get(cy);
					addr = addr_row + $nc(rowAAPos)->get(cy);
					last_addr = 0;
					while ((cx < x1) && (addr < addr_end)) {
						last_addr = addr;
						packed = $nc(_unsafe)->getInt(addr);
						cx1 = (packed >> 8);
						addr += SIZE_INT;
						rx0 = cx;
						if (rx0 < x0) {
							rx0 = x0;
						}
						rx1 = (cx = cx1);
						if (rx1 > x1) {
							rx1 = x1;
							cx = x1;
						}
						runLen = rx1 - rx0;
						if (runLen > 0) {
							packed &= (uint32_t)255;
							if (packed == 0) {
								idx += runLen;
								continue;
							}
							val = (int8_t)packed;
							do {
								$nc(tile)->set(idx++, val);
							} while (--runLen > 0);
						}
					}
					if (last_addr != (int64_t)0) {
						rowAAx0->set(cy, cx);
						rowAAPos->set(cy, (last_addr - addr_row));
					}
				}
				if (cx < x1) {
					idx += (x1 - cx);
				}
				if ($MarlinConst::DO_TRACE) {
					for (int32_t i = idx - (x1 - x0); i < idx; ++i) {
						$nc($System::out)->print($(hex($nc(tile)->get(i), 2)));
					}
					$nc($System::out)->println();
				}
				idx += skipRowPixels;
			}
			break;
		}
	case 0:
		{}
	default:
		{
			for (cy = y0; cy < y1; ++cy) {
				cx = x0;
				if ($nc(rowAAEnc)->get(cy) == 0) {
					int32_t aax1 = $nc(rowAAx1)->get(cy);
					if (aax1 > x0) {
						int32_t aax0 = $nc(rowAAx0)->get(cy);
						if (aax0 < x1) {
							cx = aax0;
							if (cx <= x0) {
								cx = x0;
							} else {
								for (end = x0; end < cx; ++end) {
									$nc(tile)->set(idx++, (int8_t)0);
								}
							}
							addr = addr_rowAA + $nc(rowAAChunkIndex)->get(cy) + (cx - aax0);
							for (end = (aax1 <= x1) ? aax1 : x1; cx < end; ++cx) {
								$nc(tile)->set(idx++, $nc(_unsafe)->getByte(addr));
								addr += SIZE_BYTE;
							}
						}
					}
				} else if ($nc(rowAAx1)->get(cy) > x0) {
					cx = $nc(rowAAx0)->get(cy);
					if (cx > x1) {
						cx = x1;
					}
					for (end = x0; end < cx; ++end) {
						$nc(tile)->set(idx++, (int8_t)0);
					}
					addr_row = addr_rowAA + $nc(rowAAChunkIndex)->get(cy);
					addr_end = addr_row + $nc(rowAALen)->get(cy);
					addr = addr_row + $nc(rowAAPos)->get(cy);
					last_addr = 0;
					while ((cx < x1) && (addr < addr_end)) {
						last_addr = addr;
						packed = $nc(_unsafe)->getInt(addr);
						cx1 = (packed >> 8);
						addr += SIZE_INT;
						rx0 = cx;
						if (rx0 < x0) {
							rx0 = x0;
						}
						rx1 = (cx = cx1);
						if (rx1 > x1) {
							rx1 = x1;
							cx = x1;
						}
						runLen = rx1 - rx0;
						if (runLen > 0) {
							packed &= (uint32_t)255;
							val = (int8_t)packed;
							do {
								$nc(tile)->set(idx++, val);
							} while (--runLen > 0);
						}
					}
					if (last_addr != (int64_t)0) {
						rowAAx0->set(cy, cx);
						rowAAPos->set(cy, (last_addr - addr_row));
					}
				}
				while (cx < x1) {
					$nc(tile)->set(idx++, (int8_t)0);
					++cx;
				}
				if ($MarlinConst::DO_TRACE) {
					for (int32_t i = idx - (x1 - x0); i < idx; ++i) {
						$nc($System::out)->print($(hex($nc(tile)->get(i), 2)));
					}
					$nc($System::out)->println();
				}
				idx += skipRowPixels;
			}
			break;
		}
	case 2:
		{
			$Arrays::fill(tile, offset, offset + (y1 * rowstride), refVal);
			for (cy = y0; cy < y1; ++cy) {
				cx = x0;
				if ($nc(rowAAEnc)->get(cy) == 0) {
					int32_t aax1 = $nc(rowAAx1)->get(cy);
					if (aax1 > x0) {
						int32_t aax0 = $nc(rowAAx0)->get(cy);
						if (aax0 < x1) {
							cx = aax0;
							if (cx <= x0) {
								cx = x0;
							} else {
								for (end = x0; end < cx; ++end) {
									$nc(tile)->set(idx++, (int8_t)0);
								}
							}
							addr = addr_rowAA + $nc(rowAAChunkIndex)->get(cy) + (cx - aax0);
							for (end = (aax1 <= x1) ? aax1 : x1; cx < end; ++cx) {
								$nc(tile)->set(idx++, $nc(_unsafe)->getByte(addr));
								addr += SIZE_BYTE;
							}
						}
					}
				} else if ($nc(rowAAx1)->get(cy) > x0) {
					cx = $nc(rowAAx0)->get(cy);
					if (cx > x1) {
						cx = x1;
					}
					for (end = x0; end < cx; ++end) {
						$nc(tile)->set(idx++, (int8_t)0);
					}
					addr_row = addr_rowAA + $nc(rowAAChunkIndex)->get(cy);
					addr_end = addr_row + $nc(rowAALen)->get(cy);
					addr = addr_row + $nc(rowAAPos)->get(cy);
					last_addr = 0;
					while ((cx < x1) && (addr < addr_end)) {
						last_addr = addr;
						packed = $nc(_unsafe)->getInt(addr);
						cx1 = (packed >> 8);
						addr += SIZE_INT;
						rx0 = cx;
						if (rx0 < x0) {
							rx0 = x0;
						}
						rx1 = (cx = cx1);
						if (rx1 > x1) {
							rx1 = x1;
							cx = x1;
						}
						runLen = rx1 - rx0;
						if (runLen > 0) {
							packed &= (uint32_t)255;
							if (packed == 255) {
								idx += runLen;
								continue;
							}
							val = (int8_t)packed;
							do {
								$nc(tile)->set(idx++, val);
							} while (--runLen > 0);
						}
					}
					if (last_addr != (int64_t)0) {
						rowAAx0->set(cy, cx);
						rowAAPos->set(cy, (last_addr - addr_row));
					}
				}
				while (cx < x1) {
					$nc(tile)->set(idx++, (int8_t)0);
					++cx;
				}
				if ($MarlinConst::DO_TRACE) {
					for (int32_t i = idx - (x1 - x0); i < idx; ++i) {
						$nc($System::out)->print($(hex($nc(tile)->get(i), 2)));
					}
					$nc($System::out)->println();
				}
				idx += skipRowPixels;
			}
		}
	}
	nextTile();
}

$String* MarlinTileGenerator::hex(int32_t v, int32_t d) {
	$init(MarlinTileGenerator);
	$var($String, s, $Integer::toHexString(v));
	while ($nc(s)->length() < d) {
		$assign(s, $str({"0"_s, s}));
	}
	return $nc(s)->substring(0, d);
}

void clinit$MarlinTileGenerator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($MarlinConst);
	MarlinTileGenerator::MAX_TILE_ALPHA_SUM = $MarlinConst::TILE_W * $MarlinConst::TILE_H * $MarlinConst::MAX_AA_ALPHA;
	MarlinTileGenerator::TH_AA_ALPHA_FILL_EMPTY = (($MarlinConst::MAX_AA_ALPHA + 1) / 3);
	MarlinTileGenerator::TH_AA_ALPHA_FILL_FULL = (($MarlinConst::MAX_AA_ALPHA + 1) * 2 / 3);
	MarlinTileGenerator::FILL_TILE_W = $MarlinConst::TILE_W >> 1;
	{
		if (MarlinTileGenerator::MAX_TILE_ALPHA_SUM <= 0) {
			$throwNew($IllegalStateException, $$str({"Invalid MAX_TILE_ALPHA_SUM: "_s, $$str(MarlinTileGenerator::MAX_TILE_ALPHA_SUM)}));
		}
		if ($MarlinConst::DO_TRACE) {
			$MarlinUtils::logInfo($$str({"MAX_AA_ALPHA           : "_s, $$str($MarlinConst::MAX_AA_ALPHA)}));
			$MarlinUtils::logInfo($$str({"TH_AA_ALPHA_FILL_EMPTY : "_s, $$str(MarlinTileGenerator::TH_AA_ALPHA_FILL_EMPTY)}));
			$MarlinUtils::logInfo($$str({"TH_AA_ALPHA_FILL_FULL  : "_s, $$str(MarlinTileGenerator::TH_AA_ALPHA_FILL_FULL)}));
			$MarlinUtils::logInfo($$str({"FILL_TILE_W            : "_s, $$str(MarlinTileGenerator::FILL_TILE_W)}));
		}
	}
}

MarlinTileGenerator::MarlinTileGenerator() {
}

$Class* MarlinTileGenerator::load$($String* name, bool initialize) {
	$loadClass(MarlinTileGenerator, name, initialize, &_MarlinTileGenerator_ClassInfo_, clinit$MarlinTileGenerator, allocate$MarlinTileGenerator);
	return class$;
}

$Class* MarlinTileGenerator::class$ = nullptr;

		} // marlin
	} // java2d
} // sun