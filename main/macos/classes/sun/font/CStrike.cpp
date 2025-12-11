#include <sun/font/CStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Error.h>
#include <sun/font/CFont.h>
#include <sun/font/CStrike$GlyphAdvanceCache.h>
#include <sun/font/CStrike$GlyphInfoCache.h>
#include <sun/font/CStrikeDisposer.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CFont = ::sun::font::CFont;
using $CStrike$GlyphAdvanceCache = ::sun::font::CStrike$GlyphAdvanceCache;
using $CStrike$GlyphInfoCache = ::sun::font::CStrike$GlyphInfoCache;
using $CStrikeDisposer = ::sun::font::CStrikeDisposer;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _CStrike_FieldInfo_[] = {
	{"nativeFont", "Lsun/font/CFont;", nullptr, $PRIVATE | $FINAL, $field(CStrike, nativeFont)},
	{"invDevTx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(CStrike, invDevTx)},
	{"glyphInfoCache", "Lsun/font/CStrike$GlyphInfoCache;", nullptr, $PRIVATE | $FINAL, $field(CStrike, glyphInfoCache)},
	{"glyphAdvanceCache", "Lsun/font/CStrike$GlyphAdvanceCache;", nullptr, $PRIVATE | $FINAL, $field(CStrike, glyphAdvanceCache)},
	{"nativeStrikePtr", "J", nullptr, $PRIVATE, $field(CStrike, nativeStrikePtr)},
	{}
};

$MethodInfo _CStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(CStrike::*)($CFont*,$FontStrikeDesc*)>(&CStrike::init$))},
	{"createNativeStrikePtr", "(J[D[DII)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,$doubles*,$doubles*,int32_t,int32_t)>(&CStrike::createNativeStrikePtr))},
	{"disposeNativeStrikePtr", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CStrike::disposeNativeStrikePtr))},
	{"finalize", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.lang.Throwable"},
	{"getCachedNativeGlyphAdvance", "(I)F", nullptr, $PRIVATE, $method(static_cast<float(CStrike::*)(int32_t)>(&CStrike::getCachedNativeGlyphAdvance))},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getCodePointAdvance", "(I)F", nullptr, 0},
	{"getFilteredGlyphImagePtrs", "([J[II)V", nullptr, $PRIVATE, $method(static_cast<void(CStrike::*)($longs*,$ints*,int32_t)>(&CStrike::getFilteredGlyphImagePtrs))},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StrikeMetrics*(*)(int64_t)>(&CStrike::getFontMetrics))},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(I)F", nullptr, 0},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"getGlyphImageBounds", "(IFFLjava/awt/geom/Rectangle2D$Float;)V", nullptr, $PRIVATE, $method(static_cast<void(CStrike::*)(int32_t,float,float,$Rectangle2D$Float*)>(&CStrike::getGlyphImageBounds))},
	{"getGlyphImagePtr", "(I)J", nullptr, 0},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, 0},
	{"getGlyphImagePtrsNative", "(J[J[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$longs*,$ints*,int32_t)>(&CStrike::getGlyphImagePtrsNative))},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getNativeGlyphAdvance", "(JI)F", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<float(*)(int64_t,int32_t)>(&CStrike::getNativeGlyphAdvance))},
	{"getNativeGlyphImageBounds", "(JILjava/awt/geom/Rectangle2D$Float;DD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,$Rectangle2D$Float*,double,double)>(&CStrike::getNativeGlyphImageBounds))},
	{"getNativeGlyphOutline", "(JIDD)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$GeneralPath*(*)(int64_t,int32_t,double,double)>(&CStrike::getNativeGlyphOutline))},
	{"getNativeStrikePtr", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(CStrike::*)()>(&CStrike::getNativeStrikePtr))},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createNativeStrikePtr 1
#define _METHOD_INDEX_disposeNativeStrikePtr 2
#define _METHOD_INDEX_getFontMetrics 8
#define _METHOD_INDEX_getGlyphImagePtrsNative 15
#define _METHOD_INDEX_getNativeGlyphAdvance 20
#define _METHOD_INDEX_getNativeGlyphImageBounds 21
#define _METHOD_INDEX_getNativeGlyphOutline 22

$InnerClassInfo _CStrike_InnerClassesInfo_[] = {
	{"sun.font.CStrike$GlyphAdvanceCache", "sun.font.CStrike", "GlyphAdvanceCache", $PRIVATE | $STATIC},
	{"sun.font.CStrike$GlyphInfoCache", "sun.font.CStrike", "GlyphInfoCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CStrike_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CStrike",
	"sun.font.PhysicalStrike",
	nullptr,
	_CStrike_FieldInfo_,
	_CStrike_MethodInfo_,
	nullptr,
	nullptr,
	_CStrike_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.CStrike$GlyphAdvanceCache,sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray,sun.font.CStrike$GlyphInfoCache,sun.font.CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray"
};

$Object* allocate$CStrike($Class* clazz) {
	return $of($alloc(CStrike));
}

int64_t CStrike::createNativeStrikePtr(int64_t nativeFontPtr, $doubles* glyphTx, $doubles* invDevTxMatrix, int32_t aaHint, int32_t fmHint) {
	$init(CStrike);
	int64_t $ret = 0;
	$prepareNativeStatic(CStrike, createNativeStrikePtr, int64_t, int64_t nativeFontPtr, $doubles* glyphTx, $doubles* invDevTxMatrix, int32_t aaHint, int32_t fmHint);
	$ret = $invokeNativeStatic(nativeFontPtr, glyphTx, invDevTxMatrix, aaHint, fmHint);
	$finishNativeStatic();
	return $ret;
}

void CStrike::disposeNativeStrikePtr(int64_t nativeStrikePtr) {
	$init(CStrike);
	$prepareNativeStatic(CStrike, disposeNativeStrikePtr, void, int64_t nativeStrikePtr);
	$invokeNativeStatic(nativeStrikePtr);
	$finishNativeStatic();
}

$StrikeMetrics* CStrike::getFontMetrics(int64_t nativeStrikePtr) {
	$init(CStrike);
	$var($StrikeMetrics, $ret, nullptr);
	$prepareNativeStatic(CStrike, getFontMetrics, $StrikeMetrics*, int64_t nativeStrikePtr);
	$assign($ret, $invokeNativeStaticObject(nativeStrikePtr));
	$finishNativeStatic();
	return $ret;
}

void CStrike::getGlyphImagePtrsNative(int64_t nativeStrikePtr, $longs* glyphInfos, $ints* uniCodes, int32_t len) {
	$init(CStrike);
	$prepareNativeStatic(CStrike, getGlyphImagePtrsNative, void, int64_t nativeStrikePtr, $longs* glyphInfos, $ints* uniCodes, int32_t len);
	$invokeNativeStatic(nativeStrikePtr, glyphInfos, uniCodes, len);
	$finishNativeStatic();
}

float CStrike::getNativeGlyphAdvance(int64_t nativeStrikePtr, int32_t glyphCode) {
	$init(CStrike);
	float $ret = 0.0;
	$prepareNativeStatic(CStrike, getNativeGlyphAdvance, float, int64_t nativeStrikePtr, int32_t glyphCode);
	$ret = $invokeNativeStatic(nativeStrikePtr, glyphCode);
	$finishNativeStatic();
	return $ret;
}

$GeneralPath* CStrike::getNativeGlyphOutline(int64_t nativeStrikePtr, int32_t glyphCode, double x, double y) {
	$init(CStrike);
	$var($GeneralPath, $ret, nullptr);
	$prepareNativeStatic(CStrike, getNativeGlyphOutline, $GeneralPath*, int64_t nativeStrikePtr, int32_t glyphCode, double x, double y);
	$assign($ret, $invokeNativeStaticObject(nativeStrikePtr, glyphCode, x, y));
	$finishNativeStatic();
	return $ret;
}

void CStrike::getNativeGlyphImageBounds(int64_t nativeStrikePtr, int32_t glyphCode, $Rectangle2D$Float* result, double x, double y) {
	$init(CStrike);
	$prepareNativeStatic(CStrike, getNativeGlyphImageBounds, void, int64_t nativeStrikePtr, int32_t glyphCode, $Rectangle2D$Float* result, double x, double y);
	$invokeNativeStatic(nativeStrikePtr, glyphCode, result, x, y);
	$finishNativeStatic();
}

void CStrike::init$($CFont* font, $FontStrikeDesc* inDesc) {
	$PhysicalStrike::init$();
	$set(this, nativeFont, font);
	$set(this, desc, inDesc);
	$set(this, glyphInfoCache, $new($CStrike$GlyphInfoCache, font, this->desc));
	$set(this, glyphAdvanceCache, $new($CStrike$GlyphAdvanceCache));
	$set(this, disposer, this->glyphInfoCache);
	if ($nc(inDesc)->devTx != nullptr && !$nc(inDesc->devTx)->isIdentity()) {
		try {
			$set(this, invDevTx, $nc(inDesc->devTx)->createInverse());
		} catch ($NoninvertibleTransformException& ignored) {
		}
	}
}

int64_t CStrike::getNativeStrikePtr() {
	$useLocalCurrentObjectStackCache();
	if (this->nativeStrikePtr != 0) {
		return this->nativeStrikePtr;
	}
	$var($doubles, glyphTx, $new($doubles, 6));
	$nc($nc(this->desc)->glyphTx)->getMatrix(glyphTx);
	$var($doubles, invDevTxMatrix, $new($doubles, 6));
	if (this->invDevTx == nullptr) {
		invDevTxMatrix->set(0, (double)1);
		invDevTxMatrix->set(3, (double)1);
	} else {
		$nc(this->invDevTx)->getMatrix(invDevTxMatrix);
	}
	int32_t aaHint = $nc(this->desc)->aaHint;
	int32_t fmHint = $nc(this->desc)->fmHint;
	$synchronized(this) {
		if (this->nativeStrikePtr != 0) {
			return this->nativeStrikePtr;
		}
		this->nativeStrikePtr = createNativeStrikePtr($nc(this->nativeFont)->getNativeFontPtr(), glyphTx, invDevTxMatrix, aaHint, fmHint);
	}
	return this->nativeStrikePtr;
}

void CStrike::finalize() {
	$synchronized(this) {
		if (this->nativeStrikePtr != 0) {
			disposeNativeStrikePtr(this->nativeStrikePtr);
		}
		this->nativeStrikePtr = 0;
	}
}

int32_t CStrike::getNumGlyphs() {
	return $nc(this->nativeFont)->getNumGlyphs();
}

$StrikeMetrics* CStrike::getFontMetrics() {
	if (this->strikeMetrics == nullptr) {
		$var($StrikeMetrics, metrics, getFontMetrics(getNativeStrikePtr()));
		if (this->invDevTx != nullptr) {
			$nc(metrics)->convertToUserSpace(this->invDevTx);
		}
		$nc(metrics)->convertToUserSpace($nc(this->desc)->glyphTx);
		$set(this, strikeMetrics, metrics);
	}
	return this->strikeMetrics;
}

float CStrike::getGlyphAdvance(int32_t glyphCode) {
	return getCachedNativeGlyphAdvance(glyphCode);
}

float CStrike::getCodePointAdvance(int32_t cp) {
	return getGlyphAdvance($nc($($nc(this->nativeFont)->getMapper()))->charToGlyph(cp));
}

$Point2D$Float* CStrike::getCharMetrics(char16_t ch) {
	return getGlyphMetrics($nc($($nc(this->nativeFont)->getMapper()))->charToGlyph(ch));
}

$Point2D$Float* CStrike::getGlyphMetrics(int32_t glyphCode) {
	return $new($Point2D$Float, getGlyphAdvance(glyphCode), 0.0f);
}

$Rectangle2D$Float* CStrike::getGlyphOutlineBounds(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	$var($GeneralPath, gp, getGlyphOutline(glyphCode, 0.0f, 0.0f));
	$var($Rectangle2D, r2d, $nc(gp)->getBounds2D());
	$var($Rectangle2D$Float, r2df, nullptr);
	if ($instanceOf($Rectangle2D$Float, r2d)) {
		$assign(r2df, $cast($Rectangle2D$Float, r2d));
	} else {
		float x = (float)$nc(r2d)->getX();
		float y = (float)r2d->getY();
		float w = (float)r2d->getWidth();
		float h = (float)r2d->getHeight();
		$assign(r2df, $new($Rectangle2D$Float, x, y, w, h));
	}
	return r2df;
}

void CStrike::getGlyphImageBounds(int32_t glyphCode, $Point2D$Float* pt, $Rectangle* result) {
	$var($Rectangle2D$Float, floatRect, $new($Rectangle2D$Float));
	if (this->invDevTx != nullptr) {
		$nc(this->invDevTx)->transform(pt, pt);
	}
	getGlyphImageBounds(glyphCode, $nc(pt)->x, pt->y, floatRect);
	if (floatRect->width == 0 && floatRect->height == 0) {
		$nc(result)->setRect((double)0, (double)0, (double)-1, (double)-1);
		return;
	}
	$nc(result)->setRect(floatRect->x + $nc(pt)->x, floatRect->y + pt->y, floatRect->width, floatRect->height);
}

void CStrike::getGlyphImageBounds(int32_t glyphCode, float x, float y, $Rectangle2D$Float* floatRect) {
	getNativeGlyphImageBounds(getNativeStrikePtr(), glyphCode, floatRect, x, y);
}

$GeneralPath* CStrike::getGlyphOutline(int32_t glyphCode, float x, float y) {
	return getNativeGlyphOutline(getNativeStrikePtr(), glyphCode, x, y);
}

$GeneralPath* CStrike::getGlyphVectorOutline($ints* glyphs, float x, float y) {
	$throwNew($Error, "not implemented yet"_s);
	$shouldNotReachHere();
}

int64_t CStrike::getGlyphImagePtr(int32_t glyphCode) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->glyphInfoCache) {
		int64_t ptr = $nc(this->glyphInfoCache)->get(glyphCode);
		if (ptr != (int64_t)0) {
			return ptr;
		}
		$var($longs, ptrs, $new($longs, 1));
		$var($ints, codes, $new($ints, 1));
		codes->set(0, glyphCode);
		getGlyphImagePtrs(codes, ptrs, 1);
		ptr = ptrs->get(0);
		$nc(this->glyphInfoCache)->put(glyphCode, ptr);
		return ptr;
	}
}

void CStrike::getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->glyphInfoCache) {
		int32_t missed = 0;
		for (int32_t i = 0; i < len; ++i) {
			int32_t code = $nc(glyphCodes)->get(i);
			int64_t ptr = $nc(this->glyphInfoCache)->get(code);
			if (ptr != (int64_t)0) {
				$nc(images)->set(i, ptr);
			} else {
				$nc(images)->set(i, 0);
				++missed;
			}
		}
		if (missed == 0) {
			return;
		}
		$var($ints, filteredCodes, $new($ints, missed));
		$var($ints, filteredIndicies, $new($ints, missed));
		int32_t j = 0;
		int32_t dupes = 0;
		for (int32_t i = 0; i < len; ++i) {
			if ($nc(images)->get(i) != (int64_t)0) {
				continue;
			}
			int32_t code = $nc(glyphCodes)->get(i);
			if ($nc(this->glyphInfoCache)->get(code) == (int64_t)-1) {
				filteredIndicies->set(j, -1);
				++dupes;
				++j;
				continue;
			}
			int32_t k = j - dupes;
			filteredCodes->set(k, code);
			$nc(this->glyphInfoCache)->put(code, -1);
			filteredIndicies->set(j, k);
			++j;
		}
		int32_t filteredRunLen = j - dupes;
		$var($longs, filteredImages, $new($longs, filteredRunLen));
		getFilteredGlyphImagePtrs(filteredImages, filteredCodes, filteredRunLen);
		j = 0;
		for (int32_t i = 0; i < len; ++i) {
			if ($nc(images)->get(i) != (int64_t)0 && images->get(i) != (int64_t)-1) {
				continue;
			}
			int32_t k = filteredIndicies->get(j);
			int32_t code = $nc(glyphCodes)->get(i);
			if (k == (int64_t)-1) {
				$nc(images)->set(i, $nc(this->glyphInfoCache)->get(code));
			} else {
				int64_t ptr = filteredImages->get(k);
				$nc(images)->set(i, ptr);
				$nc(this->glyphInfoCache)->put(code, ptr);
			}
			++j;
		}
	}
}

void CStrike::getFilteredGlyphImagePtrs($longs* glyphInfos, $ints* uniCodes, int32_t len) {
	getGlyphImagePtrsNative(getNativeStrikePtr(), glyphInfos, uniCodes, len);
}

float CStrike::getCachedNativeGlyphAdvance(int32_t glyphCode) {
	$synchronized(this->glyphAdvanceCache) {
		float advance = $nc(this->glyphAdvanceCache)->get(glyphCode);
		if (advance != 0) {
			return advance;
		}
		advance = getNativeGlyphAdvance(getNativeStrikePtr(), glyphCode);
		$nc(this->glyphAdvanceCache)->put(glyphCode, advance);
		return advance;
	}
}

CStrike::CStrike() {
}

$Class* CStrike::load$($String* name, bool initialize) {
	$loadClass(CStrike, name, initialize, &_CStrike_ClassInfo_, allocate$CStrike);
	return class$;
}

$Class* CStrike::class$ = nullptr;

	} // font
} // sun